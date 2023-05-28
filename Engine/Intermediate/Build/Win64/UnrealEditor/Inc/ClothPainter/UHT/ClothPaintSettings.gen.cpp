// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ClothPaintSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothPaintSettings() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothingAssetCommon_NoRegister();
	CLOTHPAINTER_API UClass* Z_Construct_UClass_UClothPainterSettings();
	CLOTHPAINTER_API UClass* Z_Construct_UClass_UClothPainterSettings_NoRegister();
	CLOTHPAINTER_API UEnum* Z_Construct_UEnum_ClothPainter_EPaintableClothProperty();
	MESHPAINT_API UClass* Z_Construct_UClass_UMeshPaintSettings();
	UPackage* Z_Construct_UPackage__Script_ClothPainter();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPaintableClothProperty;
	static UEnum* EPaintableClothProperty_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPaintableClothProperty.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPaintableClothProperty.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ClothPainter_EPaintableClothProperty, (UObject*)Z_Construct_UPackage__Script_ClothPainter(), TEXT("EPaintableClothProperty"));
		}
		return Z_Registration_Info_UEnum_EPaintableClothProperty.OuterSingleton;
	}
	template<> CLOTHPAINTER_API UEnum* StaticEnum<EPaintableClothProperty>()
	{
		return EPaintableClothProperty_StaticEnum();
	}
	struct Z_Construct_UEnum_ClothPainter_EPaintableClothProperty_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ClothPainter_EPaintableClothProperty_Statics::Enumerators[] = {
		{ "EPaintableClothProperty::MaxDistances", (int64)EPaintableClothProperty::MaxDistances },
		{ "EPaintableClothProperty::BackstopDistances", (int64)EPaintableClothProperty::BackstopDistances },
		{ "EPaintableClothProperty::BackstopRadius", (int64)EPaintableClothProperty::BackstopRadius },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ClothPainter_EPaintableClothProperty_Statics::Enum_MetaDataParams[] = {
		{ "BackstopDistances.Comment", "/** Backstop cloth property */" },
		{ "BackstopDistances.Name", "EPaintableClothProperty::BackstopDistances" },
		{ "BackstopDistances.ToolTip", "Backstop cloth property" },
		{ "BackstopRadius.Comment", "/** Backstop radius property */" },
		{ "BackstopRadius.Name", "EPaintableClothProperty::BackstopRadius" },
		{ "BackstopRadius.ToolTip", "Backstop radius property" },
		{ "MaxDistances.Comment", "/** Max distances cloth property */" },
		{ "MaxDistances.Name", "EPaintableClothProperty::MaxDistances" },
		{ "MaxDistances.ToolTip", "Max distances cloth property" },
		{ "ModuleRelativePath", "Private/ClothPaintSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ClothPainter_EPaintableClothProperty_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ClothPainter,
		nullptr,
		"EPaintableClothProperty",
		"EPaintableClothProperty",
		Z_Construct_UEnum_ClothPainter_EPaintableClothProperty_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ClothPainter_EPaintableClothProperty_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ClothPainter_EPaintableClothProperty_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ClothPainter_EPaintableClothProperty_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ClothPainter_EPaintableClothProperty()
	{
		if (!Z_Registration_Info_UEnum_EPaintableClothProperty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPaintableClothProperty.InnerSingleton, Z_Construct_UEnum_ClothPainter_EPaintableClothProperty_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPaintableClothProperty.InnerSingleton;
	}
	void UClothPainterSettings::StaticRegisterNativesUClothPainterSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothPainterSettings);
	UClass* Z_Construct_UClass_UClothPainterSettings_NoRegister()
	{
		return UClothPainterSettings::StaticClass();
	}
	struct Z_Construct_UClass_UClothPainterSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoViewRange_MetaData[];
#endif
		static void NewProp_bAutoViewRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoViewRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoCalculatedViewMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoCalculatedViewMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoCalculatedViewMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoCalculatedViewMax;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClothingAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothingAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClothingAssets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlipNormal_MetaData[];
#endif
		static void NewProp_bFlipNormal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCullBackface_MetaData[];
#endif
		static void NewProp_bCullBackface_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCullBackface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Opacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Opacity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothPainterSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshPaintSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothPainter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPainterSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ClothPaintSettings.h" },
		{ "ModuleRelativePath", "Private/ClothPaintSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ViewMin_MetaData[] = {
		{ "Category", "View" },
		{ "ClampMax", "100000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** When painting float/1D values, this is considered the zero or black point */" },
		{ "EditCondition", "!bAutoViewRange" },
		{ "ModuleRelativePath", "Private/ClothPaintSettings.h" },
		{ "ToolTip", "When painting float/1D values, this is considered the zero or black point" },
		{ "UIMax", "100000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ViewMin = { "ViewMin", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothPainterSettings, ViewMin), METADATA_PARAMS(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ViewMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ViewMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ViewMax_MetaData[] = {
		{ "Category", "View" },
		{ "ClampMax", "100000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** When painting float/1D values, this is considered the one or white point */" },
		{ "EditCondition", "!bAutoViewRange" },
		{ "ModuleRelativePath", "Private/ClothPaintSettings.h" },
		{ "ToolTip", "When painting float/1D values, this is considered the one or white point" },
		{ "UIMax", "100000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ViewMax = { "ViewMax", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothPainterSettings, ViewMax), METADATA_PARAMS(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ViewMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ViewMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bAutoViewRange_MetaData[] = {
		{ "Category", "View" },
		{ "Comment", "/** When set, the view min and max values will be calculated from the values present in the currently editable mask */" },
		{ "ModuleRelativePath", "Private/ClothPaintSettings.h" },
		{ "ToolTip", "When set, the view min and max values will be calculated from the values present in the currently editable mask" },
	};
#endif
	void Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bAutoViewRange_SetBit(void* Obj)
	{
		((UClothPainterSettings*)Obj)->bAutoViewRange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bAutoViewRange = { "bAutoViewRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UClothPainterSettings), &Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bAutoViewRange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bAutoViewRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bAutoViewRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_AutoCalculatedViewMin_MetaData[] = {
		{ "Comment", "/** Storage for auto calculated view min value */" },
		{ "ModuleRelativePath", "Private/ClothPaintSettings.h" },
		{ "ToolTip", "Storage for auto calculated view min value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_AutoCalculatedViewMin = { "AutoCalculatedViewMin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothPainterSettings, AutoCalculatedViewMin), METADATA_PARAMS(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_AutoCalculatedViewMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_AutoCalculatedViewMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_AutoCalculatedViewMax_MetaData[] = {
		{ "Comment", "/** Storage for auto calculated view max value */" },
		{ "ModuleRelativePath", "Private/ClothPaintSettings.h" },
		{ "ToolTip", "Storage for auto calculated view max value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_AutoCalculatedViewMax = { "AutoCalculatedViewMax", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothPainterSettings, AutoCalculatedViewMax), METADATA_PARAMS(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_AutoCalculatedViewMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_AutoCalculatedViewMax_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ClothingAssets_Inner = { "ClothingAssets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClothingAssetCommon_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ClothingAssets_MetaData[] = {
		{ "Comment", "/** Array of Clothing assets */" },
		{ "ModuleRelativePath", "Private/ClothPaintSettings.h" },
		{ "ToolTip", "Array of Clothing assets" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ClothingAssets = { "ClothingAssets", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothPainterSettings, ClothingAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ClothingAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ClothingAssets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bFlipNormal_MetaData[] = {
		{ "Category", "View" },
		{ "Comment", "/** Whether to flip normals on the mesh preview */" },
		{ "ModuleRelativePath", "Private/ClothPaintSettings.h" },
		{ "ToolTip", "Whether to flip normals on the mesh preview" },
	};
#endif
	void Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bFlipNormal_SetBit(void* Obj)
	{
		((UClothPainterSettings*)Obj)->bFlipNormal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bFlipNormal = { "bFlipNormal", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UClothPainterSettings), &Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bFlipNormal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bFlipNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bFlipNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bCullBackface_MetaData[] = {
		{ "Category", "View" },
		{ "Comment", "/** Whether to cull backfacing triangles when rendering the mesh preview */" },
		{ "ModuleRelativePath", "Private/ClothPaintSettings.h" },
		{ "ToolTip", "Whether to cull backfacing triangles when rendering the mesh preview" },
	};
#endif
	void Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bCullBackface_SetBit(void* Obj)
	{
		((UClothPainterSettings*)Obj)->bCullBackface = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bCullBackface = { "bCullBackface", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UClothPainterSettings), &Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bCullBackface_SetBit, METADATA_PARAMS(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bCullBackface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bCullBackface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_Opacity_MetaData[] = {
		{ "Category", "View" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Opacity of the mesh preview */" },
		{ "ModuleRelativePath", "Private/ClothPaintSettings.h" },
		{ "ToolTip", "Opacity of the mesh preview" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_Opacity = { "Opacity", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothPainterSettings, Opacity), METADATA_PARAMS(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_Opacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_Opacity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothPainterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ViewMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ViewMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bAutoViewRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_AutoCalculatedViewMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_AutoCalculatedViewMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ClothingAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_ClothingAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bFlipNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_bCullBackface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPainterSettings_Statics::NewProp_Opacity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothPainterSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothPainterSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothPainterSettings_Statics::ClassParams = {
		&UClothPainterSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClothPainterSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UClothPainterSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UClothPainterSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPainterSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothPainterSettings()
	{
		if (!Z_Registration_Info_UClass_UClothPainterSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothPainterSettings.OuterSingleton, Z_Construct_UClass_UClothPainterSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothPainterSettings.OuterSingleton;
	}
	template<> CLOTHPAINTER_API UClass* StaticClass<UClothPainterSettings>()
	{
		return UClothPainterSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothPainterSettings);
	UClothPainterSettings::~UClothPainterSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_Statics::EnumInfo[] = {
		{ EPaintableClothProperty_StaticEnum, TEXT("EPaintableClothProperty"), &Z_Registration_Info_UEnum_EPaintableClothProperty, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1021786154U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClothPainterSettings, UClothPainterSettings::StaticClass, TEXT("UClothPainterSettings"), &Z_Registration_Info_UClass_UClothPainterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothPainterSettings), 2905928064U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_1877755962(TEXT("/Script/ClothPainter"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothPainter_Private_ClothPaintSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
