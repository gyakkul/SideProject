// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BakeMeshAttributeMapsToolBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBakeMeshAttributeMapsToolBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeMapsToolBase();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeVisualizationProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EBakeMapType();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UBakeMeshAttributeMapsResultToolProperties::StaticRegisterNativesUBakeMeshAttributeMapsResultToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeMeshAttributeMapsResultToolProperties);
	UClass* Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties_NoRegister()
	{
		return UBakeMeshAttributeMapsResultToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Result_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Result_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BakeMeshAttributeMapsToolBase.h" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsToolBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties_Statics::NewProp_Result_ValueProp = { "Result", nullptr, (EPropertyFlags)0x0004000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties_Statics::NewProp_Result_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties_Statics::NewProp_Result_Key_KeyProp = { "Result_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_MeshModelingToolsExp_EBakeMapType, METADATA_PARAMS(nullptr, 0) }; // 2602780732
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Results" },
		{ "Comment", "/** Bake */" },
		{ "DisplayName", "Results" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsToolBase.h" },
		{ "ToolTip", "Bake" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeMeshAttributeMapsResultToolProperties, Result), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties_Statics::NewProp_Result_MetaData)) }; // 2602780732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties_Statics::NewProp_Result_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties_Statics::NewProp_Result_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties_Statics::NewProp_Result_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties_Statics::NewProp_Result,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeMeshAttributeMapsResultToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties_Statics::ClassParams = {
		&UBakeMeshAttributeMapsResultToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties()
	{
		if (!Z_Registration_Info_UClass_UBakeMeshAttributeMapsResultToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeMeshAttributeMapsResultToolProperties.OuterSingleton, Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBakeMeshAttributeMapsResultToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeMeshAttributeMapsResultToolProperties>()
	{
		return UBakeMeshAttributeMapsResultToolProperties::StaticClass();
	}
	UBakeMeshAttributeMapsResultToolProperties::UBakeMeshAttributeMapsResultToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeMeshAttributeMapsResultToolProperties);
	UBakeMeshAttributeMapsResultToolProperties::~UBakeMeshAttributeMapsResultToolProperties() {}
	void UBakeMeshAttributeMapsToolBase::StaticRegisterNativesUBakeMeshAttributeMapsToolBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeMeshAttributeMapsToolBase);
	UClass* Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_NoRegister()
	{
		return UBakeMeshAttributeMapsToolBase::StaticClass();
	}
	struct Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualizationProps_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VisualizationProps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BentNormalPreviewMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BentNormalPreviewMaterial;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedMaps_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CachedMaps_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CachedMaps_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedMaps_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CachedMaps;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBakeMeshAttributeTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base Bake Maps tool\n */" },
		{ "IncludePath", "BakeMeshAttributeMapsToolBase.h" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsToolBase.h" },
		{ "ToolTip", "Base Bake Maps tool" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_VisualizationProps_MetaData[] = {
		{ "Comment", "//\n// Tool property sets\n//\n" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsToolBase.h" },
		{ "ToolTip", "Tool property sets" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_VisualizationProps = { "VisualizationProps", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeMeshAttributeMapsToolBase, VisualizationProps), Z_Construct_UClass_UBakeVisualizationProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_VisualizationProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_VisualizationProps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "Comment", "//\n// Preview mesh and materials\n//\n" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsToolBase.h" },
		{ "ToolTip", "Preview mesh and materials" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeMeshAttributeMapsToolBase, PreviewMesh), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_PreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_PreviewMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_PreviewMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsToolBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_PreviewMaterial = { "PreviewMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeMeshAttributeMapsToolBase, PreviewMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_PreviewMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_PreviewMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_BentNormalPreviewMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsToolBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_BentNormalPreviewMaterial = { "BentNormalPreviewMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeMeshAttributeMapsToolBase, BentNormalPreviewMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_BentNormalPreviewMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_BentNormalPreviewMaterial_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_CachedMaps_ValueProp = { "CachedMaps", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_CachedMaps_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_CachedMaps_Key_KeyProp = { "CachedMaps_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_MeshModelingToolsExp_EBakeMapType, METADATA_PARAMS(nullptr, 0) }; // 2602780732
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_CachedMaps_MetaData[] = {
		{ "Comment", "/**\n\x09 * Internal cache of bake texture results.\n\x09 * The tool can inject additional bake types that were not requested by the user. This\n\x09 * can occur in cases where a particular bake type might need another bake type to preview\n\x09 * such as BentNormal requiring AmbientOcclusion to preview. To avoid writing out assets\n\x09 * that the user did not request, we introduce CachedMaps as a temporary texture cache\n\x09 * for the tool preview. The Result array is then updated from CachedMaps to only hold\n\x09 * user requested textures that are written out on Shutdown.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsToolBase.h" },
		{ "ToolTip", "Internal cache of bake texture results.\nThe tool can inject additional bake types that were not requested by the user. This\ncan occur in cases where a particular bake type might need another bake type to preview\nsuch as BentNormal requiring AmbientOcclusion to preview. To avoid writing out assets\nthat the user did not request, we introduce CachedMaps as a temporary texture cache\nfor the tool preview. The Result array is then updated from CachedMaps to only hold\nuser requested textures that are written out on Shutdown." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_CachedMaps = { "CachedMaps", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeMeshAttributeMapsToolBase, CachedMaps), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_CachedMaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_CachedMaps_MetaData)) }; // 2602780732
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_EmptyNormalMap_MetaData[] = {
		{ "Comment", "// empty maps are shown when nothing is computed\n" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsToolBase.h" },
		{ "ToolTip", "empty maps are shown when nothing is computed" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_EmptyNormalMap = { "EmptyNormalMap", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeMeshAttributeMapsToolBase, EmptyNormalMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_EmptyNormalMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_EmptyNormalMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_EmptyColorMapBlack_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsToolBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_EmptyColorMapBlack = { "EmptyColorMapBlack", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeMeshAttributeMapsToolBase, EmptyColorMapBlack), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_EmptyColorMapBlack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_EmptyColorMapBlack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_EmptyColorMapWhite_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsToolBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_EmptyColorMapWhite = { "EmptyColorMapWhite", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeMeshAttributeMapsToolBase, EmptyColorMapWhite), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_EmptyColorMapWhite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_EmptyColorMapWhite_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_VisualizationProps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_PreviewMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_PreviewMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_BentNormalPreviewMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_CachedMaps_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_CachedMaps_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_CachedMaps_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_CachedMaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_EmptyNormalMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_EmptyColorMapBlack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::NewProp_EmptyColorMapWhite,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeMeshAttributeMapsToolBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::ClassParams = {
		&UBakeMeshAttributeMapsToolBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBakeMeshAttributeMapsToolBase()
	{
		if (!Z_Registration_Info_UClass_UBakeMeshAttributeMapsToolBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeMeshAttributeMapsToolBase.OuterSingleton, Z_Construct_UClass_UBakeMeshAttributeMapsToolBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBakeMeshAttributeMapsToolBase.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeMeshAttributeMapsToolBase>()
	{
		return UBakeMeshAttributeMapsToolBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeMeshAttributeMapsToolBase);
	UBakeMeshAttributeMapsToolBase::~UBakeMeshAttributeMapsToolBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeMapsToolBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeMapsToolBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties, UBakeMeshAttributeMapsResultToolProperties::StaticClass, TEXT("UBakeMeshAttributeMapsResultToolProperties"), &Z_Registration_Info_UClass_UBakeMeshAttributeMapsResultToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeMeshAttributeMapsResultToolProperties), 3418804761U) },
		{ Z_Construct_UClass_UBakeMeshAttributeMapsToolBase, UBakeMeshAttributeMapsToolBase::StaticClass, TEXT("UBakeMeshAttributeMapsToolBase"), &Z_Registration_Info_UClass_UBakeMeshAttributeMapsToolBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeMeshAttributeMapsToolBase), 461971218U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeMapsToolBase_h_2430313426(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeMapsToolBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeMapsToolBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
