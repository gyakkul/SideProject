// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Scene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScene() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UScene();
	ENGINE_API UClass* Z_Construct_UClass_UScene_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAutoExposureMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBloomMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDepthOfFieldMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDynamicGlobalIlluminationMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightUnits();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELumenRayLightingModeOverride();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMobilePixelProjectedReflectionQuality();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMobilePlanarReflectionMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERayTracingGlobalIlluminationType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EReflectedAndRefractedRayTracedShadows();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EReflectionMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EReflectionsType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETemperatureMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETranslucencyType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraExposureSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FColorGradePerRangeSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FColorGradingSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConvolutionBloomSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilmStockSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGaussianSumBloomSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLensBloomSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLensImperfectionSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLensSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWeightedBlendable();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWeightedBlendables();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDepthOfFieldMethod;
	static UEnum* EDepthOfFieldMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDepthOfFieldMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDepthOfFieldMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDepthOfFieldMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EDepthOfFieldMethod"));
		}
		return Z_Registration_Info_UEnum_EDepthOfFieldMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EDepthOfFieldMethod>()
	{
		return EDepthOfFieldMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EDepthOfFieldMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EDepthOfFieldMethod_Statics::Enumerators[] = {
		{ "DOFM_BokehDOF", (int64)DOFM_BokehDOF },
		{ "DOFM_Gaussian", (int64)DOFM_Gaussian },
		{ "DOFM_CircleDOF", (int64)DOFM_CircleDOF },
		{ "DOFM_MAX", (int64)DOFM_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EDepthOfFieldMethod_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Used by FPostProcessSettings Depth of Fields */" },
		{ "DOFM_BokehDOF.DisplayName", "BokehDOF" },
		{ "DOFM_BokehDOF.Name", "DOFM_BokehDOF" },
		{ "DOFM_CircleDOF.DisplayName", "CircleDOF" },
		{ "DOFM_CircleDOF.Name", "DOFM_CircleDOF" },
		{ "DOFM_Gaussian.DisplayName", "GaussianDOF" },
		{ "DOFM_Gaussian.Name", "DOFM_Gaussian" },
		{ "DOFM_MAX.Name", "DOFM_MAX" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Used by FPostProcessSettings Depth of Fields" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EDepthOfFieldMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EDepthOfFieldMethod",
		"EDepthOfFieldMethod",
		Z_Construct_UEnum_Engine_EDepthOfFieldMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDepthOfFieldMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EDepthOfFieldMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDepthOfFieldMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EDepthOfFieldMethod()
	{
		if (!Z_Registration_Info_UEnum_EDepthOfFieldMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDepthOfFieldMethod.InnerSingleton, Z_Construct_UEnum_Engine_EDepthOfFieldMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDepthOfFieldMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAutoExposureMethod;
	static UEnum* EAutoExposureMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAutoExposureMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAutoExposureMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAutoExposureMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAutoExposureMethod"));
		}
		return Z_Registration_Info_UEnum_EAutoExposureMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAutoExposureMethod>()
	{
		return EAutoExposureMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EAutoExposureMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EAutoExposureMethod_Statics::Enumerators[] = {
		{ "AEM_Histogram", (int64)AEM_Histogram },
		{ "AEM_Basic", (int64)AEM_Basic },
		{ "AEM_Manual", (int64)AEM_Manual },
		{ "AEM_MAX", (int64)AEM_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EAutoExposureMethod_Statics::Enum_MetaDataParams[] = {
		{ "AEM_Basic.Comment", "/** faster method that computes single value by downsampling */" },
		{ "AEM_Basic.DisplayName", "Auto Exposure Basic" },
		{ "AEM_Basic.Name", "AEM_Basic" },
		{ "AEM_Basic.ToolTip", "faster method that computes single value by downsampling" },
		{ "AEM_Histogram.Comment", "/** requires compute shader to construct 64 bin histogram */" },
		{ "AEM_Histogram.DisplayName", "Auto Exposure Histogram" },
		{ "AEM_Histogram.Name", "AEM_Histogram" },
		{ "AEM_Histogram.ToolTip", "requires compute shader to construct 64 bin histogram" },
		{ "AEM_Manual.Comment", "/** Uses camera settings. */" },
		{ "AEM_Manual.DisplayName", "Manual" },
		{ "AEM_Manual.Name", "AEM_Manual" },
		{ "AEM_Manual.ToolTip", "Uses camera settings." },
		{ "AEM_MAX.Name", "AEM_MAX" },
		{ "Comment", "/** Used by FPostProcessSettings Auto Exposure */" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Used by FPostProcessSettings Auto Exposure" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAutoExposureMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EAutoExposureMethod",
		"EAutoExposureMethod",
		Z_Construct_UEnum_Engine_EAutoExposureMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAutoExposureMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EAutoExposureMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAutoExposureMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EAutoExposureMethod()
	{
		if (!Z_Registration_Info_UEnum_EAutoExposureMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAutoExposureMethod.InnerSingleton, Z_Construct_UEnum_Engine_EAutoExposureMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAutoExposureMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBloomMethod;
	static UEnum* EBloomMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBloomMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBloomMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBloomMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EBloomMethod"));
		}
		return Z_Registration_Info_UEnum_EBloomMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBloomMethod>()
	{
		return EBloomMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EBloomMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EBloomMethod_Statics::Enumerators[] = {
		{ "BM_SOG", (int64)BM_SOG },
		{ "BM_FFT", (int64)BM_FFT },
		{ "BM_MAX", (int64)BM_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EBloomMethod_Statics::Enum_MetaDataParams[] = {
		{ "BM_FFT.Comment", "/** Fast Fourier Transform Image based convolution, intended for cinematics (too expensive for games)  */" },
		{ "BM_FFT.DisplayName", "Convolution" },
		{ "BM_FFT.Name", "BM_FFT" },
		{ "BM_FFT.ToolTip", "Fast Fourier Transform Image based convolution, intended for cinematics (too expensive for games)" },
		{ "BM_MAX.Name", "BM_MAX" },
		{ "BM_SOG.Comment", "/** Sum of Gaussian formulation */" },
		{ "BM_SOG.DisplayName", "Standard" },
		{ "BM_SOG.Name", "BM_SOG" },
		{ "BM_SOG.ToolTip", "Sum of Gaussian formulation" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EBloomMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EBloomMethod",
		"EBloomMethod",
		Z_Construct_UEnum_Engine_EBloomMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBloomMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EBloomMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBloomMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EBloomMethod()
	{
		if (!Z_Registration_Info_UEnum_EBloomMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBloomMethod.InnerSingleton, Z_Construct_UEnum_Engine_EBloomMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBloomMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETemperatureMethod;
	static UEnum* ETemperatureMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETemperatureMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETemperatureMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETemperatureMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETemperatureMethod"));
		}
		return Z_Registration_Info_UEnum_ETemperatureMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETemperatureMethod>()
	{
		return ETemperatureMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETemperatureMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETemperatureMethod_Statics::Enumerators[] = {
		{ "TEMP_WhiteBalance", (int64)TEMP_WhiteBalance },
		{ "TEMP_ColorTemperature", (int64)TEMP_ColorTemperature },
		{ "TEMP_MAX", (int64)TEMP_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETemperatureMethod_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Used by FPostProcessSettings to determine Temperature calculation method. */" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "TEMP_ColorTemperature.DisplayName", "Color Temperature" },
		{ "TEMP_ColorTemperature.Name", "TEMP_ColorTemperature" },
		{ "TEMP_MAX.Name", "TEMP_MAX" },
		{ "TEMP_WhiteBalance.DisplayName", "White Balance" },
		{ "TEMP_WhiteBalance.Name", "TEMP_WhiteBalance" },
		{ "ToolTip", "Used by FPostProcessSettings to determine Temperature calculation method." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETemperatureMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETemperatureMethod",
		"ETemperatureMethod",
		Z_Construct_UEnum_Engine_ETemperatureMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETemperatureMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETemperatureMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETemperatureMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETemperatureMethod()
	{
		if (!Z_Registration_Info_UEnum_ETemperatureMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETemperatureMethod.InnerSingleton, Z_Construct_UEnum_Engine_ETemperatureMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETemperatureMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELightUnits;
	static UEnum* ELightUnits_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELightUnits.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELightUnits.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELightUnits, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ELightUnits"));
		}
		return Z_Registration_Info_UEnum_ELightUnits.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ELightUnits>()
	{
		return ELightUnits_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ELightUnits_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ELightUnits_Statics::Enumerators[] = {
		{ "ELightUnits::Unitless", (int64)ELightUnits::Unitless },
		{ "ELightUnits::Candelas", (int64)ELightUnits::Candelas },
		{ "ELightUnits::Lumens", (int64)ELightUnits::Lumens },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ELightUnits_Statics::Enum_MetaDataParams[] = {
		{ "Candelas.Name", "ELightUnits::Candelas" },
		{ "Lumens.Name", "ELightUnits::Lumens" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "Unitless.Name", "ELightUnits::Unitless" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ELightUnits_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ELightUnits",
		"ELightUnits",
		Z_Construct_UEnum_Engine_ELightUnits_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELightUnits_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ELightUnits_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELightUnits_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ELightUnits()
	{
		if (!Z_Registration_Info_UEnum_ELightUnits.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELightUnits.InnerSingleton, Z_Construct_UEnum_Engine_ELightUnits_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELightUnits.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReflectionsType;
	static UEnum* EReflectionsType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EReflectionsType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EReflectionsType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EReflectionsType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EReflectionsType"));
		}
		return Z_Registration_Info_UEnum_EReflectionsType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EReflectionsType>()
	{
		return EReflectionsType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EReflectionsType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EReflectionsType_Statics::Enumerators[] = {
		{ "EReflectionsType::ScreenSpace", (int64)EReflectionsType::ScreenSpace },
		{ "EReflectionsType::RayTracing", (int64)EReflectionsType::RayTracing },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EReflectionsType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "RayTracing.DisplayName", "Ray Tracing" },
		{ "RayTracing.Name", "EReflectionsType::RayTracing" },
		{ "ScreenSpace.DisplayName", "Screen Space" },
		{ "ScreenSpace.Name", "EReflectionsType::ScreenSpace" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EReflectionsType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EReflectionsType",
		"EReflectionsType",
		Z_Construct_UEnum_Engine_EReflectionsType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EReflectionsType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EReflectionsType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EReflectionsType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EReflectionsType()
	{
		if (!Z_Registration_Info_UEnum_EReflectionsType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReflectionsType.InnerSingleton, Z_Construct_UEnum_Engine_EReflectionsType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EReflectionsType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELumenRayLightingModeOverride;
	static UEnum* ELumenRayLightingModeOverride_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELumenRayLightingModeOverride.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELumenRayLightingModeOverride.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELumenRayLightingModeOverride, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ELumenRayLightingModeOverride"));
		}
		return Z_Registration_Info_UEnum_ELumenRayLightingModeOverride.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ELumenRayLightingModeOverride>()
	{
		return ELumenRayLightingModeOverride_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ELumenRayLightingModeOverride_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ELumenRayLightingModeOverride_Statics::Enumerators[] = {
		{ "ELumenRayLightingModeOverride::Default", (int64)ELumenRayLightingModeOverride::Default },
		{ "ELumenRayLightingModeOverride::SurfaceCache", (int64)ELumenRayLightingModeOverride::SurfaceCache },
		{ "ELumenRayLightingModeOverride::HitLighting", (int64)ELumenRayLightingModeOverride::HitLighting },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ELumenRayLightingModeOverride_Statics::Enum_MetaDataParams[] = {
		{ "Default.Comment", "/* Use the project default method */" },
		{ "Default.DisplayName", "Project Default" },
		{ "Default.Name", "ELumenRayLightingModeOverride::Default" },
		{ "Default.ToolTip", "Use the project default method" },
		{ "HitLighting.Comment", "/* Calculate lighting at the ray hit point.  This method gives the highest reflection quality, but greatly increases GPU cost, as the material needs to be evaluated and shadow rays traced.  The Surface Cache will still be used for Diffuse Indirect lighting (GI seen in Reflections). */" },
		{ "HitLighting.DisplayName", "Hit Lighting for Reflections" },
		{ "HitLighting.Name", "ELumenRayLightingModeOverride::HitLighting" },
		{ "HitLighting.ToolTip", "Calculate lighting at the ray hit point.  This method gives the highest reflection quality, but greatly increases GPU cost, as the material needs to be evaluated and shadow rays traced.  The Surface Cache will still be used for Diffuse Indirect lighting (GI seen in Reflections)." },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "SurfaceCache.Comment", "/* Use the Lumen Surface Cache to light reflection rays.  This method gives the best reflection performance. */" },
		{ "SurfaceCache.DisplayName", "Surface Cache" },
		{ "SurfaceCache.Name", "ELumenRayLightingModeOverride::SurfaceCache" },
		{ "SurfaceCache.ToolTip", "Use the Lumen Surface Cache to light reflection rays.  This method gives the best reflection performance." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ELumenRayLightingModeOverride_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ELumenRayLightingModeOverride",
		"ELumenRayLightingModeOverride",
		Z_Construct_UEnum_Engine_ELumenRayLightingModeOverride_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELumenRayLightingModeOverride_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ELumenRayLightingModeOverride_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELumenRayLightingModeOverride_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ELumenRayLightingModeOverride()
	{
		if (!Z_Registration_Info_UEnum_ELumenRayLightingModeOverride.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELumenRayLightingModeOverride.InnerSingleton, Z_Construct_UEnum_Engine_ELumenRayLightingModeOverride_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELumenRayLightingModeOverride.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETranslucencyType;
	static UEnum* ETranslucencyType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETranslucencyType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETranslucencyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETranslucencyType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETranslucencyType"));
		}
		return Z_Registration_Info_UEnum_ETranslucencyType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETranslucencyType>()
	{
		return ETranslucencyType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETranslucencyType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETranslucencyType_Statics::Enumerators[] = {
		{ "ETranslucencyType::Raster", (int64)ETranslucencyType::Raster },
		{ "ETranslucencyType::RayTracing", (int64)ETranslucencyType::RayTracing },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETranslucencyType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "Raster.DisplayName", "Raster" },
		{ "Raster.Name", "ETranslucencyType::Raster" },
		{ "RayTracing.DisplayName", "Ray Tracing" },
		{ "RayTracing.Name", "ETranslucencyType::RayTracing" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETranslucencyType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETranslucencyType",
		"ETranslucencyType",
		Z_Construct_UEnum_Engine_ETranslucencyType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETranslucencyType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETranslucencyType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETranslucencyType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETranslucencyType()
	{
		if (!Z_Registration_Info_UEnum_ETranslucencyType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETranslucencyType.InnerSingleton, Z_Construct_UEnum_Engine_ETranslucencyType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETranslucencyType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERayTracingGlobalIlluminationType;
	static UEnum* ERayTracingGlobalIlluminationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERayTracingGlobalIlluminationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERayTracingGlobalIlluminationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERayTracingGlobalIlluminationType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ERayTracingGlobalIlluminationType"));
		}
		return Z_Registration_Info_UEnum_ERayTracingGlobalIlluminationType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ERayTracingGlobalIlluminationType>()
	{
		return ERayTracingGlobalIlluminationType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ERayTracingGlobalIlluminationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ERayTracingGlobalIlluminationType_Statics::Enumerators[] = {
		{ "ERayTracingGlobalIlluminationType::Disabled", (int64)ERayTracingGlobalIlluminationType::Disabled },
		{ "ERayTracingGlobalIlluminationType::BruteForce", (int64)ERayTracingGlobalIlluminationType::BruteForce },
		{ "ERayTracingGlobalIlluminationType::FinalGather", (int64)ERayTracingGlobalIlluminationType::FinalGather },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ERayTracingGlobalIlluminationType_Statics::Enum_MetaDataParams[] = {
		{ "BruteForce.DisplayName", "Brute Force" },
		{ "BruteForce.Name", "ERayTracingGlobalIlluminationType::BruteForce" },
		{ "Disabled.DisplayName", "Disabled" },
		{ "Disabled.Name", "ERayTracingGlobalIlluminationType::Disabled" },
		{ "FinalGather.DisplayName", "Final Gather" },
		{ "FinalGather.Name", "ERayTracingGlobalIlluminationType::FinalGather" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ERayTracingGlobalIlluminationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ERayTracingGlobalIlluminationType",
		"ERayTracingGlobalIlluminationType",
		Z_Construct_UEnum_Engine_ERayTracingGlobalIlluminationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERayTracingGlobalIlluminationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ERayTracingGlobalIlluminationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERayTracingGlobalIlluminationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ERayTracingGlobalIlluminationType()
	{
		if (!Z_Registration_Info_UEnum_ERayTracingGlobalIlluminationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERayTracingGlobalIlluminationType.InnerSingleton, Z_Construct_UEnum_Engine_ERayTracingGlobalIlluminationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERayTracingGlobalIlluminationType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReflectedAndRefractedRayTracedShadows;
	static UEnum* EReflectedAndRefractedRayTracedShadows_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EReflectedAndRefractedRayTracedShadows.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EReflectedAndRefractedRayTracedShadows.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EReflectedAndRefractedRayTracedShadows, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EReflectedAndRefractedRayTracedShadows"));
		}
		return Z_Registration_Info_UEnum_EReflectedAndRefractedRayTracedShadows.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EReflectedAndRefractedRayTracedShadows>()
	{
		return EReflectedAndRefractedRayTracedShadows_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EReflectedAndRefractedRayTracedShadows_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EReflectedAndRefractedRayTracedShadows_Statics::Enumerators[] = {
		{ "EReflectedAndRefractedRayTracedShadows::Disabled", (int64)EReflectedAndRefractedRayTracedShadows::Disabled },
		{ "EReflectedAndRefractedRayTracedShadows::Hard_shadows", (int64)EReflectedAndRefractedRayTracedShadows::Hard_shadows },
		{ "EReflectedAndRefractedRayTracedShadows::Area_shadows", (int64)EReflectedAndRefractedRayTracedShadows::Area_shadows },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EReflectedAndRefractedRayTracedShadows_Statics::Enum_MetaDataParams[] = {
		{ "Area_shadows.DisplayName", "Area Shadows" },
		{ "Area_shadows.Name", "EReflectedAndRefractedRayTracedShadows::Area_shadows" },
		{ "Disabled.DisplayName", "Disabled" },
		{ "Disabled.Name", "EReflectedAndRefractedRayTracedShadows::Disabled" },
		{ "Hard_shadows.DisplayName", "Hard Shadows" },
		{ "Hard_shadows.Name", "EReflectedAndRefractedRayTracedShadows::Hard_shadows" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EReflectedAndRefractedRayTracedShadows_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EReflectedAndRefractedRayTracedShadows",
		"EReflectedAndRefractedRayTracedShadows",
		Z_Construct_UEnum_Engine_EReflectedAndRefractedRayTracedShadows_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EReflectedAndRefractedRayTracedShadows_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EReflectedAndRefractedRayTracedShadows_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EReflectedAndRefractedRayTracedShadows_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EReflectedAndRefractedRayTracedShadows()
	{
		if (!Z_Registration_Info_UEnum_EReflectedAndRefractedRayTracedShadows.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReflectedAndRefractedRayTracedShadows.InnerSingleton, Z_Construct_UEnum_Engine_EReflectedAndRefractedRayTracedShadows_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EReflectedAndRefractedRayTracedShadows.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMobilePlanarReflectionMode;
	static UEnum* EMobilePlanarReflectionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMobilePlanarReflectionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMobilePlanarReflectionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMobilePlanarReflectionMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMobilePlanarReflectionMode"));
		}
		return Z_Registration_Info_UEnum_EMobilePlanarReflectionMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMobilePlanarReflectionMode::Type>()
	{
		return EMobilePlanarReflectionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMobilePlanarReflectionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMobilePlanarReflectionMode_Statics::Enumerators[] = {
		{ "EMobilePlanarReflectionMode::Usual", (int64)EMobilePlanarReflectionMode::Usual },
		{ "EMobilePlanarReflectionMode::MobilePPRExclusive", (int64)EMobilePlanarReflectionMode::MobilePPRExclusive },
		{ "EMobilePlanarReflectionMode::MobilePPR", (int64)EMobilePlanarReflectionMode::MobilePPR },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMobilePlanarReflectionMode_Statics::Enum_MetaDataParams[] = {
		{ "MobilePPR.DisplayName", "MobilePPR" },
		{ "MobilePPR.Name", "EMobilePlanarReflectionMode::MobilePPR" },
		{ "MobilePPR.ToolTip", "The PlanarReflection actor still works as usual on PC/Console platform and is used for mobile pixel projected reflection on mobile platform. MobileMSAA will be disabled as a side effect." },
		{ "MobilePPRExclusive.DisplayName", "MobilePPR Exclusive" },
		{ "MobilePPRExclusive.Name", "EMobilePlanarReflectionMode::MobilePPRExclusive" },
		{ "MobilePPRExclusive.ToolTip", "The PlanarReflection actor is only used for mobile pixel projection reflection, it will not affect PC/Console. MobileMSAA will be disabled as a side effect." },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "Usual.DisplayName", "Usual" },
		{ "Usual.Name", "EMobilePlanarReflectionMode::Usual" },
		{ "Usual.ToolTip", "The PlanarReflection actor works as usual on all platforms." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMobilePlanarReflectionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMobilePlanarReflectionMode",
		"EMobilePlanarReflectionMode::Type",
		Z_Construct_UEnum_Engine_EMobilePlanarReflectionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMobilePlanarReflectionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMobilePlanarReflectionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMobilePlanarReflectionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMobilePlanarReflectionMode()
	{
		if (!Z_Registration_Info_UEnum_EMobilePlanarReflectionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMobilePlanarReflectionMode.InnerSingleton, Z_Construct_UEnum_Engine_EMobilePlanarReflectionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMobilePlanarReflectionMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMobilePixelProjectedReflectionQuality;
	static UEnum* EMobilePixelProjectedReflectionQuality_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMobilePixelProjectedReflectionQuality.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMobilePixelProjectedReflectionQuality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMobilePixelProjectedReflectionQuality, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMobilePixelProjectedReflectionQuality"));
		}
		return Z_Registration_Info_UEnum_EMobilePixelProjectedReflectionQuality.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMobilePixelProjectedReflectionQuality::Type>()
	{
		return EMobilePixelProjectedReflectionQuality_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMobilePixelProjectedReflectionQuality_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMobilePixelProjectedReflectionQuality_Statics::Enumerators[] = {
		{ "EMobilePixelProjectedReflectionQuality::Disabled", (int64)EMobilePixelProjectedReflectionQuality::Disabled },
		{ "EMobilePixelProjectedReflectionQuality::BestPerformance", (int64)EMobilePixelProjectedReflectionQuality::BestPerformance },
		{ "EMobilePixelProjectedReflectionQuality::BetterQuality", (int64)EMobilePixelProjectedReflectionQuality::BetterQuality },
		{ "EMobilePixelProjectedReflectionQuality::BestQuality", (int64)EMobilePixelProjectedReflectionQuality::BestQuality },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMobilePixelProjectedReflectionQuality_Statics::Enum_MetaDataParams[] = {
		{ "BestPerformance.DisplayName", "Best Performance" },
		{ "BestPerformance.Name", "EMobilePixelProjectedReflectionQuality::BestPerformance" },
		{ "BestPerformance.ToolTip", "Best performance but may have some artifacts in some view angles." },
		{ "BestQuality.DisplayName", "Best Quality" },
		{ "BestQuality.Name", "EMobilePixelProjectedReflectionQuality::BestQuality" },
		{ "BestQuality.ToolTip", "Best quality but will be much heavier." },
		{ "BetterQuality.DisplayName", "Better Quality" },
		{ "BetterQuality.Name", "EMobilePixelProjectedReflectionQuality::BetterQuality" },
		{ "BetterQuality.ToolTip", "Better quality and reasonable performance and could fix some artifacts, but the PlanarReflection mesh has to render twice." },
		{ "Disabled.DisplayName", "Disabled" },
		{ "Disabled.Name", "EMobilePixelProjectedReflectionQuality::Disabled" },
		{ "Disabled.ToolTip", "Disabled." },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMobilePixelProjectedReflectionQuality_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMobilePixelProjectedReflectionQuality",
		"EMobilePixelProjectedReflectionQuality::Type",
		Z_Construct_UEnum_Engine_EMobilePixelProjectedReflectionQuality_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMobilePixelProjectedReflectionQuality_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMobilePixelProjectedReflectionQuality_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMobilePixelProjectedReflectionQuality_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMobilePixelProjectedReflectionQuality()
	{
		if (!Z_Registration_Info_UEnum_EMobilePixelProjectedReflectionQuality.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMobilePixelProjectedReflectionQuality.InnerSingleton, Z_Construct_UEnum_Engine_EMobilePixelProjectedReflectionQuality_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMobilePixelProjectedReflectionQuality.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ColorGradePerRangeSettings;
class UScriptStruct* FColorGradePerRangeSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ColorGradePerRangeSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ColorGradePerRangeSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FColorGradePerRangeSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ColorGradePerRangeSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ColorGradePerRangeSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FColorGradePerRangeSettings>()
{
	return FColorGradePerRangeSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Saturation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Saturation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Contrast_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Contrast;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gamma_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Gamma;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gain_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Gain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColorGradePerRangeSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Saturation_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "saturation" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Saturation" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Saturation = { "Saturation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FColorGradePerRangeSettings, Saturation), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Saturation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Saturation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Contrast_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "contrast" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Contrast" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Contrast = { "Contrast", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FColorGradePerRangeSettings, Contrast), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Contrast_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Contrast_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Gamma_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ClampMin", "0.01" },
		{ "ColorGradingMode", "gamma" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gamma" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Gamma = { "Gamma", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FColorGradePerRangeSettings, Gamma), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Gamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Gamma_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Gain_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "gain" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gain" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FColorGradePerRangeSettings, Gain), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Gain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Gain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "offset" },
		{ "Delta", "0.001" },
		{ "DisplayName", "Offset" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "20" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "SupportDynamicSliderMinValue", "true" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FColorGradePerRangeSettings, Offset), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Offset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Saturation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Contrast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Gamma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Gain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Offset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ColorGradePerRangeSettings",
		sizeof(FColorGradePerRangeSettings),
		alignof(FColorGradePerRangeSettings),
		Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FColorGradePerRangeSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ColorGradePerRangeSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ColorGradePerRangeSettings.InnerSingleton, Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ColorGradePerRangeSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ColorGradingSettings;
class UScriptStruct* FColorGradingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ColorGradingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ColorGradingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FColorGradingSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ColorGradingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ColorGradingSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FColorGradingSettings>()
{
	return FColorGradingSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FColorGradingSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Global_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Global;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shadows_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Shadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Midtones_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Midtones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Highlights_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Highlights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowsMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowsMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighlightsMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HighlightsMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighlightsMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HighlightsMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColorGradingSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Global_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Global = { "Global", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FColorGradingSettings, Global), Z_Construct_UScriptStruct_FColorGradePerRangeSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Global_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Global_MetaData)) }; // 3656756864
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Shadows_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Shadows = { "Shadows", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FColorGradingSettings, Shadows), Z_Construct_UScriptStruct_FColorGradePerRangeSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Shadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Shadows_MetaData)) }; // 3656756864
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Midtones_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Midtones = { "Midtones", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FColorGradingSettings, Midtones), Z_Construct_UScriptStruct_FColorGradePerRangeSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Midtones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Midtones_MetaData)) }; // 3656756864
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Highlights_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Highlights = { "Highlights", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FColorGradingSettings, Highlights), Z_Construct_UScriptStruct_FColorGradePerRangeSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Highlights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Highlights_MetaData)) }; // 3656756864
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_ShadowsMax_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "DisplayName", "ShadowsMax" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_ShadowsMax = { "ShadowsMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FColorGradingSettings, ShadowsMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_ShadowsMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_ShadowsMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_HighlightsMin_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "DisplayName", "HighlightsMin" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_HighlightsMin = { "HighlightsMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FColorGradingSettings, HighlightsMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_HighlightsMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_HighlightsMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_HighlightsMax_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "DisplayName", "HighlightsMax" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "10.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_HighlightsMax = { "HighlightsMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FColorGradingSettings, HighlightsMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_HighlightsMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_HighlightsMax_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColorGradingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Global,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Shadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Midtones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Highlights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_ShadowsMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_HighlightsMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_HighlightsMax,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColorGradingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ColorGradingSettings",
		sizeof(FColorGradingSettings),
		alignof(FColorGradingSettings),
		Z_Construct_UScriptStruct_FColorGradingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FColorGradingSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ColorGradingSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ColorGradingSettings.InnerSingleton, Z_Construct_UScriptStruct_FColorGradingSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ColorGradingSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FilmStockSettings;
class UScriptStruct* FFilmStockSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FilmStockSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FilmStockSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFilmStockSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("FilmStockSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FilmStockSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FFilmStockSettings>()
{
	return FFilmStockSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFilmStockSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slope_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Slope;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Toe_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Toe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shoulder_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Shoulder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackClip_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlackClip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WhiteClip_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WhiteClip;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilmStockSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFilmStockSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Slope_MetaData[] = {
		{ "Category", "Film Stock" },
		{ "DisplayName", "Slope" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Slope = { "Slope", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFilmStockSettings, Slope), METADATA_PARAMS(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Slope_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Slope_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Toe_MetaData[] = {
		{ "Category", "Film Stock" },
		{ "DisplayName", "Toe" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Toe = { "Toe", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFilmStockSettings, Toe), METADATA_PARAMS(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Toe_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Toe_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Shoulder_MetaData[] = {
		{ "Category", "Film Stock" },
		{ "DisplayName", "Shoulder" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Shoulder = { "Shoulder", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFilmStockSettings, Shoulder), METADATA_PARAMS(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Shoulder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Shoulder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_BlackClip_MetaData[] = {
		{ "Category", "Film Stock" },
		{ "DisplayName", "Black clip" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_BlackClip = { "BlackClip", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFilmStockSettings, BlackClip), METADATA_PARAMS(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_BlackClip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_BlackClip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_WhiteClip_MetaData[] = {
		{ "Category", "Film Stock" },
		{ "DisplayName", "White clip" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_WhiteClip = { "WhiteClip", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFilmStockSettings, WhiteClip), METADATA_PARAMS(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_WhiteClip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_WhiteClip_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFilmStockSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Slope,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Toe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Shoulder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_BlackClip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_WhiteClip,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFilmStockSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"FilmStockSettings",
		sizeof(FFilmStockSettings),
		alignof(FFilmStockSettings),
		Z_Construct_UScriptStruct_FFilmStockSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFilmStockSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_FilmStockSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FilmStockSettings.InnerSingleton, Z_Construct_UScriptStruct_FFilmStockSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FilmStockSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GaussianSumBloomSettings;
class UScriptStruct* FGaussianSumBloomSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GaussianSumBloomSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GaussianSumBloomSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGaussianSumBloomSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("GaussianSumBloomSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GaussianSumBloomSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FGaussianSumBloomSettings>()
{
	return FGaussianSumBloomSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Threshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SizeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter1Size_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Filter1Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter2Size_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Filter2Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter3Size_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Filter3Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter4Size_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Filter4Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter5Size_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Filter5Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter6Size_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Filter6Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter1Tint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filter1Tint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter2Tint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filter2Tint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter3Tint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filter3Tint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter4Tint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filter4Tint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter5Tint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filter5Tint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter6Tint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filter6Tint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGaussianSumBloomSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Multiplier for all bloom contributions >=0: off, 1(default), >1 brighter */" },
		{ "DisplayName", "Intensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Multiplier for all bloom contributions >=0: off, 1(default), >1 brighter" },
		{ "UIMax", "8.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGaussianSumBloomSettings, Intensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Threshold_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "/**\n\x09 * minimum brightness the bloom starts having effect\n\x09 * -1:all pixels affect bloom equally (physically correct, faster as a threshold pass is omitted), 0:all pixels affect bloom brights more, 1(default), >1 brighter\n\x09 */" },
		{ "DisplayName", "Threshold" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "minimum brightness the bloom starts having effect\n-1:all pixels affect bloom equally (physically correct, faster as a threshold pass is omitted), 0:all pixels affect bloom brights more, 1(default), >1 brighter" },
		{ "UIMax", "8.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGaussianSumBloomSettings, Threshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Threshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Threshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_SizeScale_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Scale for all bloom sizes\n\x09 */" },
		{ "DisplayName", "Size scale" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Scale for all bloom sizes" },
		{ "UIMax", "64.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_SizeScale = { "SizeScale", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGaussianSumBloomSettings, SizeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_SizeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_SizeScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter1Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Diameter size for the Bloom1 in percent of the screen width\n\x09 * (is done in 1/2 resolution, larger values cost more performance, good for high frequency details)\n\x09 * >=0: can be clamped because of shader limitations\n\x09 */" },
		{ "DisplayName", "#1 Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for the Bloom1 in percent of the screen width\n(is done in 1/2 resolution, larger values cost more performance, good for high frequency details)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "4.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter1Size = { "Filter1Size", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter1Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter1Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter1Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter2Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Diameter size for Bloom2 in percent of the screen width\n\x09 * (is done in 1/4 resolution, larger values cost more performance)\n\x09 * >=0: can be clamped because of shader limitations\n\x09 */" },
		{ "DisplayName", "#2 Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for Bloom2 in percent of the screen width\n(is done in 1/4 resolution, larger values cost more performance)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "8.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter2Size = { "Filter2Size", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter2Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter2Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter2Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter3Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Diameter size for Bloom3 in percent of the screen width\n\x09 * (is done in 1/8 resolution, larger values cost more performance)\n\x09 * >=0: can be clamped because of shader limitations\n\x09 */" },
		{ "DisplayName", "#3 Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for Bloom3 in percent of the screen width\n(is done in 1/8 resolution, larger values cost more performance)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "16.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter3Size = { "Filter3Size", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter3Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter3Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter3Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter4Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Diameter size for Bloom4 in percent of the screen width\n\x09 * (is done in 1/16 resolution, larger values cost more performance, best for wide contributions)\n\x09 * >=0: can be clamped because of shader limitations\n\x09 */" },
		{ "DisplayName", "#4 Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for Bloom4 in percent of the screen width\n(is done in 1/16 resolution, larger values cost more performance, best for wide contributions)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "32.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter4Size = { "Filter4Size", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter4Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter4Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter4Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter5Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Diameter size for Bloom5 in percent of the screen width\n\x09 * (is done in 1/32 resolution, larger values cost more performance, best for wide contributions)\n\x09 * >=0: can be clamped because of shader limitations\n\x09 */" },
		{ "DisplayName", "#5 Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for Bloom5 in percent of the screen width\n(is done in 1/32 resolution, larger values cost more performance, best for wide contributions)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "64.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter5Size = { "Filter5Size", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter5Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter5Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter5Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter6Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Diameter size for Bloom6 in percent of the screen width\n\x09 * (is done in 1/64 resolution, larger values cost more performance, best for wide contributions)\n\x09 * >=0: can be clamped because of shader limitations\n\x09 */" },
		{ "DisplayName", "#6 Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for Bloom6 in percent of the screen width\n(is done in 1/64 resolution, larger values cost more performance, best for wide contributions)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "128.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter6Size = { "Filter6Size", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter6Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter6Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter6Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter1Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "Comment", "/** Bloom1 tint color */" },
		{ "DisplayName", "#1 Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom1 tint color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter1Tint = { "Filter1Tint", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter1Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter1Tint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter1Tint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter2Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "Comment", "/** Bloom2 tint color */" },
		{ "DisplayName", "#2 Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom2 tint color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter2Tint = { "Filter2Tint", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter2Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter2Tint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter2Tint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter3Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "Comment", "/** Bloom3 tint color */" },
		{ "DisplayName", "#3 Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom3 tint color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter3Tint = { "Filter3Tint", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter3Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter3Tint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter3Tint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter4Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "Comment", "/** Bloom4 tint color */" },
		{ "DisplayName", "#4 Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom4 tint color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter4Tint = { "Filter4Tint", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter4Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter4Tint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter4Tint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter5Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "Comment", "/** Bloom5 tint color */" },
		{ "DisplayName", "#5 Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom5 tint color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter5Tint = { "Filter5Tint", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter5Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter5Tint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter5Tint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter6Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "Comment", "/** Bloom6 tint color */" },
		{ "DisplayName", "#6 Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom6 tint color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter6Tint = { "Filter6Tint", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter6Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter6Tint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter6Tint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Intensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Threshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_SizeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter1Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter2Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter3Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter4Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter5Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter6Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter1Tint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter2Tint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter3Tint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter4Tint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter5Tint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter6Tint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"GaussianSumBloomSettings",
		sizeof(FGaussianSumBloomSettings),
		alignof(FGaussianSumBloomSettings),
		Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGaussianSumBloomSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_GaussianSumBloomSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GaussianSumBloomSettings.InnerSingleton, Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GaussianSumBloomSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConvolutionBloomSettings;
class UScriptStruct* FConvolutionBloomSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConvolutionBloomSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConvolutionBloomSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConvolutionBloomSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ConvolutionBloomSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ConvolutionBloomSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FConvolutionBloomSettings>()
{
	return FConvolutionBloomSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScatterDispersion_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScatterDispersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterUV_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CenterUV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreFilterMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreFilterMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreFilterMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreFilterMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreFilterMult_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreFilterMult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BufferScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConvolutionBloomSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "Comment", "/** Texture to replace default convolution bloom kernel */" },
		{ "DisplayName", "Convolution Kernel" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Texture to replace default convolution bloom kernel" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConvolutionBloomSettings, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_ScatterDispersion_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Intensity multiplier on the scatter dispersion energy of the kernel. 1.0 means exactly use the same energy as the kernel scatter dispersion. */" },
		{ "DisplayName", "Scatter Dispersion" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Intensity multiplier on the scatter dispersion energy of the kernel. 1.0 means exactly use the same energy as the kernel scatter dispersion." },
		{ "UIMax", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_ScatterDispersion = { "ScatterDispersion", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConvolutionBloomSettings, ScatterDispersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_ScatterDispersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_ScatterDispersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Relative size of the convolution kernel image compared to the minor axis of the viewport  */" },
		{ "DisplayName", "Convolution Scale" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Relative size of the convolution kernel image compared to the minor axis of the viewport" },
		{ "UIMax", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConvolutionBloomSettings, Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_CenterUV_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "Comment", "/** The UV location of the center of the kernel.  Should be very close to (.5,.5) */" },
		{ "DisplayName", "Convolution Center" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "The UV location of the center of the kernel.  Should be very close to (.5,.5)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_CenterUV = { "CenterUV", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConvolutionBloomSettings, CenterUV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_CenterUV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_CenterUV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMin_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "Comment", "/** Boost intensity of select pixels  prior to computing bloom convolution (Min, Max, Multiplier).  Max < Min disables convolution boost */" },
		{ "DisplayName", "Convolution Boost Min" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Boost intensity of select pixels  prior to computing bloom convolution (Min, Max, Multiplier).  Max < Min disables convolution boost" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMin = { "PreFilterMin", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConvolutionBloomSettings, PreFilterMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMax_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "Comment", "/** Boost intensity of select pixels  prior to computing bloom convolution (Min, Max, Multiplier).  Max < Min disables convolution boost */" },
		{ "DisplayName", "Convolution Boost Max" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Boost intensity of select pixels  prior to computing bloom convolution (Min, Max, Multiplier).  Max < Min disables convolution boost" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMax = { "PreFilterMax", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConvolutionBloomSettings, PreFilterMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMult_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "Comment", "/** Boost intensity of select pixels  prior to computing bloom convolution (Min, Max, Multiplier).  Max < Min disables convolution boost */" },
		{ "DisplayName", "Convolution Boost Mult" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Boost intensity of select pixels  prior to computing bloom convolution (Min, Max, Multiplier).  Max < Min disables convolution boost" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMult = { "PreFilterMult", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConvolutionBloomSettings, PreFilterMult), METADATA_PARAMS(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_BufferScale_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Implicit buffer region as a fraction of the screen size to insure the bloom does not wrap across the screen.  Larger sizes have perf impact.*/" },
		{ "DisplayName", "Convolution Buffer" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Implicit buffer region as a fraction of the screen size to insure the bloom does not wrap across the screen.  Larger sizes have perf impact." },
		{ "UIMax", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_BufferScale = { "BufferScale", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConvolutionBloomSettings, BufferScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_BufferScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_BufferScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_ScatterDispersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_CenterUV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_BufferScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ConvolutionBloomSettings",
		sizeof(FConvolutionBloomSettings),
		alignof(FConvolutionBloomSettings),
		Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConvolutionBloomSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ConvolutionBloomSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConvolutionBloomSettings.InnerSingleton, Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConvolutionBloomSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LensBloomSettings;
class UScriptStruct* FLensBloomSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LensBloomSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LensBloomSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensBloomSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("LensBloomSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LensBloomSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLensBloomSettings>()
{
	return FLensBloomSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLensBloomSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GaussianSum_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GaussianSum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Convolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Convolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensBloomSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensBloomSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_GaussianSum_MetaData[] = {
		{ "Category", "Gaussian Sum Method" },
		{ "Comment", "/** Bloom gaussian sum method specific settings. */" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom gaussian sum method specific settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_GaussianSum = { "GaussianSum", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensBloomSettings, GaussianSum), Z_Construct_UScriptStruct_FGaussianSumBloomSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_GaussianSum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_GaussianSum_MetaData)) }; // 3328389366
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_Convolution_MetaData[] = {
		{ "Category", "Convolution Method" },
		{ "Comment", "/** Bloom convolution method specific settings. */" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom convolution method specific settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_Convolution = { "Convolution", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensBloomSettings, Convolution), Z_Construct_UScriptStruct_FConvolutionBloomSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_Convolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_Convolution_MetaData)) }; // 179829087
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "Comment", "/** Bloom algorithm */" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom algorithm" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensBloomSettings, Method), Z_Construct_UEnum_Engine_EBloomMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_Method_MetaData)) }; // 2938043131
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensBloomSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_GaussianSum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_Convolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_Method,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensBloomSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LensBloomSettings",
		sizeof(FLensBloomSettings),
		alignof(FLensBloomSettings),
		Z_Construct_UScriptStruct_FLensBloomSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensBloomSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLensBloomSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensBloomSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLensBloomSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LensBloomSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LensBloomSettings.InnerSingleton, Z_Construct_UScriptStruct_FLensBloomSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LensBloomSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LensImperfectionSettings;
class UScriptStruct* FLensImperfectionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LensImperfectionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LensImperfectionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensImperfectionSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("LensImperfectionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LensImperfectionSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLensImperfectionSettings>()
{
	return FLensImperfectionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirtMask_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DirtMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirtMaskIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DirtMaskIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirtMaskTint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirtMaskTint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensImperfectionSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMask_MetaData[] = {
		{ "Category", "Lens|Dirt Mask" },
		{ "Comment", "/**\n\x09 * Texture that defines the dirt on the camera lens where the light of very bright objects is scattered.\n\x09 */" },
		{ "DisplayName", "Dirt Mask Texture" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Texture that defines the dirt on the camera lens where the light of very bright objects is scattered." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMask = { "DirtMask", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensImperfectionSettings, DirtMask), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMaskIntensity_MetaData[] = {
		{ "Category", "Lens|Dirt Mask" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** BloomDirtMask intensity */" },
		{ "DisplayName", "Dirt Mask Intensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "BloomDirtMask intensity" },
		{ "UIMax", "8.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMaskIntensity = { "DirtMaskIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensImperfectionSettings, DirtMaskIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMaskIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMaskIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMaskTint_MetaData[] = {
		{ "Category", "Lens|Dirt Mask" },
		{ "Comment", "/** BloomDirtMask tint color */" },
		{ "DisplayName", "Dirt Mask Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "BloomDirtMask tint color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMaskTint = { "DirtMaskTint", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensImperfectionSettings, DirtMaskTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMaskTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMaskTint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMaskIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMaskTint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LensImperfectionSettings",
		sizeof(FLensImperfectionSettings),
		alignof(FLensImperfectionSettings),
		Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLensImperfectionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LensImperfectionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LensImperfectionSettings.InnerSingleton, Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LensImperfectionSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LensSettings;
class UScriptStruct* FLensSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LensSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LensSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("LensSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LensSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLensSettings>()
{
	return FLensSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLensSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bloom_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bloom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Imperfections_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Imperfections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChromaticAberration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChromaticAberration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLensSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_Bloom_MetaData[] = {
		{ "Category", "Lens" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_Bloom = { "Bloom", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensSettings, Bloom), Z_Construct_UScriptStruct_FLensBloomSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_Bloom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_Bloom_MetaData)) }; // 1102273861
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_Imperfections_MetaData[] = {
		{ "Category", "Lens" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_Imperfections = { "Imperfections", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensSettings, Imperfections), Z_Construct_UScriptStruct_FLensImperfectionSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_Imperfections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_Imperfections_MetaData)) }; // 1472182067
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_ChromaticAberration_MetaData[] = {
		{ "Category", "Lens" },
		{ "Comment", "/** in percent, Scene chromatic aberration / color fringe (camera imperfection) to simulate an artifact that happens in real-world lens, mostly visible in the image corners. */" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "in percent, Scene chromatic aberration / color fringe (camera imperfection) to simulate an artifact that happens in real-world lens, mostly visible in the image corners." },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_ChromaticAberration = { "ChromaticAberration", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensSettings, ChromaticAberration), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_ChromaticAberration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_ChromaticAberration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_Bloom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_Imperfections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_ChromaticAberration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LensSettings",
		sizeof(FLensSettings),
		alignof(FLensSettings),
		Z_Construct_UScriptStruct_FLensSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLensSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLensSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LensSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LensSettings.InnerSingleton, Z_Construct_UScriptStruct_FLensSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LensSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraExposureSettings;
class UScriptStruct* FCameraExposureSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraExposureSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraExposureSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraExposureSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CameraExposureSettings"));
	}
	return Z_Registration_Info_UScriptStruct_CameraExposureSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraExposureSettings>()
{
	return FCameraExposureSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCameraExposureSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LowPercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HighPercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinBrightness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinBrightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxBrightness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxBrightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedUp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedDown_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BiasCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BiasCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeterMask_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeterMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HistogramLogMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HistogramLogMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HistogramLogMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HistogramLogMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalibrationConstant_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CalibrationConstant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplyPhysicalCameraExposure_MetaData[];
#endif
		static void NewProp_ApplyPhysicalCameraExposure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ApplyPhysicalCameraExposure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraExposureSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "Exposure" },
		{ "Comment", "/** Luminance computation method */" },
		{ "DisplayName", "Method" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Luminance computation method" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraExposureSettings, Method), Z_Construct_UEnum_Engine_EAutoExposureMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_Method_MetaData)) }; // 1360730395
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_LowPercent_MetaData[] = {
		{ "Category", "Exposure" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * The eye adaptation will adapt to a value extracted from the luminance histogram of the scene color.\n\x09 * The value is defined as having x percent below this brightness. Higher values give bright spots on the screen more priority\n\x09 * but can lead to less stable results. Lower values give the medium and darker values more priority but might cause burn out of\n\x09 * bright spots.\n\x09 * >0, <100, good values are in the range 70 .. 80\n\x09 */" },
		{ "DisplayName", "Low Percent" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "The eye adaptation will adapt to a value extracted from the luminance histogram of the scene color.\nThe value is defined as having x percent below this brightness. Higher values give bright spots on the screen more priority\nbut can lead to less stable results. Lower values give the medium and darker values more priority but might cause burn out of\nbright spots.\n>0, <100, good values are in the range 70 .. 80" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_LowPercent = { "LowPercent", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraExposureSettings, LowPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_LowPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_LowPercent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HighPercent_MetaData[] = {
		{ "Category", "Exposure" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * The eye adaptation will adapt to a value extracted from the luminance histogram of the scene color.\n\x09 * The value is defined as having x percent below this brightness. Higher values give bright spots on the screen more priority\n\x09 * but can lead to less stable results. Lower values give the medium and darker values more priority but might cause burn out of\n\x09 * bright spots.\n\x09 * >0, <100, good values are in the range 80 .. 95\n\x09 */" },
		{ "DisplayName", "High Percent" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "The eye adaptation will adapt to a value extracted from the luminance histogram of the scene color.\nThe value is defined as having x percent below this brightness. Higher values give bright spots on the screen more priority\nbut can lead to less stable results. Lower values give the medium and darker values more priority but might cause burn out of\nbright spots.\n>0, <100, good values are in the range 80 .. 95" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HighPercent = { "HighPercent", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraExposureSettings, HighPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HighPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HighPercent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MinBrightness_MetaData[] = {
		{ "Category", "Exposure" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * A good value should be positive near 0. This is the minimum brightness the auto exposure can adapt to.\n\x09 * It should be tweaked in a dark lighting situation (too small: image appears too bright, too large: image appears too dark).\n\x09 * Note: Tweaking emissive materials and lights or tweaking auto exposure can look the same. Tweaking auto exposure has global\n\x09 * effect and defined the HDR range - you don't want to change that late in the project development.\n\x09 * Eye Adaptation is disabled if MinBrightness = MaxBrightness\n\x09 */" },
		{ "DisplayName", "Min Brightness" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "A good value should be positive near 0. This is the minimum brightness the auto exposure can adapt to.\nIt should be tweaked in a dark lighting situation (too small: image appears too bright, too large: image appears too dark).\nNote: Tweaking emissive materials and lights or tweaking auto exposure can look the same. Tweaking auto exposure has global\neffect and defined the HDR range - you don't want to change that late in the project development.\nEye Adaptation is disabled if MinBrightness = MaxBrightness" },
		{ "UIMax", "10.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MinBrightness = { "MinBrightness", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraExposureSettings, MinBrightness), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MinBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MinBrightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MaxBrightness_MetaData[] = {
		{ "Category", "Exposure" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * A good value should be positive (2 is a good value). This is the maximum brightness the auto exposure can adapt to.\n\x09 * It should be tweaked in a bright lighting situation (too small: image appears too bright, too large: image appears too dark).\n\x09 * Note: Tweaking emissive materials and lights or tweaking auto exposure can look the same. Tweaking auto exposure has global\n\x09 * effect and defined the HDR range - you don't want to change that late in the project development.\n\x09 * Eye Adaptation is disabled if MinBrightness = MaxBrightness\n\x09 */" },
		{ "DisplayName", "Max Brightness" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "A good value should be positive (2 is a good value). This is the maximum brightness the auto exposure can adapt to.\nIt should be tweaked in a bright lighting situation (too small: image appears too bright, too large: image appears too dark).\nNote: Tweaking emissive materials and lights or tweaking auto exposure can look the same. Tweaking auto exposure has global\neffect and defined the HDR range - you don't want to change that late in the project development.\nEye Adaptation is disabled if MinBrightness = MaxBrightness" },
		{ "UIMax", "10.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MaxBrightness = { "MaxBrightness", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraExposureSettings, MaxBrightness), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MaxBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MaxBrightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_SpeedUp_MetaData[] = {
		{ "Category", "Exposure" },
		{ "ClampMin", "0.02" },
		{ "DisplayName", "Speed Up" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "tooltip", "In F-stops per second, should be >0" },
		{ "UIMax", "20.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_SpeedUp = { "SpeedUp", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraExposureSettings, SpeedUp), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_SpeedUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_SpeedUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_SpeedDown_MetaData[] = {
		{ "Category", "Exposure" },
		{ "ClampMin", "0.02" },
		{ "DisplayName", "Speed Down" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "tooltip", "In F-stops per second, should be >0" },
		{ "UIMax", "20.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_SpeedDown = { "SpeedDown", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraExposureSettings, SpeedDown), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_SpeedDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_SpeedDown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_Bias_MetaData[] = {
		{ "Category", "Exposure" },
		{ "Comment", "/**\n\x09 * Logarithmic adjustment for the exposure. Only used if a tonemapper is specified.\n\x09 * 0: no adjustment, -1:2x darker, -2:4x darker, 1:2x brighter, 2:4x brighter, ...\n\x09 */" },
		{ "DisplayName", "Exposure Bias" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Logarithmic adjustment for the exposure. Only used if a tonemapper is specified.\n0: no adjustment, -1:2x darker, -2:4x darker, 1:2x brighter, 2:4x brighter, ..." },
		{ "UIMax", "8.0" },
		{ "UIMin", "-8.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_Bias = { "Bias", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraExposureSettings, Bias), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_Bias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_Bias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_BiasCurve_MetaData[] = {
		{ "Category", "Exposure" },
		{ "Comment", "/**\n\x09 * Exposure compensation based on the scene EV100.\n\x09 * Used to calibrate the final exposure differently depending on the average scene luminance.\n\x09 * 0: no adjustment, -1:2x darker, -2:4x darker, 1:2x brighter, 2:4x brighter, ...\n\x09 */" },
		{ "DisplayName", "Exposure Bias Curve" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Exposure compensation based on the scene EV100.\nUsed to calibrate the final exposure differently depending on the average scene luminance.\n0: no adjustment, -1:2x darker, -2:4x darker, 1:2x brighter, 2:4x brighter, ..." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_BiasCurve = { "BiasCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraExposureSettings, BiasCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_BiasCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_BiasCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MeterMask_MetaData[] = {
		{ "Category", "Exposure" },
		{ "Comment", "/**\n\x09 * Exposure metering mask. Bright spots on the mask will have high influence on auto-exposure metering\n\x09 * and dark spots will have low influence.\n\x09 */" },
		{ "DisplayName", "Exposure Metering Mask" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Exposure metering mask. Bright spots on the mask will have high influence on auto-exposure metering\nand dark spots will have low influence." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MeterMask = { "MeterMask", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraExposureSettings, MeterMask), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MeterMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MeterMask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HistogramLogMin_MetaData[] = {
		{ "Category", "Exposure" },
		{ "Comment", "/** temporary exposed until we found good values, -8: 1/256, -10: 1/1024 */" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "temporary exposed until we found good values, -8: 1/256, -10: 1/1024" },
		{ "UIMax", "0.0" },
		{ "UIMin", "-16" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HistogramLogMin = { "HistogramLogMin", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraExposureSettings, HistogramLogMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HistogramLogMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HistogramLogMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HistogramLogMax_MetaData[] = {
		{ "Category", "Exposure" },
		{ "Comment", "/** temporary exposed until we found good values 4: 16, 8: 256 */" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "temporary exposed until we found good values 4: 16, 8: 256" },
		{ "UIMax", "16.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HistogramLogMax = { "HistogramLogMax", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraExposureSettings, HistogramLogMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HistogramLogMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HistogramLogMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_CalibrationConstant_MetaData[] = {
		{ "Category", "Exposure" },
		{ "Comment", "/** Calibration constant for 18% albedo. */" },
		{ "DisplayName", "Calibration Constant" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Calibration constant for 18% albedo." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_CalibrationConstant = { "CalibrationConstant", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraExposureSettings, CalibrationConstant), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_CalibrationConstant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_CalibrationConstant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_ApplyPhysicalCameraExposure_MetaData[] = {
		{ "Category", "Exposure" },
		{ "Comment", "/** Enables physical camera exposure using ShutterSpeed/ISO/Aperture. */" },
		{ "DisplayName", "Apply Physical Camera Exposure" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Enables physical camera exposure using ShutterSpeed/ISO/Aperture." },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_ApplyPhysicalCameraExposure_SetBit(void* Obj)
	{
		((FCameraExposureSettings*)Obj)->ApplyPhysicalCameraExposure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_ApplyPhysicalCameraExposure = { "ApplyPhysicalCameraExposure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FCameraExposureSettings), &Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_ApplyPhysicalCameraExposure_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_ApplyPhysicalCameraExposure_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_ApplyPhysicalCameraExposure_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_LowPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HighPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MinBrightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MaxBrightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_SpeedUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_SpeedDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_Bias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_BiasCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MeterMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HistogramLogMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HistogramLogMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_CalibrationConstant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_ApplyPhysicalCameraExposure,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CameraExposureSettings",
		sizeof(FCameraExposureSettings),
		alignof(FCameraExposureSettings),
		Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraExposureSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_CameraExposureSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraExposureSettings.InnerSingleton, Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CameraExposureSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeightedBlendable;
class UScriptStruct* FWeightedBlendable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeightedBlendable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeightedBlendable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeightedBlendable, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("WeightedBlendable"));
	}
	return Z_Registration_Info_UScriptStruct_WeightedBlendable.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FWeightedBlendable>()
{
	return FWeightedBlendable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWeightedBlendable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightedBlendable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeightedBlendable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "FWeightedBlendable" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** 0:no effect .. 1:full effect */" },
		{ "Delta", "0.01" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "0:no effect .. 1:full effect" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeightedBlendable, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewProp_Object_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.BlendableInterface" },
		{ "Category", "FWeightedBlendable" },
		{ "Comment", "/** should be of the IBlendableInterface* type but UProperties cannot express that */" },
		{ "Keywords", "PostProcess" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "should be of the IBlendableInterface* type but UProperties cannot express that" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeightedBlendable, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewProp_Object_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeightedBlendable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewProp_Object,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeightedBlendable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"WeightedBlendable",
		sizeof(FWeightedBlendable),
		alignof(FWeightedBlendable),
		Z_Construct_UScriptStruct_FWeightedBlendable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedBlendable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightedBlendable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedBlendable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeightedBlendable()
	{
		if (!Z_Registration_Info_UScriptStruct_WeightedBlendable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeightedBlendable.InnerSingleton, Z_Construct_UScriptStruct_FWeightedBlendable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WeightedBlendable.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeightedBlendables;
class UScriptStruct* FWeightedBlendables::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeightedBlendables.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeightedBlendables.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeightedBlendables, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("WeightedBlendables"));
	}
	return Z_Registration_Info_UScriptStruct_WeightedBlendables.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FWeightedBlendables>()
{
	return FWeightedBlendables::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWeightedBlendables_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightedBlendables_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// for easier detail customization, needed?\n" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "for easier detail customization, needed?" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeightedBlendables_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeightedBlendables>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeightedBlendables_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWeightedBlendable, METADATA_PARAMS(nullptr, 0) }; // 1310401273
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightedBlendables_Statics::NewProp_Array_MetaData[] = {
		{ "Category", "PostProcessSettings" },
		{ "Keywords", "PostProcess" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWeightedBlendables_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeightedBlendables, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightedBlendables_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedBlendables_Statics::NewProp_Array_MetaData)) }; // 1310401273
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeightedBlendables_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightedBlendables_Statics::NewProp_Array_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightedBlendables_Statics::NewProp_Array,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeightedBlendables_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"WeightedBlendables",
		sizeof(FWeightedBlendables),
		alignof(FWeightedBlendables),
		Z_Construct_UScriptStruct_FWeightedBlendables_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedBlendables_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightedBlendables_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedBlendables_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeightedBlendables()
	{
		if (!Z_Registration_Info_UScriptStruct_WeightedBlendables.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeightedBlendables.InnerSingleton, Z_Construct_UScriptStruct_FWeightedBlendables_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WeightedBlendables.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PostProcessSettings;
class UScriptStruct* FPostProcessSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PostProcessSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PostProcessSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPostProcessSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PostProcessSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PostProcessSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPostProcessSettings>()
{
	return FPostProcessSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPostProcessSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_TemperatureType_MetaData[];
#endif
		static void NewProp_bOverride_TemperatureType_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_TemperatureType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_WhiteTemp_MetaData[];
#endif
		static void NewProp_bOverride_WhiteTemp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_WhiteTemp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_WhiteTint_MetaData[];
#endif
		static void NewProp_bOverride_WhiteTint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_WhiteTint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorSaturation_MetaData[];
#endif
		static void NewProp_bOverride_ColorSaturation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorSaturation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorContrast_MetaData[];
#endif
		static void NewProp_bOverride_ColorContrast_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorContrast;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGamma_MetaData[];
#endif
		static void NewProp_bOverride_ColorGamma_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGamma;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGain_MetaData[];
#endif
		static void NewProp_bOverride_ColorGain_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorOffset_MetaData[];
#endif
		static void NewProp_bOverride_ColorOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorSaturationShadows_MetaData[];
#endif
		static void NewProp_bOverride_ColorSaturationShadows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorSaturationShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorContrastShadows_MetaData[];
#endif
		static void NewProp_bOverride_ColorContrastShadows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorContrastShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGammaShadows_MetaData[];
#endif
		static void NewProp_bOverride_ColorGammaShadows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGammaShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGainShadows_MetaData[];
#endif
		static void NewProp_bOverride_ColorGainShadows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGainShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorOffsetShadows_MetaData[];
#endif
		static void NewProp_bOverride_ColorOffsetShadows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorOffsetShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorSaturationMidtones_MetaData[];
#endif
		static void NewProp_bOverride_ColorSaturationMidtones_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorSaturationMidtones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorContrastMidtones_MetaData[];
#endif
		static void NewProp_bOverride_ColorContrastMidtones_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorContrastMidtones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGammaMidtones_MetaData[];
#endif
		static void NewProp_bOverride_ColorGammaMidtones_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGammaMidtones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGainMidtones_MetaData[];
#endif
		static void NewProp_bOverride_ColorGainMidtones_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGainMidtones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorOffsetMidtones_MetaData[];
#endif
		static void NewProp_bOverride_ColorOffsetMidtones_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorOffsetMidtones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorSaturationHighlights_MetaData[];
#endif
		static void NewProp_bOverride_ColorSaturationHighlights_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorSaturationHighlights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorContrastHighlights_MetaData[];
#endif
		static void NewProp_bOverride_ColorContrastHighlights_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorContrastHighlights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGammaHighlights_MetaData[];
#endif
		static void NewProp_bOverride_ColorGammaHighlights_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGammaHighlights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGainHighlights_MetaData[];
#endif
		static void NewProp_bOverride_ColorGainHighlights_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGainHighlights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorOffsetHighlights_MetaData[];
#endif
		static void NewProp_bOverride_ColorOffsetHighlights_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorOffsetHighlights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorCorrectionShadowsMax_MetaData[];
#endif
		static void NewProp_bOverride_ColorCorrectionShadowsMax_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorCorrectionShadowsMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorCorrectionHighlightsMin_MetaData[];
#endif
		static void NewProp_bOverride_ColorCorrectionHighlightsMin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorCorrectionHighlightsMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorCorrectionHighlightsMax_MetaData[];
#endif
		static void NewProp_bOverride_ColorCorrectionHighlightsMax_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorCorrectionHighlightsMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_BlueCorrection_MetaData[];
#endif
		static void NewProp_bOverride_BlueCorrection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_BlueCorrection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ExpandGamut_MetaData[];
#endif
		static void NewProp_bOverride_ExpandGamut_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ExpandGamut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ToneCurveAmount_MetaData[];
#endif
		static void NewProp_bOverride_ToneCurveAmount_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ToneCurveAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmSlope_MetaData[];
#endif
		static void NewProp_bOverride_FilmSlope_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmSlope;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmToe_MetaData[];
#endif
		static void NewProp_bOverride_FilmToe_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmToe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmShoulder_MetaData[];
#endif
		static void NewProp_bOverride_FilmShoulder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmShoulder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmBlackClip_MetaData[];
#endif
		static void NewProp_bOverride_FilmBlackClip_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmBlackClip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmWhiteClip_MetaData[];
#endif
		static void NewProp_bOverride_FilmWhiteClip_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmWhiteClip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_SceneColorTint_MetaData[];
#endif
		static void NewProp_bOverride_SceneColorTint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_SceneColorTint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_SceneFringeIntensity_MetaData[];
#endif
		static void NewProp_bOverride_SceneFringeIntensity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_SceneFringeIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ChromaticAberrationStartOffset_MetaData[];
#endif
		static void NewProp_bOverride_ChromaticAberrationStartOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ChromaticAberrationStartOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientCubemapTint_MetaData[];
#endif
		static void NewProp_bOverride_AmbientCubemapTint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientCubemapTint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientCubemapIntensity_MetaData[];
#endif
		static void NewProp_bOverride_AmbientCubemapIntensity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientCubemapIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomMethod_MetaData[];
#endif
		static void NewProp_bOverride_BloomMethod_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomIntensity_MetaData[];
#endif
		static void NewProp_bOverride_BloomIntensity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomThreshold_MetaData[];
#endif
		static void NewProp_bOverride_BloomThreshold_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom1Tint_MetaData[];
#endif
		static void NewProp_bOverride_Bloom1Tint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom1Tint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom1Size_MetaData[];
#endif
		static void NewProp_bOverride_Bloom1Size_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom1Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom2Size_MetaData[];
#endif
		static void NewProp_bOverride_Bloom2Size_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom2Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom2Tint_MetaData[];
#endif
		static void NewProp_bOverride_Bloom2Tint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom2Tint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom3Tint_MetaData[];
#endif
		static void NewProp_bOverride_Bloom3Tint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom3Tint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom3Size_MetaData[];
#endif
		static void NewProp_bOverride_Bloom3Size_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom3Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom4Tint_MetaData[];
#endif
		static void NewProp_bOverride_Bloom4Tint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom4Tint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom4Size_MetaData[];
#endif
		static void NewProp_bOverride_Bloom4Size_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom4Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom5Tint_MetaData[];
#endif
		static void NewProp_bOverride_Bloom5Tint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom5Tint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom5Size_MetaData[];
#endif
		static void NewProp_bOverride_Bloom5Size_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom5Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom6Tint_MetaData[];
#endif
		static void NewProp_bOverride_Bloom6Tint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom6Tint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom6Size_MetaData[];
#endif
		static void NewProp_bOverride_Bloom6Size_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom6Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomSizeScale_MetaData[];
#endif
		static void NewProp_bOverride_BloomSizeScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomSizeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomConvolutionTexture_MetaData[];
#endif
		static void NewProp_bOverride_BloomConvolutionTexture_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomConvolutionTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomConvolutionScatterDispersion_MetaData[];
#endif
		static void NewProp_bOverride_BloomConvolutionScatterDispersion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomConvolutionScatterDispersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomConvolutionSize_MetaData[];
#endif
		static void NewProp_bOverride_BloomConvolutionSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomConvolutionSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomConvolutionCenterUV_MetaData[];
#endif
		static void NewProp_bOverride_BloomConvolutionCenterUV_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomConvolutionCenterUV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomConvolutionPreFilter_MetaData[];
#endif
		static void NewProp_bOverride_BloomConvolutionPreFilter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomConvolutionPreFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomConvolutionPreFilterMin_MetaData[];
#endif
		static void NewProp_bOverride_BloomConvolutionPreFilterMin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomConvolutionPreFilterMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomConvolutionPreFilterMax_MetaData[];
#endif
		static void NewProp_bOverride_BloomConvolutionPreFilterMax_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomConvolutionPreFilterMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomConvolutionPreFilterMult_MetaData[];
#endif
		static void NewProp_bOverride_BloomConvolutionPreFilterMult_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomConvolutionPreFilterMult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomConvolutionBufferScale_MetaData[];
#endif
		static void NewProp_bOverride_BloomConvolutionBufferScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomConvolutionBufferScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomDirtMaskIntensity_MetaData[];
#endif
		static void NewProp_bOverride_BloomDirtMaskIntensity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomDirtMaskIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomDirtMaskTint_MetaData[];
#endif
		static void NewProp_bOverride_BloomDirtMaskTint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomDirtMaskTint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomDirtMask_MetaData[];
#endif
		static void NewProp_bOverride_BloomDirtMask_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomDirtMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_CameraShutterSpeed_MetaData[];
#endif
		static void NewProp_bOverride_CameraShutterSpeed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_CameraShutterSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_CameraISO_MetaData[];
#endif
		static void NewProp_bOverride_CameraISO_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_CameraISO;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureMethod_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureMethod_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureLowPercent_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureLowPercent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureLowPercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureHighPercent_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureHighPercent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureHighPercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureMinBrightness_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureMinBrightness_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureMinBrightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureMaxBrightness_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureMaxBrightness_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureMaxBrightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureCalibrationConstant_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureCalibrationConstant_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureCalibrationConstant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureSpeedUp_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureSpeedUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureSpeedUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureSpeedDown_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureSpeedDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureSpeedDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureBias_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureBias_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureBiasCurve_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureBiasCurve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureBiasCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureMeterMask_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureMeterMask_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureMeterMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureApplyPhysicalCameraExposure_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureApplyPhysicalCameraExposure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureApplyPhysicalCameraExposure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_HistogramLogMin_MetaData[];
#endif
		static void NewProp_bOverride_HistogramLogMin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_HistogramLogMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_HistogramLogMax_MetaData[];
#endif
		static void NewProp_bOverride_HistogramLogMax_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_HistogramLogMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LocalExposureContrastScale_MetaData[];
#endif
		static void NewProp_bOverride_LocalExposureContrastScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LocalExposureContrastScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LocalExposureHighlightContrastScale_MetaData[];
#endif
		static void NewProp_bOverride_LocalExposureHighlightContrastScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LocalExposureHighlightContrastScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LocalExposureShadowContrastScale_MetaData[];
#endif
		static void NewProp_bOverride_LocalExposureShadowContrastScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LocalExposureShadowContrastScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LocalExposureDetailStrength_MetaData[];
#endif
		static void NewProp_bOverride_LocalExposureDetailStrength_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LocalExposureDetailStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LocalExposureBlurredLuminanceBlend_MetaData[];
#endif
		static void NewProp_bOverride_LocalExposureBlurredLuminanceBlend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LocalExposureBlurredLuminanceBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LocalExposureBlurredLuminanceKernelSizePercent_MetaData[];
#endif
		static void NewProp_bOverride_LocalExposureBlurredLuminanceKernelSizePercent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LocalExposureBlurredLuminanceKernelSizePercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LocalExposureMiddleGreyBias_MetaData[];
#endif
		static void NewProp_bOverride_LocalExposureMiddleGreyBias_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LocalExposureMiddleGreyBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LensFlareIntensity_MetaData[];
#endif
		static void NewProp_bOverride_LensFlareIntensity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LensFlareIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LensFlareTint_MetaData[];
#endif
		static void NewProp_bOverride_LensFlareTint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LensFlareTint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LensFlareTints_MetaData[];
#endif
		static void NewProp_bOverride_LensFlareTints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LensFlareTints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LensFlareBokehSize_MetaData[];
#endif
		static void NewProp_bOverride_LensFlareBokehSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LensFlareBokehSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LensFlareBokehShape_MetaData[];
#endif
		static void NewProp_bOverride_LensFlareBokehShape_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LensFlareBokehShape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LensFlareThreshold_MetaData[];
#endif
		static void NewProp_bOverride_LensFlareThreshold_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LensFlareThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_VignetteIntensity_MetaData[];
#endif
		static void NewProp_bOverride_VignetteIntensity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_VignetteIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_GrainIntensity_MetaData[];
#endif
		static void NewProp_bOverride_GrainIntensity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_GrainIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_GrainJitter_MetaData[];
#endif
		static void NewProp_bOverride_GrainJitter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_GrainJitter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmGrainIntensity_MetaData[];
#endif
		static void NewProp_bOverride_FilmGrainIntensity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmGrainIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmGrainIntensityShadows_MetaData[];
#endif
		static void NewProp_bOverride_FilmGrainIntensityShadows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmGrainIntensityShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmGrainIntensityMidtones_MetaData[];
#endif
		static void NewProp_bOverride_FilmGrainIntensityMidtones_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmGrainIntensityMidtones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmGrainIntensityHighlights_MetaData[];
#endif
		static void NewProp_bOverride_FilmGrainIntensityHighlights_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmGrainIntensityHighlights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmGrainShadowsMax_MetaData[];
#endif
		static void NewProp_bOverride_FilmGrainShadowsMax_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmGrainShadowsMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmGrainHighlightsMin_MetaData[];
#endif
		static void NewProp_bOverride_FilmGrainHighlightsMin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmGrainHighlightsMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmGrainHighlightsMax_MetaData[];
#endif
		static void NewProp_bOverride_FilmGrainHighlightsMax_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmGrainHighlightsMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmGrainTexelSize_MetaData[];
#endif
		static void NewProp_bOverride_FilmGrainTexelSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmGrainTexelSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmGrainTexture_MetaData[];
#endif
		static void NewProp_bOverride_FilmGrainTexture_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmGrainTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionIntensity_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionIntensity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionStaticFraction_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionStaticFraction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionStaticFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionRadius_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionRadius_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionFadeDistance_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionFadeDistance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionFadeDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionFadeRadius_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionFadeRadius_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionFadeRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionDistance_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionDistance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionRadiusInWS_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionRadiusInWS_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionRadiusInWS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionPower_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionPower_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionBias_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionBias_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionQuality_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionQuality_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionMipBlend_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionMipBlend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionMipBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionMipScale_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionMipScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionMipScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionMipThreshold_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionMipThreshold_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionMipThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionTemporalBlendWeight_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionTemporalBlendWeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionTemporalBlendWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingAO_MetaData[];
#endif
		static void NewProp_bOverride_RayTracingAO_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingAO;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingAOSamplesPerPixel_MetaData[];
#endif
		static void NewProp_bOverride_RayTracingAOSamplesPerPixel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingAOSamplesPerPixel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingAOIntensity_MetaData[];
#endif
		static void NewProp_bOverride_RayTracingAOIntensity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingAOIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingAORadius_MetaData[];
#endif
		static void NewProp_bOverride_RayTracingAORadius_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingAORadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVIntensity_MetaData[];
#endif
		static void NewProp_bOverride_LPVIntensity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVDirectionalOcclusionIntensity_MetaData[];
#endif
		static void NewProp_bOverride_LPVDirectionalOcclusionIntensity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVDirectionalOcclusionIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVDirectionalOcclusionRadius_MetaData[];
#endif
		static void NewProp_bOverride_LPVDirectionalOcclusionRadius_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVDirectionalOcclusionRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVDiffuseOcclusionExponent_MetaData[];
#endif
		static void NewProp_bOverride_LPVDiffuseOcclusionExponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVDiffuseOcclusionExponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVSpecularOcclusionExponent_MetaData[];
#endif
		static void NewProp_bOverride_LPVSpecularOcclusionExponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVSpecularOcclusionExponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVDiffuseOcclusionIntensity_MetaData[];
#endif
		static void NewProp_bOverride_LPVDiffuseOcclusionIntensity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVDiffuseOcclusionIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVSpecularOcclusionIntensity_MetaData[];
#endif
		static void NewProp_bOverride_LPVSpecularOcclusionIntensity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVSpecularOcclusionIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVSize_MetaData[];
#endif
		static void NewProp_bOverride_LPVSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVSecondaryOcclusionIntensity_MetaData[];
#endif
		static void NewProp_bOverride_LPVSecondaryOcclusionIntensity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVSecondaryOcclusionIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVSecondaryBounceIntensity_MetaData[];
#endif
		static void NewProp_bOverride_LPVSecondaryBounceIntensity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVSecondaryBounceIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVGeometryVolumeBias_MetaData[];
#endif
		static void NewProp_bOverride_LPVGeometryVolumeBias_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVGeometryVolumeBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVVplInjectionBias_MetaData[];
#endif
		static void NewProp_bOverride_LPVVplInjectionBias_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVVplInjectionBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVEmissiveInjectionIntensity_MetaData[];
#endif
		static void NewProp_bOverride_LPVEmissiveInjectionIntensity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVEmissiveInjectionIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVFadeRange_MetaData[];
#endif
		static void NewProp_bOverride_LPVFadeRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVFadeRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVDirectionalOcclusionFadeRange_MetaData[];
#endif
		static void NewProp_bOverride_LPVDirectionalOcclusionFadeRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVDirectionalOcclusionFadeRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_IndirectLightingColor_MetaData[];
#endif
		static void NewProp_bOverride_IndirectLightingColor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_IndirectLightingColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_IndirectLightingIntensity_MetaData[];
#endif
		static void NewProp_bOverride_IndirectLightingIntensity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_IndirectLightingIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGradingIntensity_MetaData[];
#endif
		static void NewProp_bOverride_ColorGradingIntensity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGradingIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGradingLUT_MetaData[];
#endif
		static void NewProp_bOverride_ColorGradingLUT_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGradingLUT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldFocalDistance_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldFocalDistance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldFocalDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldFstop_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldFstop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldFstop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldMinFstop_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldMinFstop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldMinFstop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldBladeCount_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldBladeCount_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldBladeCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldSensorWidth_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldSensorWidth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldSensorWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldSqueezeFactor_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldSqueezeFactor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldSqueezeFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldDepthBlurRadius_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldDepthBlurRadius_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldDepthBlurRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldDepthBlurAmount_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldDepthBlurAmount_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldDepthBlurAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldFocalRegion_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldFocalRegion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldFocalRegion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldNearTransitionRegion_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldNearTransitionRegion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldNearTransitionRegion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldFarTransitionRegion_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldFarTransitionRegion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldFarTransitionRegion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldScale_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldNearBlurSize_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldNearBlurSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldNearBlurSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldFarBlurSize_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldFarBlurSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldFarBlurSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_MobileHQGaussian_MetaData[];
#endif
		static void NewProp_bOverride_MobileHQGaussian_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_MobileHQGaussian;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldOcclusion_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldOcclusion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldOcclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldSkyFocusDistance_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldSkyFocusDistance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldSkyFocusDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldVignetteSize_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldVignetteSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldVignetteSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_MotionBlurAmount_MetaData[];
#endif
		static void NewProp_bOverride_MotionBlurAmount_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_MotionBlurAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_MotionBlurMax_MetaData[];
#endif
		static void NewProp_bOverride_MotionBlurMax_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_MotionBlurMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_MotionBlurTargetFPS_MetaData[];
#endif
		static void NewProp_bOverride_MotionBlurTargetFPS_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_MotionBlurTargetFPS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_MotionBlurPerObjectSize_MetaData[];
#endif
		static void NewProp_bOverride_MotionBlurPerObjectSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_MotionBlurPerObjectSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ScreenPercentage_MetaData[];
#endif
		static void NewProp_bOverride_ScreenPercentage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ScreenPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ReflectionMethod_MetaData[];
#endif
		static void NewProp_bOverride_ReflectionMethod_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ReflectionMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LumenReflectionQuality_MetaData[];
#endif
		static void NewProp_bOverride_LumenReflectionQuality_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LumenReflectionQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ScreenSpaceReflectionIntensity_MetaData[];
#endif
		static void NewProp_bOverride_ScreenSpaceReflectionIntensity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ScreenSpaceReflectionIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ScreenSpaceReflectionQuality_MetaData[];
#endif
		static void NewProp_bOverride_ScreenSpaceReflectionQuality_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ScreenSpaceReflectionQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ScreenSpaceReflectionMaxRoughness_MetaData[];
#endif
		static void NewProp_bOverride_ScreenSpaceReflectionMaxRoughness_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ScreenSpaceReflectionMaxRoughness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ScreenSpaceReflectionRoughnessScale_MetaData[];
#endif
		static void NewProp_bOverride_ScreenSpaceReflectionRoughnessScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ScreenSpaceReflectionRoughnessScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ReflectionsType_MetaData[];
#endif
		static void NewProp_bOverride_ReflectionsType_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ReflectionsType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingReflectionsMaxRoughness_MetaData[];
#endif
		static void NewProp_bOverride_RayTracingReflectionsMaxRoughness_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingReflectionsMaxRoughness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingReflectionsMaxBounces_MetaData[];
#endif
		static void NewProp_bOverride_RayTracingReflectionsMaxBounces_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingReflectionsMaxBounces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingReflectionsSamplesPerPixel_MetaData[];
#endif
		static void NewProp_bOverride_RayTracingReflectionsSamplesPerPixel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingReflectionsSamplesPerPixel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingReflectionsShadows_MetaData[];
#endif
		static void NewProp_bOverride_RayTracingReflectionsShadows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingReflectionsShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingReflectionsTranslucency_MetaData[];
#endif
		static void NewProp_bOverride_RayTracingReflectionsTranslucency_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingReflectionsTranslucency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_TranslucencyType_MetaData[];
#endif
		static void NewProp_bOverride_TranslucencyType_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_TranslucencyType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingTranslucencyMaxRoughness_MetaData[];
#endif
		static void NewProp_bOverride_RayTracingTranslucencyMaxRoughness_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingTranslucencyMaxRoughness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingTranslucencyRefractionRays_MetaData[];
#endif
		static void NewProp_bOverride_RayTracingTranslucencyRefractionRays_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingTranslucencyRefractionRays;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingTranslucencySamplesPerPixel_MetaData[];
#endif
		static void NewProp_bOverride_RayTracingTranslucencySamplesPerPixel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingTranslucencySamplesPerPixel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingTranslucencyShadows_MetaData[];
#endif
		static void NewProp_bOverride_RayTracingTranslucencyShadows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingTranslucencyShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingTranslucencyRefraction_MetaData[];
#endif
		static void NewProp_bOverride_RayTracingTranslucencyRefraction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingTranslucencyRefraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DynamicGlobalIlluminationMethod_MetaData[];
#endif
		static void NewProp_bOverride_DynamicGlobalIlluminationMethod_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DynamicGlobalIlluminationMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LumenSceneLightingQuality_MetaData[];
#endif
		static void NewProp_bOverride_LumenSceneLightingQuality_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LumenSceneLightingQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LumenSceneDetail_MetaData[];
#endif
		static void NewProp_bOverride_LumenSceneDetail_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LumenSceneDetail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LumenSceneViewDistance_MetaData[];
#endif
		static void NewProp_bOverride_LumenSceneViewDistance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LumenSceneViewDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LumenSceneLightingUpdateSpeed_MetaData[];
#endif
		static void NewProp_bOverride_LumenSceneLightingUpdateSpeed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LumenSceneLightingUpdateSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LumenFinalGatherQuality_MetaData[];
#endif
		static void NewProp_bOverride_LumenFinalGatherQuality_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LumenFinalGatherQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LumenFinalGatherLightingUpdateSpeed_MetaData[];
#endif
		static void NewProp_bOverride_LumenFinalGatherLightingUpdateSpeed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LumenFinalGatherLightingUpdateSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LumenMaxTraceDistance_MetaData[];
#endif
		static void NewProp_bOverride_LumenMaxTraceDistance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LumenMaxTraceDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LumenDiffuseColorBoost_MetaData[];
#endif
		static void NewProp_bOverride_LumenDiffuseColorBoost_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LumenDiffuseColorBoost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LumenSkylightLeaking_MetaData[];
#endif
		static void NewProp_bOverride_LumenSkylightLeaking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LumenSkylightLeaking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LumenFullSkylightLeakingDistance_MetaData[];
#endif
		static void NewProp_bOverride_LumenFullSkylightLeakingDistance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LumenFullSkylightLeakingDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LumenRayLightingMode_MetaData[];
#endif
		static void NewProp_bOverride_LumenRayLightingMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LumenRayLightingMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LumenFrontLayerTranslucencyReflections_MetaData[];
#endif
		static void NewProp_bOverride_LumenFrontLayerTranslucencyReflections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LumenFrontLayerTranslucencyReflections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LumenSurfaceCacheResolution_MetaData[];
#endif
		static void NewProp_bOverride_LumenSurfaceCacheResolution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LumenSurfaceCacheResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingGI_MetaData[];
#endif
		static void NewProp_bOverride_RayTracingGI_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingGI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingGIMaxBounces_MetaData[];
#endif
		static void NewProp_bOverride_RayTracingGIMaxBounces_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingGIMaxBounces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingGISamplesPerPixel_MetaData[];
#endif
		static void NewProp_bOverride_RayTracingGISamplesPerPixel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingGISamplesPerPixel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_PathTracingMaxBounces_MetaData[];
#endif
		static void NewProp_bOverride_PathTracingMaxBounces_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_PathTracingMaxBounces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_PathTracingSamplesPerPixel_MetaData[];
#endif
		static void NewProp_bOverride_PathTracingSamplesPerPixel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_PathTracingSamplesPerPixel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_PathTracingFilterWidth_MetaData[];
#endif
		static void NewProp_bOverride_PathTracingFilterWidth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_PathTracingFilterWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_PathTracingMaxPathExposure_MetaData[];
#endif
		static void NewProp_bOverride_PathTracingMaxPathExposure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_PathTracingMaxPathExposure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_PathTracingEnableReferenceDOF_MetaData[];
#endif
		static void NewProp_bOverride_PathTracingEnableReferenceDOF_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_PathTracingEnableReferenceDOF;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_PathTracingEnableReferenceAtmosphere_MetaData[];
#endif
		static void NewProp_bOverride_PathTracingEnableReferenceAtmosphere_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_PathTracingEnableReferenceAtmosphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_PathTracingEnableDenoiser_MetaData[];
#endif
		static void NewProp_bOverride_PathTracingEnableDenoiser_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_PathTracingEnableDenoiser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_PathTracingIncludeEmissive_MetaData[];
#endif
		static void NewProp_bOverride_PathTracingIncludeEmissive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_PathTracingIncludeEmissive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_PathTracingIncludeIndirectEmissive_MetaData[];
#endif
		static void NewProp_bOverride_PathTracingIncludeIndirectEmissive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_PathTracingIncludeIndirectEmissive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_PathTracingIncludeDiffuse_MetaData[];
#endif
		static void NewProp_bOverride_PathTracingIncludeDiffuse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_PathTracingIncludeDiffuse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_PathTracingIncludeIndirectDiffuse_MetaData[];
#endif
		static void NewProp_bOverride_PathTracingIncludeIndirectDiffuse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_PathTracingIncludeIndirectDiffuse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_PathTracingIncludeSpecular_MetaData[];
#endif
		static void NewProp_bOverride_PathTracingIncludeSpecular_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_PathTracingIncludeSpecular;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_PathTracingIncludeIndirectSpecular_MetaData[];
#endif
		static void NewProp_bOverride_PathTracingIncludeIndirectSpecular_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_PathTracingIncludeIndirectSpecular;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_PathTracingIncludeVolume_MetaData[];
#endif
		static void NewProp_bOverride_PathTracingIncludeVolume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_PathTracingIncludeVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_PathTracingIncludeIndirectVolume_MetaData[];
#endif
		static void NewProp_bOverride_PathTracingIncludeIndirectVolume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_PathTracingIncludeIndirectVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMobileHQGaussian_MetaData[];
#endif
		static void NewProp_bMobileHQGaussian_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileHQGaussian;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloomMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BloomMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoExposureMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoExposureMethod;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DepthOfFieldMethod;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TemperatureType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WhiteTemp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WhiteTemp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WhiteTint_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WhiteTint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorSaturation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorSaturation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorContrast_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorContrast;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorGamma_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorGamma;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorGain_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorGain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorSaturationShadows_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorSaturationShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorContrastShadows_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorContrastShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorGammaShadows_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorGammaShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorGainShadows_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorGainShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorOffsetShadows_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorOffsetShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorSaturationMidtones_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorSaturationMidtones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorContrastMidtones_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorContrastMidtones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorGammaMidtones_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorGammaMidtones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorGainMidtones_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorGainMidtones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorOffsetMidtones_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorOffsetMidtones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorSaturationHighlights_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorSaturationHighlights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorContrastHighlights_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorContrastHighlights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorGammaHighlights_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorGammaHighlights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorGainHighlights_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorGainHighlights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorOffsetHighlights_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorOffsetHighlights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorCorrectionHighlightsMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ColorCorrectionHighlightsMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorCorrectionHighlightsMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ColorCorrectionHighlightsMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorCorrectionShadowsMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ColorCorrectionShadowsMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueCorrection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlueCorrection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpandGamut_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpandGamut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToneCurveAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ToneCurveAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilmSlope_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FilmSlope;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilmToe_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FilmToe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilmShoulder_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FilmShoulder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilmBlackClip_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FilmBlackClip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilmWhiteClip_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FilmWhiteClip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneColorTint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SceneColorTint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneFringeIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SceneFringeIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChromaticAberrationStartOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChromaticAberrationStartOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloomIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BloomIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloomThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BloomThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloomSizeScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BloomSizeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bloom1Size_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bloom1Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bloom2Size_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bloom2Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bloom3Size_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bloom3Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bloom4Size_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bloom4Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bloom5Size_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bloom5Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bloom6Size_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bloom6Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bloom1Tint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bloom1Tint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bloom2Tint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bloom2Tint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bloom3Tint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bloom3Tint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bloom4Tint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bloom4Tint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bloom5Tint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bloom5Tint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bloom6Tint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bloom6Tint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloomConvolutionScatterDispersion_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BloomConvolutionScatterDispersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloomConvolutionSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BloomConvolutionSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloomConvolutionTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BloomConvolutionTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloomConvolutionCenterUV_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BloomConvolutionCenterUV;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloomConvolutionPreFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BloomConvolutionPreFilter;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloomConvolutionPreFilterMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BloomConvolutionPreFilterMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloomConvolutionPreFilterMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BloomConvolutionPreFilterMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloomConvolutionPreFilterMult_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BloomConvolutionPreFilterMult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloomConvolutionBufferScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BloomConvolutionBufferScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloomDirtMask_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BloomDirtMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloomDirtMaskIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BloomDirtMaskIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloomDirtMaskTint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BloomDirtMaskTint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicGlobalIlluminationMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DynamicGlobalIlluminationMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndirectLightingColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndirectLightingColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndirectLightingIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IndirectLightingIntensity;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingGI_MetaData[];
#endif
		static void NewProp_RayTracingGI_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RayTracingGI;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LumenSceneLightingQuality_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LumenSceneLightingQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LumenSceneDetail_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LumenSceneDetail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LumenSceneViewDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LumenSceneViewDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LumenSceneLightingUpdateSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LumenSceneLightingUpdateSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LumenFinalGatherQuality_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LumenFinalGatherQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LumenFinalGatherLightingUpdateSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LumenFinalGatherLightingUpdateSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LumenMaxTraceDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LumenMaxTraceDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LumenDiffuseColorBoost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LumenDiffuseColorBoost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LumenSkylightLeaking_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LumenSkylightLeaking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LumenFullSkylightLeakingDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LumenFullSkylightLeakingDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LumenSurfaceCacheResolution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LumenSurfaceCacheResolution;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RayTracingGIType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingGIType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RayTracingGIType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingGIMaxBounces_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RayTracingGIMaxBounces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingGISamplesPerPixel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RayTracingGISamplesPerPixel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReflectionMethod;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReflectionsType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionsType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReflectionsType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LumenReflectionQuality_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LumenReflectionQuality;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LumenRayLightingMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LumenRayLightingMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LumenRayLightingMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LumenFrontLayerTranslucencyReflections_MetaData[];
#endif
		static void NewProp_LumenFrontLayerTranslucencyReflections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LumenFrontLayerTranslucencyReflections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSpaceReflectionIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenSpaceReflectionIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSpaceReflectionQuality_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenSpaceReflectionQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSpaceReflectionMaxRoughness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenSpaceReflectionMaxRoughness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingReflectionsMaxRoughness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RayTracingReflectionsMaxRoughness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingReflectionsMaxBounces_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RayTracingReflectionsMaxBounces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingReflectionsSamplesPerPixel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RayTracingReflectionsSamplesPerPixel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RayTracingReflectionsShadows_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingReflectionsShadows_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RayTracingReflectionsShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingReflectionsTranslucency_MetaData[];
#endif
		static void NewProp_RayTracingReflectionsTranslucency_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RayTracingReflectionsTranslucency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmbientCubemapTint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AmbientCubemapTint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmbientCubemapIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmbientCubemapIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmbientCubemap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AmbientCubemap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraShutterSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraShutterSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraISO_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraISO;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldFstop_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldFstop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldMinFstop_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldMinFstop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldBladeCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DepthOfFieldBladeCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoExposureBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoExposureBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoExposureBiasBackup_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoExposureBiasBackup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureBiasBackup_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureBiasBackup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureBiasBackup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoExposureApplyPhysicalCameraExposure_MetaData[];
#endif
		static void NewProp_AutoExposureApplyPhysicalCameraExposure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoExposureApplyPhysicalCameraExposure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoExposureBiasCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AutoExposureBiasCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoExposureMeterMask_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AutoExposureMeterMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoExposureLowPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoExposureLowPercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoExposureHighPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoExposureHighPercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoExposureMinBrightness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoExposureMinBrightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoExposureMaxBrightness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoExposureMaxBrightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoExposureSpeedUp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoExposureSpeedUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoExposureSpeedDown_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoExposureSpeedDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HistogramLogMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HistogramLogMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HistogramLogMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HistogramLogMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoExposureCalibrationConstant_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoExposureCalibrationConstant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalExposureContrastScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocalExposureContrastScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalExposureHighlightContrastScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocalExposureHighlightContrastScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalExposureShadowContrastScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocalExposureShadowContrastScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalExposureDetailStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocalExposureDetailStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalExposureBlurredLuminanceBlend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocalExposureBlurredLuminanceBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalExposureBlurredLuminanceKernelSizePercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocalExposureBlurredLuminanceKernelSizePercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalExposureMiddleGreyBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocalExposureMiddleGreyBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensFlareIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LensFlareIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensFlareTint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LensFlareTint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensFlareBokehSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LensFlareBokehSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensFlareThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LensFlareThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensFlareBokehShape_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LensFlareBokehShape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensFlareTints_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LensFlareTints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VignetteIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VignetteIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrainJitter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GrainJitter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrainIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GrainIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilmGrainIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FilmGrainIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilmGrainIntensityShadows_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FilmGrainIntensityShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilmGrainIntensityMidtones_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FilmGrainIntensityMidtones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilmGrainIntensityHighlights_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FilmGrainIntensityHighlights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilmGrainShadowsMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FilmGrainShadowsMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilmGrainHighlightsMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FilmGrainHighlightsMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilmGrainHighlightsMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FilmGrainHighlightsMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilmGrainTexelSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FilmGrainTexelSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilmGrainTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FilmGrainTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionStaticFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionStaticFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionRadiusInWS_MetaData[];
#endif
		static void NewProp_AmbientOcclusionRadiusInWS_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AmbientOcclusionRadiusInWS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionFadeDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionFadeDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionFadeRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionFadeRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionQuality_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionMipBlend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionMipBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionMipScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionMipScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionMipThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionMipThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionTemporalBlendWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionTemporalBlendWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingAO_MetaData[];
#endif
		static void NewProp_RayTracingAO_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RayTracingAO;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingAOSamplesPerPixel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RayTracingAOSamplesPerPixel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingAOIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RayTracingAOIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingAORadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RayTracingAORadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorGradingIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ColorGradingIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorGradingLUT_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ColorGradingLUT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldSensorWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldSensorWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldSqueezeFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldSqueezeFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldFocalDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldFocalDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldDepthBlurAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldDepthBlurAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldDepthBlurRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldDepthBlurRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldFocalRegion_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldFocalRegion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldNearTransitionRegion_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldNearTransitionRegion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldFarTransitionRegion_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldFarTransitionRegion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldNearBlurSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldNearBlurSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldFarBlurSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldFarBlurSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldOcclusion_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldOcclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldSkyFocusDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldSkyFocusDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldVignetteSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldVignetteSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionBlurAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MotionBlurAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionBlurMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MotionBlurMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionBlurTargetFPS_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MotionBlurTargetFPS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionBlurPerObjectSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MotionBlurPerObjectSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LPVIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LPVIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LPVVplInjectionBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LPVVplInjectionBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LPVSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LPVSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LPVSecondaryOcclusionIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LPVSecondaryOcclusionIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LPVSecondaryBounceIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LPVSecondaryBounceIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LPVGeometryVolumeBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LPVGeometryVolumeBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LPVEmissiveInjectionIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LPVEmissiveInjectionIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LPVDirectionalOcclusionIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LPVDirectionalOcclusionIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LPVDirectionalOcclusionRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LPVDirectionalOcclusionRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LPVDiffuseOcclusionExponent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LPVDiffuseOcclusionExponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LPVSpecularOcclusionExponent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LPVSpecularOcclusionExponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LPVDiffuseOcclusionIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LPVDiffuseOcclusionIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LPVSpecularOcclusionIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LPVSpecularOcclusionIntensity;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TranslucencyType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslucencyType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TranslucencyType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingTranslucencyMaxRoughness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RayTracingTranslucencyMaxRoughness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingTranslucencyRefractionRays_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RayTracingTranslucencyRefractionRays;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingTranslucencySamplesPerPixel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RayTracingTranslucencySamplesPerPixel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RayTracingTranslucencyShadows_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingTranslucencyShadows_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RayTracingTranslucencyShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingTranslucencyRefraction_MetaData[];
#endif
		static void NewProp_RayTracingTranslucencyRefraction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RayTracingTranslucencyRefraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathTracingMaxBounces_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PathTracingMaxBounces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathTracingSamplesPerPixel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PathTracingSamplesPerPixel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathTracingFilterWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PathTracingFilterWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathTracingMaxPathExposure_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PathTracingMaxPathExposure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathTracingEnableReferenceDOF_MetaData[];
#endif
		static void NewProp_PathTracingEnableReferenceDOF_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PathTracingEnableReferenceDOF;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathTracingEnableReferenceAtmosphere_MetaData[];
#endif
		static void NewProp_PathTracingEnableReferenceAtmosphere_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PathTracingEnableReferenceAtmosphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathTracingEnableDenoiser_MetaData[];
#endif
		static void NewProp_PathTracingEnableDenoiser_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PathTracingEnableDenoiser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathTracingIncludeEmissive_MetaData[];
#endif
		static void NewProp_PathTracingIncludeEmissive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PathTracingIncludeEmissive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathTracingIncludeIndirectEmissive_MetaData[];
#endif
		static void NewProp_PathTracingIncludeIndirectEmissive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PathTracingIncludeIndirectEmissive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathTracingIncludeDiffuse_MetaData[];
#endif
		static void NewProp_PathTracingIncludeDiffuse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PathTracingIncludeDiffuse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathTracingIncludeIndirectDiffuse_MetaData[];
#endif
		static void NewProp_PathTracingIncludeIndirectDiffuse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PathTracingIncludeIndirectDiffuse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathTracingIncludeSpecular_MetaData[];
#endif
		static void NewProp_PathTracingIncludeSpecular_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PathTracingIncludeSpecular;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathTracingIncludeIndirectSpecular_MetaData[];
#endif
		static void NewProp_PathTracingIncludeIndirectSpecular_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PathTracingIncludeIndirectSpecular;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathTracingIncludeVolume_MetaData[];
#endif
		static void NewProp_PathTracingIncludeVolume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PathTracingIncludeVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathTracingIncludeIndirectVolume_MetaData[];
#endif
		static void NewProp_PathTracingIncludeIndirectVolume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PathTracingIncludeIndirectVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LPVFadeRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LPVFadeRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LPVDirectionalOcclusionFadeRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LPVDirectionalOcclusionFadeRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightedBlendables_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WeightedBlendables;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Blendables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blendables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Blendables;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HiddenByDefault", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPostProcessSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_TemperatureType_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// first all bOverride_... as they get grouped together into bitfields\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "first all bOverride_... as they get grouped together into bitfields" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_TemperatureType_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_TemperatureType = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_TemperatureType = { "bOverride_TemperatureType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_TemperatureType_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_TemperatureType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_TemperatureType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTemp_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTemp_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_WhiteTemp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTemp = { "bOverride_WhiteTemp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTemp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTemp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTemp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_WhiteTint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTint = { "bOverride_WhiteTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturation_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Color Correction controls\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Color Correction controls" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturation_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorSaturation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturation = { "bOverride_ColorSaturation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrast_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrast_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorContrast = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrast = { "bOverride_ColorContrast", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrast_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrast_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrast_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGamma_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGamma_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorGamma = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGamma = { "bOverride_ColorGamma", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGamma_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGamma_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGain_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGain_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorGain = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGain = { "bOverride_ColorGain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGain_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffset_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffset_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffset = { "bOverride_ColorOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationShadows_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationShadows_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorSaturationShadows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationShadows = { "bOverride_ColorSaturationShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastShadows_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastShadows_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorContrastShadows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastShadows = { "bOverride_ColorContrastShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaShadows_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaShadows_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorGammaShadows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaShadows = { "bOverride_ColorGammaShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainShadows_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainShadows_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorGainShadows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainShadows = { "bOverride_ColorGainShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetShadows_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetShadows_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorOffsetShadows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetShadows = { "bOverride_ColorOffsetShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationMidtones_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationMidtones_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorSaturationMidtones = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationMidtones = { "bOverride_ColorSaturationMidtones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationMidtones_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationMidtones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationMidtones_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastMidtones_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastMidtones_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorContrastMidtones = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastMidtones = { "bOverride_ColorContrastMidtones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastMidtones_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastMidtones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastMidtones_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaMidtones_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaMidtones_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorGammaMidtones = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaMidtones = { "bOverride_ColorGammaMidtones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaMidtones_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaMidtones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaMidtones_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainMidtones_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainMidtones_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorGainMidtones = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainMidtones = { "bOverride_ColorGainMidtones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainMidtones_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainMidtones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainMidtones_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetMidtones_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetMidtones_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorOffsetMidtones = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetMidtones = { "bOverride_ColorOffsetMidtones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetMidtones_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetMidtones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetMidtones_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationHighlights_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationHighlights_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorSaturationHighlights = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationHighlights = { "bOverride_ColorSaturationHighlights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationHighlights_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationHighlights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationHighlights_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastHighlights_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastHighlights_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorContrastHighlights = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastHighlights = { "bOverride_ColorContrastHighlights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastHighlights_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastHighlights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastHighlights_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaHighlights_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaHighlights_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorGammaHighlights = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaHighlights = { "bOverride_ColorGammaHighlights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaHighlights_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaHighlights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaHighlights_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainHighlights_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainHighlights_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorGainHighlights = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainHighlights = { "bOverride_ColorGainHighlights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainHighlights_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainHighlights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainHighlights_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetHighlights_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetHighlights_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorOffsetHighlights = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetHighlights = { "bOverride_ColorOffsetHighlights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetHighlights_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetHighlights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetHighlights_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorCorrectionShadowsMax = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax = { "bOverride_ColorCorrectionShadowsMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorCorrectionHighlightsMin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin = { "bOverride_ColorCorrectionHighlightsMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMax_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMax_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorCorrectionHighlightsMax = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMax = { "bOverride_ColorCorrectionHighlightsMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMax_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BlueCorrection_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BlueCorrection_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BlueCorrection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BlueCorrection = { "bOverride_BlueCorrection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BlueCorrection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BlueCorrection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BlueCorrection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ExpandGamut_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ExpandGamut_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ExpandGamut = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ExpandGamut = { "bOverride_ExpandGamut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ExpandGamut_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ExpandGamut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ExpandGamut_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ToneCurveAmount_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ToneCurveAmount_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ToneCurveAmount = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ToneCurveAmount = { "bOverride_ToneCurveAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ToneCurveAmount_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ToneCurveAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ToneCurveAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSlope_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSlope_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmSlope = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSlope = { "bOverride_FilmSlope", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSlope_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSlope_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSlope_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToe_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToe_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmToe = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToe = { "bOverride_FilmToe", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToe_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToe_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToe_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShoulder_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShoulder_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmShoulder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShoulder = { "bOverride_FilmShoulder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShoulder_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShoulder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShoulder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmBlackClip_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmBlackClip_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmBlackClip = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmBlackClip = { "bOverride_FilmBlackClip", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmBlackClip_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmBlackClip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmBlackClip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhiteClip_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhiteClip_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmWhiteClip = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhiteClip = { "bOverride_FilmWhiteClip", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhiteClip_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhiteClip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhiteClip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneColorTint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneColorTint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_SceneColorTint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneColorTint = { "bOverride_SceneColorTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneColorTint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneColorTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneColorTint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneFringeIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneFringeIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_SceneFringeIntensity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneFringeIntensity = { "bOverride_SceneFringeIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneFringeIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneFringeIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneFringeIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ChromaticAberrationStartOffset_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ChromaticAberrationStartOffset_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ChromaticAberrationStartOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ChromaticAberrationStartOffset = { "bOverride_ChromaticAberrationStartOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ChromaticAberrationStartOffset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ChromaticAberrationStartOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ChromaticAberrationStartOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapTint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapTint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientCubemapTint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapTint = { "bOverride_AmbientCubemapTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapTint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapTint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientCubemapIntensity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapIntensity = { "bOverride_AmbientCubemapIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomMethod_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomMethod_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomMethod = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomMethod = { "bOverride_BloomMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomMethod_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomMethod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomIntensity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomIntensity = { "bOverride_BloomIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomThreshold_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomThreshold_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomThreshold = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomThreshold = { "bOverride_BloomThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomThreshold_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Tint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Tint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom1Tint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Tint = { "bOverride_Bloom1Tint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Tint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Tint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Tint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Size_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Size_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom1Size = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Size = { "bOverride_Bloom1Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Size_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Size_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Size_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom2Size = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Size = { "bOverride_Bloom2Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Size_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Tint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Tint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom2Tint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Tint = { "bOverride_Bloom2Tint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Tint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Tint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Tint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Tint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Tint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom3Tint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Tint = { "bOverride_Bloom3Tint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Tint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Tint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Tint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Size_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Size_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom3Size = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Size = { "bOverride_Bloom3Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Size_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Tint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Tint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom4Tint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Tint = { "bOverride_Bloom4Tint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Tint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Tint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Tint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Size_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Size_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom4Size = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Size = { "bOverride_Bloom4Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Size_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Tint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Tint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom5Tint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Tint = { "bOverride_Bloom5Tint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Tint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Tint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Tint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Size_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Size_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom5Size = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Size = { "bOverride_Bloom5Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Size_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Tint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Tint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom6Tint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Tint = { "bOverride_Bloom6Tint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Tint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Tint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Tint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Size_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Size_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom6Size = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Size = { "bOverride_Bloom6Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Size_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomSizeScale_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomSizeScale_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomSizeScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomSizeScale = { "bOverride_BloomSizeScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomSizeScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomSizeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomSizeScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionTexture_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionTexture_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomConvolutionTexture = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionTexture = { "bOverride_BloomConvolutionTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionTexture_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionScatterDispersion_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionScatterDispersion_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomConvolutionScatterDispersion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionScatterDispersion = { "bOverride_BloomConvolutionScatterDispersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionScatterDispersion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionScatterDispersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionScatterDispersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionSize_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionSize_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomConvolutionSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionSize = { "bOverride_BloomConvolutionSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionCenterUV_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionCenterUV_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomConvolutionCenterUV = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionCenterUV = { "bOverride_BloomConvolutionCenterUV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionCenterUV_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionCenterUV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionCenterUV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilter_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilter_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomConvolutionPreFilter_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilter = { "bOverride_BloomConvolutionPreFilter", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilter_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMin_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMin_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomConvolutionPreFilterMin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMin = { "bOverride_BloomConvolutionPreFilterMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMax_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMax_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomConvolutionPreFilterMax = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMax = { "bOverride_BloomConvolutionPreFilterMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMax_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMult_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMult_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomConvolutionPreFilterMult = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMult = { "bOverride_BloomConvolutionPreFilterMult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMult_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionBufferScale_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionBufferScale_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomConvolutionBufferScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionBufferScale = { "bOverride_BloomConvolutionBufferScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionBufferScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionBufferScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionBufferScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomDirtMaskIntensity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskIntensity = { "bOverride_BloomDirtMaskIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskTint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskTint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomDirtMaskTint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskTint = { "bOverride_BloomDirtMaskTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskTint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskTint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMask_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMask_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomDirtMask = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMask = { "bOverride_BloomDirtMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMask_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraShutterSpeed_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraShutterSpeed_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_CameraShutterSpeed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraShutterSpeed = { "bOverride_CameraShutterSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraShutterSpeed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraShutterSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraShutterSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraISO_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraISO_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_CameraISO = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraISO = { "bOverride_CameraISO", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraISO_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraISO_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraISO_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMethod_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMethod_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureMethod = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMethod = { "bOverride_AutoExposureMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMethod_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMethod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureLowPercent_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureLowPercent_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureLowPercent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureLowPercent = { "bOverride_AutoExposureLowPercent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureLowPercent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureLowPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureLowPercent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureHighPercent_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureHighPercent_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureHighPercent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureHighPercent = { "bOverride_AutoExposureHighPercent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureHighPercent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureHighPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureHighPercent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMinBrightness_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMinBrightness_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureMinBrightness = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMinBrightness = { "bOverride_AutoExposureMinBrightness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMinBrightness_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMinBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMinBrightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMaxBrightness_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMaxBrightness_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureMaxBrightness = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMaxBrightness = { "bOverride_AutoExposureMaxBrightness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMaxBrightness_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMaxBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMaxBrightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureCalibrationConstant_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureCalibrationConstant_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureCalibrationConstant_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureCalibrationConstant = { "bOverride_AutoExposureCalibrationConstant", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureCalibrationConstant_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureCalibrationConstant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureCalibrationConstant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedUp_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedUp_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureSpeedUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedUp = { "bOverride_AutoExposureSpeedUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedUp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedDown_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedDown_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureSpeedDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedDown = { "bOverride_AutoExposureSpeedDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedDown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBias_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBias_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureBias = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBias = { "bOverride_AutoExposureBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBias_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBiasCurve_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBiasCurve_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureBiasCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBiasCurve = { "bOverride_AutoExposureBiasCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBiasCurve_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBiasCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBiasCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMeterMask_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMeterMask_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureMeterMask = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMeterMask = { "bOverride_AutoExposureMeterMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMeterMask_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMeterMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMeterMask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureApplyPhysicalCameraExposure_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureApplyPhysicalCameraExposure_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureApplyPhysicalCameraExposure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureApplyPhysicalCameraExposure = { "bOverride_AutoExposureApplyPhysicalCameraExposure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureApplyPhysicalCameraExposure_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureApplyPhysicalCameraExposure_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureApplyPhysicalCameraExposure_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMin_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMin_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_HistogramLogMin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMin = { "bOverride_HistogramLogMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMax_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMax_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_HistogramLogMax = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMax = { "bOverride_HistogramLogMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMax_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureContrastScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureContrastScale_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LocalExposureContrastScale_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureContrastScale = { "bOverride_LocalExposureContrastScale", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureContrastScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureContrastScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureContrastScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureHighlightContrastScale_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureHighlightContrastScale_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LocalExposureHighlightContrastScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureHighlightContrastScale = { "bOverride_LocalExposureHighlightContrastScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureHighlightContrastScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureHighlightContrastScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureHighlightContrastScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureShadowContrastScale_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureShadowContrastScale_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LocalExposureShadowContrastScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureShadowContrastScale = { "bOverride_LocalExposureShadowContrastScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureShadowContrastScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureShadowContrastScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureShadowContrastScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureDetailStrength_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureDetailStrength_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LocalExposureDetailStrength = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureDetailStrength = { "bOverride_LocalExposureDetailStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureDetailStrength_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureDetailStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureDetailStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureBlurredLuminanceBlend_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureBlurredLuminanceBlend_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LocalExposureBlurredLuminanceBlend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureBlurredLuminanceBlend = { "bOverride_LocalExposureBlurredLuminanceBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureBlurredLuminanceBlend_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureBlurredLuminanceBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureBlurredLuminanceBlend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureBlurredLuminanceKernelSizePercent_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureBlurredLuminanceKernelSizePercent_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LocalExposureBlurredLuminanceKernelSizePercent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureBlurredLuminanceKernelSizePercent = { "bOverride_LocalExposureBlurredLuminanceKernelSizePercent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureBlurredLuminanceKernelSizePercent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureBlurredLuminanceKernelSizePercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureBlurredLuminanceKernelSizePercent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureMiddleGreyBias_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureMiddleGreyBias_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LocalExposureMiddleGreyBias = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureMiddleGreyBias = { "bOverride_LocalExposureMiddleGreyBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureMiddleGreyBias_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureMiddleGreyBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureMiddleGreyBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LensFlareIntensity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareIntensity = { "bOverride_LensFlareIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LensFlareTint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTint = { "bOverride_LensFlareTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTints_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTints_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LensFlareTints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTints = { "bOverride_LensFlareTints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTints_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehSize_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehSize_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LensFlareBokehSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehSize = { "bOverride_LensFlareBokehSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehShape_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehShape_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LensFlareBokehShape = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehShape = { "bOverride_LensFlareBokehShape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehShape_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehShape_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareThreshold_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareThreshold_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LensFlareThreshold = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareThreshold = { "bOverride_LensFlareThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareThreshold_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_VignetteIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_VignetteIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_VignetteIntensity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_VignetteIntensity = { "bOverride_VignetteIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_VignetteIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_VignetteIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_VignetteIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_GrainIntensity_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainIntensity = { "bOverride_GrainIntensity", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainJitter_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainJitter_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_GrainJitter_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainJitter = { "bOverride_GrainJitter", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainJitter_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainJitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainJitter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmGrainIntensity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainIntensity = { "bOverride_FilmGrainIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainIntensityShadows_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainIntensityShadows_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmGrainIntensityShadows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainIntensityShadows = { "bOverride_FilmGrainIntensityShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainIntensityShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainIntensityShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainIntensityShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainIntensityMidtones_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainIntensityMidtones_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmGrainIntensityMidtones = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainIntensityMidtones = { "bOverride_FilmGrainIntensityMidtones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainIntensityMidtones_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainIntensityMidtones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainIntensityMidtones_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainIntensityHighlights_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainIntensityHighlights_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmGrainIntensityHighlights = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainIntensityHighlights = { "bOverride_FilmGrainIntensityHighlights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainIntensityHighlights_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainIntensityHighlights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainIntensityHighlights_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainShadowsMax_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainShadowsMax_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmGrainShadowsMax = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainShadowsMax = { "bOverride_FilmGrainShadowsMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainShadowsMax_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainShadowsMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainShadowsMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainHighlightsMin_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainHighlightsMin_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmGrainHighlightsMin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainHighlightsMin = { "bOverride_FilmGrainHighlightsMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainHighlightsMin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainHighlightsMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainHighlightsMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainHighlightsMax_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainHighlightsMax_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmGrainHighlightsMax = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainHighlightsMax = { "bOverride_FilmGrainHighlightsMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainHighlightsMax_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainHighlightsMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainHighlightsMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainTexelSize_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainTexelSize_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmGrainTexelSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainTexelSize = { "bOverride_FilmGrainTexelSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainTexelSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainTexelSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainTexelSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainTexture_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainTexture_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmGrainTexture = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainTexture = { "bOverride_FilmGrainTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainTexture_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionIntensity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionIntensity = { "bOverride_AmbientOcclusionIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionStaticFraction_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionStaticFraction_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionStaticFraction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionStaticFraction = { "bOverride_AmbientOcclusionStaticFraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionStaticFraction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionStaticFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionStaticFraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadius_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadius_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionRadius = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadius = { "bOverride_AmbientOcclusionRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadius_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeDistance_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeDistance_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionFadeDistance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeDistance = { "bOverride_AmbientOcclusionFadeDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeRadius_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeRadius_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionFadeRadius = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeRadius = { "bOverride_AmbientOcclusionFadeRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeRadius_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionDistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionDistance_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionDistance_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionDistance = { "bOverride_AmbientOcclusionDistance", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadiusInWS_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadiusInWS_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionRadiusInWS = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadiusInWS = { "bOverride_AmbientOcclusionRadiusInWS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadiusInWS_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadiusInWS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadiusInWS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionPower_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionPower_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionPower = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionPower = { "bOverride_AmbientOcclusionPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionPower_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionPower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionBias_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionBias_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionBias = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionBias = { "bOverride_AmbientOcclusionBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionBias_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionQuality_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionQuality_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionQuality = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionQuality = { "bOverride_AmbientOcclusionQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionQuality_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipBlend_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipBlend_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionMipBlend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipBlend = { "bOverride_AmbientOcclusionMipBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipBlend_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipBlend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipScale_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipScale_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionMipScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipScale = { "bOverride_AmbientOcclusionMipScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipThreshold_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipThreshold_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionMipThreshold = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipThreshold = { "bOverride_AmbientOcclusionMipThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipThreshold_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionTemporalBlendWeight_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionTemporalBlendWeight_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionTemporalBlendWeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionTemporalBlendWeight = { "bOverride_AmbientOcclusionTemporalBlendWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionTemporalBlendWeight_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionTemporalBlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionTemporalBlendWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAO_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAO_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_RayTracingAO = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAO = { "bOverride_RayTracingAO", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAO_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAO_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAO_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAOSamplesPerPixel_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAOSamplesPerPixel_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_RayTracingAOSamplesPerPixel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAOSamplesPerPixel = { "bOverride_RayTracingAOSamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAOSamplesPerPixel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAOSamplesPerPixel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAOSamplesPerPixel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAOIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAOIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_RayTracingAOIntensity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAOIntensity = { "bOverride_RayTracingAOIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAOIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAOIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAOIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAORadius_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAORadius_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_RayTracingAORadius = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAORadius = { "bOverride_RayTracingAORadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAORadius_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAORadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAORadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVIntensity_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVIntensity = { "bOverride_LPVIntensity", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVDirectionalOcclusionIntensity_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionIntensity = { "bOverride_LPVDirectionalOcclusionIntensity", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionRadius_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionRadius_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVDirectionalOcclusionRadius_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionRadius = { "bOverride_LPVDirectionalOcclusionRadius", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionRadius_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionExponent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionExponent_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVDiffuseOcclusionExponent_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionExponent = { "bOverride_LPVDiffuseOcclusionExponent", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionExponent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionExponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionExponent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionExponent_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVSpecularOcclusionExponent_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionExponent = { "bOverride_LPVSpecularOcclusionExponent", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionExponent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionExponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVDiffuseOcclusionIntensity_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionIntensity = { "bOverride_LPVDiffuseOcclusionIntensity", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVSpecularOcclusionIntensity_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionIntensity = { "bOverride_LPVSpecularOcclusionIntensity", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSize_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVSize_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSize = { "bOverride_LPVSize", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryOcclusionIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryOcclusionIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVSecondaryOcclusionIntensity_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryOcclusionIntensity = { "bOverride_LPVSecondaryOcclusionIntensity", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryOcclusionIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryOcclusionIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryOcclusionIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryBounceIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryBounceIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVSecondaryBounceIntensity_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryBounceIntensity = { "bOverride_LPVSecondaryBounceIntensity", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryBounceIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryBounceIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryBounceIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVGeometryVolumeBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVGeometryVolumeBias_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVGeometryVolumeBias_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVGeometryVolumeBias = { "bOverride_LPVGeometryVolumeBias", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVGeometryVolumeBias_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVGeometryVolumeBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVGeometryVolumeBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVVplInjectionBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVVplInjectionBias_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVVplInjectionBias_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVVplInjectionBias = { "bOverride_LPVVplInjectionBias", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVVplInjectionBias_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVVplInjectionBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVVplInjectionBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVEmissiveInjectionIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVEmissiveInjectionIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVEmissiveInjectionIntensity_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVEmissiveInjectionIntensity = { "bOverride_LPVEmissiveInjectionIntensity", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVEmissiveInjectionIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVEmissiveInjectionIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVEmissiveInjectionIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVFadeRange_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVFadeRange_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVFadeRange_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVFadeRange = { "bOverride_LPVFadeRange", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVFadeRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVFadeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVFadeRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionFadeRange_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionFadeRange_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVDirectionalOcclusionFadeRange_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionFadeRange = { "bOverride_LPVDirectionalOcclusionFadeRange", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionFadeRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionFadeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionFadeRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingColor_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingColor_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_IndirectLightingColor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingColor = { "bOverride_IndirectLightingColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingColor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_IndirectLightingIntensity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingIntensity = { "bOverride_IndirectLightingIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorGradingIntensity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingIntensity = { "bOverride_ColorGradingIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingLUT_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingLUT_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorGradingLUT = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingLUT = { "bOverride_ColorGradingLUT", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingLUT_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingLUT_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingLUT_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalDistance_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalDistance_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldFocalDistance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalDistance = { "bOverride_DepthOfFieldFocalDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFstop_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFstop_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldFstop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFstop = { "bOverride_DepthOfFieldFstop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFstop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFstop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFstop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMinFstop_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMinFstop_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldMinFstop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMinFstop = { "bOverride_DepthOfFieldMinFstop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMinFstop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMinFstop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMinFstop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBladeCount_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBladeCount_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldBladeCount = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBladeCount = { "bOverride_DepthOfFieldBladeCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBladeCount_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBladeCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBladeCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSensorWidth_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSensorWidth_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldSensorWidth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSensorWidth = { "bOverride_DepthOfFieldSensorWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSensorWidth_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSensorWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSensorWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSqueezeFactor_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSqueezeFactor_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldSqueezeFactor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSqueezeFactor = { "bOverride_DepthOfFieldSqueezeFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSqueezeFactor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSqueezeFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSqueezeFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurRadius_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurRadius_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldDepthBlurRadius = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurRadius = { "bOverride_DepthOfFieldDepthBlurRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurRadius_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurAmount_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurAmount_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldDepthBlurAmount = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurAmount = { "bOverride_DepthOfFieldDepthBlurAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurAmount_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalRegion_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalRegion_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldFocalRegion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalRegion = { "bOverride_DepthOfFieldFocalRegion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalRegion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalRegion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearTransitionRegion_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearTransitionRegion_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldNearTransitionRegion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearTransitionRegion = { "bOverride_DepthOfFieldNearTransitionRegion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearTransitionRegion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearTransitionRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearTransitionRegion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarTransitionRegion_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarTransitionRegion_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldFarTransitionRegion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarTransitionRegion = { "bOverride_DepthOfFieldFarTransitionRegion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarTransitionRegion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarTransitionRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarTransitionRegion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldScale_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldScale_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldScale = { "bOverride_DepthOfFieldScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearBlurSize_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearBlurSize_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldNearBlurSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearBlurSize = { "bOverride_DepthOfFieldNearBlurSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearBlurSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearBlurSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearBlurSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarBlurSize_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarBlurSize_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldFarBlurSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarBlurSize = { "bOverride_DepthOfFieldFarBlurSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarBlurSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarBlurSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarBlurSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MobileHQGaussian_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MobileHQGaussian_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_MobileHQGaussian = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MobileHQGaussian = { "bOverride_MobileHQGaussian", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MobileHQGaussian_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MobileHQGaussian_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MobileHQGaussian_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldOcclusion_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldOcclusion_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldOcclusion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldOcclusion = { "bOverride_DepthOfFieldOcclusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldOcclusion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSkyFocusDistance_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSkyFocusDistance_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldSkyFocusDistance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSkyFocusDistance = { "bOverride_DepthOfFieldSkyFocusDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSkyFocusDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSkyFocusDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSkyFocusDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldVignetteSize_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldVignetteSize_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldVignetteSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldVignetteSize = { "bOverride_DepthOfFieldVignetteSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldVignetteSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldVignetteSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldVignetteSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurAmount_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurAmount_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_MotionBlurAmount = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurAmount = { "bOverride_MotionBlurAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurAmount_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurMax_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurMax_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_MotionBlurMax = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurMax = { "bOverride_MotionBlurMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurMax_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurTargetFPS_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurTargetFPS_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_MotionBlurTargetFPS = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurTargetFPS = { "bOverride_MotionBlurTargetFPS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurTargetFPS_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurTargetFPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurTargetFPS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurPerObjectSize_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurPerObjectSize_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_MotionBlurPerObjectSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurPerObjectSize = { "bOverride_MotionBlurPerObjectSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurPerObjectSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurPerObjectSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurPerObjectSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenPercentage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenPercentage_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ScreenPercentage_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenPercentage = { "bOverride_ScreenPercentage", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenPercentage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ReflectionMethod_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ReflectionMethod_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ReflectionMethod = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ReflectionMethod = { "bOverride_ReflectionMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ReflectionMethod_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ReflectionMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ReflectionMethod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenReflectionQuality_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenReflectionQuality_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LumenReflectionQuality = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenReflectionQuality = { "bOverride_LumenReflectionQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenReflectionQuality_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenReflectionQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenReflectionQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ScreenSpaceReflectionIntensity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionIntensity = { "bOverride_ScreenSpaceReflectionIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionQuality_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionQuality_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ScreenSpaceReflectionQuality = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionQuality = { "bOverride_ScreenSpaceReflectionQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionQuality_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionMaxRoughness_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionMaxRoughness_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ScreenSpaceReflectionMaxRoughness = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionMaxRoughness = { "bOverride_ScreenSpaceReflectionMaxRoughness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionMaxRoughness_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionMaxRoughness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionMaxRoughness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionRoughnessScale_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionRoughnessScale_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ScreenSpaceReflectionRoughnessScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionRoughnessScale = { "bOverride_ScreenSpaceReflectionRoughnessScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionRoughnessScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionRoughnessScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionRoughnessScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ReflectionsType_MetaData[] = {
		{ "Comment", "// Ray Tracing\n" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Ray Tracing" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ReflectionsType_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ReflectionsType_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ReflectionsType = { "bOverride_ReflectionsType", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ReflectionsType_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ReflectionsType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ReflectionsType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsMaxRoughness_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsMaxRoughness_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_RayTracingReflectionsMaxRoughness = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsMaxRoughness = { "bOverride_RayTracingReflectionsMaxRoughness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsMaxRoughness_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsMaxRoughness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsMaxRoughness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsMaxBounces_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsMaxBounces_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_RayTracingReflectionsMaxBounces = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsMaxBounces = { "bOverride_RayTracingReflectionsMaxBounces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsMaxBounces_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsMaxBounces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsMaxBounces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsSamplesPerPixel_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsSamplesPerPixel_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_RayTracingReflectionsSamplesPerPixel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsSamplesPerPixel = { "bOverride_RayTracingReflectionsSamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsSamplesPerPixel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsSamplesPerPixel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsSamplesPerPixel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsShadows_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsShadows_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_RayTracingReflectionsShadows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsShadows = { "bOverride_RayTracingReflectionsShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsTranslucency_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsTranslucency_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_RayTracingReflectionsTranslucency = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsTranslucency = { "bOverride_RayTracingReflectionsTranslucency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsTranslucency_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsTranslucency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsTranslucency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_TranslucencyType_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_TranslucencyType_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_TranslucencyType = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_TranslucencyType = { "bOverride_TranslucencyType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_TranslucencyType_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_TranslucencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_TranslucencyType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyMaxRoughness_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyMaxRoughness_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_RayTracingTranslucencyMaxRoughness = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyMaxRoughness = { "bOverride_RayTracingTranslucencyMaxRoughness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyMaxRoughness_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyMaxRoughness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyMaxRoughness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefractionRays_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefractionRays_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_RayTracingTranslucencyRefractionRays = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefractionRays = { "bOverride_RayTracingTranslucencyRefractionRays", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefractionRays_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefractionRays_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefractionRays_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencySamplesPerPixel_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencySamplesPerPixel_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_RayTracingTranslucencySamplesPerPixel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencySamplesPerPixel = { "bOverride_RayTracingTranslucencySamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencySamplesPerPixel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencySamplesPerPixel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencySamplesPerPixel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyShadows_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyShadows_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_RayTracingTranslucencyShadows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyShadows = { "bOverride_RayTracingTranslucencyShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefraction_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefraction_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_RayTracingTranslucencyRefraction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefraction = { "bOverride_RayTracingTranslucencyRefraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefraction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DynamicGlobalIlluminationMethod_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DynamicGlobalIlluminationMethod_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DynamicGlobalIlluminationMethod = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DynamicGlobalIlluminationMethod = { "bOverride_DynamicGlobalIlluminationMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DynamicGlobalIlluminationMethod_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DynamicGlobalIlluminationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DynamicGlobalIlluminationMethod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSceneLightingQuality_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSceneLightingQuality_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LumenSceneLightingQuality = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSceneLightingQuality = { "bOverride_LumenSceneLightingQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSceneLightingQuality_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSceneLightingQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSceneLightingQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSceneDetail_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSceneDetail_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LumenSceneDetail = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSceneDetail = { "bOverride_LumenSceneDetail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSceneDetail_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSceneDetail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSceneDetail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSceneViewDistance_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSceneViewDistance_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LumenSceneViewDistance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSceneViewDistance = { "bOverride_LumenSceneViewDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSceneViewDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSceneViewDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSceneViewDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSceneLightingUpdateSpeed_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSceneLightingUpdateSpeed_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LumenSceneLightingUpdateSpeed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSceneLightingUpdateSpeed = { "bOverride_LumenSceneLightingUpdateSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSceneLightingUpdateSpeed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSceneLightingUpdateSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSceneLightingUpdateSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenFinalGatherQuality_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenFinalGatherQuality_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LumenFinalGatherQuality = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenFinalGatherQuality = { "bOverride_LumenFinalGatherQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenFinalGatherQuality_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenFinalGatherQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenFinalGatherQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenFinalGatherLightingUpdateSpeed_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenFinalGatherLightingUpdateSpeed_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LumenFinalGatherLightingUpdateSpeed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenFinalGatherLightingUpdateSpeed = { "bOverride_LumenFinalGatherLightingUpdateSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenFinalGatherLightingUpdateSpeed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenFinalGatherLightingUpdateSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenFinalGatherLightingUpdateSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenMaxTraceDistance_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenMaxTraceDistance_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LumenMaxTraceDistance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenMaxTraceDistance = { "bOverride_LumenMaxTraceDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenMaxTraceDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenMaxTraceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenMaxTraceDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenDiffuseColorBoost_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenDiffuseColorBoost_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LumenDiffuseColorBoost = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenDiffuseColorBoost = { "bOverride_LumenDiffuseColorBoost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenDiffuseColorBoost_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenDiffuseColorBoost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenDiffuseColorBoost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSkylightLeaking_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSkylightLeaking_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LumenSkylightLeaking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSkylightLeaking = { "bOverride_LumenSkylightLeaking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSkylightLeaking_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSkylightLeaking_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSkylightLeaking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenFullSkylightLeakingDistance_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenFullSkylightLeakingDistance_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LumenFullSkylightLeakingDistance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenFullSkylightLeakingDistance = { "bOverride_LumenFullSkylightLeakingDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenFullSkylightLeakingDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenFullSkylightLeakingDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenFullSkylightLeakingDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenRayLightingMode_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenRayLightingMode_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LumenRayLightingMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenRayLightingMode = { "bOverride_LumenRayLightingMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenRayLightingMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenRayLightingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenRayLightingMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenFrontLayerTranslucencyReflections_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenFrontLayerTranslucencyReflections_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LumenFrontLayerTranslucencyReflections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenFrontLayerTranslucencyReflections = { "bOverride_LumenFrontLayerTranslucencyReflections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenFrontLayerTranslucencyReflections_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenFrontLayerTranslucencyReflections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenFrontLayerTranslucencyReflections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSurfaceCacheResolution_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSurfaceCacheResolution_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LumenSurfaceCacheResolution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSurfaceCacheResolution = { "bOverride_LumenSurfaceCacheResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSurfaceCacheResolution_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSurfaceCacheResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSurfaceCacheResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGI_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGI_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_RayTracingGI = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGI = { "bOverride_RayTracingGI", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGI_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGI_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGIMaxBounces_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGIMaxBounces_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_RayTracingGIMaxBounces = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGIMaxBounces = { "bOverride_RayTracingGIMaxBounces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGIMaxBounces_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGIMaxBounces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGIMaxBounces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGISamplesPerPixel_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGISamplesPerPixel_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_RayTracingGISamplesPerPixel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGISamplesPerPixel = { "bOverride_RayTracingGISamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGISamplesPerPixel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGISamplesPerPixel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGISamplesPerPixel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingMaxBounces_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingMaxBounces_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_PathTracingMaxBounces = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingMaxBounces = { "bOverride_PathTracingMaxBounces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingMaxBounces_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingMaxBounces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingMaxBounces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingSamplesPerPixel_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingSamplesPerPixel_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_PathTracingSamplesPerPixel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingSamplesPerPixel = { "bOverride_PathTracingSamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingSamplesPerPixel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingSamplesPerPixel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingSamplesPerPixel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingFilterWidth_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingFilterWidth_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_PathTracingFilterWidth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingFilterWidth = { "bOverride_PathTracingFilterWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingFilterWidth_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingFilterWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingFilterWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingMaxPathExposure_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingMaxPathExposure_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_PathTracingMaxPathExposure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingMaxPathExposure = { "bOverride_PathTracingMaxPathExposure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingMaxPathExposure_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingMaxPathExposure_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingMaxPathExposure_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingEnableReferenceDOF_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingEnableReferenceDOF_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_PathTracingEnableReferenceDOF = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingEnableReferenceDOF = { "bOverride_PathTracingEnableReferenceDOF", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingEnableReferenceDOF_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingEnableReferenceDOF_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingEnableReferenceDOF_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingEnableReferenceAtmosphere_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingEnableReferenceAtmosphere_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_PathTracingEnableReferenceAtmosphere = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingEnableReferenceAtmosphere = { "bOverride_PathTracingEnableReferenceAtmosphere", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingEnableReferenceAtmosphere_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingEnableReferenceAtmosphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingEnableReferenceAtmosphere_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingEnableDenoiser_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingEnableDenoiser_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_PathTracingEnableDenoiser = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingEnableDenoiser = { "bOverride_PathTracingEnableDenoiser", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingEnableDenoiser_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingEnableDenoiser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingEnableDenoiser_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeEmissive_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeEmissive_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_PathTracingIncludeEmissive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeEmissive = { "bOverride_PathTracingIncludeEmissive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeEmissive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeEmissive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeEmissive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeIndirectEmissive_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeIndirectEmissive_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_PathTracingIncludeIndirectEmissive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeIndirectEmissive = { "bOverride_PathTracingIncludeIndirectEmissive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeIndirectEmissive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeIndirectEmissive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeIndirectEmissive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeDiffuse_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeDiffuse_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_PathTracingIncludeDiffuse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeDiffuse = { "bOverride_PathTracingIncludeDiffuse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeDiffuse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeDiffuse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeDiffuse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeIndirectDiffuse_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeIndirectDiffuse_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_PathTracingIncludeIndirectDiffuse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeIndirectDiffuse = { "bOverride_PathTracingIncludeIndirectDiffuse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeIndirectDiffuse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeIndirectDiffuse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeIndirectDiffuse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeSpecular_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeSpecular_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_PathTracingIncludeSpecular = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeSpecular = { "bOverride_PathTracingIncludeSpecular", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeSpecular_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeSpecular_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeSpecular_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeIndirectSpecular_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeIndirectSpecular_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_PathTracingIncludeIndirectSpecular = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeIndirectSpecular = { "bOverride_PathTracingIncludeIndirectSpecular", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeIndirectSpecular_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeIndirectSpecular_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeIndirectSpecular_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeVolume_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeVolume_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_PathTracingIncludeVolume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeVolume = { "bOverride_PathTracingIncludeVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeVolume_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeIndirectVolume_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeIndirectVolume_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_PathTracingIncludeIndirectVolume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeIndirectVolume = { "bOverride_PathTracingIncludeIndirectVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeIndirectVolume_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeIndirectVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeIndirectVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bMobileHQGaussian_MetaData[] = {
		{ "Category", "Lens|Mobile Depth of Field" },
		{ "Comment", "/** Enable HQ Gaussian on high end mobile platforms. (ES3_1) */" },
		{ "DisplayName", "High Quality Gaussian DoF on Mobile" },
		{ "editcondition", "bOverride_MobileHQGaussian" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Enable HQ Gaussian on high end mobile platforms. (ES3_1)" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bMobileHQGaussian_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bMobileHQGaussian = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bMobileHQGaussian = { "bMobileHQGaussian", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bMobileHQGaussian_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bMobileHQGaussian_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bMobileHQGaussian_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomMethod_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "Comment", "/** Bloom algorithm */" },
		{ "DisplayName", "Method" },
		{ "editcondition", "bOverride_BloomMethod" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom algorithm" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomMethod = { "BloomMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, BloomMethod), Z_Construct_UEnum_Engine_EBloomMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomMethod_MetaData)) }; // 2938043131
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMethod_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "Comment", "/** Luminance computation method */" },
		{ "DisplayName", "Metering Mode" },
		{ "editcondition", "bOverride_AutoExposureMethod" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Luminance computation method" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMethod = { "AutoExposureMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, AutoExposureMethod), Z_Construct_UEnum_Engine_EAutoExposureMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMethod_MetaData)) }; // 1360730395
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMethod_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMethod = { "DepthOfFieldMethod", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldMethod_DEPRECATED), Z_Construct_UEnum_Engine_EDepthOfFieldMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMethod_MetaData)) }; // 3413507750
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_TemperatureType_MetaData[] = {
		{ "Category", "Color Grading|Temperature" },
		{ "Comment", "/**\n\x09* Selects the type of temperature calculation.\n\x09* White Balance uses the Temperature value to control the virtual camera's White Balance. This is the default selection.\n\x09* Color Temperature uses the Temperature value to adjust the color temperature of the scene, which is the inverse of the White Balance operation.\n\x09*/" },
		{ "DisplayName", "Temperature Type" },
		{ "editcondition", "bOverride_TemperatureType" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Selects the type of temperature calculation.\nWhite Balance uses the Temperature value to control the virtual camera's White Balance. This is the default selection.\nColor Temperature uses the Temperature value to adjust the color temperature of the scene, which is the inverse of the White Balance operation." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_TemperatureType = { "TemperatureType", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, TemperatureType), Z_Construct_UEnum_Engine_ETemperatureMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_TemperatureType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_TemperatureType_MetaData)) }; // 3948101323
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WhiteTemp_MetaData[] = {
		{ "Category", "Color Grading|Temperature" },
		{ "DisplayName", "Temp" },
		{ "editcondition", "bOverride_WhiteTemp" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "15000.0" },
		{ "UIMin", "1500.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WhiteTemp = { "WhiteTemp", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, WhiteTemp), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WhiteTemp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WhiteTemp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WhiteTint_MetaData[] = {
		{ "Category", "Color Grading|Temperature" },
		{ "DisplayName", "Tint" },
		{ "editcondition", "bOverride_WhiteTint" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WhiteTint = { "WhiteTint", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, WhiteTint), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WhiteTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WhiteTint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturation_MetaData[] = {
		{ "Category", "Color Grading|Global" },
		{ "ColorGradingMode", "saturation" },
		{ "Comment", "// Color Correction controls\n" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Saturation" },
		{ "editcondition", "bOverride_ColorSaturation" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "ToolTip", "Color Correction controls" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturation = { "ColorSaturation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorSaturation), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrast_MetaData[] = {
		{ "Category", "Color Grading|Global" },
		{ "ColorGradingMode", "contrast" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Contrast" },
		{ "editcondition", "bOverride_ColorContrast" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrast = { "ColorContrast", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorContrast), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrast_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrast_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGamma_MetaData[] = {
		{ "Category", "Color Grading|Global" },
		{ "ColorGradingMode", "gamma" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gamma" },
		{ "editcondition", "bOverride_ColorGamma" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGamma = { "ColorGamma", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorGamma), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGamma_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGain_MetaData[] = {
		{ "Category", "Color Grading|Global" },
		{ "ColorGradingMode", "gain" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gain" },
		{ "editcondition", "bOverride_ColorGain" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGain = { "ColorGain", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorGain), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffset_MetaData[] = {
		{ "Category", "Color Grading|Global" },
		{ "ColorGradingMode", "offset" },
		{ "Delta", "0.001" },
		{ "DisplayName", "Offset" },
		{ "editcondition", "bOverride_ColorOffset" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "20" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "SupportDynamicSliderMinValue", "true" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffset = { "ColorOffset", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorOffset), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationShadows_MetaData[] = {
		{ "Category", "Color Grading|Shadows" },
		{ "ColorGradingMode", "saturation" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Saturation" },
		{ "editcondition", "bOverride_ColorSaturationShadows" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationShadows = { "ColorSaturationShadows", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorSaturationShadows), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastShadows_MetaData[] = {
		{ "Category", "Color Grading|Shadows" },
		{ "ColorGradingMode", "contrast" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Contrast" },
		{ "editcondition", "bOverride_ColorContrastShadows" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastShadows = { "ColorContrastShadows", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorContrastShadows), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaShadows_MetaData[] = {
		{ "Category", "Color Grading|Shadows" },
		{ "ColorGradingMode", "gamma" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gamma" },
		{ "editcondition", "bOverride_ColorGammaShadows" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaShadows = { "ColorGammaShadows", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorGammaShadows), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainShadows_MetaData[] = {
		{ "Category", "Color Grading|Shadows" },
		{ "ColorGradingMode", "gain" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gain" },
		{ "editcondition", "bOverride_ColorGainShadows" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainShadows = { "ColorGainShadows", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorGainShadows), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetShadows_MetaData[] = {
		{ "Category", "Color Grading|Shadows" },
		{ "ColorGradingMode", "offset" },
		{ "Delta", "0.001" },
		{ "DisplayName", "Offset" },
		{ "editcondition", "bOverride_ColorOffsetShadows" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "20" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "SupportDynamicSliderMinValue", "true" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetShadows = { "ColorOffsetShadows", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorOffsetShadows), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationMidtones_MetaData[] = {
		{ "Category", "Color Grading|Midtones" },
		{ "ColorGradingMode", "saturation" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Saturation" },
		{ "editcondition", "bOverride_ColorSaturationMidtones" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationMidtones = { "ColorSaturationMidtones", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorSaturationMidtones), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationMidtones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationMidtones_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastMidtones_MetaData[] = {
		{ "Category", "Color Grading|Midtones" },
		{ "ColorGradingMode", "contrast" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Contrast" },
		{ "editcondition", "bOverride_ColorContrastMidtones" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastMidtones = { "ColorContrastMidtones", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorContrastMidtones), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastMidtones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastMidtones_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaMidtones_MetaData[] = {
		{ "Category", "Color Grading|Midtones" },
		{ "ColorGradingMode", "gamma" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gamma" },
		{ "editcondition", "bOverride_ColorGammaMidtones" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaMidtones = { "ColorGammaMidtones", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorGammaMidtones), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaMidtones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaMidtones_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainMidtones_MetaData[] = {
		{ "Category", "Color Grading|Midtones" },
		{ "ColorGradingMode", "gain" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gain" },
		{ "editcondition", "bOverride_ColorGainMidtones" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainMidtones = { "ColorGainMidtones", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorGainMidtones), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainMidtones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainMidtones_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetMidtones_MetaData[] = {
		{ "Category", "Color Grading|Midtones" },
		{ "ColorGradingMode", "offset" },
		{ "Delta", "0.001" },
		{ "DisplayName", "Offset" },
		{ "editcondition", "bOverride_ColorOffsetMidtones" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "20" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "SupportDynamicSliderMinValue", "true" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetMidtones = { "ColorOffsetMidtones", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorOffsetMidtones), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetMidtones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetMidtones_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationHighlights_MetaData[] = {
		{ "Category", "Color Grading|Highlights" },
		{ "ColorGradingMode", "saturation" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Saturation" },
		{ "editcondition", "bOverride_ColorSaturationHighlights" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationHighlights = { "ColorSaturationHighlights", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorSaturationHighlights), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationHighlights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationHighlights_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastHighlights_MetaData[] = {
		{ "Category", "Color Grading|Highlights" },
		{ "ColorGradingMode", "contrast" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Contrast" },
		{ "editcondition", "bOverride_ColorContrastHighlights" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastHighlights = { "ColorContrastHighlights", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorContrastHighlights), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastHighlights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastHighlights_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaHighlights_MetaData[] = {
		{ "Category", "Color Grading|Highlights" },
		{ "ColorGradingMode", "gamma" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gamma" },
		{ "editcondition", "bOverride_ColorGammaHighlights" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaHighlights = { "ColorGammaHighlights", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorGammaHighlights), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaHighlights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaHighlights_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainHighlights_MetaData[] = {
		{ "Category", "Color Grading|Highlights" },
		{ "ColorGradingMode", "gain" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gain" },
		{ "editcondition", "bOverride_ColorGainHighlights" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainHighlights = { "ColorGainHighlights", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorGainHighlights), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainHighlights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainHighlights_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetHighlights_MetaData[] = {
		{ "Category", "Color Grading|Highlights" },
		{ "ColorGradingMode", "offset" },
		{ "Delta", "0.001" },
		{ "DisplayName", "Offset" },
		{ "editcondition", "bOverride_ColorOffsetHighlights" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "20" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "SupportDynamicSliderMinValue", "true" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetHighlights = { "ColorOffsetHighlights", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorOffsetHighlights), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetHighlights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetHighlights_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionHighlightsMin_MetaData[] = {
		{ "Category", "Color Grading|Highlights" },
		{ "DisplayName", "HighlightsMin" },
		{ "editcondition", "bOverride_ColorCorrectionHighlightsMin" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionHighlightsMin = { "ColorCorrectionHighlightsMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorCorrectionHighlightsMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionHighlightsMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionHighlightsMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionHighlightsMax_MetaData[] = {
		{ "Category", "Color Grading|Highlights" },
		{ "Comment", "/** Should be set larger than HighlightsMin. Default is 1.0, for backwards compatibility */" },
		{ "DisplayName", "HighlightsMax" },
		{ "editcondition", "bOverride_ColorCorrectionHighlightsMax" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Should be set larger than HighlightsMin. Default is 1.0, for backwards compatibility" },
		{ "UIMax", "10.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionHighlightsMax = { "ColorCorrectionHighlightsMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorCorrectionHighlightsMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionHighlightsMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionHighlightsMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionShadowsMax_MetaData[] = {
		{ "Category", "Color Grading|Shadows" },
		{ "DisplayName", "ShadowsMax" },
		{ "editcondition", "bOverride_ColorCorrectionShadowsMax" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionShadowsMax = { "ColorCorrectionShadowsMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorCorrectionShadowsMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionShadowsMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionShadowsMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BlueCorrection_MetaData[] = {
		{ "Category", "Color Grading|Misc" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Correct for artifacts with \"electric\" blues due to the ACEScg color space. Bright blue desaturates instead of going to violet. */" },
		{ "editcondition", "bOverride_BlueCorrection" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Correct for artifacts with \"electric\" blues due to the ACEScg color space. Bright blue desaturates instead of going to violet." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BlueCorrection = { "BlueCorrection", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, BlueCorrection), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BlueCorrection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BlueCorrection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ExpandGamut_MetaData[] = {
		{ "Category", "Color Grading|Misc" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Expand bright saturated colors outside the sRGB gamut to fake wide gamut rendering. */" },
		{ "editcondition", "bOverride_ExpandGamut" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Expand bright saturated colors outside the sRGB gamut to fake wide gamut rendering." },
		{ "UIMax", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ExpandGamut = { "ExpandGamut", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ExpandGamut), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ExpandGamut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ExpandGamut_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ToneCurveAmount_MetaData[] = {
		{ "Category", "Color Grading|Misc" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Allow effect of Tone Curve to be reduced (Set ToneCurveAmount and ExpandGamut to 0.0 to fully disable tone curve) */" },
		{ "editcondition", "bOverride_ToneCurveAmount" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Allow effect of Tone Curve to be reduced (Set ToneCurveAmount and ExpandGamut to 0.0 to fully disable tone curve)" },
		{ "UIMax", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ToneCurveAmount = { "ToneCurveAmount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ToneCurveAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ToneCurveAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ToneCurveAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmSlope_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Slope" },
		{ "editcondition", "bOverride_FilmSlope" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmSlope = { "FilmSlope", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, FilmSlope), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmSlope_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmSlope_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmToe_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Toe" },
		{ "editcondition", "bOverride_FilmToe" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmToe = { "FilmToe", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, FilmToe), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmToe_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmToe_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShoulder_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Shoulder" },
		{ "editcondition", "bOverride_FilmShoulder" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShoulder = { "FilmShoulder", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, FilmShoulder), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShoulder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShoulder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmBlackClip_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Black clip" },
		{ "editcondition", "bOverride_FilmBlackClip" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmBlackClip = { "FilmBlackClip", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, FilmBlackClip), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmBlackClip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmBlackClip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmWhiteClip_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "White clip" },
		{ "editcondition", "bOverride_FilmWhiteClip" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmWhiteClip = { "FilmWhiteClip", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, FilmWhiteClip), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmWhiteClip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmWhiteClip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_SceneColorTint_MetaData[] = {
		{ "Category", "Color Grading|Misc" },
		{ "Comment", "/** Scene tint color */" },
		{ "editcondition", "bOverride_SceneColorTint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Scene tint color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_SceneColorTint = { "SceneColorTint", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, SceneColorTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_SceneColorTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_SceneColorTint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_SceneFringeIntensity_MetaData[] = {
		{ "Category", "Lens|Chromatic Aberration" },
		{ "Comment", "/** in percent, Scene chromatic aberration / color fringe (camera imperfection) to simulate an artifact that happens in real-world lens, mostly visible in the image corners. */" },
		{ "DisplayName", "Intensity" },
		{ "editcondition", "bOverride_SceneFringeIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "in percent, Scene chromatic aberration / color fringe (camera imperfection) to simulate an artifact that happens in real-world lens, mostly visible in the image corners." },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_SceneFringeIntensity = { "SceneFringeIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, SceneFringeIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_SceneFringeIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_SceneFringeIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ChromaticAberrationStartOffset_MetaData[] = {
		{ "Category", "Lens|Chromatic Aberration" },
		{ "Comment", "/** A normalized distance to the center of the framebuffer where the effect takes place. */" },
		{ "DisplayName", "Start Offset" },
		{ "editcondition", "bOverride_ChromaticAberrationStartOffset" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "A normalized distance to the center of the framebuffer where the effect takes place." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ChromaticAberrationStartOffset = { "ChromaticAberrationStartOffset", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ChromaticAberrationStartOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ChromaticAberrationStartOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ChromaticAberrationStartOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomIntensity_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Multiplier for all bloom contributions >=0: off, 1(default), >1 brighter */" },
		{ "DisplayName", "Intensity" },
		{ "editcondition", "bOverride_BloomIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Multiplier for all bloom contributions >=0: off, 1(default), >1 brighter" },
		{ "UIMax", "8.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomIntensity = { "BloomIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, BloomIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomThreshold_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "/**\n\x09 * minimum brightness the bloom starts having effect\n\x09 * -1:all pixels affect bloom equally (physically correct, faster as a threshold pass is omitted), 0:all pixels affect bloom brights more, 1(default), >1 brighter\n\x09 */" },
		{ "DisplayName", "Threshold" },
		{ "editcondition", "bOverride_BloomThreshold" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "minimum brightness the bloom starts having effect\n-1:all pixels affect bloom equally (physically correct, faster as a threshold pass is omitted), 0:all pixels affect bloom brights more, 1(default), >1 brighter" },
		{ "UIMax", "8.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomThreshold = { "BloomThreshold", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, BloomThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomSizeScale_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Scale for all bloom sizes\n\x09 */" },
		{ "DisplayName", "Size scale" },
		{ "editcondition", "bOverride_BloomSizeScale" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Scale for all bloom sizes" },
		{ "UIMax", "64.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomSizeScale = { "BloomSizeScale", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, BloomSizeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomSizeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomSizeScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom1Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Diameter size for the Bloom1 in percent of the screen width\n\x09 * (is done in 1/2 resolution, larger values cost more performance, good for high frequency details)\n\x09 * >=0: can be clamped because of shader limitations\n\x09 */" },
		{ "DisplayName", "#1 Size" },
		{ "editcondition", "bOverride_Bloom1Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for the Bloom1 in percent of the screen width\n(is done in 1/2 resolution, larger values cost more performance, good for high frequency details)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "4.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom1Size = { "Bloom1Size", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, Bloom1Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom1Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom1Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom2Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Diameter size for Bloom2 in percent of the screen width\n\x09 * (is done in 1/4 resolution, larger values cost more performance)\n\x09 * >=0: can be clamped because of shader limitations\n\x09 */" },
		{ "DisplayName", "#2 Size" },
		{ "editcondition", "bOverride_Bloom2Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for Bloom2 in percent of the screen width\n(is done in 1/4 resolution, larger values cost more performance)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "8.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom2Size = { "Bloom2Size", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, Bloom2Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom2Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom2Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom3Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Diameter size for Bloom3 in percent of the screen width\n\x09 * (is done in 1/8 resolution, larger values cost more performance)\n\x09 * >=0: can be clamped because of shader limitations\n\x09 */" },
		{ "DisplayName", "#3 Size" },
		{ "editcondition", "bOverride_Bloom3Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for Bloom3 in percent of the screen width\n(is done in 1/8 resolution, larger values cost more performance)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "16.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom3Size = { "Bloom3Size", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, Bloom3Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom3Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom3Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom4Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Diameter size for Bloom4 in percent of the screen width\n\x09 * (is done in 1/16 resolution, larger values cost more performance, best for wide contributions)\n\x09 * >=0: can be clamped because of shader limitations\n\x09 */" },
		{ "DisplayName", "#4 Size" },
		{ "editcondition", "bOverride_Bloom4Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for Bloom4 in percent of the screen width\n(is done in 1/16 resolution, larger values cost more performance, best for wide contributions)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "32.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom4Size = { "Bloom4Size", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, Bloom4Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom4Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom4Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom5Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Diameter size for Bloom5 in percent of the screen width\n\x09 * (is done in 1/32 resolution, larger values cost more performance, best for wide contributions)\n\x09 * >=0: can be clamped because of shader limitations\n\x09 */" },
		{ "DisplayName", "#5 Size" },
		{ "editcondition", "bOverride_Bloom5Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for Bloom5 in percent of the screen width\n(is done in 1/32 resolution, larger values cost more performance, best for wide contributions)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "64.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom5Size = { "Bloom5Size", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, Bloom5Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom5Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom5Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom6Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Diameter size for Bloom6 in percent of the screen width\n\x09 * (is done in 1/64 resolution, larger values cost more performance, best for wide contributions)\n\x09 * >=0: can be clamped because of shader limitations\n\x09 */" },
		{ "DisplayName", "#6 Size" },
		{ "editcondition", "bOverride_Bloom6Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for Bloom6 in percent of the screen width\n(is done in 1/64 resolution, larger values cost more performance, best for wide contributions)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "128.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom6Size = { "Bloom6Size", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, Bloom6Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom6Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom6Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom1Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "Comment", "/** Bloom1 tint color */" },
		{ "DisplayName", "#1 Tint" },
		{ "editcondition", "bOverride_Bloom1Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom1 tint color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom1Tint = { "Bloom1Tint", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, Bloom1Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom1Tint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom1Tint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom2Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "Comment", "/** Bloom2 tint color */" },
		{ "DisplayName", "#2 Tint" },
		{ "editcondition", "bOverride_Bloom2Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom2 tint color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom2Tint = { "Bloom2Tint", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, Bloom2Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom2Tint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom2Tint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom3Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "Comment", "/** Bloom3 tint color */" },
		{ "DisplayName", "#3 Tint" },
		{ "editcondition", "bOverride_Bloom3Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom3 tint color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom3Tint = { "Bloom3Tint", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, Bloom3Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom3Tint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom3Tint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom4Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "Comment", "/** Bloom4 tint color */" },
		{ "DisplayName", "#4 Tint" },
		{ "editcondition", "bOverride_Bloom4Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom4 tint color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom4Tint = { "Bloom4Tint", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, Bloom4Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom4Tint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom4Tint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom5Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "Comment", "/** Bloom5 tint color */" },
		{ "DisplayName", "#5 Tint" },
		{ "editcondition", "bOverride_Bloom5Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom5 tint color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom5Tint = { "Bloom5Tint", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, Bloom5Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom5Tint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom5Tint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom6Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "Comment", "/** Bloom6 tint color */" },
		{ "DisplayName", "#6 Tint" },
		{ "editcondition", "bOverride_Bloom6Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom6 tint color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom6Tint = { "Bloom6Tint", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, Bloom6Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom6Tint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom6Tint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionScatterDispersion_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Intensity multiplier on the scatter dispersion energy of the kernel. 1.0 means exactly use the same energy as the kernel scatter dispersion. */" },
		{ "DisplayName", "Convolution Scatter Dispersion" },
		{ "editcondition", "bOverride_BloomConvolutionScatterDispersion" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Intensity multiplier on the scatter dispersion energy of the kernel. 1.0 means exactly use the same energy as the kernel scatter dispersion." },
		{ "UIMax", "20.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionScatterDispersion = { "BloomConvolutionScatterDispersion", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, BloomConvolutionScatterDispersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionScatterDispersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionScatterDispersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionSize_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Relative size of the convolution kernel image compared to the minor axis of the viewport  */" },
		{ "DisplayName", "Convolution Scale" },
		{ "editcondition", "bOverride_BloomConvolutionSize" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Relative size of the convolution kernel image compared to the minor axis of the viewport" },
		{ "UIMax", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionSize = { "BloomConvolutionSize", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, BloomConvolutionSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionTexture_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "Comment", "/** Texture to replace default convolution bloom kernel */" },
		{ "DisplayName", "Convolution Kernel" },
		{ "editcondition", "bOverride_BloomConvolutionTexture" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Texture to replace default convolution bloom kernel" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionTexture = { "BloomConvolutionTexture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, BloomConvolutionTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionCenterUV_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "Comment", "/** The UV location of the center of the kernel.  Should be very close to (.5,.5) */" },
		{ "DisplayName", "Convolution Center" },
		{ "editcondition", "bOverride_BloomConvolutionCenterUV" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "The UV location of the center of the kernel.  Should be very close to (.5,.5)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionCenterUV = { "BloomConvolutionCenterUV", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, BloomConvolutionCenterUV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionCenterUV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionCenterUV_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilter_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilter = { "BloomConvolutionPreFilter", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, BloomConvolutionPreFilter_DEPRECATED), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilter_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMin_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "Comment", "/** Boost intensity of select pixels  prior to computing bloom convolution (Min, Max, Multiplier).  Max < Min disables */" },
		{ "DisplayName", "Convolution Boost Min" },
		{ "editcondition", "bOverride_BloomConvolutionPreFilterMin" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Boost intensity of select pixels  prior to computing bloom convolution (Min, Max, Multiplier).  Max < Min disables" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMin = { "BloomConvolutionPreFilterMin", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, BloomConvolutionPreFilterMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMax_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "Comment", "/** Boost intensity of select pixels  prior to computing bloom convolution (Min, Max, Multiplier).  Max < Min disables */" },
		{ "DisplayName", "Convolution Boost Max" },
		{ "editcondition", "bOverride_BloomConvolutionPreFilterMax" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Boost intensity of select pixels  prior to computing bloom convolution (Min, Max, Multiplier).  Max < Min disables" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMax = { "BloomConvolutionPreFilterMax", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, BloomConvolutionPreFilterMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMult_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "Comment", "/** Boost intensity of select pixels  prior to computing bloom convolution (Min, Max, Multiplier).  Max < Min disables */" },
		{ "DisplayName", "Convolution Boost Mult" },
		{ "editcondition", "bOverride_BloomConvolutionPreFilterMult" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Boost intensity of select pixels  prior to computing bloom convolution (Min, Max, Multiplier).  Max < Min disables" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMult = { "BloomConvolutionPreFilterMult", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, BloomConvolutionPreFilterMult), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionBufferScale_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Implicit buffer region as a fraction of the screen size to insure the bloom does not wrap across the screen.  Larger sizes have perf impact.*/" },
		{ "DisplayName", "Convolution Buffer" },
		{ "editcondition", "bOverride_BloomConvolutionBufferScale" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Implicit buffer region as a fraction of the screen size to insure the bloom does not wrap across the screen.  Larger sizes have perf impact." },
		{ "UIMax", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionBufferScale = { "BloomConvolutionBufferScale", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, BloomConvolutionBufferScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionBufferScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionBufferScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMask_MetaData[] = {
		{ "Category", "Lens|Dirt Mask" },
		{ "Comment", "/**\n\x09 * Texture that defines the dirt on the camera lens where the light of very bright objects is scattered.\n\x09 */" },
		{ "DisplayName", "Dirt Mask Texture" },
		{ "editcondition", "bOverride_BloomDirtMask" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Texture that defines the dirt on the camera lens where the light of very bright objects is scattered." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMask = { "BloomDirtMask", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, BloomDirtMask), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMaskIntensity_MetaData[] = {
		{ "Category", "Lens|Dirt Mask" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** BloomDirtMask intensity */" },
		{ "DisplayName", "Dirt Mask Intensity" },
		{ "editcondition", "bOverride_BloomDirtMaskIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "BloomDirtMask intensity" },
		{ "UIMax", "8.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMaskIntensity = { "BloomDirtMaskIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, BloomDirtMaskIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMaskIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMaskIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMaskTint_MetaData[] = {
		{ "Category", "Lens|Dirt Mask" },
		{ "Comment", "/** BloomDirtMask tint color */" },
		{ "DisplayName", "Dirt Mask Tint" },
		{ "editcondition", "bOverride_BloomDirtMaskTint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "BloomDirtMask tint color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMaskTint = { "BloomDirtMaskTint", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, BloomDirtMaskTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMaskTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMaskTint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DynamicGlobalIlluminationMethod_MetaData[] = {
		{ "Category", "Global Illumination" },
		{ "Comment", "/** Chooses the Dynamic Global Illumination method.  Not compatible with Forward Shading. */" },
		{ "DisplayName", "Method" },
		{ "editcondition", "bOverride_DynamicGlobalIlluminationMethod" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Chooses the Dynamic Global Illumination method.  Not compatible with Forward Shading." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DynamicGlobalIlluminationMethod = { "DynamicGlobalIlluminationMethod", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, DynamicGlobalIlluminationMethod), Z_Construct_UEnum_Engine_EDynamicGlobalIlluminationMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DynamicGlobalIlluminationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DynamicGlobalIlluminationMethod_MetaData)) }; // 355894124
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_IndirectLightingColor_MetaData[] = {
		{ "Category", "Global Illumination" },
		{ "Comment", "/** Adjusts indirect lighting color. (1,1,1) is default. (0,0,0) to disable GI. The show flag 'Global Illumination' must be enabled to use this property. */" },
		{ "DisplayName", "Indirect Lighting Color" },
		{ "editcondition", "bOverride_IndirectLightingColor" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Adjusts indirect lighting color. (1,1,1) is default. (0,0,0) to disable GI. The show flag 'Global Illumination' must be enabled to use this property." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_IndirectLightingColor = { "IndirectLightingColor", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, IndirectLightingColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_IndirectLightingColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_IndirectLightingColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_IndirectLightingIntensity_MetaData[] = {
		{ "Category", "Global Illumination" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Scales the indirect lighting contribution. A value of 0 disables GI. Default is 1. The show flag 'Global Illumination' must be enabled to use this property. */" },
		{ "DisplayName", "Indirect Lighting Intensity" },
		{ "editcondition", "bOverride_IndirectLightingIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Scales the indirect lighting contribution. A value of 0 disables GI. Default is 1. The show flag 'Global Illumination' must be enabled to use this property." },
		{ "UIMax", "4.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_IndirectLightingIntensity = { "IndirectLightingIntensity", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, IndirectLightingIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_IndirectLightingIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_IndirectLightingIntensity_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGI_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGI_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->RayTracingGI_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGI = { "RayTracingGI", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGI_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGI_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGI_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenSceneLightingQuality_MetaData[] = {
		{ "Category", "Global Illumination|Lumen Global Illumination" },
		{ "ClampMin", ".25" },
		{ "Comment", "/** Scales Lumen Scene's quality.  Larger scales cause Lumen Scene to be calculated with a higher fidelity, which can be visible in reflections, but increase GPU cost. */" },
		{ "DisplayName", "Lumen Scene Lighting Quality" },
		{ "editcondition", "bOverride_LumenSceneLightingQuality" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Scales Lumen Scene's quality.  Larger scales cause Lumen Scene to be calculated with a higher fidelity, which can be visible in reflections, but increase GPU cost." },
		{ "UIMax", "2" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenSceneLightingQuality = { "LumenSceneLightingQuality", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LumenSceneLightingQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenSceneLightingQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenSceneLightingQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenSceneDetail_MetaData[] = {
		{ "Category", "Global Illumination|Lumen Global Illumination" },
		{ "ClampMin", ".25" },
		{ "Comment", "/** Controls the size of instances that can be represented in Lumen Scene.  Larger values will ensure small objects are represented, but increase GPU cost. */" },
		{ "DisplayName", "Lumen Scene Detail" },
		{ "editcondition", "bOverride_LumenSceneDetail" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Controls the size of instances that can be represented in Lumen Scene.  Larger values will ensure small objects are represented, but increase GPU cost." },
		{ "UIMax", "4" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenSceneDetail = { "LumenSceneDetail", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LumenSceneDetail), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenSceneDetail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenSceneDetail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenSceneViewDistance_MetaData[] = {
		{ "Category", "Global Illumination|Lumen Global Illumination" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Sets the maximum view distance of the scene that Lumen maintains for ray tracing against.  Larger values will increase the effective range of sky shadowing and Global Illumination, but increase GPU cost. */" },
		{ "DisplayName", "Lumen Scene View Distance" },
		{ "editcondition", "bOverride_LumenSceneViewDistance" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the maximum view distance of the scene that Lumen maintains for ray tracing against.  Larger values will increase the effective range of sky shadowing and Global Illumination, but increase GPU cost." },
		{ "UIMax", "2097152" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenSceneViewDistance = { "LumenSceneViewDistance", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LumenSceneViewDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenSceneViewDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenSceneViewDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenSceneLightingUpdateSpeed_MetaData[] = {
		{ "Category", "Global Illumination|Lumen Global Illumination" },
		{ "ClampMin", ".5" },
		{ "Comment", "/** Controls how much Lumen Scene is allowed to cache lighting results to improve performance.  Larger scales cause lighting changes to propagate faster, but increase GPU cost. */" },
		{ "DisplayName", "Lumen Scene Lighting Update Speed" },
		{ "editcondition", "bOverride_LumenSceneLightingUpdateSpeed" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Controls how much Lumen Scene is allowed to cache lighting results to improve performance.  Larger scales cause lighting changes to propagate faster, but increase GPU cost." },
		{ "UIMax", "4" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenSceneLightingUpdateSpeed = { "LumenSceneLightingUpdateSpeed", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LumenSceneLightingUpdateSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenSceneLightingUpdateSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenSceneLightingUpdateSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenFinalGatherQuality_MetaData[] = {
		{ "Category", "Global Illumination|Lumen Global Illumination" },
		{ "ClampMin", ".25" },
		{ "Comment", "/** Scales Lumen's Final Gather quality.  Larger scales reduce noise, but greatly increase GPU cost. */" },
		{ "DisplayName", "Final Gather Quality" },
		{ "editcondition", "bOverride_LumenFinalGatherQuality" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Scales Lumen's Final Gather quality.  Larger scales reduce noise, but greatly increase GPU cost." },
		{ "UIMax", "2" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenFinalGatherQuality = { "LumenFinalGatherQuality", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LumenFinalGatherQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenFinalGatherQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenFinalGatherQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenFinalGatherLightingUpdateSpeed_MetaData[] = {
		{ "Category", "Global Illumination|Lumen Global Illumination" },
		{ "ClampMin", ".5" },
		{ "Comment", "/** Controls how much Lumen Final Gather is allowed to cache lighting results to improve performance.  Larger scales cause lighting changes to propagate faster, but increase GPU cost and noise. */" },
		{ "DisplayName", "Final Gather Lighting Update Speed" },
		{ "editcondition", "bOverride_LumenFinalGatherLightingUpdateSpeed" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Controls how much Lumen Final Gather is allowed to cache lighting results to improve performance.  Larger scales cause lighting changes to propagate faster, but increase GPU cost and noise." },
		{ "UIMax", "4" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenFinalGatherLightingUpdateSpeed = { "LumenFinalGatherLightingUpdateSpeed", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LumenFinalGatherLightingUpdateSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenFinalGatherLightingUpdateSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenFinalGatherLightingUpdateSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenMaxTraceDistance_MetaData[] = {
		{ "Category", "Global Illumination|Lumen Global Illumination" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Controls the maximum distance that Lumen should trace while solving lighting.  Values that are too small will cause lighting to leak into large caves, while values that are large will increase GPU cost. */" },
		{ "DisplayName", "Max Trace Distance" },
		{ "editcondition", "bOverride_LumenMaxTraceDistance" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Controls the maximum distance that Lumen should trace while solving lighting.  Values that are too small will cause lighting to leak into large caves, while values that are large will increase GPU cost." },
		{ "UIMax", "2097152" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenMaxTraceDistance = { "LumenMaxTraceDistance", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LumenMaxTraceDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenMaxTraceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenMaxTraceDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenDiffuseColorBoost_MetaData[] = {
		{ "Category", "Global Illumination|Lumen Global Illumination" },
		{ "ClampMax", "4" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Allows brightening indirect lighting by calculating material diffuse color for indirect lighting as pow(DiffuseColor, 1 / DiffuseColorBoost). Values above 1 (original diffuse color) aren't physically correct, but they can be useful as an art direction knob to increase the amount of bounced light in the scene. Best to keep below 2 as it also causes reflections to be brighter than the scene. */" },
		{ "DisplayName", "Diffuse Color Boost" },
		{ "editcondition", "bOverride_LumenDiffuseColorBoost" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Allows brightening indirect lighting by calculating material diffuse color for indirect lighting as pow(DiffuseColor, 1 / DiffuseColorBoost). Values above 1 (original diffuse color) aren't physically correct, but they can be useful as an art direction knob to increase the amount of bounced light in the scene. Best to keep below 2 as it also causes reflections to be brighter than the scene." },
		{ "UIMax", ".01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenDiffuseColorBoost = { "LumenDiffuseColorBoost", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LumenDiffuseColorBoost), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenDiffuseColorBoost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenDiffuseColorBoost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenSkylightLeaking_MetaData[] = {
		{ "Category", "Global Illumination|Lumen Global Illumination" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Controls what fraction of the skylight intensity should be allowed to leak.  This can be useful as an art direction knob (non-physically based) to keep indoor areas from going fully black. */" },
		{ "DisplayName", "Skylight Leaking" },
		{ "editcondition", "bOverride_LumenSkylightLeaking" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Controls what fraction of the skylight intensity should be allowed to leak.  This can be useful as an art direction knob (non-physically based) to keep indoor areas from going fully black." },
		{ "UIMax", ".02" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenSkylightLeaking = { "LumenSkylightLeaking", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LumenSkylightLeaking), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenSkylightLeaking_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenSkylightLeaking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenFullSkylightLeakingDistance_MetaData[] = {
		{ "Category", "Global Illumination|Lumen Global Illumination" },
		{ "ClampMin", ".1" },
		{ "Comment", "/** Controls the distance from a receiving surface where skylight leaking reaches its full intensity.  Smaller values make the skylight leaking flatter, while larger values create an Ambient Occlusion effect. */" },
		{ "DisplayName", "Full Skylight Leaking Distance" },
		{ "editcondition", "bOverride_LumenFullSkylightLeakingDistance" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Controls the distance from a receiving surface where skylight leaking reaches its full intensity.  Smaller values make the skylight leaking flatter, while larger values create an Ambient Occlusion effect." },
		{ "UIMax", "2000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenFullSkylightLeakingDistance = { "LumenFullSkylightLeakingDistance", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LumenFullSkylightLeakingDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenFullSkylightLeakingDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenFullSkylightLeakingDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenSurfaceCacheResolution_MetaData[] = {
		{ "Category", "Global Illumination|Lumen Global Illumination" },
		{ "ClampMax", "1" },
		{ "ClampMin", ".5" },
		{ "Comment", "/** Scale factor for Lumen Surface Cache resolution, for Scene Capture.  Smaller values save GPU memory, at a cost in quality.  Defaults to 0.5 if not overridden. */" },
		{ "DisplayName", "Scene Capture Cache Resolution Scale" },
		{ "editcondition", "bOverride_LumenSurfaceCacheResolution" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Scale factor for Lumen Surface Cache resolution, for Scene Capture.  Smaller values save GPU memory, at a cost in quality.  Defaults to 0.5 if not overridden." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenSurfaceCacheResolution = { "LumenSurfaceCacheResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LumenSurfaceCacheResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenSurfaceCacheResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenSurfaceCacheResolution_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGIType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGIType_MetaData[] = {
		{ "Category", "Global Illumination|Ray Tracing Global Illumination" },
		{ "Comment", "/** Sets the ray tracing global illumination type. */" },
		{ "DisplayName", "Type" },
		{ "editcondition", "bOverride_RayTracingGI" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the ray tracing global illumination type." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGIType = { "RayTracingGIType", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, RayTracingGIType), Z_Construct_UEnum_Engine_ERayTracingGlobalIlluminationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGIType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGIType_MetaData)) }; // 1775120132
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGIMaxBounces_MetaData[] = {
		{ "Category", "Global Illumination|Ray Tracing Global Illumination" },
		{ "ClampMax", "50" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Sets the ray tracing global illumination maximum bounces. */" },
		{ "DisplayName", "Max. Bounces" },
		{ "editcondition", "bOverride_RayTracingGIMaxBounces" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the ray tracing global illumination maximum bounces." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGIMaxBounces = { "RayTracingGIMaxBounces", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, RayTracingGIMaxBounces), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGIMaxBounces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGIMaxBounces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGISamplesPerPixel_MetaData[] = {
		{ "Category", "Global Illumination|Ray Tracing Global Illumination" },
		{ "ClampMax", "65536" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Sets the samples per pixel for ray tracing global illumination. */" },
		{ "DisplayName", "Samples Per Pixel" },
		{ "editcondition", "bOverride_RayTracingGISamplesPerPixel" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the samples per pixel for ray tracing global illumination." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGISamplesPerPixel = { "RayTracingGISamplesPerPixel", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, RayTracingGISamplesPerPixel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGISamplesPerPixel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGISamplesPerPixel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ReflectionMethod_MetaData[] = {
		{ "Category", "Reflections" },
		{ "Comment", "/** Chooses the Reflection method. Not compatible with Forward Shading. */" },
		{ "DisplayName", "Method" },
		{ "editcondition", "bOverride_ReflectionMethod" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Chooses the Reflection method. Not compatible with Forward Shading." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ReflectionMethod = { "ReflectionMethod", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ReflectionMethod), Z_Construct_UEnum_Engine_EReflectionMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ReflectionMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ReflectionMethod_MetaData)) }; // 1089407779
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ReflectionsType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ReflectionsType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ReflectionsType = { "ReflectionsType", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ReflectionsType_DEPRECATED), Z_Construct_UEnum_Engine_EReflectionsType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ReflectionsType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ReflectionsType_MetaData)) }; // 3309963902
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenReflectionQuality_MetaData[] = {
		{ "Category", "Reflections|Lumen Reflections" },
		{ "ClampMin", ".25" },
		{ "Comment", "/** Scales the Reflection quality.  Larger scales reduce noise in reflections, but increase GPU cost. */" },
		{ "DisplayName", "Quality" },
		{ "editcondition", "bOverride_LumenReflectionQuality" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Scales the Reflection quality.  Larger scales reduce noise in reflections, but increase GPU cost." },
		{ "UIMax", "2" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenReflectionQuality = { "LumenReflectionQuality", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LumenReflectionQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenReflectionQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenReflectionQuality_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenRayLightingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenRayLightingMode_MetaData[] = {
		{ "Category", "Reflections|Lumen Reflections" },
		{ "Comment", "/** Controls how Lumen rays are lit when Lumen is using Hardware Ray Tracing.  By default, Lumen uses the Surface Cache for best performance, but can be set to 'Hit Lighting' for higher quality. */" },
		{ "DisplayName", "Ray Lighting Mode" },
		{ "editcondition", "bOverride_LumenRayLightingMode" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Controls how Lumen rays are lit when Lumen is using Hardware Ray Tracing.  By default, Lumen uses the Surface Cache for best performance, but can be set to 'Hit Lighting' for higher quality." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenRayLightingMode = { "LumenRayLightingMode", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LumenRayLightingMode), Z_Construct_UEnum_Engine_ELumenRayLightingModeOverride, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenRayLightingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenRayLightingMode_MetaData)) }; // 1673702998
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenFrontLayerTranslucencyReflections_MetaData[] = {
		{ "Category", "Reflections|Lumen Reflections" },
		{ "ClampMin", ".25" },
		{ "Comment", "/** Whether to use high quality mirror reflections on the front layer of translucent surfaces.  Other layers will use the lower quality Radiance Cache method that can only produce glossy reflections.  Increases GPU cost when enabled. */" },
		{ "DisplayName", "High Quality Translucency Reflections" },
		{ "editcondition", "bOverride_LumenFrontLayerTranslucencyReflections" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Whether to use high quality mirror reflections on the front layer of translucent surfaces.  Other layers will use the lower quality Radiance Cache method that can only produce glossy reflections.  Increases GPU cost when enabled." },
		{ "UIMax", "2" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenFrontLayerTranslucencyReflections_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->LumenFrontLayerTranslucencyReflections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenFrontLayerTranslucencyReflections = { "LumenFrontLayerTranslucencyReflections", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenFrontLayerTranslucencyReflections_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenFrontLayerTranslucencyReflections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenFrontLayerTranslucencyReflections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionIntensity_MetaData[] = {
		{ "Category", "Reflections|Screen Space Reflections" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Enable/Fade/disable the Screen Space Reflection feature, in percent, avoid numbers between 0 and 1 fo consistency */" },
		{ "DisplayName", "Intensity" },
		{ "editcondition", "bOverride_ScreenSpaceReflectionIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Enable/Fade/disable the Screen Space Reflection feature, in percent, avoid numbers between 0 and 1 fo consistency" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionIntensity = { "ScreenSpaceReflectionIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ScreenSpaceReflectionIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionQuality_MetaData[] = {
		{ "Category", "Reflections|Screen Space Reflections" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** 0=lowest quality..100=maximum quality, only a few quality levels are implemented, no soft transition, 50 is the default for better performance. */" },
		{ "DisplayName", "Quality" },
		{ "editcondition", "bOverride_ScreenSpaceReflectionQuality" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "0=lowest quality..100=maximum quality, only a few quality levels are implemented, no soft transition, 50 is the default for better performance." },
		{ "UIMax", "100.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionQuality = { "ScreenSpaceReflectionQuality", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ScreenSpaceReflectionQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionMaxRoughness_MetaData[] = {
		{ "Category", "Reflections|Screen Space Reflections" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Until what roughness we fade the screen space reflections, 0.8 works well, smaller can run faster */" },
		{ "DisplayName", "Max Roughness" },
		{ "editcondition", "bOverride_ScreenSpaceReflectionMaxRoughness" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Until what roughness we fade the screen space reflections, 0.8 works well, smaller can run faster" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionMaxRoughness = { "ScreenSpaceReflectionMaxRoughness", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ScreenSpaceReflectionMaxRoughness), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionMaxRoughness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionMaxRoughness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsMaxRoughness_MetaData[] = {
		{ "Category", "Reflections|Ray Tracing Reflections" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Sets the maximum roughness until which ray tracing reflections will be visible (lower value is faster). Reflection contribution is smoothly faded when close to roughness threshold. This parameter behaves similarly to ScreenSpaceReflectionMaxRoughness. */" },
		{ "DisplayName", "Max Roughness" },
		{ "editcondition", "bOverride_RayTracingReflectionsMaxRoughness" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the maximum roughness until which ray tracing reflections will be visible (lower value is faster). Reflection contribution is smoothly faded when close to roughness threshold. This parameter behaves similarly to ScreenSpaceReflectionMaxRoughness." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsMaxRoughness = { "RayTracingReflectionsMaxRoughness", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, RayTracingReflectionsMaxRoughness), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsMaxRoughness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsMaxRoughness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsMaxBounces_MetaData[] = {
		{ "Category", "Reflections|Ray Tracing Reflections" },
		{ "ClampMax", "50" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Sets the maximum number of ray tracing reflection bounces. */" },
		{ "DisplayName", "Max. Bounces" },
		{ "editcondition", "bOverride_RayTracingReflectionsMaxBounces" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the maximum number of ray tracing reflection bounces." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsMaxBounces = { "RayTracingReflectionsMaxBounces", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, RayTracingReflectionsMaxBounces), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsMaxBounces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsMaxBounces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsSamplesPerPixel_MetaData[] = {
		{ "Category", "Reflections|Ray Tracing Reflections" },
		{ "ClampMax", "65536" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Sets the samples per pixel for ray traced reflections. */" },
		{ "DisplayName", "Samples Per Pixel" },
		{ "editcondition", "bOverride_RayTracingReflectionsSamplesPerPixel" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the samples per pixel for ray traced reflections." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsSamplesPerPixel = { "RayTracingReflectionsSamplesPerPixel", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, RayTracingReflectionsSamplesPerPixel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsSamplesPerPixel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsSamplesPerPixel_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsShadows_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsShadows_MetaData[] = {
		{ "Category", "Reflections|Ray Tracing Reflections" },
		{ "Comment", "/** Sets the reflected shadows type. */" },
		{ "DisplayName", "Shadows" },
		{ "editcondition", "bOverride_RayTracingReflectionsShadows" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the reflected shadows type." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsShadows = { "RayTracingReflectionsShadows", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, RayTracingReflectionsShadows), Z_Construct_UEnum_Engine_EReflectedAndRefractedRayTracedShadows, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsShadows_MetaData)) }; // 3463670797
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsTranslucency_MetaData[] = {
		{ "Category", "Reflections|Ray Tracing Reflections" },
		{ "Comment", "/** Enables ray tracing translucency in reflections. */" },
		{ "DisplayName", "Include Translucent Objects" },
		{ "editcondition", "bOverride_RayTracingReflectionsTranslucency" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Enables ray tracing translucency in reflections." },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsTranslucency_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->RayTracingReflectionsTranslucency = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsTranslucency = { "RayTracingReflectionsTranslucency", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsTranslucency_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsTranslucency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsTranslucency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemapTint_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Cubemap" },
		{ "Comment", "/** AmbientCubemap tint color */" },
		{ "DisplayName", "Tint" },
		{ "editcondition", "bOverride_AmbientCubemapTint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "AmbientCubemap tint color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemapTint = { "AmbientCubemapTint", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, AmbientCubemapTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemapTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemapTint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemapIntensity_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Cubemap" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * To scale the Ambient cubemap brightness\n\x09 * >=0: off, 1(default), >1 brighter\n\x09 */" },
		{ "DisplayName", "Intensity" },
		{ "editcondition", "bOverride_AmbientCubemapIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "To scale the Ambient cubemap brightness\n>=0: off, 1(default), >1 brighter" },
		{ "UIMax", "4.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemapIntensity = { "AmbientCubemapIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, AmbientCubemapIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemapIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemapIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemap_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Cubemap" },
		{ "Comment", "/** The Ambient cubemap (Affects diffuse and specular shading), blends additively which if different from all other settings here */" },
		{ "DisplayName", "Cubemap Texture" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "The Ambient cubemap (Affects diffuse and specular shading), blends additively which if different from all other settings here" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemap = { "AmbientCubemap", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, AmbientCubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_CameraShutterSpeed_MetaData[] = {
		{ "Category", "Lens|Camera" },
		{ "ClampMax", "2000.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** The camera shutter in seconds.*/" },
		{ "DisplayName", "Shutter Speed (1/s)" },
		{ "editcondition", "bOverride_CameraShutterSpeed" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "The camera shutter in seconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_CameraShutterSpeed = { "CameraShutterSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, CameraShutterSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_CameraShutterSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_CameraShutterSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_CameraISO_MetaData[] = {
		{ "Category", "Lens|Camera" },
		{ "ClampMin", "1.0" },
		{ "DisplayName", "ISO" },
		{ "editcondition", "bOverride_CameraISO" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "tooltip", "The camera sensor sensitivity" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_CameraISO = { "CameraISO", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, CameraISO), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_CameraISO_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_CameraISO_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFstop_MetaData[] = {
		{ "Category", "Lens|Camera" },
		{ "ClampMax", "32.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Defines the opening of the camera lens, Aperture is 1/fstop, typical lens go down to f/1.2 (large opening), larger numbers reduce the DOF effect */" },
		{ "DisplayName", "Aperture (F-stop)" },
		{ "editcondition", "bOverride_DepthOfFieldFstop" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Defines the opening of the camera lens, Aperture is 1/fstop, typical lens go down to f/1.2 (large opening), larger numbers reduce the DOF effect" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFstop = { "DepthOfFieldFstop", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldFstop), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFstop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFstop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMinFstop_MetaData[] = {
		{ "Category", "Lens|Camera" },
		{ "ClampMax", "32.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Defines the maximum opening of the camera lens to control the curvature of blades of the diaphragm. Set it to 0 to get straight blades. */" },
		{ "DisplayName", "Maximum Aperture (min F-stop)" },
		{ "editcondition", "bOverride_DepthOfFieldMinFstop" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Defines the maximum opening of the camera lens to control the curvature of blades of the diaphragm. Set it to 0 to get straight blades." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMinFstop = { "DepthOfFieldMinFstop", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldMinFstop), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMinFstop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMinFstop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldBladeCount_MetaData[] = {
		{ "Category", "Lens|Camera" },
		{ "ClampMax", "16" },
		{ "ClampMin", "4" },
		{ "Comment", "/** Defines the number of blades of the diaphragm within the lens (between 4 and 16). */" },
		{ "DisplayName", "Number of diaphragm blades" },
		{ "editcondition", "bOverride_DepthOfFieldBladeCount" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Defines the number of blades of the diaphragm within the lens (between 4 and 16)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldBladeCount = { "DepthOfFieldBladeCount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldBladeCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldBladeCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldBladeCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureBias_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "Comment", "/**\n\x09 * Logarithmic adjustment for the exposure. Only used if a tonemapper is specified.\n\x09 * 0: no adjustment, -1:2x darker, -2:4x darker, 1:2x brighter, 2:4x brighter, ...\n\x09 */" },
		{ "DisplayName", "Exposure Compensation" },
		{ "editcondition", "bOverride_AutoExposureBias" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Logarithmic adjustment for the exposure. Only used if a tonemapper is specified.\n0: no adjustment, -1:2x darker, -2:4x darker, 1:2x brighter, 2:4x brighter, ..." },
		{ "UIMax", "15.0" },
		{ "UIMin", "-15.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureBias = { "AutoExposureBias", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, AutoExposureBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureBiasBackup_MetaData[] = {
		{ "Comment", "/**\n\x09 * With the auto exposure changes, we are changing the AutoExposureBias inside the serialization code. We are \n\x09 * storing that value before conversion here as a backup. Hopefully it will not be needed, and removed in the next engine revision.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "With the auto exposure changes, we are changing the AutoExposureBias inside the serialization code. We are\nstoring that value before conversion here as a backup. Hopefully it will not be needed, and removed in the next engine revision." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureBiasBackup = { "AutoExposureBiasBackup", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, AutoExposureBiasBackup), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureBiasBackup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureBiasBackup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBiasBackup_MetaData[] = {
		{ "Comment", "/**\n\x09 * With the auto exposure changes, we are also changing the auto exposure override value, so we are storing \n\x09 * that backup as well.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "With the auto exposure changes, we are also changing the auto exposure override value, so we are storing\nthat backup as well." },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBiasBackup_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureBiasBackup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBiasBackup = { "bOverride_AutoExposureBiasBackup", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBiasBackup_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBiasBackup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBiasBackup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureApplyPhysicalCameraExposure_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "DisplayName", "Apply Physical Camera Exposure" },
		{ "editcondition", "bOverride_AutoExposureApplyPhysicalCameraExposure" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "tooltip", "Only affects Manual exposure mode." },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureApplyPhysicalCameraExposure_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->AutoExposureApplyPhysicalCameraExposure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureApplyPhysicalCameraExposure = { "AutoExposureApplyPhysicalCameraExposure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureApplyPhysicalCameraExposure_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureApplyPhysicalCameraExposure_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureApplyPhysicalCameraExposure_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureBiasCurve_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "Comment", "/**\n\x09 * Exposure compensation based on the scene EV100.\n\x09 * Used to calibrate the final exposure differently depending on the average scene luminance.\n\x09 * 0: no adjustment, -1:2x darker, -2:4x darker, 1:2x brighter, 2:4x brighter, ...\n\x09 */" },
		{ "DisplayName", "Exposure Compensation Curve" },
		{ "editcondition", "bOverride_AutoExposureBiasCurve" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Exposure compensation based on the scene EV100.\nUsed to calibrate the final exposure differently depending on the average scene luminance.\n0: no adjustment, -1:2x darker, -2:4x darker, 1:2x brighter, 2:4x brighter, ..." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureBiasCurve = { "AutoExposureBiasCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, AutoExposureBiasCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureBiasCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureBiasCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMeterMask_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "Comment", "/**\n\x09 * Exposure metering mask. Bright spots on the mask will have high influence on auto-exposure metering\n\x09 * and dark spots will have low influence.\n\x09 */" },
		{ "DisplayName", "Exposure Metering Mask" },
		{ "editcondition", "bOverride_AutoExposureMeterMask" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Exposure metering mask. Bright spots on the mask will have high influence on auto-exposure metering\nand dark spots will have low influence." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMeterMask = { "AutoExposureMeterMask", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, AutoExposureMeterMask), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMeterMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMeterMask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureLowPercent_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * The eye adaptation will adapt to a value extracted from the luminance histogram of the scene color.\n\x09 * The value is defined as having x percent below this brightness. Higher values give bright spots on the screen more priority\n\x09 * but can lead to less stable results. Lower values give the medium and darker values more priority but might cause burn out of\n\x09 * bright spots.\n\x09 * >0, <100, good values are in the range 70 .. 80\n\x09 */" },
		{ "DisplayName", "Low Percent" },
		{ "editcondition", "bOverride_AutoExposureLowPercent" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "The eye adaptation will adapt to a value extracted from the luminance histogram of the scene color.\nThe value is defined as having x percent below this brightness. Higher values give bright spots on the screen more priority\nbut can lead to less stable results. Lower values give the medium and darker values more priority but might cause burn out of\nbright spots.\n>0, <100, good values are in the range 70 .. 80" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureLowPercent = { "AutoExposureLowPercent", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, AutoExposureLowPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureLowPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureLowPercent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureHighPercent_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * The eye adaptation will adapt to a value extracted from the luminance histogram of the scene color.\n\x09 * The value is defined as having x percent below this brightness. Higher values give bright spots on the screen more priority\n\x09 * but can lead to less stable results. Lower values give the medium and darker values more priority but might cause burn out of\n\x09 * bright spots.\n\x09 * >0, <100, good values are in the range 80 .. 95\n\x09 */" },
		{ "DisplayName", "High Percent" },
		{ "editcondition", "bOverride_AutoExposureHighPercent" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "The eye adaptation will adapt to a value extracted from the luminance histogram of the scene color.\nThe value is defined as having x percent below this brightness. Higher values give bright spots on the screen more priority\nbut can lead to less stable results. Lower values give the medium and darker values more priority but might cause burn out of\nbright spots.\n>0, <100, good values are in the range 80 .. 95" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureHighPercent = { "AutoExposureHighPercent", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, AutoExposureHighPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureHighPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureHighPercent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMinBrightness_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "ClampMin", "-10.0" },
		{ "Comment", "/**\n\x09 * Auto-Exposure minimum adaptation. Eye Adaptation is disabled if Min = Max. \n\x09 * Auto-exposure is implemented by choosing an exposure value for which the average luminance generates a pixel brightness equal to the Constant Calibration value.\n\x09 * The Min/Max are expressed in pixel luminance (cd/m2) or in EV100 when using ExtendDefaultLuminanceRange (see project settings).\n\x09 */" },
		{ "DisplayName", "Min Brightness" },
		{ "editcondition", "bOverride_AutoExposureMinBrightness" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Auto-Exposure minimum adaptation. Eye Adaptation is disabled if Min = Max.\nAuto-exposure is implemented by choosing an exposure value for which the average luminance generates a pixel brightness equal to the Constant Calibration value.\nThe Min/Max are expressed in pixel luminance (cd/m2) or in EV100 when using ExtendDefaultLuminanceRange (see project settings)." },
		{ "UIMax", "20.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMinBrightness = { "AutoExposureMinBrightness", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, AutoExposureMinBrightness), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMinBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMinBrightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMaxBrightness_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "ClampMin", "-10.0" },
		{ "Comment", "/**\n\x09 * Auto-Exposure maximum adaptation. Eye Adaptation is disabled if Min = Max. \n\x09 * Auto-exposure is implemented by choosing an exposure value for which the average luminance generates a pixel brightness equal to the Constant Calibration value.\n\x09 * The Min/Max are expressed in pixel luminance (cd/m2) or in EV100 when using ExtendDefaultLuminanceRange (see project settings).\n\x09 */" },
		{ "DisplayName", "Max Brightness" },
		{ "editcondition", "bOverride_AutoExposureMaxBrightness" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Auto-Exposure maximum adaptation. Eye Adaptation is disabled if Min = Max.\nAuto-exposure is implemented by choosing an exposure value for which the average luminance generates a pixel brightness equal to the Constant Calibration value.\nThe Min/Max are expressed in pixel luminance (cd/m2) or in EV100 when using ExtendDefaultLuminanceRange (see project settings)." },
		{ "UIMax", "20.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMaxBrightness = { "AutoExposureMaxBrightness", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, AutoExposureMaxBrightness), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMaxBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMaxBrightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureSpeedUp_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "ClampMin", "0.02" },
		{ "DisplayName", "Speed Up" },
		{ "editcondition", "bOverride_AutoExposureSpeedUp" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "tooltip", "In F-stops per second, should be >0" },
		{ "UIMax", "20.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureSpeedUp = { "AutoExposureSpeedUp", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, AutoExposureSpeedUp), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureSpeedUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureSpeedUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureSpeedDown_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "ClampMin", "0.02" },
		{ "DisplayName", "Speed Down" },
		{ "editcondition", "bOverride_AutoExposureSpeedDown" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "tooltip", "In F-stops per second, should be >0" },
		{ "UIMax", "20.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureSpeedDown = { "AutoExposureSpeedDown", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, AutoExposureSpeedDown), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureSpeedDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureSpeedDown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_HistogramLogMin_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "Comment", "/** Histogram Min value. Expressed in Log2(Luminance) or in EV100 when using ExtendDefaultLuminanceRange (see project settings) */" },
		{ "editcondition", "bOverride_HistogramLogMin" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Histogram Min value. Expressed in Log2(Luminance) or in EV100 when using ExtendDefaultLuminanceRange (see project settings)" },
		{ "UIMax", "0.0" },
		{ "UIMin", "-16" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_HistogramLogMin = { "HistogramLogMin", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, HistogramLogMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_HistogramLogMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_HistogramLogMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_HistogramLogMax_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "Comment", "/** Histogram Max value. Expressed in Log2(Luminance) or in EV100 when using ExtendDefaultLuminanceRange (see project settings) */" },
		{ "editcondition", "bOverride_HistogramLogMax" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Histogram Max value. Expressed in Log2(Luminance) or in EV100 when using ExtendDefaultLuminanceRange (see project settings)" },
		{ "UIMax", "16.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_HistogramLogMax = { "HistogramLogMax", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, HistogramLogMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_HistogramLogMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_HistogramLogMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureCalibrationConstant_MetaData[] = {
		{ "Comment", "/** Calibration constant for 18% albedo, deprecating this value. */" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Calibration constant for 18% albedo, deprecating this value." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureCalibrationConstant = { "AutoExposureCalibrationConstant", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, AutoExposureCalibrationConstant_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureCalibrationConstant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureCalibrationConstant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureContrastScale_MetaData[] = {
		{ "Comment", "/** \n\x09 * Local Exposure decomposes luminance of the frame into a base layer and a detail layer.\n\x09 * Contrast of the base layer is reduced based on this value.\n\x09 * Value less than 1 will enable local exposure.\n\x09 * Good values are usually in the range 0.6 .. 1.0.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Local Exposure decomposes luminance of the frame into a base layer and a detail layer.\nContrast of the base layer is reduced based on this value.\nValue less than 1 will enable local exposure.\nGood values are usually in the range 0.6 .. 1.0." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureContrastScale = { "LocalExposureContrastScale", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LocalExposureContrastScale_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureContrastScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureContrastScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureHighlightContrastScale_MetaData[] = {
		{ "Category", "Lens|Local Exposure" },
		{ "Comment", "/** \n\x09 * Local Exposure decomposes luminance of the frame into a base layer and a detail layer.\n\x09 * Contrast of the base layer is reduced based on this value.\n\x09 * Value less than 1 will enable local exposure.\n\x09 * Good values are usually in the range 0.6 .. 1.0.\n\x09*/" },
		{ "DisplayName", "Highlight Contrast Scale" },
		{ "editcondition", "bOverride_LocalExposureHighlightContrastScale" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Local Exposure decomposes luminance of the frame into a base layer and a detail layer.\nContrast of the base layer is reduced based on this value.\nValue less than 1 will enable local exposure.\nGood values are usually in the range 0.6 .. 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureHighlightContrastScale = { "LocalExposureHighlightContrastScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LocalExposureHighlightContrastScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureHighlightContrastScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureHighlightContrastScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureShadowContrastScale_MetaData[] = {
		{ "Category", "Lens|Local Exposure" },
		{ "Comment", "/** \n\x09 * Local Exposure decomposes luminance of the frame into a base layer and a detail layer.\n\x09 * Contrast of the base layer is reduced based on this value.\n\x09 * Value less than 1 will enable local exposure.\n\x09 * Good values are usually in the range 0.6 .. 1.0.\n\x09*/" },
		{ "DisplayName", "Shadow Contrast Scale" },
		{ "editcondition", "bOverride_LocalExposureShadowContrastScale" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Local Exposure decomposes luminance of the frame into a base layer and a detail layer.\nContrast of the base layer is reduced based on this value.\nValue less than 1 will enable local exposure.\nGood values are usually in the range 0.6 .. 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureShadowContrastScale = { "LocalExposureShadowContrastScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LocalExposureShadowContrastScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureShadowContrastScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureShadowContrastScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureDetailStrength_MetaData[] = {
		{ "Category", "Lens|Local Exposure" },
		{ "Comment", "/**\n\x09 * Local Exposure decomposes luminance of the frame into a base layer and a detail layer.\n\x09 * Value different than 1 will enable local exposure.\n\x09 * This value should be set to 1 in most cases.\n\x09*/" },
		{ "DisplayName", "Detail Strength" },
		{ "editcondition", "bOverride_LocalExposureDetailStrength" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Local Exposure decomposes luminance of the frame into a base layer and a detail layer.\nValue different than 1 will enable local exposure.\nThis value should be set to 1 in most cases." },
		{ "UIMax", "4.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureDetailStrength = { "LocalExposureDetailStrength", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LocalExposureDetailStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureDetailStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureDetailStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureBlurredLuminanceBlend_MetaData[] = {
		{ "Category", "Lens|Local Exposure" },
		{ "Comment", "/**\n\x09 * Local Exposure decomposes luminance of the frame into a base layer and a detail layer.\n\x09 * Blend between bilateral filtered and blurred luminance as the base layer.\n\x09 * Blurred luminance helps preserve image appearance and specular highlights, and reduce ringing.\n\x09 * Good values are usually in the range 0.4 .. 0.6\n\x09*/" },
		{ "DisplayName", "Blurred Luminance Blend" },
		{ "editcondition", "bOverride_LocalExposureBlurredLuminanceBlend" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Local Exposure decomposes luminance of the frame into a base layer and a detail layer.\nBlend between bilateral filtered and blurred luminance as the base layer.\nBlurred luminance helps preserve image appearance and specular highlights, and reduce ringing.\nGood values are usually in the range 0.4 .. 0.6" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureBlurredLuminanceBlend = { "LocalExposureBlurredLuminanceBlend", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LocalExposureBlurredLuminanceBlend), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureBlurredLuminanceBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureBlurredLuminanceBlend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureBlurredLuminanceKernelSizePercent_MetaData[] = {
		{ "Category", "Lens|Local Exposure" },
		{ "Comment", "/**\n\x09 * Kernel size (percentage of screen) used to blur frame luminance.\n\x09*/" },
		{ "DisplayName", "Blurred Luminance Kernel Size Percent" },
		{ "editcondition", "bOverride_LocalExposureBlurredLuminanceKernelSizePercent" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Kernel size (percentage of screen) used to blur frame luminance." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureBlurredLuminanceKernelSizePercent = { "LocalExposureBlurredLuminanceKernelSizePercent", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LocalExposureBlurredLuminanceKernelSizePercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureBlurredLuminanceKernelSizePercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureBlurredLuminanceKernelSizePercent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureMiddleGreyBias_MetaData[] = {
		{ "Category", "Lens|Local Exposure" },
		{ "Comment", "/**\n\x09 * Logarithmic adjustment for the local exposure middle grey.\n\x09 * 0: no adjustment, -1:2x darker, -2:4x darker, 1:2x brighter, 2:4x brighter, ...\n\x09 */" },
		{ "DisplayName", "Middle Grey Bias" },
		{ "editcondition", "bOverride_LocalExposureMiddleGreyBias" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Logarithmic adjustment for the local exposure middle grey.\n0: no adjustment, -1:2x darker, -2:4x darker, 1:2x brighter, 2:4x brighter, ..." },
		{ "UIMax", "15.0" },
		{ "UIMin", "-15.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureMiddleGreyBias = { "LocalExposureMiddleGreyBias", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LocalExposureMiddleGreyBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureMiddleGreyBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureMiddleGreyBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareIntensity_MetaData[] = {
		{ "Category", "Lens|Lens Flares" },
		{ "Comment", "/** Brightness scale of the image cased lens flares (linear) */" },
		{ "DisplayName", "Intensity" },
		{ "editcondition", "bOverride_LensFlareIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Brightness scale of the image cased lens flares (linear)" },
		{ "UIMax", "16.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareIntensity = { "LensFlareIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LensFlareIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareTint_MetaData[] = {
		{ "Category", "Lens|Lens Flares" },
		{ "Comment", "/** Tint color for the image based lens flares. */" },
		{ "DisplayName", "Tint" },
		{ "editcondition", "bOverride_LensFlareTint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Tint color for the image based lens flares." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareTint = { "LensFlareTint", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LensFlareTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareTint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareBokehSize_MetaData[] = {
		{ "Category", "Lens|Lens Flares" },
		{ "Comment", "/** Size of the Lens Blur (in percent of the view width) that is done with the Bokeh texture (note: performance cost is radius*radius) */" },
		{ "DisplayName", "BokehSize" },
		{ "editcondition", "bOverride_LensFlareBokehSize" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Size of the Lens Blur (in percent of the view width) that is done with the Bokeh texture (note: performance cost is radius*radius)" },
		{ "UIMax", "32.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareBokehSize = { "LensFlareBokehSize", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LensFlareBokehSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareBokehSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareBokehSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareThreshold_MetaData[] = {
		{ "Category", "Lens|Lens Flares" },
		{ "Comment", "/** Minimum brightness the lens flare starts having effect (this should be as high as possible to avoid the performance cost of blurring content that is too dark too see) */" },
		{ "DisplayName", "Threshold" },
		{ "editcondition", "bOverride_LensFlareThreshold" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Minimum brightness the lens flare starts having effect (this should be as high as possible to avoid the performance cost of blurring content that is too dark too see)" },
		{ "UIMax", "32.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareThreshold = { "LensFlareThreshold", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LensFlareThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareBokehShape_MetaData[] = {
		{ "Category", "Lens|Lens Flares" },
		{ "Comment", "/** Defines the shape of the Bokeh when the image base lens flares are blurred, cannot be blended */" },
		{ "DisplayName", "BokehShape" },
		{ "editcondition", "bOverride_LensFlareBokehShape" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Defines the shape of the Bokeh when the image base lens flares are blurred, cannot be blended" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareBokehShape = { "LensFlareBokehShape", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LensFlareBokehShape), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareBokehShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareBokehShape_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareTints_MetaData[] = {
		{ "Category", "Lens|Lens Flares" },
		{ "Comment", "/** RGB defines the lens flare color, A it's position. This is a temporary solution. */" },
		{ "DisplayName", "Tints" },
		{ "editcondition", "bOverride_LensFlareTints" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "RGB defines the lens flare color, A it's position. This is a temporary solution." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareTints = { "LensFlareTints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(LensFlareTints, FPostProcessSettings), nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LensFlareTints), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareTints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareTints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_VignetteIntensity_MetaData[] = {
		{ "Category", "Lens|Image Effects" },
		{ "Comment", "/** 0..1 0=off/no vignette .. 1=strong vignette */" },
		{ "editcondition", "bOverride_VignetteIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "0..1 0=off/no vignette .. 1=strong vignette" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_VignetteIntensity = { "VignetteIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, VignetteIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_VignetteIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_VignetteIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_GrainJitter_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_GrainJitter = { "GrainJitter", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, GrainJitter_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_GrainJitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_GrainJitter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_GrainIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_GrainIntensity = { "GrainIntensity", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, GrainIntensity_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_GrainIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_GrainIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainIntensity_MetaData[] = {
		{ "Category", "Film Grain" },
		{ "Comment", "/** 0..1 Film grain intensity to apply. LinearSceneColor *= lerp(1.0, DecodedFilmGrainTexture, FilmGrainIntensity) */" },
		{ "editcondition", "bOverride_FilmGrainIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "0..1 Film grain intensity to apply. LinearSceneColor *= lerp(1.0, DecodedFilmGrainTexture, FilmGrainIntensity)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainIntensity = { "FilmGrainIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, FilmGrainIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainIntensityShadows_MetaData[] = {
		{ "Category", "Film Grain" },
		{ "editcondition", "bOverride_FilmGrainIntensityShadows" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainIntensityShadows = { "FilmGrainIntensityShadows", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, FilmGrainIntensityShadows), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainIntensityShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainIntensityShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainIntensityMidtones_MetaData[] = {
		{ "Category", "Film Grain" },
		{ "editcondition", "bOverride_FilmGrainIntensityMidtones" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainIntensityMidtones = { "FilmGrainIntensityMidtones", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, FilmGrainIntensityMidtones), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainIntensityMidtones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainIntensityMidtones_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainIntensityHighlights_MetaData[] = {
		{ "Category", "Film Grain" },
		{ "editcondition", "bOverride_FilmGrainIntensityHighlights" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainIntensityHighlights = { "FilmGrainIntensityHighlights", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, FilmGrainIntensityHighlights), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainIntensityHighlights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainIntensityHighlights_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainShadowsMax_MetaData[] = {
		{ "Category", "Film Grain" },
		{ "editcondition", "bOverride_FilmGrainShadowsMax" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainShadowsMax = { "FilmGrainShadowsMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, FilmGrainShadowsMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainShadowsMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainShadowsMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainHighlightsMin_MetaData[] = {
		{ "Category", "Film Grain" },
		{ "editcondition", "bOverride_FilmGrainHighlightsMin" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainHighlightsMin = { "FilmGrainHighlightsMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, FilmGrainHighlightsMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainHighlightsMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainHighlightsMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainHighlightsMax_MetaData[] = {
		{ "Category", "Film Grain" },
		{ "Comment", "/** Should be set larger than HighlightsMin. Default is 1.0, for backwards compatibility */" },
		{ "editcondition", "bOverride_FilmGrainHighlightsMax" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Should be set larger than HighlightsMin. Default is 1.0, for backwards compatibility" },
		{ "UIMax", "10.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainHighlightsMax = { "FilmGrainHighlightsMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, FilmGrainHighlightsMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainHighlightsMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainHighlightsMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainTexelSize_MetaData[] = {
		{ "Category", "Film Grain" },
		{ "Comment", "/** Size of texel of FilmGrainTexture on screen. */" },
		{ "editcondition", "bOverride_FilmGrainTexelSize" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Size of texel of FilmGrainTexture on screen." },
		{ "UIMax", "4.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainTexelSize = { "FilmGrainTexelSize", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, FilmGrainTexelSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainTexelSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainTexelSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainTexture_MetaData[] = {
		{ "Category", "Film Grain" },
		{ "Comment", "/** Defines film grain texture to use. */" },
		{ "editcondition", "bOverride_FilmGrainTexture" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Defines film grain texture to use." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainTexture = { "FilmGrainTexture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, FilmGrainTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionIntensity_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** 0..1 0=off/no ambient occlusion .. 1=strong ambient occlusion, defines how much it affects the non direct lighting after base pass */" },
		{ "DisplayName", "Intensity" },
		{ "editcondition", "bOverride_AmbientOcclusionIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "0..1 0=off/no ambient occlusion .. 1=strong ambient occlusion, defines how much it affects the non direct lighting after base pass" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionIntensity = { "AmbientOcclusionIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionStaticFraction_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** 0..1 0=no effect on static lighting .. 1=AO affects the stat lighting, 0 is free meaning no extra rendering pass */" },
		{ "DisplayName", "Static Fraction" },
		{ "editcondition", "bOverride_AmbientOcclusionStaticFraction" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "0..1 0=no effect on static lighting .. 1=AO affects the stat lighting, 0 is free meaning no extra rendering pass" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionStaticFraction = { "AmbientOcclusionStaticFraction", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionStaticFraction), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionStaticFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionStaticFraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadius_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** >0, in unreal units, bigger values means even distant surfaces affect the ambient occlusion */" },
		{ "DisplayName", "Radius" },
		{ "editcondition", "bOverride_AmbientOcclusionRadius" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", ">0, in unreal units, bigger values means even distant surfaces affect the ambient occlusion" },
		{ "UIMax", "500.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadius = { "AmbientOcclusionRadius", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadiusInWS_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "Comment", "/** true: AO radius is in world space units, false: AO radius is locked the view space in 400 units */" },
		{ "DisplayName", "Radius in WorldSpace" },
		{ "editcondition", "bOverride_AmbientOcclusionRadiusInWS" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "true: AO radius is in world space units, false: AO radius is locked the view space in 400 units" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadiusInWS_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->AmbientOcclusionRadiusInWS = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadiusInWS = { "AmbientOcclusionRadiusInWS", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadiusInWS_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadiusInWS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadiusInWS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionFadeDistance_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** >0, in unreal units, at what distance the AO effect disppears in the distance (avoding artifacts and AO effects on huge object) */" },
		{ "DisplayName", "Fade Out Distance" },
		{ "editcondition", "bOverride_AmbientOcclusionFadeDistance" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", ">0, in unreal units, at what distance the AO effect disppears in the distance (avoding artifacts and AO effects on huge object)" },
		{ "UIMax", "20000.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionFadeDistance = { "AmbientOcclusionFadeDistance", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionFadeDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionFadeDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionFadeDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionFadeRadius_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** >0, in unreal units, how many units before AmbientOcclusionFadeOutDistance it starts fading out */" },
		{ "DisplayName", "Fade Out Radius" },
		{ "editcondition", "bOverride_AmbientOcclusionFadeRadius" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", ">0, in unreal units, how many units before AmbientOcclusionFadeOutDistance it starts fading out" },
		{ "UIMax", "20000.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionFadeRadius = { "AmbientOcclusionFadeRadius", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionFadeRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionFadeRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionFadeRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionDistance_MetaData[] = {
		{ "Comment", "/** >0, in unreal units, how wide the ambient occlusion effect should affect the geometry (in depth), will be removed - only used for non normal method which is not exposed */" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", ">0, in unreal units, how wide the ambient occlusion effect should affect the geometry (in depth), will be removed - only used for non normal method which is not exposed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionDistance = { "AmbientOcclusionDistance", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionDistance_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionPower_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** >0, in unreal units, bigger values means even distant surfaces affect the ambient occlusion */" },
		{ "DisplayName", "Power" },
		{ "editcondition", "bOverride_AmbientOcclusionPower" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", ">0, in unreal units, bigger values means even distant surfaces affect the ambient occlusion" },
		{ "UIMax", "8.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionPower = { "AmbientOcclusionPower", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionPower), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionPower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionBias_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** >0, in unreal units, default (3.0) works well for flat surfaces but can reduce details */" },
		{ "DisplayName", "Bias" },
		{ "editcondition", "bOverride_AmbientOcclusionBias" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", ">0, in unreal units, default (3.0) works well for flat surfaces but can reduce details" },
		{ "UIMax", "10.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionBias = { "AmbientOcclusionBias", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionQuality_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** 0=lowest quality..100=maximum quality, only a few quality levels are implemented, no soft transition */" },
		{ "DisplayName", "Quality" },
		{ "editcondition", "bOverride_AmbientOcclusionQuality" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "0=lowest quality..100=maximum quality, only a few quality levels are implemented, no soft transition" },
		{ "UIMax", "100.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionQuality = { "AmbientOcclusionQuality", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipBlend_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Affects the blend over the multiple mips (lower resolution versions) , 0:fully use full resolution, 1::fully use low resolution, around 0.6 seems to be a good value */" },
		{ "DisplayName", "Mip Blend" },
		{ "editcondition", "bOverride_AmbientOcclusionMipBlend" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Affects the blend over the multiple mips (lower resolution versions) , 0:fully use full resolution, 1::fully use low resolution, around 0.6 seems to be a good value" },
		{ "UIMax", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipBlend = { "AmbientOcclusionMipBlend", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionMipBlend), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipBlend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipScale_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.5" },
		{ "Comment", "/** Affects the radius AO radius scale over the multiple mips (lower resolution versions) */" },
		{ "DisplayName", "Mip Scale" },
		{ "editcondition", "bOverride_AmbientOcclusionMipScale" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Affects the radius AO radius scale over the multiple mips (lower resolution versions)" },
		{ "UIMax", "4.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipScale = { "AmbientOcclusionMipScale", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionMipScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipThreshold_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** to tweak the bilateral upsampling when using multiple mips (lower resolution versions) */" },
		{ "DisplayName", "Mip Threshold" },
		{ "editcondition", "bOverride_AmbientOcclusionMipThreshold" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "to tweak the bilateral upsampling when using multiple mips (lower resolution versions)" },
		{ "UIMax", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipThreshold = { "AmbientOcclusionMipThreshold", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionMipThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionTemporalBlendWeight_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How much to blend the current frame with previous frames when using GTAO with temporal accumulation */" },
		{ "DisplayName", "Temporal Blend Weight" },
		{ "editcondition", "bOverride_AmbientOcclusionTemporalBlendWeight" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "How much to blend the current frame with previous frames when using GTAO with temporal accumulation" },
		{ "UIMax", "0.5" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionTemporalBlendWeight = { "AmbientOcclusionTemporalBlendWeight", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionTemporalBlendWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionTemporalBlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionTemporalBlendWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingAO_MetaData[] = {
		{ "Category", "Rendering Features|Ray Tracing Ambient Occlusion" },
		{ "Comment", "/** Enables ray tracing ambient occlusion. */" },
		{ "DisplayName", "Enabled" },
		{ "editcondition", "bOverride_RayTracingAO" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Enables ray tracing ambient occlusion." },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingAO_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->RayTracingAO = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingAO = { "RayTracingAO", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingAO_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingAO_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingAO_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingAOSamplesPerPixel_MetaData[] = {
		{ "Category", "Rendering Features|Ray Tracing Ambient Occlusion" },
		{ "ClampMax", "65536" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Sets the samples per pixel for ray tracing ambient occlusion. */" },
		{ "DisplayName", "Samples Per Pixel" },
		{ "editcondition", "bOverride_RayTracingAOSamplesPerPixel" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the samples per pixel for ray tracing ambient occlusion." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingAOSamplesPerPixel = { "RayTracingAOSamplesPerPixel", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, RayTracingAOSamplesPerPixel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingAOSamplesPerPixel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingAOSamplesPerPixel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingAOIntensity_MetaData[] = {
		{ "Category", "Rendering Features|Ray Tracing Ambient Occlusion" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Scalar factor on the ray-tracing ambient occlusion score. */" },
		{ "DisplayName", "Intensity" },
		{ "editcondition", "bOverride_RayTracingAOIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Scalar factor on the ray-tracing ambient occlusion score." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingAOIntensity = { "RayTracingAOIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, RayTracingAOIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingAOIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingAOIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingAORadius_MetaData[] = {
		{ "Category", "Rendering Features|Ray Tracing Ambient Occlusion" },
		{ "ClampMax", "10000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Defines the world-space search radius for occlusion rays. */" },
		{ "DisplayName", "Radius" },
		{ "editcondition", "bOverride_RayTracingAORadius" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Defines the world-space search radius for occlusion rays." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingAORadius = { "RayTracingAORadius", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, RayTracingAORadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingAORadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingAORadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGradingIntensity_MetaData[] = {
		{ "Category", "Color Grading|Misc" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Color grading lookup table intensity. 0 = no intensity, 1=full intensity */" },
		{ "DisplayName", "Color Grading LUT Intensity" },
		{ "editcondition", "bOverride_ColorGradingIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Color grading lookup table intensity. 0 = no intensity, 1=full intensity" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGradingIntensity = { "ColorGradingIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorGradingIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGradingIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGradingIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGradingLUT_MetaData[] = {
		{ "Category", "Color Grading|Misc" },
		{ "Comment", "/** Look up table texture to use or none of not used*/" },
		{ "DisplayName", "Color Grading LUT" },
		{ "editcondition", "bOverride_ColorGradingLUT" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Look up table texture to use or none of not used" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGradingLUT = { "ColorGradingLUT", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorGradingLUT), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGradingLUT_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGradingLUT_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSensorWidth_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Width of the camera sensor to assume, in mm. */" },
		{ "DisplayName", "Sensor Width (mm)" },
		{ "editcondition", "bOverride_DepthOfFieldSensorWidth" },
		{ "ForceUnits", "mm" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Width of the camera sensor to assume, in mm." },
		{ "UIMax", "1000.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSensorWidth = { "DepthOfFieldSensorWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldSensorWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSensorWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSensorWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSqueezeFactor_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Width of the camera sensor to assume, in mm. */" },
		{ "DisplayName", "Squeeze Factor" },
		{ "editcondition", "bOverride_DepthOfFieldSqueezeFactor" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Width of the camera sensor to assume, in mm." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSqueezeFactor = { "DepthOfFieldSqueezeFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldSqueezeFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSqueezeFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSqueezeFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFocalDistance_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Distance in which the Depth of Field effect should be sharp, in unreal units (cm) */" },
		{ "DisplayName", "Focal Distance" },
		{ "editcondition", "bOverride_DepthOfFieldFocalDistance" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Distance in which the Depth of Field effect should be sharp, in unreal units (cm)" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFocalDistance = { "DepthOfFieldFocalDistance", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldFocalDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFocalDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFocalDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldDepthBlurAmount_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.000001" },
		{ "Comment", "/** CircleDOF only: Depth blur km for 50% */" },
		{ "DisplayName", "Depth Blur km for 50%" },
		{ "editcondition", "bOverride_DepthOfFieldDepthBlurAmount" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "CircleDOF only: Depth blur km for 50%" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldDepthBlurAmount = { "DepthOfFieldDepthBlurAmount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldDepthBlurAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldDepthBlurAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldDepthBlurAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldDepthBlurRadius_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** CircleDOF only: Depth blur radius in pixels at 1920x */" },
		{ "DisplayName", "Depth Blur Radius" },
		{ "editcondition", "bOverride_DepthOfFieldDepthBlurRadius" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "CircleDOF only: Depth blur radius in pixels at 1920x" },
		{ "UIMax", "4.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldDepthBlurRadius = { "DepthOfFieldDepthBlurRadius", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldDepthBlurRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldDepthBlurRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldDepthBlurRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFocalRegion_MetaData[] = {
		{ "Category", "Lens|Mobile Depth of Field" },
		{ "Comment", "/** Artificial region where all content is in focus, starting after DepthOfFieldFocalDistance, in unreal units  (cm) */" },
		{ "DisplayName", "Focal Region" },
		{ "editcondition", "bOverride_DepthOfFieldFocalRegion" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Artificial region where all content is in focus, starting after DepthOfFieldFocalDistance, in unreal units  (cm)" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFocalRegion = { "DepthOfFieldFocalRegion", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldFocalRegion), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFocalRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFocalRegion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldNearTransitionRegion_MetaData[] = {
		{ "Category", "Lens|Mobile Depth of Field" },
		{ "Comment", "/** To define the width of the transition region next to the focal region on the near side (cm) */" },
		{ "DisplayName", "Near Transition Region" },
		{ "editcondition", "bOverride_DepthOfFieldNearTransitionRegion" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "To define the width of the transition region next to the focal region on the near side (cm)" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldNearTransitionRegion = { "DepthOfFieldNearTransitionRegion", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldNearTransitionRegion), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldNearTransitionRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldNearTransitionRegion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFarTransitionRegion_MetaData[] = {
		{ "Category", "Lens|Mobile Depth of Field" },
		{ "Comment", "/** To define the width of the transition region next to the focal region on the near side (cm) */" },
		{ "DisplayName", "Far Transition Region" },
		{ "editcondition", "bOverride_DepthOfFieldFarTransitionRegion" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "To define the width of the transition region next to the focal region on the near side (cm)" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFarTransitionRegion = { "DepthOfFieldFarTransitionRegion", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldFarTransitionRegion), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFarTransitionRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFarTransitionRegion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldScale_MetaData[] = {
		{ "Category", "Lens|Mobile Depth of Field" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** SM5: BokehDOF only: To amplify the depth of field effect (like aperture)  0=off \n\x09    ES3_1: Used to blend DoF. 0=off\n\x09*/" },
		{ "DisplayName", "Scale" },
		{ "editcondition", "bOverride_DepthOfFieldScale" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "SM5: BokehDOF only: To amplify the depth of field effect (like aperture)  0=off\n          ES3_1: Used to blend DoF. 0=off" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldScale = { "DepthOfFieldScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldNearBlurSize_MetaData[] = {
		{ "Category", "Lens|Mobile Depth of Field" },
		{ "Comment", "/** Gaussian only: Maximum size of the Depth of Field blur (in percent of the view width) (note: performance cost scales with size) */" },
		{ "DisplayName", "Near Blur Size" },
		{ "editcondition", "bOverride_DepthOfFieldNearBlurSize" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Gaussian only: Maximum size of the Depth of Field blur (in percent of the view width) (note: performance cost scales with size)" },
		{ "UIMax", "32.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldNearBlurSize = { "DepthOfFieldNearBlurSize", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldNearBlurSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldNearBlurSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldNearBlurSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFarBlurSize_MetaData[] = {
		{ "Category", "Lens|Mobile Depth of Field" },
		{ "Comment", "/** Gaussian only: Maximum size of the Depth of Field blur (in percent of the view width) (note: performance cost scales with size) */" },
		{ "DisplayName", "Far Blur Size" },
		{ "editcondition", "bOverride_DepthOfFieldFarBlurSize" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Gaussian only: Maximum size of the Depth of Field blur (in percent of the view width) (note: performance cost scales with size)" },
		{ "UIMax", "32.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFarBlurSize = { "DepthOfFieldFarBlurSize", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldFarBlurSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFarBlurSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFarBlurSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldOcclusion_MetaData[] = {
		{ "Category", "Lens|Mobile Depth of Field" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Occlusion tweak factor 1 (0.18 to get natural occlusion, 0.4 to solve layer color leaking issues) */" },
		{ "DisplayName", "Occlusion" },
		{ "editcondition", "bOverride_DepthOfFieldOcclusion" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Occlusion tweak factor 1 (0.18 to get natural occlusion, 0.4 to solve layer color leaking issues)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldOcclusion = { "DepthOfFieldOcclusion", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldOcclusion), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldOcclusion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSkyFocusDistance_MetaData[] = {
		{ "Category", "Lens|Mobile Depth of Field" },
		{ "ClampMax", "200000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Artificial distance to allow the skybox to be in focus (e.g. 200000), <=0 to switch the feature off, only for GaussianDOF, can cost performance */" },
		{ "DisplayName", "Sky Distance" },
		{ "editcondition", "bOverride_DepthOfFieldSkyFocusDistance" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Artificial distance to allow the skybox to be in focus (e.g. 200000), <=0 to switch the feature off, only for GaussianDOF, can cost performance" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSkyFocusDistance = { "DepthOfFieldSkyFocusDistance", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldSkyFocusDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSkyFocusDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSkyFocusDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldVignetteSize_MetaData[] = {
		{ "Category", "Lens|Mobile Depth of Field" },
		{ "Comment", "/** Artificial circular mask to (near) blur content outside the radius, only for GaussianDOF, diameter in percent of screen width, costs performance if the mask is used, keep Feather can Radius on default to keep it off */" },
		{ "DisplayName", "Vignette Size" },
		{ "editcondition", "bOverride_DepthOfFieldVignetteSize" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Artificial circular mask to (near) blur content outside the radius, only for GaussianDOF, diameter in percent of screen width, costs performance if the mask is used, keep Feather can Radius on default to keep it off" },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldVignetteSize = { "DepthOfFieldVignetteSize", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldVignetteSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldVignetteSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldVignetteSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurAmount_MetaData[] = {
		{ "Category", "Rendering Features|Motion Blur" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Strength of motion blur, 0:off, should be renamed to intensity */" },
		{ "DisplayName", "Amount" },
		{ "editcondition", "bOverride_MotionBlurAmount" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Strength of motion blur, 0:off, should be renamed to intensity" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurAmount = { "MotionBlurAmount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, MotionBlurAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurMax_MetaData[] = {
		{ "Category", "Rendering Features|Motion Blur" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** max distortion caused by motion blur, in percent of the screen width, 0:off */" },
		{ "DisplayName", "Max" },
		{ "editcondition", "bOverride_MotionBlurMax" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "max distortion caused by motion blur, in percent of the screen width, 0:off" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurMax = { "MotionBlurMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, MotionBlurMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurTargetFPS_MetaData[] = {
		{ "Category", "Rendering Features|Motion Blur" },
		{ "ClampMax", "120" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Defines the target FPS for motion blur. Makes motion blur independent of actual frame rate and relative\n\x09 * to the specified target FPS instead. Higher target FPS results in shorter frames, which means shorter\n\x09 * shutter times and less motion blur. Lower FPS means more motion blur. A value of zero makes the motion\n\x09 * blur dependent on the actual frame rate.\n\x09 */" },
		{ "DisplayName", "Target FPS" },
		{ "editcondition", "bOverride_MotionBlurTargetFPS" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Defines the target FPS for motion blur. Makes motion blur independent of actual frame rate and relative\nto the specified target FPS instead. Higher target FPS results in shorter frames, which means shorter\nshutter times and less motion blur. Lower FPS means more motion blur. A value of zero makes the motion\nblur dependent on the actual frame rate." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurTargetFPS = { "MotionBlurTargetFPS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, MotionBlurTargetFPS), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurTargetFPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurTargetFPS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurPerObjectSize_MetaData[] = {
		{ "Category", "Rendering Features|Motion Blur" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The minimum projected screen radius for a primitive to be drawn in the velocity pass, percentage of screen width. smaller numbers cause more draw calls, default: 4% */" },
		{ "DisplayName", "Per Object Size" },
		{ "editcondition", "bOverride_MotionBlurPerObjectSize" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "The minimum projected screen radius for a primitive to be drawn in the velocity pass, percentage of screen width. smaller numbers cause more draw calls, default: 4%" },
		{ "UIMax", "100.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurPerObjectSize = { "MotionBlurPerObjectSize", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, MotionBlurPerObjectSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurPerObjectSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurPerObjectSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVIntensity = { "LPVIntensity", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LPVIntensity_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVVplInjectionBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVVplInjectionBias = { "LPVVplInjectionBias", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LPVVplInjectionBias_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVVplInjectionBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVVplInjectionBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSize = { "LPVSize", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LPVSize_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSecondaryOcclusionIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSecondaryOcclusionIntensity = { "LPVSecondaryOcclusionIntensity", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LPVSecondaryOcclusionIntensity_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSecondaryOcclusionIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSecondaryOcclusionIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSecondaryBounceIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSecondaryBounceIntensity = { "LPVSecondaryBounceIntensity", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LPVSecondaryBounceIntensity_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSecondaryBounceIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSecondaryBounceIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVGeometryVolumeBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVGeometryVolumeBias = { "LPVGeometryVolumeBias", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LPVGeometryVolumeBias_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVGeometryVolumeBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVGeometryVolumeBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVEmissiveInjectionIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVEmissiveInjectionIntensity = { "LPVEmissiveInjectionIntensity", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LPVEmissiveInjectionIntensity_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVEmissiveInjectionIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVEmissiveInjectionIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionIntensity = { "LPVDirectionalOcclusionIntensity", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LPVDirectionalOcclusionIntensity_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionRadius_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionRadius = { "LPVDirectionalOcclusionRadius", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LPVDirectionalOcclusionRadius_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDiffuseOcclusionExponent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDiffuseOcclusionExponent = { "LPVDiffuseOcclusionExponent", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LPVDiffuseOcclusionExponent_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDiffuseOcclusionExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDiffuseOcclusionExponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSpecularOcclusionExponent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSpecularOcclusionExponent = { "LPVSpecularOcclusionExponent", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LPVSpecularOcclusionExponent_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSpecularOcclusionExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSpecularOcclusionExponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDiffuseOcclusionIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDiffuseOcclusionIntensity = { "LPVDiffuseOcclusionIntensity", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LPVDiffuseOcclusionIntensity_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDiffuseOcclusionIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDiffuseOcclusionIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSpecularOcclusionIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSpecularOcclusionIntensity = { "LPVSpecularOcclusionIntensity", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LPVSpecularOcclusionIntensity_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSpecularOcclusionIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSpecularOcclusionIntensity_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_TranslucencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_TranslucencyType_MetaData[] = {
		{ "Category", "Rendering Features|Translucency" },
		{ "Comment", "/** Sets the translucency type */" },
		{ "DisplayName", "Type" },
		{ "editcondition", "bOverride_TranslucencyType" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the translucency type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_TranslucencyType = { "TranslucencyType", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, TranslucencyType), Z_Construct_UEnum_Engine_ETranslucencyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_TranslucencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_TranslucencyType_MetaData)) }; // 3492272966
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyMaxRoughness_MetaData[] = {
		{ "Category", "Rendering Features|Ray Tracing Translucency" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Sets the maximum roughness until which ray tracing translucency will be visible (lower value is faster). Translucency contribution is smoothly faded when close to roughness threshold. This parameter behaves similarly to ScreenSpaceReflectionMaxRoughness. */" },
		{ "DisplayName", "Max Roughness" },
		{ "editcondition", "bOverride_RayTracingTranslucencyMaxRoughness" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the maximum roughness until which ray tracing translucency will be visible (lower value is faster). Translucency contribution is smoothly faded when close to roughness threshold. This parameter behaves similarly to ScreenSpaceReflectionMaxRoughness." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyMaxRoughness = { "RayTracingTranslucencyMaxRoughness", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, RayTracingTranslucencyMaxRoughness), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyMaxRoughness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyMaxRoughness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyRefractionRays_MetaData[] = {
		{ "Category", "Rendering Features|Ray Tracing Translucency" },
		{ "ClampMax", "50" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Sets the maximum number of ray tracing refraction rays. */" },
		{ "DisplayName", "Max. Refraction Rays" },
		{ "editcondition", "bOverride_RayTracingTranslucencyRefractionRays" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the maximum number of ray tracing refraction rays." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyRefractionRays = { "RayTracingTranslucencyRefractionRays", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, RayTracingTranslucencyRefractionRays), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyRefractionRays_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyRefractionRays_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencySamplesPerPixel_MetaData[] = {
		{ "Category", "Rendering Features|Ray Tracing Translucency" },
		{ "ClampMax", "65536" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Sets the samples per pixel for ray traced translucency. */" },
		{ "DisplayName", "Samples Per Pixel" },
		{ "editcondition", "bOverride_RayTracingTranslucencySamplesPerPixel" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the samples per pixel for ray traced translucency." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencySamplesPerPixel = { "RayTracingTranslucencySamplesPerPixel", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, RayTracingTranslucencySamplesPerPixel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencySamplesPerPixel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencySamplesPerPixel_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyShadows_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyShadows_MetaData[] = {
		{ "Category", "Rendering Features|Ray Tracing Translucency" },
		{ "Comment", "/** Sets the translucency shadows type. */" },
		{ "DisplayName", "Shadows" },
		{ "editcondition", "bOverride_RayTracingTranslucencyShadows" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the translucency shadows type." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyShadows = { "RayTracingTranslucencyShadows", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, RayTracingTranslucencyShadows), Z_Construct_UEnum_Engine_EReflectedAndRefractedRayTracedShadows, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyShadows_MetaData)) }; // 3463670797
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyRefraction_MetaData[] = {
		{ "Category", "Rendering Features|Ray Tracing Translucency" },
		{ "Comment", "/** Sets whether refraction should be enabled or not (if not rays will not scatter and only travel in the same direction as before the intersection event). */" },
		{ "DisplayName", "Refraction" },
		{ "editcondition", "bOverride_RayTracingTranslucencyRefraction" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets whether refraction should be enabled or not (if not rays will not scatter and only travel in the same direction as before the intersection event)." },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyRefraction_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->RayTracingTranslucencyRefraction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyRefraction = { "RayTracingTranslucencyRefraction", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyRefraction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyRefraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyRefraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingMaxBounces_MetaData[] = {
		{ "Category", "Path Tracing" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Sets the path tracing maximum bounces */" },
		{ "DisplayName", "Max. Bounces" },
		{ "editcondition", "bOverride_PathTracingMaxBounces" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the path tracing maximum bounces" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingMaxBounces = { "PathTracingMaxBounces", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, PathTracingMaxBounces), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingMaxBounces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingMaxBounces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingSamplesPerPixel_MetaData[] = {
		{ "Category", "Path Tracing" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Sets the samples per pixel for the path tracer. */" },
		{ "DisplayName", "Samples Per Pixel" },
		{ "editcondition", "bOverride_PathTracingSamplesPerPixel" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the samples per pixel for the path tracer." },
		{ "UIMax", "65536" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingSamplesPerPixel = { "PathTracingSamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, PathTracingSamplesPerPixel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingSamplesPerPixel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingSamplesPerPixel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingFilterWidth_MetaData[] = {
		{ "Category", "Path Tracing" },
		{ "ClampMax", "6.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Sets anti-aliasing filter width for the path tracer. Lower values are sharper (and more aliased), larger values are softer (and blurrier). */" },
		{ "DisplayName", "Filter Width" },
		{ "editcondition", "bOverride_PathTracingFilterWidth" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets anti-aliasing filter width for the path tracer. Lower values are sharper (and more aliased), larger values are softer (and blurrier)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingFilterWidth = { "PathTracingFilterWidth", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, PathTracingFilterWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingFilterWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingFilterWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingMaxPathExposure_MetaData[] = {
		{ "Category", "Path Tracing" },
		{ "ClampMax", "30.0" },
		{ "ClampMin", "-10.0" },
		{ "Comment", "/** Sets the maximum exposure allowed in the path tracer to reduce fireflies. This should be set a few stops higher than the scene exposure. */" },
		{ "DisplayName", "Max Path Exposure" },
		{ "editcondition", "bOverride_PathTracingMaxPathExposure" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the maximum exposure allowed in the path tracer to reduce fireflies. This should be set a few stops higher than the scene exposure." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingMaxPathExposure = { "PathTracingMaxPathExposure", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, PathTracingMaxPathExposure), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingMaxPathExposure_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingMaxPathExposure_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingEnableReferenceDOF_MetaData[] = {
		{ "Category", "Path Tracing" },
		{ "Comment", "/** Enables a reference quality depth-of-field which replaces the post-process effect. */" },
		{ "DisplayName", "Reference Depth Of Field" },
		{ "editcondition", "bOverride_PathTracingEnableReferenceDOF" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Enables a reference quality depth-of-field which replaces the post-process effect." },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingEnableReferenceDOF_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->PathTracingEnableReferenceDOF = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingEnableReferenceDOF = { "PathTracingEnableReferenceDOF", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingEnableReferenceDOF_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingEnableReferenceDOF_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingEnableReferenceDOF_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingEnableReferenceAtmosphere_MetaData[] = {
		{ "Category", "Path Tracing" },
		{ "Comment", "/** Enables path tracing in the atmosphere instead of baking the sky atmosphere contribution into a skylight. Any skylight present in the scene will be automatically ignored when this is enabled. */" },
		{ "DisplayName", "Reference Atmosphere" },
		{ "editcondition", "bOverride_PathTracingEnableReferenceAtmosphere" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Enables path tracing in the atmosphere instead of baking the sky atmosphere contribution into a skylight. Any skylight present in the scene will be automatically ignored when this is enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingEnableReferenceAtmosphere_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->PathTracingEnableReferenceAtmosphere = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingEnableReferenceAtmosphere = { "PathTracingEnableReferenceAtmosphere", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingEnableReferenceAtmosphere_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingEnableReferenceAtmosphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingEnableReferenceAtmosphere_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingEnableDenoiser_MetaData[] = {
		{ "Category", "Path Tracing" },
		{ "Comment", "/** Run the currently loaded denoiser plugin on the last sample to remove noise from the output. Has no effect if a plug-in is not loaded. */" },
		{ "DisplayName", "Denoiser" },
		{ "editcondition", "bOverride_PathTracingEnableDenoiser" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Run the currently loaded denoiser plugin on the last sample to remove noise from the output. Has no effect if a plug-in is not loaded." },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingEnableDenoiser_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->PathTracingEnableDenoiser = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingEnableDenoiser = { "PathTracingEnableDenoiser", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingEnableDenoiser_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingEnableDenoiser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingEnableDenoiser_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeEmissive_MetaData[] = {
		{ "Category", "Path Tracing|Lighting Components" },
		{ "Comment", "/** Should the render include directly visible emissive elements? */" },
		{ "DisplayName", "Emissive" },
		{ "editcondition", "bOverride_PathTracingIncludeEmissive" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Should the render include directly visible emissive elements?" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeEmissive_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->PathTracingIncludeEmissive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeEmissive = { "PathTracingIncludeEmissive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeEmissive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeEmissive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeEmissive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeIndirectEmissive_MetaData[] = {
		{ "Category", "Path Tracing|Lighting Components" },
		{ "Comment", "/** Should the render include indirectly visible emissive elements? */" },
		{ "DisplayName", "Indirect Emissive" },
		{ "editcondition", "bOverride_PathTracingIncludeIndirectEmissive" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Should the render include indirectly visible emissive elements?" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeIndirectEmissive_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->PathTracingIncludeIndirectEmissive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeIndirectEmissive = { "PathTracingIncludeIndirectEmissive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeIndirectEmissive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeIndirectEmissive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeIndirectEmissive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeDiffuse_MetaData[] = {
		{ "Category", "Path Tracing|Lighting Components" },
		{ "Comment", "/** Should the render include diffuse lighting contributions? */" },
		{ "DisplayName", "Diffuse" },
		{ "editcondition", "bOverride_PathTracingIncludeDiffuse" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Should the render include diffuse lighting contributions?" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeDiffuse_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->PathTracingIncludeDiffuse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeDiffuse = { "PathTracingIncludeDiffuse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeDiffuse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeDiffuse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeDiffuse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeIndirectDiffuse_MetaData[] = {
		{ "Category", "Path Tracing|Lighting Components" },
		{ "Comment", "/** Should the render include indirect diffuse lighting contributions? */" },
		{ "DisplayName", "Indirect Diffuse" },
		{ "editcondition", "bOverride_PathTracingIncludeIndirectDiffuse" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Should the render include indirect diffuse lighting contributions?" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeIndirectDiffuse_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->PathTracingIncludeIndirectDiffuse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeIndirectDiffuse = { "PathTracingIncludeIndirectDiffuse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeIndirectDiffuse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeIndirectDiffuse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeIndirectDiffuse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeSpecular_MetaData[] = {
		{ "Category", "Path Tracing|Lighting Components" },
		{ "Comment", "/** Should the render include specular lighting contributions? */" },
		{ "DisplayName", "Specular" },
		{ "editcondition", "bOverride_PathTracingIncludeSpecular" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Should the render include specular lighting contributions?" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeSpecular_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->PathTracingIncludeSpecular = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeSpecular = { "PathTracingIncludeSpecular", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeSpecular_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeSpecular_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeSpecular_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeIndirectSpecular_MetaData[] = {
		{ "Category", "Path Tracing|Lighting Components" },
		{ "Comment", "/** Should the render include indirect specular lighting contributions? */" },
		{ "DisplayName", "Indirect Specular" },
		{ "editcondition", "bOverride_PathTracingIncludeIndirectSpecular" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Should the render include indirect specular lighting contributions?" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeIndirectSpecular_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->PathTracingIncludeIndirectSpecular = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeIndirectSpecular = { "PathTracingIncludeIndirectSpecular", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeIndirectSpecular_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeIndirectSpecular_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeIndirectSpecular_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeVolume_MetaData[] = {
		{ "Category", "Path Tracing|Lighting Components" },
		{ "Comment", "/** Should the render include volume lighting contributions? */" },
		{ "DisplayName", "Volume" },
		{ "editcondition", "bOverride_PathTracingIncludeVolume" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Should the render include volume lighting contributions?" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeVolume_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->PathTracingIncludeVolume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeVolume = { "PathTracingIncludeVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeVolume_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeIndirectVolume_MetaData[] = {
		{ "Category", "Path Tracing|Lighting Components" },
		{ "Comment", "/** Should the render include volume lighting contributions? */" },
		{ "DisplayName", "Indirect Volume" },
		{ "editcondition", "bOverride_PathTracingIncludeIndirectVolume" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Should the render include volume lighting contributions?" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeIndirectVolume_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->PathTracingIncludeIndirectVolume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeIndirectVolume = { "PathTracingIncludeIndirectVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeIndirectVolume_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeIndirectVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeIndirectVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVFadeRange_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVFadeRange = { "LPVFadeRange", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LPVFadeRange_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVFadeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVFadeRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionFadeRange_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionFadeRange = { "LPVDirectionalOcclusionFadeRange", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, LPVDirectionalOcclusionFadeRange_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionFadeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionFadeRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenPercentage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenPercentage = { "ScreenPercentage", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, ScreenPercentage_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WeightedBlendables_MetaData[] = {
		{ "Category", "Rendering Features" },
		{ "Comment", "/**\n\x09 * Allows custom post process materials to be defined, using a MaterialInstance with the same Material as its parent to allow blending.\n\x09 * For materials this needs to be the \"PostProcess\" domain type. This can be used for any UObject object implementing the IBlendableInterface (e.g. could be used to fade weather settings).\n\x09 */" },
		{ "DisplayName", "Post Process Materials" },
		{ "Keywords", "PostProcess" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Allows custom post process materials to be defined, using a MaterialInstance with the same Material as its parent to allow blending.\nFor materials this needs to be the \"PostProcess\" domain type. This can be used for any UObject object implementing the IBlendableInterface (e.g. could be used to fade weather settings)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WeightedBlendables = { "WeightedBlendables", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, WeightedBlendables), Z_Construct_UScriptStruct_FWeightedBlendables, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WeightedBlendables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WeightedBlendables_MetaData)) }; // 1974239863
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Blendables_Inner = { "Blendables", nullptr, (EPropertyFlags)0x0004000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Blendables_MetaData[] = {
		{ "Comment", "// for backwards compatibility\n" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "for backwards compatibility" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Blendables = { "Blendables", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessSettings, Blendables_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Blendables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Blendables_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPostProcessSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_TemperatureType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTemp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGamma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationMidtones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastMidtones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaMidtones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainMidtones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetMidtones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationHighlights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastHighlights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaHighlights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainHighlights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetHighlights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BlueCorrection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ExpandGamut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ToneCurveAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSlope,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShoulder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmBlackClip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhiteClip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneColorTint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneFringeIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ChromaticAberrationStartOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapTint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Tint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Tint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Tint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Tint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Tint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Tint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomSizeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionScatterDispersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionCenterUV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionBufferScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskTint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraShutterSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraISO,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureLowPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureHighPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMinBrightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMaxBrightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureCalibrationConstant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBiasCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMeterMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureApplyPhysicalCameraExposure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureContrastScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureHighlightContrastScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureShadowContrastScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureDetailStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureBlurredLuminanceBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureBlurredLuminanceKernelSizePercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LocalExposureMiddleGreyBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_VignetteIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainJitter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainIntensityShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainIntensityMidtones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainIntensityHighlights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainShadowsMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainHighlightsMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainHighlightsMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainTexelSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmGrainTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionStaticFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadiusInWS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionTemporalBlendWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAO,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAOSamplesPerPixel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAOIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAORadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionExponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionExponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryOcclusionIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryBounceIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVGeometryVolumeBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVVplInjectionBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVEmissiveInjectionIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVFadeRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionFadeRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingLUT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFstop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMinFstop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBladeCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSensorWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSqueezeFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalRegion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearTransitionRegion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarTransitionRegion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearBlurSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarBlurSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MobileHQGaussian,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldOcclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSkyFocusDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldVignetteSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurTargetFPS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurPerObjectSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ReflectionMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenReflectionQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionMaxRoughness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionRoughnessScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ReflectionsType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsMaxRoughness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsMaxBounces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsSamplesPerPixel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsTranslucency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_TranslucencyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyMaxRoughness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefractionRays,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencySamplesPerPixel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DynamicGlobalIlluminationMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSceneLightingQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSceneDetail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSceneViewDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSceneLightingUpdateSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenFinalGatherQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenFinalGatherLightingUpdateSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenMaxTraceDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenDiffuseColorBoost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSkylightLeaking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenFullSkylightLeakingDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenRayLightingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenFrontLayerTranslucencyReflections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LumenSurfaceCacheResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGIMaxBounces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGISamplesPerPixel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingMaxBounces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingSamplesPerPixel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingFilterWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingMaxPathExposure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingEnableReferenceDOF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingEnableReferenceAtmosphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingEnableDenoiser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeEmissive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeIndirectEmissive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeDiffuse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeIndirectDiffuse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeSpecular,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeIndirectSpecular,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingIncludeIndirectVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bMobileHQGaussian,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMethod,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMethod,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_TemperatureType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WhiteTemp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WhiteTint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGamma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationMidtones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastMidtones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaMidtones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainMidtones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetMidtones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationHighlights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastHighlights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaHighlights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainHighlights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetHighlights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionHighlightsMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionHighlightsMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionShadowsMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BlueCorrection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ExpandGamut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ToneCurveAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmSlope,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmToe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShoulder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmBlackClip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmWhiteClip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_SceneColorTint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_SceneFringeIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ChromaticAberrationStartOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomSizeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom1Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom2Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom3Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom4Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom5Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom6Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom1Tint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom2Tint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom3Tint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom4Tint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom5Tint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom6Tint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionScatterDispersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionCenterUV,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilter,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionBufferScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMaskIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMaskTint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DynamicGlobalIlluminationMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_IndirectLightingColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_IndirectLightingIntensity,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGI,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenSceneLightingQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenSceneDetail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenSceneViewDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenSceneLightingUpdateSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenFinalGatherQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenFinalGatherLightingUpdateSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenMaxTraceDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenDiffuseColorBoost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenSkylightLeaking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenFullSkylightLeakingDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenSurfaceCacheResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGIType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGIType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGIMaxBounces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGISamplesPerPixel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ReflectionMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ReflectionsType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ReflectionsType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenReflectionQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenRayLightingMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenRayLightingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LumenFrontLayerTranslucencyReflections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionMaxRoughness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsMaxRoughness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsMaxBounces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsSamplesPerPixel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsShadows_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsTranslucency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemapTint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemapIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_CameraShutterSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_CameraISO,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFstop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMinFstop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldBladeCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureBiasBackup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBiasBackup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureApplyPhysicalCameraExposure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureBiasCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMeterMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureLowPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureHighPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMinBrightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMaxBrightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureSpeedUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureSpeedDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_HistogramLogMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_HistogramLogMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureCalibrationConstant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureContrastScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureHighlightContrastScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureShadowContrastScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureDetailStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureBlurredLuminanceBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureBlurredLuminanceKernelSizePercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LocalExposureMiddleGreyBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareTint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareBokehSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareBokehShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareTints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_VignetteIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_GrainJitter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_GrainIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainIntensityShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainIntensityMidtones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainIntensityHighlights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainShadowsMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainHighlightsMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainHighlightsMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainTexelSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmGrainTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionStaticFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadiusInWS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionFadeDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionFadeRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionTemporalBlendWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingAO,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingAOSamplesPerPixel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingAOIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingAORadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGradingIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGradingLUT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSensorWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSqueezeFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFocalDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldDepthBlurAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldDepthBlurRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFocalRegion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldNearTransitionRegion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFarTransitionRegion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldNearBlurSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFarBlurSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldOcclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSkyFocusDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldVignetteSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurTargetFPS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurPerObjectSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVVplInjectionBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSecondaryOcclusionIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSecondaryBounceIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVGeometryVolumeBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVEmissiveInjectionIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDiffuseOcclusionExponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSpecularOcclusionExponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDiffuseOcclusionIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSpecularOcclusionIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_TranslucencyType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_TranslucencyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyMaxRoughness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyRefractionRays,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencySamplesPerPixel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyShadows_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyRefraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingMaxBounces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingSamplesPerPixel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingFilterWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingMaxPathExposure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingEnableReferenceDOF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingEnableReferenceAtmosphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingEnableDenoiser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeEmissive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeIndirectEmissive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeDiffuse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeIndirectDiffuse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeSpecular,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeIndirectSpecular,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingIncludeIndirectVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVFadeRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionFadeRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WeightedBlendables,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Blendables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Blendables,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PostProcessSettings",
		sizeof(FPostProcessSettings),
		alignof(FPostProcessSettings),
		Z_Construct_UScriptStruct_FPostProcessSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_PostProcessSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PostProcessSettings.InnerSingleton, Z_Construct_UScriptStruct_FPostProcessSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PostProcessSettings.InnerSingleton;
	}
	void UScene::StaticRegisterNativesUScene()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScene);
	UClass* Z_Construct_UClass_UScene_NoRegister()
	{
		return UScene::StaticClass();
	}
	struct Z_Construct_UClass_UScene_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScene_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScene_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/Scene.h" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScene_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScene>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScene_Statics::ClassParams = {
		&UScene::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UScene_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScene_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScene()
	{
		if (!Z_Registration_Info_UClass_UScene.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScene.OuterSingleton, Z_Construct_UClass_UScene_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScene.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UScene>()
	{
		return UScene::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScene);
	UScene::~UScene() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_Statics::EnumInfo[] = {
		{ EDepthOfFieldMethod_StaticEnum, TEXT("EDepthOfFieldMethod"), &Z_Registration_Info_UEnum_EDepthOfFieldMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3413507750U) },
		{ EAutoExposureMethod_StaticEnum, TEXT("EAutoExposureMethod"), &Z_Registration_Info_UEnum_EAutoExposureMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1360730395U) },
		{ EBloomMethod_StaticEnum, TEXT("EBloomMethod"), &Z_Registration_Info_UEnum_EBloomMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2938043131U) },
		{ ETemperatureMethod_StaticEnum, TEXT("ETemperatureMethod"), &Z_Registration_Info_UEnum_ETemperatureMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3948101323U) },
		{ ELightUnits_StaticEnum, TEXT("ELightUnits"), &Z_Registration_Info_UEnum_ELightUnits, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 117192790U) },
		{ EReflectionsType_StaticEnum, TEXT("EReflectionsType"), &Z_Registration_Info_UEnum_EReflectionsType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3309963902U) },
		{ ELumenRayLightingModeOverride_StaticEnum, TEXT("ELumenRayLightingModeOverride"), &Z_Registration_Info_UEnum_ELumenRayLightingModeOverride, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1673702998U) },
		{ ETranslucencyType_StaticEnum, TEXT("ETranslucencyType"), &Z_Registration_Info_UEnum_ETranslucencyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3492272966U) },
		{ ERayTracingGlobalIlluminationType_StaticEnum, TEXT("ERayTracingGlobalIlluminationType"), &Z_Registration_Info_UEnum_ERayTracingGlobalIlluminationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1775120132U) },
		{ EReflectedAndRefractedRayTracedShadows_StaticEnum, TEXT("EReflectedAndRefractedRayTracedShadows"), &Z_Registration_Info_UEnum_EReflectedAndRefractedRayTracedShadows, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3463670797U) },
		{ EMobilePlanarReflectionMode_StaticEnum, TEXT("EMobilePlanarReflectionMode"), &Z_Registration_Info_UEnum_EMobilePlanarReflectionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1889635076U) },
		{ EMobilePixelProjectedReflectionQuality_StaticEnum, TEXT("EMobilePixelProjectedReflectionQuality"), &Z_Registration_Info_UEnum_EMobilePixelProjectedReflectionQuality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2023608720U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_Statics::ScriptStructInfo[] = {
		{ FColorGradePerRangeSettings::StaticStruct, Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewStructOps, TEXT("ColorGradePerRangeSettings"), &Z_Registration_Info_UScriptStruct_ColorGradePerRangeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FColorGradePerRangeSettings), 3656756864U) },
		{ FColorGradingSettings::StaticStruct, Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewStructOps, TEXT("ColorGradingSettings"), &Z_Registration_Info_UScriptStruct_ColorGradingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FColorGradingSettings), 32815037U) },
		{ FFilmStockSettings::StaticStruct, Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewStructOps, TEXT("FilmStockSettings"), &Z_Registration_Info_UScriptStruct_FilmStockSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFilmStockSettings), 2552197186U) },
		{ FGaussianSumBloomSettings::StaticStruct, Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewStructOps, TEXT("GaussianSumBloomSettings"), &Z_Registration_Info_UScriptStruct_GaussianSumBloomSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGaussianSumBloomSettings), 3328389366U) },
		{ FConvolutionBloomSettings::StaticStruct, Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewStructOps, TEXT("ConvolutionBloomSettings"), &Z_Registration_Info_UScriptStruct_ConvolutionBloomSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConvolutionBloomSettings), 179829087U) },
		{ FLensBloomSettings::StaticStruct, Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewStructOps, TEXT("LensBloomSettings"), &Z_Registration_Info_UScriptStruct_LensBloomSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLensBloomSettings), 1102273861U) },
		{ FLensImperfectionSettings::StaticStruct, Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewStructOps, TEXT("LensImperfectionSettings"), &Z_Registration_Info_UScriptStruct_LensImperfectionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLensImperfectionSettings), 1472182067U) },
		{ FLensSettings::StaticStruct, Z_Construct_UScriptStruct_FLensSettings_Statics::NewStructOps, TEXT("LensSettings"), &Z_Registration_Info_UScriptStruct_LensSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLensSettings), 934849010U) },
		{ FCameraExposureSettings::StaticStruct, Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewStructOps, TEXT("CameraExposureSettings"), &Z_Registration_Info_UScriptStruct_CameraExposureSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraExposureSettings), 3296535902U) },
		{ FWeightedBlendable::StaticStruct, Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewStructOps, TEXT("WeightedBlendable"), &Z_Registration_Info_UScriptStruct_WeightedBlendable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeightedBlendable), 1310401273U) },
		{ FWeightedBlendables::StaticStruct, Z_Construct_UScriptStruct_FWeightedBlendables_Statics::NewStructOps, TEXT("WeightedBlendables"), &Z_Registration_Info_UScriptStruct_WeightedBlendables, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeightedBlendables), 1974239863U) },
		{ FPostProcessSettings::StaticStruct, Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewStructOps, TEXT("PostProcessSettings"), &Z_Registration_Info_UScriptStruct_PostProcessSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPostProcessSettings), 1889339962U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UScene, UScene::StaticClass, TEXT("UScene"), &Z_Registration_Info_UClass_UScene, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScene), 2812619071U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_4272128199(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
