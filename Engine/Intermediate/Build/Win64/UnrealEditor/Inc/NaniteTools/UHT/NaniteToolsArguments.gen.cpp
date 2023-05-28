// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaniteToolsArguments.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaniteToolsArguments() {}
// Cross Module References
	EDITORCONFIG_API UClass* Z_Construct_UClass_UEditorConfigBase();
	NANITETOOLS_API UClass* Z_Construct_UClass_UNaniteAuditErrorArguments();
	NANITETOOLS_API UClass* Z_Construct_UClass_UNaniteAuditErrorArguments_NoRegister();
	NANITETOOLS_API UClass* Z_Construct_UClass_UNaniteAuditOptimizeArguments();
	NANITETOOLS_API UClass* Z_Construct_UClass_UNaniteAuditOptimizeArguments_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NaniteTools();
// End Cross Module References
	void UNaniteAuditErrorArguments::StaticRegisterNativesUNaniteAuditErrorArguments()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNaniteAuditErrorArguments);
	UClass* Z_Construct_UClass_UNaniteAuditErrorArguments_NoRegister()
	{
		return UNaniteAuditErrorArguments::StaticClass();
	}
	struct Z_Construct_UClass_UNaniteAuditErrorArguments_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProhibitUnsupportedBlendMode_MetaData[];
#endif
		static void NewProp_ProhibitUnsupportedBlendMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ProhibitUnsupportedBlendMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProhibitVertexInterpolator_MetaData[];
#endif
		static void NewProp_ProhibitVertexInterpolator_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ProhibitVertexInterpolator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProhibitPixelDepthOffset_MetaData[];
#endif
		static void NewProp_ProhibitPixelDepthOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ProhibitPixelDepthOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProhibitWorldPositionOffset_MetaData[];
