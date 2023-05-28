// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BakeRenderCaptureTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBakeRenderCaptureTool() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeRenderCaptureInputToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeRenderCaptureResults();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeRenderCaptureResults_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeRenderCaptureTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeRenderCaptureTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeRenderCaptureToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeRenderCaptureToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeRenderCaptureToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeRenderCaptureToolProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URenderCaptureProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URenderCaptureProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
	MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_EBakeTextureResolution();
	MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_EBakeTextureSamplesPerPixel();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UBakeRenderCaptureResults::StaticRegisterNativesUBakeRenderCaptureResults()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeRenderCaptureResults);
	UClass* Z_Construct_UClass_UBakeRenderCaptureResults_NoRegister()
	{
		return UBakeRenderCaptureResults::StaticClass();
	}
	struct Z_Construct_UClass_UBakeRenderCaptureResults_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseColorMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BaseColorMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NormalMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackedMRSMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PackedMRSMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetallicMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MetallicMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoughnessMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RoughnessMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecularMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpecularMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmissiveMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EmissiveMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpacityMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OpacityMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubsurfaceColorMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubsurfaceColorMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBakeRenderCaptureResults_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureResults_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//\n// Tool Result\n//\n" },
		{ "IncludePath", "BakeRenderCaptureTool.h" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "ToolTip", "Tool Result" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_BaseColorMap_MetaData[] = {
		{ "Category", "Results" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_BaseColorMap = { "BaseColorMap", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureResults, BaseColorMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_BaseColorMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_BaseColorMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_NormalMap_MetaData[] = {
		{ "Category", "Results" },
		{ "Comment", "/** World space normal map */" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "ToolTip", "World space normal map" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_NormalMap = { "NormalMap", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureResults, NormalMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_NormalMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_NormalMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_PackedMRSMap_MetaData[] = {
		{ "Category", "Results" },
		{ "Comment", "/** Packed Metallic/Roughness/Specular Map */" },
		{ "DisplayName", "Packed MRS Map" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "ToolTip", "Packed Metallic/Roughness/Specular Map" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_PackedMRSMap = { "PackedMRSMap", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureResults, PackedMRSMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_PackedMRSMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_PackedMRSMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_MetallicMap_MetaData[] = {
		{ "Category", "Results" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_MetallicMap = { "MetallicMap", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureResults, MetallicMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_MetallicMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_MetallicMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_RoughnessMap_MetaData[] = {
		{ "Category", "Results" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_RoughnessMap = { "RoughnessMap", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureResults, RoughnessMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_RoughnessMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_RoughnessMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_SpecularMap_MetaData[] = {
		{ "Category", "Results" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_SpecularMap = { "SpecularMap", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureResults, SpecularMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_SpecularMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_SpecularMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_EmissiveMap_MetaData[] = {
		{ "Category", "Results" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_EmissiveMap = { "EmissiveMap", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureResults, EmissiveMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_EmissiveMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_EmissiveMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_OpacityMap_MetaData[] = {
		{ "Category", "Results" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_OpacityMap = { "OpacityMap", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureResults, OpacityMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_OpacityMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_OpacityMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_SubsurfaceColorMap_MetaData[] = {
		{ "Category", "Results" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_SubsurfaceColorMap = { "SubsurfaceColorMap", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureResults, SubsurfaceColorMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_SubsurfaceColorMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_SubsurfaceColorMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBakeRenderCaptureResults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_BaseColorMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_NormalMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_PackedMRSMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_MetallicMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_RoughnessMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_SpecularMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_EmissiveMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_OpacityMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureResults_Statics::NewProp_SubsurfaceColorMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBakeRenderCaptureResults_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeRenderCaptureResults>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeRenderCaptureResults_Statics::ClassParams = {
		&UBakeRenderCaptureResults::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBakeRenderCaptureResults_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureResults_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureResults_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureResults_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBakeRenderCaptureResults()
	{
		if (!Z_Registration_Info_UClass_UBakeRenderCaptureResults.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeRenderCaptureResults.OuterSingleton, Z_Construct_UClass_UBakeRenderCaptureResults_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBakeRenderCaptureResults.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeRenderCaptureResults>()
	{
		return UBakeRenderCaptureResults::StaticClass();
	}
	UBakeRenderCaptureResults::UBakeRenderCaptureResults(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeRenderCaptureResults);
	UBakeRenderCaptureResults::~UBakeRenderCaptureResults() {}
	void UBakeRenderCaptureToolBuilder::StaticRegisterNativesUBakeRenderCaptureToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeRenderCaptureToolBuilder);
	UClass* Z_Construct_UClass_UBakeRenderCaptureToolBuilder_NoRegister()
	{
		return UBakeRenderCaptureToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UBakeRenderCaptureToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBakeRenderCaptureToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//\n// Tool Builder\n//\n" },
		{ "IncludePath", "BakeRenderCaptureTool.h" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "ToolTip", "Tool Builder" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBakeRenderCaptureToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeRenderCaptureToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeRenderCaptureToolBuilder_Statics::ClassParams = {
		&UBakeRenderCaptureToolBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBakeRenderCaptureToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UBakeRenderCaptureToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeRenderCaptureToolBuilder.OuterSingleton, Z_Construct_UClass_UBakeRenderCaptureToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBakeRenderCaptureToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeRenderCaptureToolBuilder>()
	{
		return UBakeRenderCaptureToolBuilder::StaticClass();
	}
	UBakeRenderCaptureToolBuilder::UBakeRenderCaptureToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeRenderCaptureToolBuilder);
	UBakeRenderCaptureToolBuilder::~UBakeRenderCaptureToolBuilder() {}
	void URenderCaptureProperties::StaticRegisterNativesURenderCaptureProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderCaptureProperties);
	UClass* Z_Construct_UClass_URenderCaptureProperties_NoRegister()
	{
		return URenderCaptureProperties::StaticClass();
	}
	struct Z_Construct_UClass_URenderCaptureProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Resolution_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Resolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBaseColorMap_MetaData[];
#endif
		static void NewProp_bBaseColorMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBaseColorMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNormalMap_MetaData[];
#endif
		static void NewProp_bNormalMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPackedMRSMap_MetaData[];
#endif
		static void NewProp_bPackedMRSMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPackedMRSMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMetallicMap_MetaData[];
#endif
		static void NewProp_bMetallicMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMetallicMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRoughnessMap_MetaData[];
#endif
		static void NewProp_bRoughnessMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRoughnessMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpecularMap_MetaData[];
#endif
		static void NewProp_bSpecularMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpecularMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEmissiveMap_MetaData[];
#endif
		static void NewProp_bEmissiveMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmissiveMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOpacityMap_MetaData[];
#endif
		static void NewProp_bOpacityMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpacityMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSubsurfaceColorMap_MetaData[];
#endif
		static void NewProp_bSubsurfaceColorMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubsurfaceColorMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAntiAliasing_MetaData[];
#endif
		static void NewProp_bAntiAliasing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAntiAliasing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureFieldOfView_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CaptureFieldOfView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NearPlaneDist_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NearPlaneDist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeviceDepthMap_MetaData[];
#endif
		static void NewProp_bDeviceDepthMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeviceDepthMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderCaptureProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderCaptureProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//\n// Tool Properties\n//\n" },
		{ "IncludePath", "BakeRenderCaptureTool.h" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "ToolTip", "Tool Properties" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_Resolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "RenderCaptureOptions" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Render Capture Resolution" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "NoResetToDefault", "" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderCaptureProperties, Resolution), Z_Construct_UEnum_ModelingComponents_EBakeTextureResolution, METADATA_PARAMS(Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_Resolution_MetaData)) }; // 2876122585
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bBaseColorMap_MetaData[] = {
		{ "Category", "RenderCaptureOptions" },
		{ "Comment", "// Whether to generate a texture for the Base Color property\n" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Whether to generate a texture for the Base Color property" },
	};
#endif
	void Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bBaseColorMap_SetBit(void* Obj)
	{
		((URenderCaptureProperties*)Obj)->bBaseColorMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bBaseColorMap = { "bBaseColorMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URenderCaptureProperties), &Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bBaseColorMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bBaseColorMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bBaseColorMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bNormalMap_MetaData[] = {
		{ "Category", "RenderCaptureOptions" },
		{ "Comment", "// Whether to generate a texture for the World Normal property\n" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Whether to generate a texture for the World Normal property" },
	};
#endif
	void Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bNormalMap_SetBit(void* Obj)
	{
		((URenderCaptureProperties*)Obj)->bNormalMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bNormalMap = { "bNormalMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URenderCaptureProperties), &Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bNormalMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bNormalMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bNormalMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bPackedMRSMap_MetaData[] = {
		{ "Category", "RenderCaptureOptions" },
		{ "Comment", "// Whether to generate a packed texture with Metallic, Roughness and Specular properties\n" },
		{ "DisplayName", "Packed MRS Map" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Whether to generate a packed texture with Metallic, Roughness and Specular properties" },
	};
#endif
	void Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bPackedMRSMap_SetBit(void* Obj)
	{
		((URenderCaptureProperties*)Obj)->bPackedMRSMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bPackedMRSMap = { "bPackedMRSMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URenderCaptureProperties), &Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bPackedMRSMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bPackedMRSMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bPackedMRSMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bMetallicMap_MetaData[] = {
		{ "Category", "RenderCaptureOptions" },
		{ "Comment", "// Whether to generate a texture for the Metallic property\n" },
		{ "EditCondition", "bPackedMRSMap == false" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Whether to generate a texture for the Metallic property" },
	};
#endif
	void Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bMetallicMap_SetBit(void* Obj)
	{
		((URenderCaptureProperties*)Obj)->bMetallicMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bMetallicMap = { "bMetallicMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URenderCaptureProperties), &Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bMetallicMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bMetallicMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bMetallicMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bRoughnessMap_MetaData[] = {
		{ "Category", "RenderCaptureOptions" },
		{ "Comment", "// Whether to generate a texture for the Roughness property\n" },
		{ "EditCondition", "bPackedMRSMap == false" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Whether to generate a texture for the Roughness property" },
	};
#endif
	void Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bRoughnessMap_SetBit(void* Obj)
	{
		((URenderCaptureProperties*)Obj)->bRoughnessMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bRoughnessMap = { "bRoughnessMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URenderCaptureProperties), &Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bRoughnessMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bRoughnessMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bRoughnessMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bSpecularMap_MetaData[] = {
		{ "Category", "RenderCaptureOptions" },
		{ "Comment", "// Whether to generate a texture for the Specular property\n" },
		{ "EditCondition", "bPackedMRSMap == false" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Whether to generate a texture for the Specular property" },
	};
#endif
	void Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bSpecularMap_SetBit(void* Obj)
	{
		((URenderCaptureProperties*)Obj)->bSpecularMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bSpecularMap = { "bSpecularMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URenderCaptureProperties), &Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bSpecularMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bSpecularMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bSpecularMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bEmissiveMap_MetaData[] = {
		{ "Category", "RenderCaptureOptions" },
		{ "Comment", "// Whether to generate a texture for the Emissive property\n" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Whether to generate a texture for the Emissive property" },
	};
#endif
	void Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bEmissiveMap_SetBit(void* Obj)
	{
		((URenderCaptureProperties*)Obj)->bEmissiveMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bEmissiveMap = { "bEmissiveMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URenderCaptureProperties), &Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bEmissiveMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bEmissiveMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bEmissiveMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bOpacityMap_MetaData[] = {
		{ "Category", "RenderCaptureOptions" },
		{ "Comment", "// Whether to generate a texture for the Opacity property\n" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Whether to generate a texture for the Opacity property" },
	};
#endif
	void Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bOpacityMap_SetBit(void* Obj)
	{
		((URenderCaptureProperties*)Obj)->bOpacityMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bOpacityMap = { "bOpacityMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URenderCaptureProperties), &Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bOpacityMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bOpacityMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bOpacityMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bSubsurfaceColorMap_MetaData[] = {
		{ "Category", "RenderCaptureOptions" },
		{ "Comment", "// Whether to generate a texture for the SubsurfaceColor property\n" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Whether to generate a texture for the SubsurfaceColor property" },
	};
#endif
	void Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bSubsurfaceColorMap_SetBit(void* Obj)
	{
		((URenderCaptureProperties*)Obj)->bSubsurfaceColorMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bSubsurfaceColorMap = { "bSubsurfaceColorMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URenderCaptureProperties), &Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bSubsurfaceColorMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bSubsurfaceColorMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bSubsurfaceColorMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bAntiAliasing_MetaData[] = {
		{ "Category", "RenderCaptureOptions" },
		{ "Comment", "// Whether to use anti-aliasing in the render captures, this may introduce artefacts if pixels at different scene depths get blended\n" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "ToolTip", "Whether to use anti-aliasing in the render captures, this may introduce artefacts if pixels at different scene depths get blended" },
	};
#endif
	void Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bAntiAliasing_SetBit(void* Obj)
	{
		((URenderCaptureProperties*)Obj)->bAntiAliasing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bAntiAliasing = { "bAntiAliasing", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URenderCaptureProperties), &Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bAntiAliasing_SetBit, METADATA_PARAMS(Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bAntiAliasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bAntiAliasing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_CaptureFieldOfView_MetaData[] = {
		{ "ClampMax", "160.0" },
		{ "ClampMin", "5.0" },
		{ "Comment", "// These are hidden in the UI right now, we might want to expose them if they turn out to be useful for very large\n// or very small objects (not tested yet) TODO Figure out if we want to expose these options\n" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "ToolTip", "These are hidden in the UI right now, we might want to expose them if they turn out to be useful for very large\nor very small objects (not tested yet) TODO Figure out if we want to expose these options" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_CaptureFieldOfView = { "CaptureFieldOfView", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderCaptureProperties, CaptureFieldOfView), METADATA_PARAMS(Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_CaptureFieldOfView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_CaptureFieldOfView_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_NearPlaneDist_MetaData[] = {
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.001" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_NearPlaneDist = { "NearPlaneDist", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderCaptureProperties, NearPlaneDist), METADATA_PARAMS(Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_NearPlaneDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_NearPlaneDist_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bDeviceDepthMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
	};
#endif
	void Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bDeviceDepthMap_SetBit(void* Obj)
	{
		((URenderCaptureProperties*)Obj)->bDeviceDepthMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bDeviceDepthMap = { "bDeviceDepthMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URenderCaptureProperties), &Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bDeviceDepthMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bDeviceDepthMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bDeviceDepthMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URenderCaptureProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_Resolution_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bBaseColorMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bNormalMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bPackedMRSMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bMetallicMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bRoughnessMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bSpecularMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bEmissiveMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bOpacityMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bSubsurfaceColorMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bAntiAliasing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_CaptureFieldOfView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_NearPlaneDist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderCaptureProperties_Statics::NewProp_bDeviceDepthMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderCaptureProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderCaptureProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderCaptureProperties_Statics::ClassParams = {
		&URenderCaptureProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URenderCaptureProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URenderCaptureProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_URenderCaptureProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderCaptureProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderCaptureProperties()
	{
		if (!Z_Registration_Info_UClass_URenderCaptureProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderCaptureProperties.OuterSingleton, Z_Construct_UClass_URenderCaptureProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderCaptureProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<URenderCaptureProperties>()
	{
		return URenderCaptureProperties::StaticClass();
	}
	URenderCaptureProperties::URenderCaptureProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderCaptureProperties);
	URenderCaptureProperties::~URenderCaptureProperties() {}
	DEFINE_FUNCTION(UBakeRenderCaptureToolProperties::execGetMapPreviewNamesFunc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetMapPreviewNamesFunc();
		P_NATIVE_END;
	}
	void UBakeRenderCaptureToolProperties::StaticRegisterNativesUBakeRenderCaptureToolProperties()
	{
		UClass* Class = UBakeRenderCaptureToolProperties::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMapPreviewNamesFunc", &UBakeRenderCaptureToolProperties::execGetMapPreviewNamesFunc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBakeRenderCaptureToolProperties_GetMapPreviewNamesFunc_Statics
	{
		struct BakeRenderCaptureToolProperties_eventGetMapPreviewNamesFunc_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBakeRenderCaptureToolProperties_GetMapPreviewNamesFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBakeRenderCaptureToolProperties_GetMapPreviewNamesFunc_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBakeRenderCaptureToolProperties_GetMapPreviewNamesFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BakeRenderCaptureToolProperties_eventGetMapPreviewNamesFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBakeRenderCaptureToolProperties_GetMapPreviewNamesFunc_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeRenderCaptureToolProperties_GetMapPreviewNamesFunc_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBakeRenderCaptureToolProperties_GetMapPreviewNamesFunc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBakeRenderCaptureToolProperties_GetMapPreviewNamesFunc_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBakeRenderCaptureToolProperties_GetMapPreviewNamesFunc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBakeRenderCaptureToolProperties_GetMapPreviewNamesFunc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBakeRenderCaptureToolProperties_GetMapPreviewNamesFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBakeRenderCaptureToolProperties, nullptr, "GetMapPreviewNamesFunc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBakeRenderCaptureToolProperties_GetMapPreviewNamesFunc_Statics::BakeRenderCaptureToolProperties_eventGetMapPreviewNamesFunc_Parms), Z_Construct_UFunction_UBakeRenderCaptureToolProperties_GetMapPreviewNamesFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeRenderCaptureToolProperties_GetMapPreviewNamesFunc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBakeRenderCaptureToolProperties_GetMapPreviewNamesFunc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeRenderCaptureToolProperties_GetMapPreviewNamesFunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBakeRenderCaptureToolProperties_GetMapPreviewNamesFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBakeRenderCaptureToolProperties_GetMapPreviewNamesFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeRenderCaptureToolProperties);
	UClass* Z_Construct_UClass_UBakeRenderCaptureToolProperties_NoRegister()
	{
		return UBakeRenderCaptureToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapPreview_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MapPreview;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MapPreviewNamesList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapPreviewNamesList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MapPreviewNamesList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SamplesPerPixel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplesPerPixel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SamplesPerPixel;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TextureSize_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TextureSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidSampleDepthThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ValidSampleDepthThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBakeRenderCaptureToolProperties_GetMapPreviewNamesFunc, "GetMapPreviewNamesFunc" }, // 2062027361
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BakeRenderCaptureTool.h" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::NewProp_MapPreview_MetaData[] = {
		{ "Category", "BakeOutput" },
		{ "Comment", "/** The map type to preview */" },
		{ "DisplayName", "Preview Output Type" },
		{ "GetOptions", "GetMapPreviewNamesFunc" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "ToolTip", "The map type to preview" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::NewProp_MapPreview = { "MapPreview", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureToolProperties, MapPreview), METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::NewProp_MapPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::NewProp_MapPreview_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::NewProp_MapPreviewNamesList_Inner = { "MapPreviewNamesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::NewProp_MapPreviewNamesList_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::NewProp_MapPreviewNamesList = { "MapPreviewNamesList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureToolProperties, MapPreviewNamesList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::NewProp_MapPreviewNamesList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::NewProp_MapPreviewNamesList_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::NewProp_SamplesPerPixel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::NewProp_SamplesPerPixel_MetaData[] = {
		{ "Category", "BakeOutput" },
		{ "Comment", "/** Number of samples per pixel */" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "ToolTip", "Number of samples per pixel" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::NewProp_SamplesPerPixel = { "SamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureToolProperties, SamplesPerPixel), Z_Construct_UEnum_ModelingComponents_EBakeTextureSamplesPerPixel, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::NewProp_SamplesPerPixel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::NewProp_SamplesPerPixel_MetaData)) }; // 631028059
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::NewProp_TextureSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::NewProp_TextureSize_MetaData[] = {
		{ "Category", "BakeOutput" },
		{ "ClampMin", "1" },
		{ "Comment", "/* Size of generated textures */" },
		{ "DisplayName", "Output Resolution" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "ToolTip", "Size of generated textures" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::NewProp_TextureSize = { "TextureSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureToolProperties, TextureSize), Z_Construct_UEnum_ModelingComponents_EBakeTextureResolution, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::NewProp_TextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::NewProp_TextureSize_MetaData)) }; // 2876122585
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::NewProp_ValidSampleDepthThreshold_MetaData[] = {
		{ "Category", "BakeOutput" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * This threshold is used to detect occlusion artefacts (e.g., silhouettes/blotches in the base color) so that texels\n\x09 * exhibiting them can be cleaned up i.e., rejected and filled in using the values of nearby valid texels instead.\n\x09 * \n\x09 * If the threshold is zero, the cleanup step is skipped.\n\x09 * If the threshold is too large, texels with artefacts won't be detected and the cleanup step is effectively skipped.\n\x09 * If the threshold is too small, texels without artefacts get detected and results will be bad because there won't\n\x09 * be enough nearby valid texels from which to infill values.\n\x09 * \n\x09 * A good starting point is to choose a threshold around the size of the distance (in world space) between the\n\x09 * target and source meshes; if the target was generated by VoxWrap then the voxel size estimates this distance.\n\x09 */" },
		{ "DisplayName", "Cleanup Threshold" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "ToolTip", "This threshold is used to detect occlusion artefacts (e.g., silhouettes/blotches in the base color) so that texels\nexhibiting them can be cleaned up i.e., rejected and filled in using the values of nearby valid texels instead.\n\nIf the threshold is zero, the cleanup step is skipped.\nIf the threshold is too large, texels with artefacts won't be detected and the cleanup step is effectively skipped.\nIf the threshold is too small, texels without artefacts get detected and results will be bad because there won't\nbe enough nearby valid texels from which to infill values.\n\nA good starting point is to choose a threshold around the size of the distance (in world space) between the\ntarget and source meshes; if the target was generated by VoxWrap then the voxel size estimates this distance." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::NewProp_ValidSampleDepthThreshold = { "ValidSampleDepthThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureToolProperties, ValidSampleDepthThreshold), METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::NewProp_ValidSampleDepthThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::NewProp_ValidSampleDepthThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::NewProp_MapPreview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::NewProp_MapPreviewNamesList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::NewProp_MapPreviewNamesList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::NewProp_SamplesPerPixel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::NewProp_SamplesPerPixel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::NewProp_TextureSize_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::NewProp_TextureSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::NewProp_ValidSampleDepthThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeRenderCaptureToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::ClassParams = {
		&UBakeRenderCaptureToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBakeRenderCaptureToolProperties()
	{
		if (!Z_Registration_Info_UClass_UBakeRenderCaptureToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeRenderCaptureToolProperties.OuterSingleton, Z_Construct_UClass_UBakeRenderCaptureToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBakeRenderCaptureToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeRenderCaptureToolProperties>()
	{
		return UBakeRenderCaptureToolProperties::StaticClass();
	}
	UBakeRenderCaptureToolProperties::UBakeRenderCaptureToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeRenderCaptureToolProperties);
	UBakeRenderCaptureToolProperties::~UBakeRenderCaptureToolProperties() {}
	DEFINE_FUNCTION(UBakeRenderCaptureInputToolProperties::execGetTargetUVLayerNamesFunc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetTargetUVLayerNamesFunc();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBakeRenderCaptureInputToolProperties::execGetTargetUVLayerIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTargetUVLayerIndex();
		P_NATIVE_END;
	}
	void UBakeRenderCaptureInputToolProperties::StaticRegisterNativesUBakeRenderCaptureInputToolProperties()
	{
		UClass* Class = UBakeRenderCaptureInputToolProperties::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTargetUVLayerIndex", &UBakeRenderCaptureInputToolProperties::execGetTargetUVLayerIndex },
			{ "GetTargetUVLayerNamesFunc", &UBakeRenderCaptureInputToolProperties::execGetTargetUVLayerNamesFunc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerIndex_Statics
	{
		struct BakeRenderCaptureInputToolProperties_eventGetTargetUVLayerIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BakeRenderCaptureInputToolProperties_eventGetTargetUVLayerIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBakeRenderCaptureInputToolProperties, nullptr, "GetTargetUVLayerIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerIndex_Statics::BakeRenderCaptureInputToolProperties_eventGetTargetUVLayerIndex_Parms), Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerNamesFunc_Statics
	{
		struct BakeRenderCaptureInputToolProperties_eventGetTargetUVLayerNamesFunc_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerNamesFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerNamesFunc_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerNamesFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BakeRenderCaptureInputToolProperties_eventGetTargetUVLayerNamesFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerNamesFunc_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerNamesFunc_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerNamesFunc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerNamesFunc_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerNamesFunc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerNamesFunc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerNamesFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBakeRenderCaptureInputToolProperties, nullptr, "GetTargetUVLayerNamesFunc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerNamesFunc_Statics::BakeRenderCaptureInputToolProperties_eventGetTargetUVLayerNamesFunc_Parms), Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerNamesFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerNamesFunc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerNamesFunc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerNamesFunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerNamesFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerNamesFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeRenderCaptureInputToolProperties);
	UClass* Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_NoRegister()
	{
		return UBakeRenderCaptureInputToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetStaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetStaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetUVLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetUVLayer;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetUVLayerNamesList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetUVLayerNamesList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetUVLayerNamesList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerIndex, "GetTargetUVLayerIndex" }, // 4240719524
		{ &Z_Construct_UFunction_UBakeRenderCaptureInputToolProperties_GetTargetUVLayerNamesFunc, "GetTargetUVLayerNamesFunc" }, // 476901952
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BakeRenderCaptureTool.h" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_Statics::NewProp_TargetStaticMesh_MetaData[] = {
		{ "Category", "BakeInput" },
		{ "Comment", "/** Target mesh to sample to */" },
		{ "DisplayName", "Target Mesh" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Target mesh to sample to" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_Statics::NewProp_TargetStaticMesh = { "TargetStaticMesh", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureInputToolProperties, TargetStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_Statics::NewProp_TargetStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_Statics::NewProp_TargetStaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_Statics::NewProp_TargetUVLayer_MetaData[] = {
		{ "Category", "BakeInput" },
		{ "Comment", "/** UV channel to use for the target mesh */" },
		{ "DisplayName", "Target Mesh UV Channel" },
		{ "GetOptions", "GetTargetUVLayerNamesFunc" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "UV channel to use for the target mesh" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_Statics::NewProp_TargetUVLayer = { "TargetUVLayer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureInputToolProperties, TargetUVLayer), METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_Statics::NewProp_TargetUVLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_Statics::NewProp_TargetUVLayer_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_Statics::NewProp_TargetUVLayerNamesList_Inner = { "TargetUVLayerNamesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_Statics::NewProp_TargetUVLayerNamesList_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_Statics::NewProp_TargetUVLayerNamesList = { "TargetUVLayerNamesList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureInputToolProperties, TargetUVLayerNamesList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_Statics::NewProp_TargetUVLayerNamesList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_Statics::NewProp_TargetUVLayerNamesList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_Statics::NewProp_TargetStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_Statics::NewProp_TargetUVLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_Statics::NewProp_TargetUVLayerNamesList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_Statics::NewProp_TargetUVLayerNamesList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeRenderCaptureInputToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_Statics::ClassParams = {
		&UBakeRenderCaptureInputToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBakeRenderCaptureInputToolProperties()
	{
		if (!Z_Registration_Info_UClass_UBakeRenderCaptureInputToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeRenderCaptureInputToolProperties.OuterSingleton, Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBakeRenderCaptureInputToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeRenderCaptureInputToolProperties>()
	{
		return UBakeRenderCaptureInputToolProperties::StaticClass();
	}
	UBakeRenderCaptureInputToolProperties::UBakeRenderCaptureInputToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeRenderCaptureInputToolProperties);
	UBakeRenderCaptureInputToolProperties::~UBakeRenderCaptureInputToolProperties() {}
	void UBakeRenderCaptureVisualizationProperties::StaticRegisterNativesUBakeRenderCaptureVisualizationProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeRenderCaptureVisualizationProperties);
	UClass* Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_NoRegister()
	{
		return UBakeRenderCaptureVisualizationProperties::StaticClass();
	}
	struct Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewAsMaterial_MetaData[];
#endif
		static void NewProp_bPreviewAsMaterial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewAsMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Brightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SSBrightness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SSBrightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmissiveScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EmissiveScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BakeRenderCaptureTool.h" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::NewProp_bPreviewAsMaterial_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/**\n\x09 * If true  preview results by connecting them to corresponding material inputs\n\x09 * If false connect the selected preview output as the Base Color input and use empty maps for other material inputs\n\x09 */" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "ToolTip", "If true  preview results by connecting them to corresponding material inputs\nIf false connect the selected preview output as the Base Color input and use empty maps for other material inputs" },
	};
#endif
	void Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::NewProp_bPreviewAsMaterial_SetBit(void* Obj)
	{
		((UBakeRenderCaptureVisualizationProperties*)Obj)->bPreviewAsMaterial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::NewProp_bPreviewAsMaterial = { "bPreviewAsMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBakeRenderCaptureVisualizationProperties), &Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::NewProp_bPreviewAsMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::NewProp_bPreviewAsMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::NewProp_bPreviewAsMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::NewProp_Brightness_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** Adjust the brightness of the Base Color material input; does not affect results stored in textures */" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "ToolTip", "Adjust the brightness of the Base Color material input; does not affect results stored in textures" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureVisualizationProperties, Brightness), METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::NewProp_Brightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::NewProp_Brightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::NewProp_SSBrightness_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** Adjust the brightness of the Subsurface Color material input; does not affect results stored in textures */" },
		{ "DisplayName", "SS Brightness" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "ToolTip", "Adjust the brightness of the Subsurface Color material input; does not affect results stored in textures" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::NewProp_SSBrightness = { "SSBrightness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureVisualizationProperties, SSBrightness), METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::NewProp_SSBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::NewProp_SSBrightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::NewProp_EmissiveScale_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** Adjust the brightness of the Emissive Color material input; does not affect results stored in textures */" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "ToolTip", "Adjust the brightness of the Emissive Color material input; does not affect results stored in textures" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::NewProp_EmissiveScale = { "EmissiveScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureVisualizationProperties, EmissiveScale), METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::NewProp_EmissiveScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::NewProp_EmissiveScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::NewProp_bPreviewAsMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::NewProp_Brightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::NewProp_SSBrightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::NewProp_EmissiveScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeRenderCaptureVisualizationProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::ClassParams = {
		&UBakeRenderCaptureVisualizationProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties()
	{
		if (!Z_Registration_Info_UClass_UBakeRenderCaptureVisualizationProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeRenderCaptureVisualizationProperties.OuterSingleton, Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBakeRenderCaptureVisualizationProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeRenderCaptureVisualizationProperties>()
	{
		return UBakeRenderCaptureVisualizationProperties::StaticClass();
	}
	UBakeRenderCaptureVisualizationProperties::UBakeRenderCaptureVisualizationProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeRenderCaptureVisualizationProperties);
	UBakeRenderCaptureVisualizationProperties::~UBakeRenderCaptureVisualizationProperties() {}
	void UBakeRenderCaptureTool::StaticRegisterNativesUBakeRenderCaptureTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeRenderCaptureTool);
	UClass* Z_Construct_UClass_UBakeRenderCaptureTool_NoRegister()
	{
		return UBakeRenderCaptureTool::StaticClass();
	}
	struct Z_Construct_UClass_UBakeRenderCaptureTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderCaptureProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderCaptureProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMeshSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputMeshSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualizationProps_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VisualizationProps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ResultSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyNormalMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EmptyNormalMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyColorMapBlack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EmptyColorMapBlack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyColorMapWhite_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EmptyColorMapWhite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyEmissiveMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EmptyEmissiveMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyOpacityMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EmptyOpacityMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptySubsurfaceColorMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EmptySubsurfaceColorMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyPackedMRSMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EmptyPackedMRSMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyRoughnessMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EmptyRoughnessMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyMetallicMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EmptyMetallicMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptySpecularMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EmptySpecularMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkingPreviewMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WorkingPreviewMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorPreviewMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ErrorPreviewMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMaterialRC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMaterialRC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMaterialPackedRC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMaterialPackedRC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMaterialRC_Subsurface_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMaterialRC_Subsurface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMaterialPackedRC_Subsurface_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMaterialPackedRC_Subsurface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBakeRenderCaptureTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//\n// Tool\n//\n" },
		{ "IncludePath", "BakeRenderCaptureTool.h" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "ToolTip", "Tool" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_Actors_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureTool, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_Actors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureTool, Settings), Z_Construct_UClass_UBakeRenderCaptureToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_RenderCaptureProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_RenderCaptureProperties = { "RenderCaptureProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureTool, RenderCaptureProperties), Z_Construct_UClass_URenderCaptureProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_RenderCaptureProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_RenderCaptureProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_InputMeshSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_InputMeshSettings = { "InputMeshSettings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureTool, InputMeshSettings), Z_Construct_UClass_UBakeRenderCaptureInputToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_InputMeshSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_InputMeshSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_VisualizationProps_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_VisualizationProps = { "VisualizationProps", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureTool, VisualizationProps), Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_VisualizationProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_VisualizationProps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_ResultSettings_MetaData[] = {
		{ "Comment", "// The computed textures are displayed in the details panel and used in the preview material, they are written\n// out to assest on shutdown.\n" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "ToolTip", "The computed textures are displayed in the details panel and used in the preview material, they are written\nout to assest on shutdown." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_ResultSettings = { "ResultSettings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureTool, ResultSettings), Z_Construct_UClass_UBakeRenderCaptureResults_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_ResultSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_ResultSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyNormalMap_MetaData[] = {
		{ "Comment", "// Empty maps are shown when nothing is computed\n" },
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
		{ "ToolTip", "Empty maps are shown when nothing is computed" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyNormalMap = { "EmptyNormalMap", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureTool, EmptyNormalMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyNormalMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyNormalMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyColorMapBlack_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyColorMapBlack = { "EmptyColorMapBlack", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureTool, EmptyColorMapBlack), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyColorMapBlack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyColorMapBlack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyColorMapWhite_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyColorMapWhite = { "EmptyColorMapWhite", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureTool, EmptyColorMapWhite), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyColorMapWhite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyColorMapWhite_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyEmissiveMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyEmissiveMap = { "EmptyEmissiveMap", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureTool, EmptyEmissiveMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyEmissiveMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyEmissiveMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyOpacityMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyOpacityMap = { "EmptyOpacityMap", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureTool, EmptyOpacityMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyOpacityMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyOpacityMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptySubsurfaceColorMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptySubsurfaceColorMap = { "EmptySubsurfaceColorMap", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureTool, EmptySubsurfaceColorMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptySubsurfaceColorMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptySubsurfaceColorMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyPackedMRSMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyPackedMRSMap = { "EmptyPackedMRSMap", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureTool, EmptyPackedMRSMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyPackedMRSMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyPackedMRSMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyRoughnessMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyRoughnessMap = { "EmptyRoughnessMap", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureTool, EmptyRoughnessMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyRoughnessMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyRoughnessMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyMetallicMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyMetallicMap = { "EmptyMetallicMap", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureTool, EmptyMetallicMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyMetallicMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyMetallicMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptySpecularMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptySpecularMap = { "EmptySpecularMap", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureTool, EmptySpecularMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptySpecularMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptySpecularMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_WorkingPreviewMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_WorkingPreviewMaterial = { "WorkingPreviewMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureTool, WorkingPreviewMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_WorkingPreviewMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_WorkingPreviewMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_ErrorPreviewMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_ErrorPreviewMaterial = { "ErrorPreviewMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureTool, ErrorPreviewMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_ErrorPreviewMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_ErrorPreviewMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_PreviewMaterialRC_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_PreviewMaterialRC = { "PreviewMaterialRC", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureTool, PreviewMaterialRC), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_PreviewMaterialRC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_PreviewMaterialRC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_PreviewMaterialPackedRC_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_PreviewMaterialPackedRC = { "PreviewMaterialPackedRC", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureTool, PreviewMaterialPackedRC), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_PreviewMaterialPackedRC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_PreviewMaterialPackedRC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_PreviewMaterialRC_Subsurface_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_PreviewMaterialRC_Subsurface = { "PreviewMaterialRC_Subsurface", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureTool, PreviewMaterialRC_Subsurface), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_PreviewMaterialRC_Subsurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_PreviewMaterialRC_Subsurface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_PreviewMaterialPackedRC_Subsurface_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_PreviewMaterialPackedRC_Subsurface = { "PreviewMaterialPackedRC_Subsurface", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureTool, PreviewMaterialPackedRC_Subsurface), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_PreviewMaterialPackedRC_Subsurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_PreviewMaterialPackedRC_Subsurface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeRenderCaptureTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeRenderCaptureTool, PreviewMesh), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_PreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_PreviewMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBakeRenderCaptureTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_RenderCaptureProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_InputMeshSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_VisualizationProps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_ResultSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyNormalMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyColorMapBlack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyColorMapWhite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyEmissiveMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyOpacityMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptySubsurfaceColorMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyPackedMRSMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyRoughnessMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptyMetallicMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_EmptySpecularMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_WorkingPreviewMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_ErrorPreviewMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_PreviewMaterialRC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_PreviewMaterialPackedRC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_PreviewMaterialRC_Subsurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_PreviewMaterialPackedRC_Subsurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeRenderCaptureTool_Statics::NewProp_PreviewMesh,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBakeRenderCaptureTool_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_NoRegister, (int32)VTABLE_OFFSET(UBakeRenderCaptureTool, IInteractiveToolExclusiveToolAPI), false },  // 3502411413
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBakeRenderCaptureTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeRenderCaptureTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeRenderCaptureTool_Statics::ClassParams = {
		&UBakeRenderCaptureTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBakeRenderCaptureTool_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeRenderCaptureTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBakeRenderCaptureTool()
	{
		if (!Z_Registration_Info_UClass_UBakeRenderCaptureTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeRenderCaptureTool.OuterSingleton, Z_Construct_UClass_UBakeRenderCaptureTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBakeRenderCaptureTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeRenderCaptureTool>()
	{
		return UBakeRenderCaptureTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeRenderCaptureTool);
	UBakeRenderCaptureTool::~UBakeRenderCaptureTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeRenderCaptureTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeRenderCaptureTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBakeRenderCaptureResults, UBakeRenderCaptureResults::StaticClass, TEXT("UBakeRenderCaptureResults"), &Z_Registration_Info_UClass_UBakeRenderCaptureResults, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeRenderCaptureResults), 3746476433U) },
		{ Z_Construct_UClass_UBakeRenderCaptureToolBuilder, UBakeRenderCaptureToolBuilder::StaticClass, TEXT("UBakeRenderCaptureToolBuilder"), &Z_Registration_Info_UClass_UBakeRenderCaptureToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeRenderCaptureToolBuilder), 3726145632U) },
		{ Z_Construct_UClass_URenderCaptureProperties, URenderCaptureProperties::StaticClass, TEXT("URenderCaptureProperties"), &Z_Registration_Info_UClass_URenderCaptureProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderCaptureProperties), 885954108U) },
		{ Z_Construct_UClass_UBakeRenderCaptureToolProperties, UBakeRenderCaptureToolProperties::StaticClass, TEXT("UBakeRenderCaptureToolProperties"), &Z_Registration_Info_UClass_UBakeRenderCaptureToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeRenderCaptureToolProperties), 3461355635U) },
		{ Z_Construct_UClass_UBakeRenderCaptureInputToolProperties, UBakeRenderCaptureInputToolProperties::StaticClass, TEXT("UBakeRenderCaptureInputToolProperties"), &Z_Registration_Info_UClass_UBakeRenderCaptureInputToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeRenderCaptureInputToolProperties), 3532373618U) },
		{ Z_Construct_UClass_UBakeRenderCaptureVisualizationProperties, UBakeRenderCaptureVisualizationProperties::StaticClass, TEXT("UBakeRenderCaptureVisualizationProperties"), &Z_Registration_Info_UClass_UBakeRenderCaptureVisualizationProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeRenderCaptureVisualizationProperties), 3788262549U) },
		{ Z_Construct_UClass_UBakeRenderCaptureTool, UBakeRenderCaptureTool::StaticClass, TEXT("UBakeRenderCaptureTool"), &Z_Registration_Info_UClass_UBakeRenderCaptureTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeRenderCaptureTool), 1949396947U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeRenderCaptureTool_h_3788392859(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeRenderCaptureTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeRenderCaptureTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
