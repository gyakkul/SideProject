// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialFunctionInstance.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "../../Source/Runtime/Engine/Public/StaticParameterSet.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialFunctionInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInstance();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleVectorParameterValue();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFontParameterValue();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterValue();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSparseVolumeTextureParameterValue();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticComponentMaskParameter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticSwitchParameter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureParameterValue();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorParameterValue();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialFunctionInstance::StaticRegisterNativesUMaterialFunctionInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialFunctionInstance);
	UClass* Z_Construct_UClass_UMaterialFunctionInstance_NoRegister()
	{
		return UMaterialFunctionInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialFunctionInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Base;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarParameterValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalarParameterValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalarParameterValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorParameterValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorParameterValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorParameterValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DoubleVectorParameterValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoubleVectorParameterValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DoubleVectorParameterValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureParameterValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureParameterValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureParameterValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FontParameterValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontParameterValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FontParameterValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticSwitchParameterValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticSwitchParameterValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticSwitchParameterValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticComponentMaskParameterValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticComponentMaskParameterValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticComponentMaskParameterValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeVirtualTextureParameterValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeVirtualTextureParameterValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimeVirtualTextureParameterValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SparseVolumeTextureParameterValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SparseVolumeTextureParameterValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SparseVolumeTextureParameterValues;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMaterial;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialFunctionInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialFunctionInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A material function instance defines parameter overrides for a parent material function.\n */" },
		{ "HideCategories", "object object" },
		{ "IncludePath", "Materials/MaterialFunctionInstance.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "A material function instance defines parameter overrides for a parent material function." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "MaterialFunctionInstance" },
		{ "Comment", "/** Parent function. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "Parent function." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0014010000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialFunctionInstance, Parent), Z_Construct_UClass_UMaterialFunctionInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_Base_MetaData[] = {
		{ "Comment", "/** Base function. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "Base function." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0014010000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialFunctionInstance, Base), Z_Construct_UClass_UMaterialFunctionInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_Base_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_Base_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_ScalarParameterValues_Inner = { "ScalarParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FScalarParameterValue, METADATA_PARAMS(nullptr, 0) }; // 1694524164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_ScalarParameterValues_MetaData[] = {
		{ "Category", "MaterialFunctionInstance" },
		{ "Comment", "/** Scalar parameters. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "Scalar parameters." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_ScalarParameterValues = { "ScalarParameterValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialFunctionInstance, ScalarParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_ScalarParameterValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_ScalarParameterValues_MetaData)) }; // 1694524164
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_VectorParameterValues_Inner = { "VectorParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVectorParameterValue, METADATA_PARAMS(nullptr, 0) }; // 3736065838
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_VectorParameterValues_MetaData[] = {
		{ "Category", "MaterialFunctionInstance" },
		{ "Comment", "/** Vector parameters. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "Vector parameters." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_VectorParameterValues = { "VectorParameterValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialFunctionInstance, VectorParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_VectorParameterValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_VectorParameterValues_MetaData)) }; // 3736065838
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_DoubleVectorParameterValues_Inner = { "DoubleVectorParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDoubleVectorParameterValue, METADATA_PARAMS(nullptr, 0) }; // 1862933415
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_DoubleVectorParameterValues_MetaData[] = {
		{ "Category", "MaterialFunctionInstance" },
		{ "Comment", "/** DoubleVector parameters. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "DoubleVector parameters." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_DoubleVectorParameterValues = { "DoubleVectorParameterValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialFunctionInstance, DoubleVectorParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_DoubleVectorParameterValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_DoubleVectorParameterValues_MetaData)) }; // 1862933415
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_TextureParameterValues_Inner = { "TextureParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTextureParameterValue, METADATA_PARAMS(nullptr, 0) }; // 649074991
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_TextureParameterValues_MetaData[] = {
		{ "Category", "MaterialFunctionInstance" },
		{ "Comment", "/** Texture parameters. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "Texture parameters." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_TextureParameterValues = { "TextureParameterValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialFunctionInstance, TextureParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_TextureParameterValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_TextureParameterValues_MetaData)) }; // 649074991
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_FontParameterValues_Inner = { "FontParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFontParameterValue, METADATA_PARAMS(nullptr, 0) }; // 2885992560
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_FontParameterValues_MetaData[] = {
		{ "Category", "MaterialFunctionInstance" },
		{ "Comment", "/** Font parameters. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "Font parameters." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_FontParameterValues = { "FontParameterValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialFunctionInstance, FontParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_FontParameterValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_FontParameterValues_MetaData)) }; // 2885992560
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticSwitchParameterValues_Inner = { "StaticSwitchParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStaticSwitchParameter, METADATA_PARAMS(nullptr, 0) }; // 2256372837
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticSwitchParameterValues_MetaData[] = {
		{ "Category", "MaterialFunctionInstance" },
		{ "Comment", "/** Static switch parameters. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "Static switch parameters." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticSwitchParameterValues = { "StaticSwitchParameterValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialFunctionInstance, StaticSwitchParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticSwitchParameterValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticSwitchParameterValues_MetaData)) }; // 2256372837
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticComponentMaskParameterValues_Inner = { "StaticComponentMaskParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStaticComponentMaskParameter, METADATA_PARAMS(nullptr, 0) }; // 3244509681
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticComponentMaskParameterValues_MetaData[] = {
		{ "Category", "MaterialFunctionInstance" },
		{ "Comment", "/** Static component mask parameters. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "Static component mask parameters." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticComponentMaskParameterValues = { "StaticComponentMaskParameterValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialFunctionInstance, StaticComponentMaskParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticComponentMaskParameterValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticComponentMaskParameterValues_MetaData)) }; // 3244509681
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_RuntimeVirtualTextureParameterValues_Inner = { "RuntimeVirtualTextureParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue, METADATA_PARAMS(nullptr, 0) }; // 3251870142
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_RuntimeVirtualTextureParameterValues_MetaData[] = {
		{ "Category", "MaterialFunctionInstance" },
		{ "Comment", "/** Runtime virtual texture parameters. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "Runtime virtual texture parameters." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_RuntimeVirtualTextureParameterValues = { "RuntimeVirtualTextureParameterValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialFunctionInstance, RuntimeVirtualTextureParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_RuntimeVirtualTextureParameterValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_RuntimeVirtualTextureParameterValues_MetaData)) }; // 3251870142
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_SparseVolumeTextureParameterValues_Inner = { "SparseVolumeTextureParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSparseVolumeTextureParameterValue, METADATA_PARAMS(nullptr, 0) }; // 2453854735
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_SparseVolumeTextureParameterValues_MetaData[] = {
		{ "Category", "MaterialFunctionInstance" },
		{ "Comment", "/** Sparse volume texture parameters. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "Sparse volume texture parameters." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_SparseVolumeTextureParameterValues = { "SparseVolumeTextureParameterValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialFunctionInstance, SparseVolumeTextureParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_SparseVolumeTextureParameterValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_SparseVolumeTextureParameterValues_MetaData)) }; // 2453854735
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_PreviewMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_PreviewMaterial = { "PreviewMaterial", nullptr, (EPropertyFlags)0x0024080800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialFunctionInstance, PreviewMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_PreviewMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_PreviewMaterial_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialFunctionInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_Base,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_ScalarParameterValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_ScalarParameterValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_VectorParameterValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_VectorParameterValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_DoubleVectorParameterValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_DoubleVectorParameterValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_TextureParameterValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_TextureParameterValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_FontParameterValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_FontParameterValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticSwitchParameterValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticSwitchParameterValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticComponentMaskParameterValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticComponentMaskParameterValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_RuntimeVirtualTextureParameterValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_RuntimeVirtualTextureParameterValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_SparseVolumeTextureParameterValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_SparseVolumeTextureParameterValues,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_PreviewMaterial,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialFunctionInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunctionInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::ClassParams = {
		&UMaterialFunctionInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialFunctionInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstance_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialFunctionInstance()
	{
		if (!Z_Registration_Info_UClass_UMaterialFunctionInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialFunctionInstance.OuterSingleton, Z_Construct_UClass_UMaterialFunctionInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialFunctionInstance.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialFunctionInstance>()
	{
		return UMaterialFunctionInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionInstance);
	UMaterialFunctionInstance::~UMaterialFunctionInstance() {}
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterialFunctionInstance)
#endif
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialFunctionInstance, UMaterialFunctionInstance::StaticClass, TEXT("UMaterialFunctionInstance"), &Z_Registration_Info_UClass_UMaterialFunctionInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialFunctionInstance), 750911515U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_686156218(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
