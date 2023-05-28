// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/MaterialEditor/MaterialEditorPreviewParameters.h"
#include "../../../Editor/UnrealEd/Classes/MaterialEditor/MaterialEditorInstanceConstant.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialEditorPreviewParameters() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialEditorPreviewParameters();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialEditorPreviewParameters_NoRegister();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FEditorParameterGroup();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UMaterialEditorPreviewParameters::StaticRegisterNativesUMaterialEditorPreviewParameters()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialEditorPreviewParameters);
	UClass* Z_Construct_UClass_UMaterialEditorPreviewParameters_NoRegister()
	{
		return UMaterialEditorPreviewParameters::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterGroups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalFunction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OriginalFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OriginalMaterial;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StoredLayerPreviews_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoredLayerPreviews_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StoredLayerPreviews;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StoredBlendPreviews_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoredBlendPreviews_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StoredBlendPreviews;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "MaterialEditor/MaterialEditorPreviewParameters.h" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorPreviewParameters.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_ParameterGroups_Inner = { "ParameterGroups", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEditorParameterGroup, METADATA_PARAMS(nullptr, 0) }; // 3714873727
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_ParameterGroups_MetaData[] = {
		{ "Category", "UMaterialEditorPreviewParameters" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorPreviewParameters.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_ParameterGroups = { "ParameterGroups", nullptr, (EPropertyFlags)0x0010008000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialEditorPreviewParameters, ParameterGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_ParameterGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_ParameterGroups_MetaData)) }; // 3714873727
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_PreviewMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorPreviewParameters.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_PreviewMaterial = { "PreviewMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialEditorPreviewParameters, PreviewMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_PreviewMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_PreviewMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_OriginalFunction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorPreviewParameters.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_OriginalFunction = { "OriginalFunction", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialEditorPreviewParameters, OriginalFunction), Z_Construct_UClass_UMaterialFunction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_OriginalFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_OriginalFunction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_OriginalMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorPreviewParameters.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_OriginalMaterial = { "OriginalMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialEditorPreviewParameters, OriginalMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_OriginalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_OriginalMaterial_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_StoredLayerPreviews_Inner = { "StoredLayerPreviews", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_StoredLayerPreviews_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorPreviewParameters.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_StoredLayerPreviews = { "StoredLayerPreviews", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialEditorPreviewParameters, StoredLayerPreviews), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_StoredLayerPreviews_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_StoredLayerPreviews_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_StoredBlendPreviews_Inner = { "StoredBlendPreviews", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_StoredBlendPreviews_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorPreviewParameters.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_StoredBlendPreviews = { "StoredBlendPreviews", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialEditorPreviewParameters, StoredBlendPreviews), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_StoredBlendPreviews_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_StoredBlendPreviews_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_ParameterGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_ParameterGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_PreviewMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_OriginalFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_OriginalMaterial,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_StoredLayerPreviews_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_StoredLayerPreviews,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_StoredBlendPreviews_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::NewProp_StoredBlendPreviews,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialEditorPreviewParameters>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::ClassParams = {
		&UMaterialEditorPreviewParameters::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::PropPointers),
		0,
		0x009020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialEditorPreviewParameters()
	{
		if (!Z_Registration_Info_UClass_UMaterialEditorPreviewParameters.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialEditorPreviewParameters.OuterSingleton, Z_Construct_UClass_UMaterialEditorPreviewParameters_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialEditorPreviewParameters.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UMaterialEditorPreviewParameters>()
	{
		return UMaterialEditorPreviewParameters::StaticClass();
	}
	UMaterialEditorPreviewParameters::UMaterialEditorPreviewParameters(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialEditorPreviewParameters);
	UMaterialEditorPreviewParameters::~UMaterialEditorPreviewParameters() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorPreviewParameters_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorPreviewParameters_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialEditorPreviewParameters, UMaterialEditorPreviewParameters::StaticClass, TEXT("UMaterialEditorPreviewParameters"), &Z_Registration_Info_UClass_UMaterialEditorPreviewParameters, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialEditorPreviewParameters), 3677979680U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorPreviewParameters_h_378941735(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorPreviewParameters_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorPreviewParameters_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
