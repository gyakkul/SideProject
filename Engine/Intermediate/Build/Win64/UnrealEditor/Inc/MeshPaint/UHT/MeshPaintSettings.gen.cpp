// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshPaintSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshPaintSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MESHPAINT_API UClass* Z_Construct_UClass_UMeshPaintSettings();
	MESHPAINT_API UClass* Z_Construct_UClass_UMeshPaintSettings_NoRegister();
	MESHPAINT_API UClass* Z_Construct_UClass_UPaintBrushSettings();
	MESHPAINT_API UClass* Z_Construct_UClass_UPaintBrushSettings_NoRegister();
	MESHPAINT_API UEnum* Z_Construct_UEnum_MeshPaint_EMeshPaintColorViewMode();
	UPackage* Z_Construct_UPackage__Script_MeshPaint();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshPaintColorViewMode;
	static UEnum* EMeshPaintColorViewMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshPaintColorViewMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshPaintColorViewMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshPaint_EMeshPaintColorViewMode, (UObject*)Z_Construct_UPackage__Script_MeshPaint(), TEXT("EMeshPaintColorViewMode"));
		}
		return Z_Registration_Info_UEnum_EMeshPaintColorViewMode.OuterSingleton;
	}
	template<> MESHPAINT_API UEnum* StaticEnum<EMeshPaintColorViewMode>()
	{
		return EMeshPaintColorViewMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshPaint_EMeshPaintColorViewMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshPaint_EMeshPaintColorViewMode_Statics::Enumerators[] = {
		{ "EMeshPaintColorViewMode::Normal", (int64)EMeshPaintColorViewMode::Normal },
		{ "EMeshPaintColorViewMode::RGB", (int64)EMeshPaintColorViewMode::RGB },
		{ "EMeshPaintColorViewMode::Alpha", (int64)EMeshPaintColorViewMode::Alpha },
		{ "EMeshPaintColorViewMode::Red", (int64)EMeshPaintColorViewMode::Red },
		{ "EMeshPaintColorViewMode::Green", (int64)EMeshPaintColorViewMode::Green },
		{ "EMeshPaintColorViewMode::Blue", (int64)EMeshPaintColorViewMode::Blue },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshPaint_EMeshPaintColorViewMode_Statics::Enum_MetaDataParams[] = {
		{ "Alpha.Comment", "/** Alpha only */" },
		{ "Alpha.DisplayName", "Alpha Channel" },
		{ "Alpha.Name", "EMeshPaintColorViewMode::Alpha" },
		{ "Alpha.ToolTip", "Alpha only" },
		{ "Blue.Comment", "/** Blue only */" },
		{ "Blue.DisplayName", "Blue Channel" },
		{ "Blue.Name", "EMeshPaintColorViewMode::Blue" },
		{ "Blue.ToolTip", "Blue only" },
		{ "Comment", "/** Mesh paint color view modes (somewhat maps to EVertexColorViewMode engine enum.) */" },
		{ "Green.Comment", "/** Green only */" },
		{ "Green.DisplayName", "Green Channel" },
		{ "Green.Name", "EMeshPaintColorViewMode::Green" },
		{ "Green.ToolTip", "Green only" },
		{ "ModuleRelativePath", "Public/MeshPaintSettings.h" },
		{ "Normal.Comment", "/** Normal view mode (vertex color visualization off) */" },
		{ "Normal.DisplayName", "Off" },
		{ "Normal.Name", "EMeshPaintColorViewMode::Normal" },
		{ "Normal.ToolTip", "Normal view mode (vertex color visualization off)" },
		{ "Red.Comment", "/** Red only */" },
		{ "Red.DisplayName", "Red Channel" },
		{ "Red.Name", "EMeshPaintColorViewMode::Red" },
		{ "Red.ToolTip", "Red only" },
		{ "RGB.Comment", "/** RGB only */" },
		{ "RGB.DisplayName", "RGB Channels" },
		{ "RGB.Name", "EMeshPaintColorViewMode::RGB" },
		{ "RGB.ToolTip", "RGB only" },
		{ "ToolTip", "Mesh paint color view modes (somewhat maps to EVertexColorViewMode engine enum.)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshPaint_EMeshPaintColorViewMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshPaint,
		nullptr,
		"EMeshPaintColorViewMode",
		"EMeshPaintColorViewMode",
		Z_Construct_UEnum_MeshPaint_EMeshPaintColorViewMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshPaint_EMeshPaintColorViewMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshPaint_EMeshPaintColorViewMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshPaint_EMeshPaintColorViewMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshPaint_EMeshPaintColorViewMode()
	{
		if (!Z_Registration_Info_UEnum_EMeshPaintColorViewMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshPaintColorViewMode.InnerSingleton, Z_Construct_UEnum_MeshPaint_EMeshPaintColorViewMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshPaintColorViewMode.InnerSingleton;
	}
	void UPaintBrushSettings::StaticRegisterNativesUPaintBrushSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaintBrushSettings);
	UClass* Z_Construct_UClass_UPaintBrushSettings_NoRegister()
	{
		return UPaintBrushSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPaintBrushSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrushRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrushStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushFalloffAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrushFalloffAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFlow_MetaData[];
#endif
		static void NewProp_bEnableFlow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFlow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyFrontFacingTriangles_MetaData[];
#endif
		static void NewProp_bOnlyFrontFacingTriangles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyFrontFacingTriangles;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColorViewMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorViewMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorViewMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaintBrushSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaintBrushSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshPaintSettings.h" },
		{ "ModuleRelativePath", "Public/MeshPaintSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_BrushRadius_MetaData[] = {
		{ "Category", "Brush" },
		{ "ClampMax", "250000.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Radius of the Brush used for Painting */" },
		{ "DisplayName", "Radius" },
		{ "ModuleRelativePath", "Public/MeshPaintSettings.h" },
		{ "ToolTip", "Radius of the Brush used for Painting" },
		{ "UIMax", "2048.0" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_BrushRadius = { "BrushRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaintBrushSettings, BrushRadius), METADATA_PARAMS(Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_BrushRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_BrushRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_BrushStrength_MetaData[] = {
		{ "Category", "Brush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Strength of the brush (0.0 - 1.0) */" },
		{ "DisplayName", "Strength" },
		{ "ModuleRelativePath", "Public/MeshPaintSettings.h" },
		{ "ToolTip", "Strength of the brush (0.0 - 1.0)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_BrushStrength = { "BrushStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaintBrushSettings, BrushStrength), METADATA_PARAMS(Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_BrushStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_BrushStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_BrushFalloffAmount_MetaData[] = {
		{ "Category", "Brush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of falloff to apply (0.0 - 1.0) */" },
		{ "DisplayName", "Falloff" },
		{ "ModuleRelativePath", "Public/MeshPaintSettings.h" },
		{ "ToolTip", "Amount of falloff to apply (0.0 - 1.0)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_BrushFalloffAmount = { "BrushFalloffAmount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaintBrushSettings, BrushFalloffAmount), METADATA_PARAMS(Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_BrushFalloffAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_BrushFalloffAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_bEnableFlow_MetaData[] = {
		{ "Category", "Brush" },
		{ "Comment", "/** Enables \"Flow\" painting where paint is continually applied from the brush every tick */" },
		{ "DisplayName", "Enable Brush Flow" },
		{ "ModuleRelativePath", "Public/MeshPaintSettings.h" },
		{ "ToolTip", "Enables \"Flow\" painting where paint is continually applied from the brush every tick" },
	};
#endif
	void Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_bEnableFlow_SetBit(void* Obj)
	{
		((UPaintBrushSettings*)Obj)->bEnableFlow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_bEnableFlow = { "bEnableFlow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPaintBrushSettings), &Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_bEnableFlow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_bEnableFlow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_bEnableFlow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_bOnlyFrontFacingTriangles_MetaData[] = {
		{ "Category", "Brush" },
		{ "Comment", "/** Whether back-facing triangles should be ignored */" },
		{ "DisplayName", "Ignore Back-Facing" },
		{ "ModuleRelativePath", "Public/MeshPaintSettings.h" },
		{ "ToolTip", "Whether back-facing triangles should be ignored" },
	};
#endif
	void Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_bOnlyFrontFacingTriangles_SetBit(void* Obj)
	{
		((UPaintBrushSettings*)Obj)->bOnlyFrontFacingTriangles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_bOnlyFrontFacingTriangles = { "bOnlyFrontFacingTriangles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPaintBrushSettings), &Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_bOnlyFrontFacingTriangles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_bOnlyFrontFacingTriangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_bOnlyFrontFacingTriangles_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_ColorViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_ColorViewMode_MetaData[] = {
		{ "Category", "View" },
		{ "Comment", "/** Color view mode used to display Vertex Colors */" },
		{ "ModuleRelativePath", "Public/MeshPaintSettings.h" },
		{ "ToolTip", "Color view mode used to display Vertex Colors" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_ColorViewMode = { "ColorViewMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaintBrushSettings, ColorViewMode), Z_Construct_UEnum_MeshPaint_EMeshPaintColorViewMode, METADATA_PARAMS(Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_ColorViewMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_ColorViewMode_MetaData)) }; // 621693776
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaintBrushSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_BrushRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_BrushStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_BrushFalloffAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_bEnableFlow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_bOnlyFrontFacingTriangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_ColorViewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaintBrushSettings_Statics::NewProp_ColorViewMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaintBrushSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaintBrushSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaintBrushSettings_Statics::ClassParams = {
		&UPaintBrushSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPaintBrushSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaintBrushSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaintBrushSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaintBrushSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaintBrushSettings()
	{
		if (!Z_Registration_Info_UClass_UPaintBrushSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaintBrushSettings.OuterSingleton, Z_Construct_UClass_UPaintBrushSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaintBrushSettings.OuterSingleton;
	}
	template<> MESHPAINT_API UClass* StaticClass<UPaintBrushSettings>()
	{
		return UPaintBrushSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaintBrushSettings);
	void UMeshPaintSettings::StaticRegisterNativesUMeshPaintSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshPaintSettings);
	UClass* Z_Construct_UClass_UMeshPaintSettings_NoRegister()
	{
		return UMeshPaintSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMeshPaintSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexPreviewSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VertexPreviewSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshPaintSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshPaintSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshPaintSettings.h" },
		{ "ModuleRelativePath", "Public/MeshPaintSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshPaintSettings_Statics::NewProp_VertexPreviewSize_MetaData[] = {
		{ "Category", "Visualization" },
		{ "Comment", "/** Size of vertex points drawn when mesh painting is active. */" },
		{ "ModuleRelativePath", "Public/MeshPaintSettings.h" },
		{ "ToolTip", "Size of vertex points drawn when mesh painting is active." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshPaintSettings_Statics::NewProp_VertexPreviewSize = { "VertexPreviewSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshPaintSettings, VertexPreviewSize), METADATA_PARAMS(Z_Construct_UClass_UMeshPaintSettings_Statics::NewProp_VertexPreviewSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshPaintSettings_Statics::NewProp_VertexPreviewSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshPaintSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshPaintSettings_Statics::NewProp_VertexPreviewSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshPaintSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshPaintSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshPaintSettings_Statics::ClassParams = {
		&UMeshPaintSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshPaintSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshPaintSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshPaintSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshPaintSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshPaintSettings()
	{
		if (!Z_Registration_Info_UClass_UMeshPaintSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshPaintSettings.OuterSingleton, Z_Construct_UClass_UMeshPaintSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshPaintSettings.OuterSingleton;
	}
	template<> MESHPAINT_API UClass* StaticClass<UMeshPaintSettings>()
	{
		return UMeshPaintSettings::StaticClass();
	}
	UMeshPaintSettings::UMeshPaintSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshPaintSettings);
	UMeshPaintSettings::~UMeshPaintSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_Statics::EnumInfo[] = {
		{ EMeshPaintColorViewMode_StaticEnum, TEXT("EMeshPaintColorViewMode"), &Z_Registration_Info_UEnum_EMeshPaintColorViewMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 621693776U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaintBrushSettings, UPaintBrushSettings::StaticClass, TEXT("UPaintBrushSettings"), &Z_Registration_Info_UClass_UPaintBrushSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaintBrushSettings), 338707063U) },
		{ Z_Construct_UClass_UMeshPaintSettings, UMeshPaintSettings::StaticClass, TEXT("UMeshPaintSettings"), &Z_Registration_Info_UClass_UMeshPaintSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshPaintSettings), 2491173560U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_3261755846(TEXT("/Script/MeshPaint"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