#endif
		static void NewProp_ProhibitWorldPositionOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ProhibitWorldPositionOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorConfigBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NaniteTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::Class_MetaDataParams[] = {
		{ "EditorConfig", "NaniteAuditError" },
		{ "IncludePath", "NaniteToolsArguments.h" },
		{ "ModuleRelativePath", "Public/NaniteToolsArguments.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::NewProp_ProhibitUnsupportedBlendMode_MetaData[] = {
		{ "Category", "MaterialErrors" },
		{ "DisplayName", "Non-Opaque Blend Mode" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/NaniteToolsArguments.h" },
		{ "Tooltip", "Prohibit non-opaque blend mode in the assigned materials." },
	};
#endif
	void Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::NewProp_ProhibitUnsupportedBlendMode_SetBit(void* Obj)
	{
		((UNaniteAuditErrorArguments*)Obj)->ProhibitUnsupportedBlendMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::NewProp_ProhibitUnsupportedBlendMode = { "ProhibitUnsupportedBlendMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNaniteAuditErrorArguments), &Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::NewProp_ProhibitUnsupportedBlendMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::NewProp_ProhibitUnsupportedBlendMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::NewProp_ProhibitUnsupportedBlendMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::NewProp_ProhibitVertexInterpolator_MetaData[] = {
		{ "Category", "MaterialErrors" },
		{ "DisplayName", "Vertex Interpolator Usage" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/NaniteToolsArguments.h" },
		{ "Tooltip", "Prohibit vertex interpolator usage in the assigned materials." },
	};
#endif
	void Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::NewProp_ProhibitVertexInterpolator_SetBit(void* Obj)
	{
		((UNaniteAuditErrorArguments*)Obj)->ProhibitVertexInterpolator = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::NewProp_ProhibitVertexInterpolator = { "ProhibitVertexInterpolator", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNaniteAuditErrorArguments), &Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::NewProp_ProhibitVertexInterpolator_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::NewProp_ProhibitVertexInterpolator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::NewProp_ProhibitVertexInterpolator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::NewProp_ProhibitPixelDepthOffset_MetaData[] = {
		{ "Category", "MaterialErrors" },
		{ "DisplayName", "Pixel Depth Offset Usage" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/NaniteToolsArguments.h" },
		{ "Tooltip", "Prohibit pixel depth offset usage in the assigned materials." },
	};
#endif
	void Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::NewProp_ProhibitPixelDepthOffset_SetBit(void* Obj)
	{
		((UNaniteAuditErrorArguments*)Obj)->ProhibitPixelDepthOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::NewProp_ProhibitPixelDepthOffset = { "ProhibitPixelDepthOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNaniteAuditErrorArguments), &Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::NewProp_ProhibitPixelDepthOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::NewProp_ProhibitPixelDepthOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::NewProp_ProhibitPixelDepthOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::NewProp_ProhibitWorldPositionOffset_MetaData[] = {
		{ "Category", "MaterialErrors" },
		{ "DisplayName", "World Position Offset Usage" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/NaniteToolsArguments.h" },
		{ "Tooltip", "Prohibit world position offset usage in the assigned materials." },
	};
#endif
	void Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::NewProp_ProhibitWorldPositionOffset_SetBit(void* Obj)
	{
		((UNaniteAuditErrorArguments*)Obj)->ProhibitWorldPositionOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::NewProp_ProhibitWorldPositionOffset = { "ProhibitWorldPositionOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNaniteAuditErrorArguments), &Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::NewProp_ProhibitWorldPositionOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::NewProp_ProhibitWorldPositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::NewProp_ProhibitWorldPositionOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::NewProp_ProhibitUnsupportedBlendMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::NewProp_ProhibitVertexInterpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::NewProp_ProhibitPixelDepthOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::NewProp_ProhibitWorldPositionOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNaniteAuditErrorArguments>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::ClassParams = {
		&UNaniteAuditErrorArguments::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNaniteAuditErrorArguments()
	{
		if (!Z_Registration_Info_UClass_UNaniteAuditErrorArguments.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNaniteAuditErrorArguments.OuterSingleton, Z_Construct_UClass_UNaniteAuditErrorArguments_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNaniteAuditErrorArguments.OuterSingleton;
	}
	template<> NANITETOOLS_API UClass* StaticClass<UNaniteAuditErrorArguments>()
	{
		return UNaniteAuditErrorArguments::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNaniteAuditErrorArguments);
	UNaniteAuditErrorArguments::~UNaniteAuditErrorArguments() {}
	void UNaniteAuditOptimizeArguments::StaticRegisterNativesUNaniteAuditOptimizeArguments()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNaniteAuditOptimizeArguments);
	UClass* Z_Construct_UClass_UNaniteAuditOptimizeArguments_NoRegister()
	{
		return UNaniteAuditOptimizeArguments::StaticClass();
	}
	struct Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriangleThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_TriangleThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisallowUnsupportedBlendMode_MetaData[];
#endif
		static void NewProp_DisallowUnsupportedBlendMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisallowUnsupportedBlendMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisallowVertexInterpolator_MetaData[];
#endif
		static void NewProp_DisallowVertexInterpolator_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisallowVertexInterpolator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisallowPixelDepthOffset_MetaData[];
#endif
		static void NewProp_DisallowPixelDepthOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisallowPixelDepthOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisallowWorldPositionOffset_MetaData[];
#endif
		static void NewProp_DisallowWorldPositionOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisallowWorldPositionOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorConfigBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NaniteTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::Class_MetaDataParams[] = {
		{ "EditorConfig", "NaniteAuditOptimize" },
		{ "IncludePath", "NaniteToolsArguments.h" },
		{ "ModuleRelativePath", "Public/NaniteToolsArguments.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_TriangleThreshold_MetaData[] = {
		{ "Category", "GeometryFilters" },
		{ "DisplayName", "Triangle Threshold" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/NaniteToolsArguments.h" },
		{ "Tooltip", "Ignore non-Nanite meshes with fewer triangles than this threshold." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_TriangleThreshold = { "TriangleThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNaniteAuditOptimizeArguments, TriangleThreshold), METADATA_PARAMS(Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_TriangleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_TriangleThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_DisallowUnsupportedBlendMode_MetaData[] = {
		{ "Category", "UnsupportedFeatures" },
		{ "DisplayName", "Exclude Unsupported Blend Mode" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/NaniteToolsArguments.h" },
		{ "Tooltip", "Ignore non-Nanite meshes using an unsupported blend mode in the assigned materials." },
	};
#endif
	void Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_DisallowUnsupportedBlendMode_SetBit(void* Obj)
	{
		((UNaniteAuditOptimizeArguments*)Obj)->DisallowUnsupportedBlendMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_DisallowUnsupportedBlendMode = { "DisallowUnsupportedBlendMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNaniteAuditOptimizeArguments), &Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_DisallowUnsupportedBlendMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_DisallowUnsupportedBlendMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_DisallowUnsupportedBlendMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_DisallowVertexInterpolator_MetaData[] = {
		{ "Category", "UnsupportedFeatures" },
		{ "DisplayName", "Exclude Vertex Interpolator Usage" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/NaniteToolsArguments.h" },
		{ "Tooltip", "Ignore non-Nanite meshes using vertex interpolator in the assigned materials." },
	};
#endif
	void Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_DisallowVertexInterpolator_SetBit(void* Obj)
	{
		((UNaniteAuditOptimizeArguments*)Obj)->DisallowVertexInterpolator = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_DisallowVertexInterpolator = { "DisallowVertexInterpolator", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNaniteAuditOptimizeArguments), &Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_DisallowVertexInterpolator_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_DisallowVertexInterpolator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_DisallowVertexInterpolator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_DisallowPixelDepthOffset_MetaData[] = {
		{ "Category", "UnsupportedFeatures" },
		{ "DisplayName", "Exclude Pixel Depth Offset Usage" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/NaniteToolsArguments.h" },
		{ "Tooltip", "Ignore non-Nanite meshes using pixel depth offset in the assigned materials." },
	};
#endif
	void Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_DisallowPixelDepthOffset_SetBit(void* Obj)
	{
		((UNaniteAuditOptimizeArguments*)Obj)->DisallowPixelDepthOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_DisallowPixelDepthOffset = { "DisallowPixelDepthOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNaniteAuditOptimizeArguments), &Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_DisallowPixelDepthOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_DisallowPixelDepthOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_DisallowPixelDepthOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_DisallowWorldPositionOffset_MetaData[] = {
		{ "Category", "UnsupportedFeatures" },
		{ "DisplayName", "Exclude World Position Offset Usage" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/NaniteToolsArguments.h" },
		{ "Tooltip", "Ignore non-Nanite meshes using world position offset in the assigned materials." },
	};
#endif
	void Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_DisallowWorldPositionOffset_SetBit(void* Obj)
	{
		((UNaniteAuditOptimizeArguments*)Obj)->DisallowWorldPositionOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_DisallowWorldPositionOffset = { "DisallowWorldPositionOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNaniteAuditOptimizeArguments), &Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_DisallowWorldPositionOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_DisallowWorldPositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_DisallowWorldPositionOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_TriangleThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_DisallowUnsupportedBlendMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_DisallowVertexInterpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_DisallowPixelDepthOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::NewProp_DisallowWorldPositionOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNaniteAuditOptimizeArguments>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::ClassParams = {
		&UNaniteAuditOptimizeArguments::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNaniteAuditOptimizeArguments()
	{
		if (!Z_Registration_Info_UClass_UNaniteAuditOptimizeArguments.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNaniteAuditOptimizeArguments.OuterSingleton, Z_Construct_UClass_UNaniteAuditOptimizeArguments_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNaniteAuditOptimizeArguments.OuterSingleton;
	}
	template<> NANITETOOLS_API UClass* StaticClass<UNaniteAuditOptimizeArguments>()
	{
		return UNaniteAuditOptimizeArguments::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNaniteAuditOptimizeArguments);
	UNaniteAuditOptimizeArguments::~UNaniteAuditOptimizeArguments() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_NaniteTools_Public_NaniteToolsArguments_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_NaniteTools_Public_NaniteToolsArguments_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNaniteAuditErrorArguments, UNaniteAuditErrorArguments::StaticClass, TEXT("UNaniteAuditErrorArguments"), &Z_Registration_Info_UClass_UNaniteAuditErrorArguments, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNaniteAuditErrorArguments), 2003565550U) },
		{ Z_Construct_UClass_UNaniteAuditOptimizeArguments, UNaniteAuditOptimizeArguments::StaticClass, TEXT("UNaniteAuditOptimizeArguments"), &Z_Registration_Info_UClass_UNaniteAuditOptimizeArguments, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNaniteAuditOptimizeArguments), 983352049U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_NaniteTools_Public_NaniteToolsArguments_h_1124019767(TEXT("/Script/NaniteTools"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_NaniteTools_Public_NaniteToolsArguments_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_NaniteTools_Public_NaniteToolsArguments_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
