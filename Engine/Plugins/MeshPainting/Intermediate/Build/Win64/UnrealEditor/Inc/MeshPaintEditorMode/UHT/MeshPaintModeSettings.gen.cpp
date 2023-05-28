// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MeshPaintModeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshPaintModeSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MESHPAINTEDITORMODE_API UClass* Z_Construct_UClass_UMeshPaintModeSettings();
	MESHPAINTEDITORMODE_API UClass* Z_Construct_UClass_UMeshPaintModeSettings_NoRegister();
	MESHPAINTEDITORMODE_API UEnum* Z_Construct_UEnum_MeshPaintEditorMode_EMeshPaintColorView();
	MESHPAINTINGTOOLSET_API UEnum* Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintDataColorViewMode();
	UPackage* Z_Construct_UPackage__Script_MeshPaintEditorMode();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshPaintColorView;
	static UEnum* EMeshPaintColorView_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshPaintColorView.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshPaintColorView.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshPaintEditorMode_EMeshPaintColorView, (UObject*)Z_Construct_UPackage__Script_MeshPaintEditorMode(), TEXT("EMeshPaintColorView"));
		}
		return Z_Registration_Info_UEnum_EMeshPaintColorView.OuterSingleton;
	}
	template<> MESHPAINTEDITORMODE_API UEnum* StaticEnum<EMeshPaintColorView>()
	{
		return EMeshPaintColorView_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshPaintEditorMode_EMeshPaintColorView_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshPaintEditorMode_EMeshPaintColorView_Statics::Enumerators[] = {
		{ "EMeshPaintColorView::Normal", (int64)EMeshPaintColorView::Normal },
		{ "EMeshPaintColorView::RGB", (int64)EMeshPaintColorView::RGB },
		{ "EMeshPaintColorView::Alpha", (int64)EMeshPaintColorView::Alpha },
		{ "EMeshPaintColorView::Red", (int64)EMeshPaintColorView::Red },
		{ "EMeshPaintColorView::Green", (int64)EMeshPaintColorView::Green },
		{ "EMeshPaintColorView::Blue", (int64)EMeshPaintColorView::Blue },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshPaintEditorMode_EMeshPaintColorView_Statics::Enum_MetaDataParams[] = {
		{ "Alpha.Comment", "/** Alpha only */" },
		{ "Alpha.DisplayName", "Alpha Channel" },
		{ "Alpha.Name", "EMeshPaintColorView::Alpha" },
		{ "Alpha.ToolTip", "Alpha only" },
		{ "Blue.Comment", "/** Blue only */" },
		{ "Blue.DisplayName", "Blue Channel" },
		{ "Blue.Name", "EMeshPaintColorView::Blue" },
		{ "Blue.ToolTip", "Blue only" },
		{ "Comment", "/** Mesh paint color view modes (somewhat maps to EVertexColorViewMode engine enum.) */" },
		{ "Green.Comment", "/** Green only */" },
		{ "Green.DisplayName", "Green Channel" },
		{ "Green.Name", "EMeshPaintColorView::Green" },
		{ "Green.ToolTip", "Green only" },
		{ "ModuleRelativePath", "Private/MeshPaintModeSettings.h" },
		{ "Normal.Comment", "/** Normal view mode (vertex color visualization off) */" },
		{ "Normal.DisplayName", "Off" },
		{ "Normal.Name", "EMeshPaintColorView::Normal" },
		{ "Normal.ToolTip", "Normal view mode (vertex color visualization off)" },
		{ "Red.Comment", "/** Red only */" },
		{ "Red.DisplayName", "Red Channel" },
		{ "Red.Name", "EMeshPaintColorView::Red" },
		{ "Red.ToolTip", "Red only" },
		{ "RGB.Comment", "/** RGB only */" },
		{ "RGB.DisplayName", "RGB Channels" },
		{ "RGB.Name", "EMeshPaintColorView::RGB" },
		{ "RGB.ToolTip", "RGB only" },
		{ "ToolTip", "Mesh paint color view modes (somewhat maps to EVertexColorViewMode engine enum.)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshPaintEditorMode_EMeshPaintColorView_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshPaintEditorMode,
		nullptr,
		"EMeshPaintColorView",
		"EMeshPaintColorView",
		Z_Construct_UEnum_MeshPaintEditorMode_EMeshPaintColorView_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshPaintEditorMode_EMeshPaintColorView_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshPaintEditorMode_EMeshPaintColorView_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshPaintEditorMode_EMeshPaintColorView_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshPaintEditorMode_EMeshPaintColorView()
	{
		if (!Z_Registration_Info_UEnum_EMeshPaintColorView.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshPaintColorView.InnerSingleton, Z_Construct_UEnum_MeshPaintEditorMode_EMeshPaintColorView_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshPaintColorView.InnerSingleton;
	}
	void UMeshPaintModeSettings::StaticRegisterNativesUMeshPaintModeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshPaintModeSettings);
	UClass* Z_Construct_UClass_UMeshPaintModeSettings_NoRegister()
	{
		return UMeshPaintModeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMeshPaintModeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColorViewMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorViewMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorViewMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshPaintModeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaintEditorMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshPaintModeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the Mesh Editor's settings.\n */" },
		{ "IncludePath", "MeshPaintModeSettings.h" },
		{ "ModuleRelativePath", "Private/MeshPaintModeSettings.h" },
		{ "ToolTip", "Implements the Mesh Editor's settings." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMeshPaintModeSettings_Statics::NewProp_ColorViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshPaintModeSettings_Statics::NewProp_ColorViewMode_MetaData[] = {
		{ "Category", "Visualization" },
		{ "Comment", "/** Color view mode used to display Vertex Colors */" },
		{ "ModuleRelativePath", "Private/MeshPaintModeSettings.h" },
		{ "ToolTip", "Color view mode used to display Vertex Colors" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeshPaintModeSettings_Statics::NewProp_ColorViewMode = { "ColorViewMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshPaintModeSettings, ColorViewMode), Z_Construct_UEnum_MeshPaintingToolset_EMeshPaintDataColorViewMode, METADATA_PARAMS(Z_Construct_UClass_UMeshPaintModeSettings_Statics::NewProp_ColorViewMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshPaintModeSettings_Statics::NewProp_ColorViewMode_MetaData)) }; // 929006201
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshPaintModeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshPaintModeSettings_Statics::NewProp_ColorViewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshPaintModeSettings_Statics::NewProp_ColorViewMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshPaintModeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshPaintModeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshPaintModeSettings_Statics::ClassParams = {
		&UMeshPaintModeSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshPaintModeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshPaintModeSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshPaintModeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshPaintModeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshPaintModeSettings()
	{
		if (!Z_Registration_Info_UClass_UMeshPaintModeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshPaintModeSettings.OuterSingleton, Z_Construct_UClass_UMeshPaintModeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshPaintModeSettings.OuterSingleton;
	}
	template<> MESHPAINTEDITORMODE_API UClass* StaticClass<UMeshPaintModeSettings>()
	{
		return UMeshPaintModeSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshPaintModeSettings);
	UMeshPaintModeSettings::~UMeshPaintModeSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Private_MeshPaintModeSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Private_MeshPaintModeSettings_h_Statics::EnumInfo[] = {
		{ EMeshPaintColorView_StaticEnum, TEXT("EMeshPaintColorView"), &Z_Registration_Info_UEnum_EMeshPaintColorView, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1036991262U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Private_MeshPaintModeSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshPaintModeSettings, UMeshPaintModeSettings::StaticClass, TEXT("UMeshPaintModeSettings"), &Z_Registration_Info_UClass_UMeshPaintModeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshPaintModeSettings), 1379873402U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Private_MeshPaintModeSettings_h_2353128545(TEXT("/Script/MeshPaintEditorMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Private_MeshPaintModeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Private_MeshPaintModeSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Private_MeshPaintModeSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Private_MeshPaintModeSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
