// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ClothPaintTools.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothPaintTools() {}
// Cross Module References
	CLOTHPAINTER_API UClass* Z_Construct_UClass_UClothPaintTool_BrushSettings();
	CLOTHPAINTER_API UClass* Z_Construct_UClass_UClothPaintTool_BrushSettings_NoRegister();
	CLOTHPAINTER_API UClass* Z_Construct_UClass_UClothPaintTool_FillSettings();
	CLOTHPAINTER_API UClass* Z_Construct_UClass_UClothPaintTool_FillSettings_NoRegister();
	CLOTHPAINTER_API UClass* Z_Construct_UClass_UClothPaintTool_GradientSettings();
	CLOTHPAINTER_API UClass* Z_Construct_UClass_UClothPaintTool_GradientSettings_NoRegister();
	CLOTHPAINTER_API UClass* Z_Construct_UClass_UClothPaintTool_SmoothSettings();
	CLOTHPAINTER_API UClass* Z_Construct_UClass_UClothPaintTool_SmoothSettings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ClothPainter();
// End Cross Module References
	void UClothPaintTool_BrushSettings::StaticRegisterNativesUClothPaintTool_BrushSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothPaintTool_BrushSettings);
	UClass* Z_Construct_UClass_UClothPaintTool_BrushSettings_NoRegister()
	{
		return UClothPaintTool_BrushSettings::StaticClass();
	}
	struct Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaintValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PaintValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothPainter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Unique settings for the Brush tool */" },
		{ "IncludePath", "ClothPaintTools.h" },
		{ "ModuleRelativePath", "Private/ClothPaintTools.h" },
		{ "ToolTip", "Unique settings for the Brush tool" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics::NewProp_PaintValue_MetaData[] = {
		{ "Category", "ToolSettings" },
		{ "ClampMax", "100000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Value to paint onto the mesh for this parameter */" },
		{ "ModuleRelativePath", "Private/ClothPaintTools.h" },
		{ "ToolTip", "Value to paint onto the mesh for this parameter" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics::NewProp_PaintValue = { "PaintValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothPaintTool_BrushSettings, PaintValue), METADATA_PARAMS(Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics::NewProp_PaintValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics::NewProp_PaintValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics::NewProp_PaintValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothPaintTool_BrushSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics::ClassParams = {
		&UClothPaintTool_BrushSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothPaintTool_BrushSettings()
	{
		if (!Z_Registration_Info_UClass_UClothPaintTool_BrushSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothPaintTool_BrushSettings.OuterSingleton, Z_Construct_UClass_UClothPaintTool_BrushSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothPaintTool_BrushSettings.OuterSingleton;
	}
	template<> CLOTHPAINTER_API UClass* StaticClass<UClothPaintTool_BrushSettings>()
	{
		return UClothPaintTool_BrushSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothPaintTool_BrushSettings);
	UClothPaintTool_BrushSettings::~UClothPaintTool_BrushSettings() {}
	void UClothPaintTool_GradientSettings::StaticRegisterNativesUClothPaintTool_GradientSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothPaintTool_GradientSettings);
	UClass* Z_Construct_UClass_UClothPaintTool_GradientSettings_NoRegister()
	{
		return UClothPaintTool_GradientSettings::StaticClass();
	}
	struct Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GradientStartValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GradientStartValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GradientEndValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GradientEndValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseRegularBrush_MetaData[];
#endif
		static void NewProp_bUseRegularBrush_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRegularBrush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothPainter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Unique settings for the Gradient tool */" },
		{ "IncludePath", "ClothPaintTools.h" },
		{ "ModuleRelativePath", "Private/ClothPaintTools.h" },
		{ "ToolTip", "Unique settings for the Gradient tool" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_GradientStartValue_MetaData[] = {
		{ "Category", "ToolSettings" },
		{ "ClampMax", "100000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Value of the gradient at the start points */" },
		{ "ModuleRelativePath", "Private/ClothPaintTools.h" },
		{ "ToolTip", "Value of the gradient at the start points" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_GradientStartValue = { "GradientStartValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothPaintTool_GradientSettings, GradientStartValue), METADATA_PARAMS(Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_GradientStartValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_GradientStartValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_GradientEndValue_MetaData[] = {
		{ "Category", "ToolSettings" },
		{ "ClampMax", "100000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Value of the gradient at the end points */" },
		{ "ModuleRelativePath", "Private/ClothPaintTools.h" },
		{ "ToolTip", "Value of the gradient at the end points" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_GradientEndValue = { "GradientEndValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothPaintTool_GradientSettings, GradientEndValue), METADATA_PARAMS(Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_GradientEndValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_GradientEndValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_bUseRegularBrush_MetaData[] = {
		{ "Category", "ToolSettings" },
		{ "Comment", "/** Enables the painting of selected points using a brush rather than just a point */" },
		{ "ModuleRelativePath", "Private/ClothPaintTools.h" },
		{ "ToolTip", "Enables the painting of selected points using a brush rather than just a point" },
	};
#endif
	void Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_bUseRegularBrush_SetBit(void* Obj)
	{
		((UClothPaintTool_GradientSettings*)Obj)->bUseRegularBrush = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_bUseRegularBrush = { "bUseRegularBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UClothPaintTool_GradientSettings), &Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_bUseRegularBrush_SetBit, METADATA_PARAMS(Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_bUseRegularBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_bUseRegularBrush_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_GradientStartValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_GradientEndValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::NewProp_bUseRegularBrush,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothPaintTool_GradientSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::ClassParams = {
		&UClothPaintTool_GradientSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothPaintTool_GradientSettings()
	{
		if (!Z_Registration_Info_UClass_UClothPaintTool_GradientSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothPaintTool_GradientSettings.OuterSingleton, Z_Construct_UClass_UClothPaintTool_GradientSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothPaintTool_GradientSettings.OuterSingleton;
	}
	template<> CLOTHPAINTER_API UClass* StaticClass<UClothPaintTool_GradientSettings>()
	{
		return UClothPaintTool_GradientSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothPaintTool_GradientSettings);
	UClothPaintTool_GradientSettings::~UClothPaintTool_GradientSettings() {}
	void UClothPaintTool_SmoothSettings::StaticRegisterNativesUClothPaintTool_SmoothSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothPaintTool_SmoothSettings);
	UClass* Z_Construct_UClass_UClothPaintTool_SmoothSettings_NoRegister()
	{
		return UClothPaintTool_SmoothSettings::StaticClass();
	}
	struct Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothPainter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Unique settings for the smoothing tool */" },
		{ "IncludePath", "ClothPaintTools.h" },
		{ "ModuleRelativePath", "Private/ClothPaintTools.h" },
		{ "ToolTip", "Unique settings for the smoothing tool" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "ToolSettings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Strength of the smoothing effect */" },
		{ "ModuleRelativePath", "Private/ClothPaintTools.h" },
		{ "ToolTip", "Strength of the smoothing effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothPaintTool_SmoothSettings, Strength), METADATA_PARAMS(Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics::NewProp_Strength_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics::NewProp_Strength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothPaintTool_SmoothSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics::ClassParams = {
		&UClothPaintTool_SmoothSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothPaintTool_SmoothSettings()
	{
		if (!Z_Registration_Info_UClass_UClothPaintTool_SmoothSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothPaintTool_SmoothSettings.OuterSingleton, Z_Construct_UClass_UClothPaintTool_SmoothSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothPaintTool_SmoothSettings.OuterSingleton;
	}
	template<> CLOTHPAINTER_API UClass* StaticClass<UClothPaintTool_SmoothSettings>()
	{
		return UClothPaintTool_SmoothSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothPaintTool_SmoothSettings);
	UClothPaintTool_SmoothSettings::~UClothPaintTool_SmoothSettings() {}
	void UClothPaintTool_FillSettings::StaticRegisterNativesUClothPaintTool_FillSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothPaintTool_FillSettings);
	UClass* Z_Construct_UClass_UClothPaintTool_FillSettings_NoRegister()
	{
		return UClothPaintTool_FillSettings::StaticClass();
	}
	struct Z_Construct_UClass_UClothPaintTool_FillSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Threshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FillValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FillValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothPainter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Unique settings for the fill tool */" },
		{ "IncludePath", "ClothPaintTools.h" },
		{ "ModuleRelativePath", "Private/ClothPaintTools.h" },
		{ "ToolTip", "Unique settings for the fill tool" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::NewProp_Threshold_MetaData[] = {
		{ "Category", "ToolSettings" },
		{ "ClampMax", "100000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Threshold for fill operation, will keep filling until sampled verts aren't within this range of the original vertex */" },
		{ "ModuleRelativePath", "Private/ClothPaintTools.h" },
		{ "ToolTip", "Threshold for fill operation, will keep filling until sampled verts aren't within this range of the original vertex" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothPaintTool_FillSettings, Threshold), METADATA_PARAMS(Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::NewProp_Threshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::NewProp_Threshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::NewProp_FillValue_MetaData[] = {
		{ "Category", "ToolSettings" },
		{ "ClampMax", "100000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The value to fill all selected verts to */" },
		{ "ModuleRelativePath", "Private/ClothPaintTools.h" },
		{ "ToolTip", "The value to fill all selected verts to" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::NewProp_FillValue = { "FillValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothPaintTool_FillSettings, FillValue), METADATA_PARAMS(Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::NewProp_FillValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::NewProp_FillValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::NewProp_Threshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::NewProp_FillValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothPaintTool_FillSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::ClassParams = {
		&UClothPaintTool_FillSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothPaintTool_FillSettings()
	{
		if (!Z_Registration_Info_UClass_UClothPaintTool_FillSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothPaintTool_FillSettings.OuterSingleton, Z_Construct_UClass_UClothPaintTool_FillSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothPaintTool_FillSettings.OuterSingleton;
	}
	template<> CLOTHPAINTER_API UClass* StaticClass<UClothPaintTool_FillSettings>()
	{
		return UClothPaintTool_FillSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothPaintTool_FillSettings);
	UClothPaintTool_FillSettings::~UClothPaintTool_FillSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothPainter_Private_ClothPaintTools_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothPainter_Private_ClothPaintTools_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClothPaintTool_BrushSettings, UClothPaintTool_BrushSettings::StaticClass, TEXT("UClothPaintTool_BrushSettings"), &Z_Registration_Info_UClass_UClothPaintTool_BrushSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothPaintTool_BrushSettings), 3665551959U) },
		{ Z_Construct_UClass_UClothPaintTool_GradientSettings, UClothPaintTool_GradientSettings::StaticClass, TEXT("UClothPaintTool_GradientSettings"), &Z_Registration_Info_UClass_UClothPaintTool_GradientSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothPaintTool_GradientSettings), 4089020034U) },
		{ Z_Construct_UClass_UClothPaintTool_SmoothSettings, UClothPaintTool_SmoothSettings::StaticClass, TEXT("UClothPaintTool_SmoothSettings"), &Z_Registration_Info_UClass_UClothPaintTool_SmoothSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothPaintTool_SmoothSettings), 1819787290U) },
		{ Z_Construct_UClass_UClothPaintTool_FillSettings, UClothPaintTool_FillSettings::StaticClass, TEXT("UClothPaintTool_FillSettings"), &Z_Registration_Info_UClass_UClothPaintTool_FillSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothPaintTool_FillSettings), 2673515308U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothPainter_Private_ClothPaintTools_h_3408524035(TEXT("/Script/ClothPainter"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothPainter_Private_ClothPaintTools_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothPainter_Private_ClothPaintTools_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
