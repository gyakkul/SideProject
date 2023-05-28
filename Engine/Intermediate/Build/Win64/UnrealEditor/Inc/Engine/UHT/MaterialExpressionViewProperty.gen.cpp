// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionViewProperty.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionViewProperty() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionViewProperty();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionViewProperty_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialExposedViewProperty();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialExposedViewProperty;
	static UEnum* EMaterialExposedViewProperty_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMaterialExposedViewProperty.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMaterialExposedViewProperty.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialExposedViewProperty, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialExposedViewProperty"));
		}
		return Z_Registration_Info_UEnum_EMaterialExposedViewProperty.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMaterialExposedViewProperty>()
	{
		return EMaterialExposedViewProperty_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMaterialExposedViewProperty_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMaterialExposedViewProperty_Statics::Enumerators[] = {
		{ "MEVP_BufferSize", (int64)MEVP_BufferSize },
		{ "MEVP_FieldOfView", (int64)MEVP_FieldOfView },
		{ "MEVP_TanHalfFieldOfView", (int64)MEVP_TanHalfFieldOfView },
		{ "MEVP_ViewSize", (int64)MEVP_ViewSize },
		{ "MEVP_WorldSpaceViewPosition", (int64)MEVP_WorldSpaceViewPosition },
		{ "MEVP_WorldSpaceCameraPosition", (int64)MEVP_WorldSpaceCameraPosition },
		{ "MEVP_ViewportOffset", (int64)MEVP_ViewportOffset },
		{ "MEVP_TemporalSampleCount", (int64)MEVP_TemporalSampleCount },
		{ "MEVP_TemporalSampleIndex", (int64)MEVP_TemporalSampleIndex },
		{ "MEVP_TemporalSampleOffset", (int64)MEVP_TemporalSampleOffset },
		{ "MEVP_RuntimeVirtualTextureOutputLevel", (int64)MEVP_RuntimeVirtualTextureOutputLevel },
		{ "MEVP_RuntimeVirtualTextureOutputDerivative", (int64)MEVP_RuntimeVirtualTextureOutputDerivative },
		{ "MEVP_PreExposure", (int64)MEVP_PreExposure },
		{ "MEVP_RuntimeVirtualTextureMaxLevel", (int64)MEVP_RuntimeVirtualTextureMaxLevel },
		{ "MEVP_ResolutionFraction", (int64)MEVP_ResolutionFraction },
		{ "MEVP_MAX", (int64)MEVP_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMaterialExposedViewProperty_Statics::Enum_MetaDataParams[] = {
		{ "MEVP_BufferSize.Comment", "/** Horizontal and vertical size of the view's buffer in pixels */" },
		{ "MEVP_BufferSize.DisplayName", "Render Target Size" },
		{ "MEVP_BufferSize.Name", "MEVP_BufferSize" },
		{ "MEVP_BufferSize.ToolTip", "Horizontal and vertical size of the view's buffer in pixels" },
		{ "MEVP_FieldOfView.Comment", "/** Horizontal and vertical field of view angles in radian */" },
		{ "MEVP_FieldOfView.DisplayName", "Field Of View" },
		{ "MEVP_FieldOfView.Name", "MEVP_FieldOfView" },
		{ "MEVP_FieldOfView.ToolTip", "Horizontal and vertical field of view angles in radian" },
		{ "MEVP_MAX.Name", "MEVP_MAX" },
		{ "MEVP_PreExposure.Comment", "/** Pre Exposure */" },
		{ "MEVP_PreExposure.DisplayName", "Pre-Exposure" },
		{ "MEVP_PreExposure.Name", "MEVP_PreExposure" },
		{ "MEVP_PreExposure.ToolTip", "Pre Exposure" },
		{ "MEVP_ResolutionFraction.Comment", "/** Screen percentage at which the rendering resolution happens, to allow tech-art to remain consistent with dynamic resolution. */" },
		{ "MEVP_ResolutionFraction.DisplayName", "ScreenPercentage / 100" },
		{ "MEVP_ResolutionFraction.Name", "MEVP_ResolutionFraction" },
		{ "MEVP_ResolutionFraction.ToolTip", "Screen percentage at which the rendering resolution happens, to allow tech-art to remain consistent with dynamic resolution." },
		{ "MEVP_RuntimeVirtualTextureMaxLevel.Comment", "/** Maximum mip level of Runtime Virtual Texture that Runtime Virtual Texture Output is rendering to. */" },
		{ "MEVP_RuntimeVirtualTextureMaxLevel.DisplayName", "Virtual Texture Max Level" },
		{ "MEVP_RuntimeVirtualTextureMaxLevel.Name", "MEVP_RuntimeVirtualTextureMaxLevel" },
		{ "MEVP_RuntimeVirtualTextureMaxLevel.ToolTip", "Maximum mip level of Runtime Virtual Texture that Runtime Virtual Texture Output is rendering to." },
		{ "MEVP_RuntimeVirtualTextureOutputDerivative.Comment", "/** World space derivatives for Runtime Virtual Texture Output. */" },
		{ "MEVP_RuntimeVirtualTextureOutputDerivative.DisplayName", "Virtual Texture Output Derivative" },
		{ "MEVP_RuntimeVirtualTextureOutputDerivative.Name", "MEVP_RuntimeVirtualTextureOutputDerivative" },
		{ "MEVP_RuntimeVirtualTextureOutputDerivative.ToolTip", "World space derivatives for Runtime Virtual Texture Output." },
		{ "MEVP_RuntimeVirtualTextureOutputLevel.Comment", "/** Mip Level that Runtime Virtual Texture Output is rendering to. */" },
		{ "MEVP_RuntimeVirtualTextureOutputLevel.DisplayName", "Virtual Texture Output Level" },
		{ "MEVP_RuntimeVirtualTextureOutputLevel.Name", "MEVP_RuntimeVirtualTextureOutputLevel" },
		{ "MEVP_RuntimeVirtualTextureOutputLevel.ToolTip", "Mip Level that Runtime Virtual Texture Output is rendering to." },
		{ "MEVP_TanHalfFieldOfView.Comment", "/** Tan(FieldOfView * 0.5) */" },
		{ "MEVP_TanHalfFieldOfView.DisplayName", "Tan(0.5 * Field Of View)" },
		{ "MEVP_TanHalfFieldOfView.Name", "MEVP_TanHalfFieldOfView" },
		{ "MEVP_TanHalfFieldOfView.ToolTip", "Tan(FieldOfView * 0.5)" },
		{ "MEVP_TemporalSampleCount.Comment", "/** Number of temporal AA sample used across multiple to converge to anti aliased output. */" },
		{ "MEVP_TemporalSampleCount.DisplayName", "Temporal Sample Count" },
		{ "MEVP_TemporalSampleCount.Name", "MEVP_TemporalSampleCount" },
		{ "MEVP_TemporalSampleCount.ToolTip", "Number of temporal AA sample used across multiple to converge to anti aliased output." },
		{ "MEVP_TemporalSampleIndex.Comment", "/** Index of the Temporal AA jitter for this frame. */" },
		{ "MEVP_TemporalSampleIndex.DisplayName", "Temporal Sample Index" },
		{ "MEVP_TemporalSampleIndex.Name", "MEVP_TemporalSampleIndex" },
		{ "MEVP_TemporalSampleIndex.ToolTip", "Index of the Temporal AA jitter for this frame." },
		{ "MEVP_TemporalSampleOffset.Comment", "/** Offset of the temporal sample for this frame in pixel size. */" },
		{ "MEVP_TemporalSampleOffset.DisplayName", "Temporal Sample Offset" },
		{ "MEVP_TemporalSampleOffset.Name", "MEVP_TemporalSampleOffset" },
		{ "MEVP_TemporalSampleOffset.ToolTip", "Offset of the temporal sample for this frame in pixel size." },
		{ "MEVP_ViewportOffset.Comment", "/** Horizontal and vertical position of the viewport in pixels within the buffer. */" },
		{ "MEVP_ViewportOffset.DisplayName", "Viewport Offset" },
		{ "MEVP_ViewportOffset.Name", "MEVP_ViewportOffset" },
		{ "MEVP_ViewportOffset.ToolTip", "Horizontal and vertical position of the viewport in pixels within the buffer." },
		{ "MEVP_ViewSize.Comment", "/** Horizontal and vertical size of the view in pixels */" },
		{ "MEVP_ViewSize.DisplayName", "View Size" },
		{ "MEVP_ViewSize.Name", "MEVP_ViewSize" },
		{ "MEVP_ViewSize.ToolTip", "Horizontal and vertical size of the view in pixels" },
		{ "MEVP_WorldSpaceCameraPosition.Comment", "/** Absolute world space camera position */" },
		{ "MEVP_WorldSpaceCameraPosition.DisplayName", "Camera Position (Absolute World Space)" },
		{ "MEVP_WorldSpaceCameraPosition.Name", "MEVP_WorldSpaceCameraPosition" },
		{ "MEVP_WorldSpaceCameraPosition.ToolTip", "Absolute world space camera position" },
		{ "MEVP_WorldSpaceViewPosition.Comment", "/** Absolute world space view position (differs from the camera position in the shadow passes) */" },
		{ "MEVP_WorldSpaceViewPosition.DisplayName", "View Position (Absolute World Space)" },
		{ "MEVP_WorldSpaceViewPosition.Name", "MEVP_WorldSpaceViewPosition" },
		{ "MEVP_WorldSpaceViewPosition.ToolTip", "Absolute world space view position (differs from the camera position in the shadow passes)" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionViewProperty.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMaterialExposedViewProperty_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMaterialExposedViewProperty",
		"EMaterialExposedViewProperty",
		Z_Construct_UEnum_Engine_EMaterialExposedViewProperty_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialExposedViewProperty_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMaterialExposedViewProperty_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialExposedViewProperty_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMaterialExposedViewProperty()
	{
		if (!Z_Registration_Info_UEnum_EMaterialExposedViewProperty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialExposedViewProperty.InnerSingleton, Z_Construct_UEnum_Engine_EMaterialExposedViewProperty_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMaterialExposedViewProperty.InnerSingleton;
	}
	void UMaterialExpressionViewProperty::StaticRegisterNativesUMaterialExpressionViewProperty()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionViewProperty);
	UClass* Z_Construct_UClass_UMaterialExpressionViewProperty_NoRegister()
	{
		return UMaterialExpressionViewProperty::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionViewProperty_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Property;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionViewProperty_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionViewProperty_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionViewProperty.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionViewProperty.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionViewProperty_Statics::NewProp_Property_MetaData[] = {
		{ "Category", "UMaterialExpressionViewProperty" },
		{ "Comment", "/** View input property to be accessed */" },
		{ "DisplayName", "View Property" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionViewProperty.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "View input property to be accessed" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionViewProperty_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionViewProperty, Property), Z_Construct_UEnum_Engine_EMaterialExposedViewProperty, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionViewProperty_Statics::NewProp_Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionViewProperty_Statics::NewProp_Property_MetaData)) }; // 1048431451
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionViewProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionViewProperty_Statics::NewProp_Property,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionViewProperty_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionViewProperty>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionViewProperty_Statics::ClassParams = {
		&UMaterialExpressionViewProperty::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionViewProperty_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionViewProperty_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionViewProperty_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionViewProperty_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionViewProperty()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionViewProperty.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionViewProperty.OuterSingleton, Z_Construct_UClass_UMaterialExpressionViewProperty_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionViewProperty.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionViewProperty>()
	{
		return UMaterialExpressionViewProperty::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionViewProperty);
	UMaterialExpressionViewProperty::~UMaterialExpressionViewProperty() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewProperty_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewProperty_h_Statics::EnumInfo[] = {
		{ EMaterialExposedViewProperty_StaticEnum, TEXT("EMaterialExposedViewProperty"), &Z_Registration_Info_UEnum_EMaterialExposedViewProperty, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1048431451U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewProperty_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionViewProperty, UMaterialExpressionViewProperty::StaticClass, TEXT("UMaterialExpressionViewProperty"), &Z_Registration_Info_UClass_UMaterialExpressionViewProperty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionViewProperty), 3540090042U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewProperty_h_3623754466(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewProperty_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewProperty_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewProperty_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewProperty_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
