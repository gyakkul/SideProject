// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TextureEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	TEXTUREEDITOR_API UClass* Z_Construct_UClass_UTextureEditorSettings();
	TEXTUREEDITOR_API UClass* Z_Construct_UClass_UTextureEditorSettings_NoRegister();
	TEXTUREEDITOR_API UEnum* Z_Construct_UEnum_TextureEditor_ETextureEditorBackgrounds();
	TEXTUREEDITOR_API UEnum* Z_Construct_UEnum_TextureEditor_ETextureEditorCubemapViewMode();
	TEXTUREEDITOR_API UEnum* Z_Construct_UEnum_TextureEditor_ETextureEditorSampling();
	TEXTUREEDITOR_API UEnum* Z_Construct_UEnum_TextureEditor_ETextureEditorVolumeViewMode();
	TEXTUREEDITOR_API UEnum* Z_Construct_UEnum_TextureEditor_ETextureEditorZoomMode();
	UPackage* Z_Construct_UPackage__Script_TextureEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureEditorBackgrounds;
	static UEnum* ETextureEditorBackgrounds_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureEditorBackgrounds.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureEditorBackgrounds.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TextureEditor_ETextureEditorBackgrounds, (UObject*)Z_Construct_UPackage__Script_TextureEditor(), TEXT("ETextureEditorBackgrounds"));
		}
		return Z_Registration_Info_UEnum_ETextureEditorBackgrounds.OuterSingleton;
	}
	template<> TEXTUREEDITOR_API UEnum* StaticEnum<ETextureEditorBackgrounds>()
	{
		return ETextureEditorBackgrounds_StaticEnum();
	}
	struct Z_Construct_UEnum_TextureEditor_ETextureEditorBackgrounds_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TextureEditor_ETextureEditorBackgrounds_Statics::Enumerators[] = {
		{ "TextureEditorBackground_SolidColor", (int64)TextureEditorBackground_SolidColor },
		{ "TextureEditorBackground_Checkered", (int64)TextureEditorBackground_Checkered },
		{ "TextureEditorBackground_CheckeredFill", (int64)TextureEditorBackground_CheckeredFill },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TextureEditor_ETextureEditorBackgrounds_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enumerates background for the texture editor view port.\n */" },
		{ "ModuleRelativePath", "Classes/TextureEditorSettings.h" },
		{ "TextureEditorBackground_Checkered.DisplayName", "Checkered" },
		{ "TextureEditorBackground_Checkered.Name", "TextureEditorBackground_Checkered" },
		{ "TextureEditorBackground_CheckeredFill.DisplayName", "Checkered (Fill)" },
		{ "TextureEditorBackground_CheckeredFill.Name", "TextureEditorBackground_CheckeredFill" },
		{ "TextureEditorBackground_SolidColor.DisplayName", "Solid Color" },
		{ "TextureEditorBackground_SolidColor.Name", "TextureEditorBackground_SolidColor" },
		{ "ToolTip", "Enumerates background for the texture editor view port." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TextureEditor_ETextureEditorBackgrounds_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TextureEditor,
		nullptr,
		"ETextureEditorBackgrounds",
		"ETextureEditorBackgrounds",
		Z_Construct_UEnum_TextureEditor_ETextureEditorBackgrounds_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TextureEditor_ETextureEditorBackgrounds_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_TextureEditor_ETextureEditorBackgrounds_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TextureEditor_ETextureEditorBackgrounds_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TextureEditor_ETextureEditorBackgrounds()
	{
		if (!Z_Registration_Info_UEnum_ETextureEditorBackgrounds.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureEditorBackgrounds.InnerSingleton, Z_Construct_UEnum_TextureEditor_ETextureEditorBackgrounds_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureEditorBackgrounds.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureEditorSampling;
	static UEnum* ETextureEditorSampling_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureEditorSampling.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureEditorSampling.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TextureEditor_ETextureEditorSampling, (UObject*)Z_Construct_UPackage__Script_TextureEditor(), TEXT("ETextureEditorSampling"));
		}
		return Z_Registration_Info_UEnum_ETextureEditorSampling.OuterSingleton;
	}
	template<> TEXTUREEDITOR_API UEnum* StaticEnum<ETextureEditorSampling>()
	{
		return ETextureEditorSampling_StaticEnum();
	}
	struct Z_Construct_UEnum_TextureEditor_ETextureEditorSampling_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TextureEditor_ETextureEditorSampling_Statics::Enumerators[] = {
		{ "TextureEditorSampling_Default", (int64)TextureEditorSampling_Default },
		{ "TextureEditorSampling_Point", (int64)TextureEditorSampling_Point },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TextureEditor_ETextureEditorSampling_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/TextureEditorSettings.h" },
		{ "TextureEditorSampling_Default.DisplayName", "Default Sampling" },
		{ "TextureEditorSampling_Default.Name", "TextureEditorSampling_Default" },
		{ "TextureEditorSampling_Point.DisplayName", "Nearest-Point Sampling" },
		{ "TextureEditorSampling_Point.Name", "TextureEditorSampling_Point" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TextureEditor_ETextureEditorSampling_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TextureEditor,
		nullptr,
		"ETextureEditorSampling",
		"ETextureEditorSampling",
		Z_Construct_UEnum_TextureEditor_ETextureEditorSampling_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TextureEditor_ETextureEditorSampling_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_TextureEditor_ETextureEditorSampling_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TextureEditor_ETextureEditorSampling_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TextureEditor_ETextureEditorSampling()
	{
		if (!Z_Registration_Info_UEnum_ETextureEditorSampling.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureEditorSampling.InnerSingleton, Z_Construct_UEnum_TextureEditor_ETextureEditorSampling_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureEditorSampling.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureEditorVolumeViewMode;
	static UEnum* ETextureEditorVolumeViewMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureEditorVolumeViewMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureEditorVolumeViewMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TextureEditor_ETextureEditorVolumeViewMode, (UObject*)Z_Construct_UPackage__Script_TextureEditor(), TEXT("ETextureEditorVolumeViewMode"));
		}
		return Z_Registration_Info_UEnum_ETextureEditorVolumeViewMode.OuterSingleton;
	}
	template<> TEXTUREEDITOR_API UEnum* StaticEnum<ETextureEditorVolumeViewMode>()
	{
		return ETextureEditorVolumeViewMode_StaticEnum();
	}
	struct Z_Construct_UEnum_TextureEditor_ETextureEditorVolumeViewMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TextureEditor_ETextureEditorVolumeViewMode_Statics::Enumerators[] = {
		{ "TextureEditorVolumeViewMode_DepthSlices", (int64)TextureEditorVolumeViewMode_DepthSlices },
		{ "TextureEditorVolumeViewMode_VolumeTrace", (int64)TextureEditorVolumeViewMode_VolumeTrace },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TextureEditor_ETextureEditorVolumeViewMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/TextureEditorSettings.h" },
		{ "TextureEditorVolumeViewMode_DepthSlices.DisplayName", "Depth Slices" },
		{ "TextureEditorVolumeViewMode_DepthSlices.Name", "TextureEditorVolumeViewMode_DepthSlices" },
		{ "TextureEditorVolumeViewMode_VolumeTrace.DisplayName", "Trace Into Volume" },
		{ "TextureEditorVolumeViewMode_VolumeTrace.Name", "TextureEditorVolumeViewMode_VolumeTrace" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TextureEditor_ETextureEditorVolumeViewMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TextureEditor,
		nullptr,
		"ETextureEditorVolumeViewMode",
		"ETextureEditorVolumeViewMode",
		Z_Construct_UEnum_TextureEditor_ETextureEditorVolumeViewMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TextureEditor_ETextureEditorVolumeViewMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_TextureEditor_ETextureEditorVolumeViewMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TextureEditor_ETextureEditorVolumeViewMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TextureEditor_ETextureEditorVolumeViewMode()
	{
		if (!Z_Registration_Info_UEnum_ETextureEditorVolumeViewMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureEditorVolumeViewMode.InnerSingleton, Z_Construct_UEnum_TextureEditor_ETextureEditorVolumeViewMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureEditorVolumeViewMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureEditorCubemapViewMode;
	static UEnum* ETextureEditorCubemapViewMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureEditorCubemapViewMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureEditorCubemapViewMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TextureEditor_ETextureEditorCubemapViewMode, (UObject*)Z_Construct_UPackage__Script_TextureEditor(), TEXT("ETextureEditorCubemapViewMode"));
		}
		return Z_Registration_Info_UEnum_ETextureEditorCubemapViewMode.OuterSingleton;
	}
	template<> TEXTUREEDITOR_API UEnum* StaticEnum<ETextureEditorCubemapViewMode>()
	{
		return ETextureEditorCubemapViewMode_StaticEnum();
	}
	struct Z_Construct_UEnum_TextureEditor_ETextureEditorCubemapViewMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TextureEditor_ETextureEditorCubemapViewMode_Statics::Enumerators[] = {
		{ "TextureEditorCubemapViewMode_2DView", (int64)TextureEditorCubemapViewMode_2DView },
		{ "TextureEditorCubemapViewMode_3DView", (int64)TextureEditorCubemapViewMode_3DView },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TextureEditor_ETextureEditorCubemapViewMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/TextureEditorSettings.h" },
		{ "TextureEditorCubemapViewMode_2DView.DisplayName", "2D View" },
		{ "TextureEditorCubemapViewMode_2DView.Name", "TextureEditorCubemapViewMode_2DView" },
		{ "TextureEditorCubemapViewMode_3DView.DisplayName", "3D View" },
		{ "TextureEditorCubemapViewMode_3DView.Name", "TextureEditorCubemapViewMode_3DView" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TextureEditor_ETextureEditorCubemapViewMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TextureEditor,
		nullptr,
		"ETextureEditorCubemapViewMode",
		"ETextureEditorCubemapViewMode",
		Z_Construct_UEnum_TextureEditor_ETextureEditorCubemapViewMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TextureEditor_ETextureEditorCubemapViewMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_TextureEditor_ETextureEditorCubemapViewMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TextureEditor_ETextureEditorCubemapViewMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TextureEditor_ETextureEditorCubemapViewMode()
	{
		if (!Z_Registration_Info_UEnum_ETextureEditorCubemapViewMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureEditorCubemapViewMode.InnerSingleton, Z_Construct_UEnum_TextureEditor_ETextureEditorCubemapViewMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureEditorCubemapViewMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureEditorZoomMode;
	static UEnum* ETextureEditorZoomMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureEditorZoomMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureEditorZoomMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TextureEditor_ETextureEditorZoomMode, (UObject*)Z_Construct_UPackage__Script_TextureEditor(), TEXT("ETextureEditorZoomMode"));
		}
		return Z_Registration_Info_UEnum_ETextureEditorZoomMode.OuterSingleton;
	}
	template<> TEXTUREEDITOR_API UEnum* StaticEnum<ETextureEditorZoomMode>()
	{
		return ETextureEditorZoomMode_StaticEnum();
	}
	struct Z_Construct_UEnum_TextureEditor_ETextureEditorZoomMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TextureEditor_ETextureEditorZoomMode_Statics::Enumerators[] = {
		{ "ETextureEditorZoomMode::Custom", (int64)ETextureEditorZoomMode::Custom },
		{ "ETextureEditorZoomMode::Fit", (int64)ETextureEditorZoomMode::Fit },
		{ "ETextureEditorZoomMode::Fill", (int64)ETextureEditorZoomMode::Fill },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TextureEditor_ETextureEditorZoomMode_Statics::Enum_MetaDataParams[] = {
		{ "Custom.DisplayName", "Specific Zoom Level" },
		{ "Custom.Name", "ETextureEditorZoomMode::Custom" },
		{ "Fill.DisplayName", "Scale to Fill" },
		{ "Fill.Name", "ETextureEditorZoomMode::Fill" },
		{ "Fit.Comment", "// First so that any new modes added don't change serialized value\n" },
		{ "Fit.DisplayName", "Scale Down to Fit" },
		{ "Fit.Name", "ETextureEditorZoomMode::Fit" },
		{ "Fit.ToolTip", "First so that any new modes added don't change serialized value" },
		{ "ModuleRelativePath", "Classes/TextureEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TextureEditor_ETextureEditorZoomMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TextureEditor,
		nullptr,
		"ETextureEditorZoomMode",
		"ETextureEditorZoomMode",
		Z_Construct_UEnum_TextureEditor_ETextureEditorZoomMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TextureEditor_ETextureEditorZoomMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TextureEditor_ETextureEditorZoomMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TextureEditor_ETextureEditorZoomMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TextureEditor_ETextureEditorZoomMode()
	{
		if (!Z_Registration_Info_UEnum_ETextureEditorZoomMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureEditorZoomMode.InnerSingleton, Z_Construct_UEnum_TextureEditor_ETextureEditorZoomMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureEditorZoomMode.InnerSingleton;
	}
	void UTextureEditorSettings::StaticRegisterNativesUTextureEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureEditorSettings);
	UClass* Z_Construct_UClass_UTextureEditorSettings_NoRegister()
	{
		return UTextureEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTextureEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Background;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sampling_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Sampling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeViewMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VolumeViewMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CubemapViewMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CubemapViewMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckerColorOne_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CheckerColorOne;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckerColorTwo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CheckerColorTwo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckerSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CheckerSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FitToViewport_MetaData[];
#endif
		static void NewProp_FitToViewport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FitToViewport;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ZoomMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ZoomMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureBorderColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureBorderColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureBorderEnabled_MetaData[];
#endif
		static void NewProp_TextureBorderEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TextureBorderEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TextureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the Editor's user settings.\n */" },
		{ "IncludePath", "TextureEditorSettings.h" },
		{ "ModuleRelativePath", "Classes/TextureEditorSettings.h" },
		{ "ToolTip", "Implements the Editor's user settings." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_Background_MetaData[] = {
		{ "Comment", "/** The type of background to draw in the texture editor view port. */" },
		{ "ModuleRelativePath", "Classes/TextureEditorSettings.h" },
		{ "ToolTip", "The type of background to draw in the texture editor view port." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_Background = { "Background", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureEditorSettings, Background), Z_Construct_UEnum_TextureEditor_ETextureEditorBackgrounds, METADATA_PARAMS(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_Background_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_Background_MetaData)) }; // 3484778779
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_Sampling_MetaData[] = {
		{ "Comment", "/** The texture sampling mode used to render textures in the texture editor view port. */" },
		{ "ModuleRelativePath", "Classes/TextureEditorSettings.h" },
		{ "ToolTip", "The texture sampling mode used to render textures in the texture editor view port." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_Sampling = { "Sampling", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureEditorSettings, Sampling), Z_Construct_UEnum_TextureEditor_ETextureEditorSampling, METADATA_PARAMS(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_Sampling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_Sampling_MetaData)) }; // 704508174
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_VolumeViewMode_MetaData[] = {
		{ "Comment", "/** The view mode when previewing volume textures. */" },
		{ "ModuleRelativePath", "Classes/TextureEditorSettings.h" },
		{ "ToolTip", "The view mode when previewing volume textures." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_VolumeViewMode = { "VolumeViewMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureEditorSettings, VolumeViewMode), Z_Construct_UEnum_TextureEditor_ETextureEditorVolumeViewMode, METADATA_PARAMS(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_VolumeViewMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_VolumeViewMode_MetaData)) }; // 3069649492
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CubemapViewMode_MetaData[] = {
		{ "Comment", "/** The view mode when previewing cubemap textures. */" },
		{ "ModuleRelativePath", "Classes/TextureEditorSettings.h" },
		{ "ToolTip", "The view mode when previewing cubemap textures." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CubemapViewMode = { "CubemapViewMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureEditorSettings, CubemapViewMode), Z_Construct_UEnum_TextureEditor_ETextureEditorCubemapViewMode, METADATA_PARAMS(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CubemapViewMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CubemapViewMode_MetaData)) }; // 150440223
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Background" },
		{ "Comment", "/** Background and foreground color used by Texture preview view ports. */" },
		{ "ModuleRelativePath", "Classes/TextureEditorSettings.h" },
		{ "ToolTip", "Background and foreground color used by Texture preview view ports." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureEditorSettings, BackgroundColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_BackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_BackgroundColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CheckerColorOne_MetaData[] = {
		{ "Category", "Background" },
		{ "Comment", "/** The first color of the checkered background. */" },
		{ "ModuleRelativePath", "Classes/TextureEditorSettings.h" },
		{ "ToolTip", "The first color of the checkered background." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CheckerColorOne = { "CheckerColorOne", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureEditorSettings, CheckerColorOne), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CheckerColorOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CheckerColorOne_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CheckerColorTwo_MetaData[] = {
		{ "Category", "Background" },
		{ "Comment", "/** The second color of the checkered background. */" },
		{ "ModuleRelativePath", "Classes/TextureEditorSettings.h" },
		{ "ToolTip", "The second color of the checkered background." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CheckerColorTwo = { "CheckerColorTwo", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureEditorSettings, CheckerColorTwo), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CheckerColorTwo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CheckerColorTwo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CheckerSize_MetaData[] = {
		{ "Category", "Background" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "2" },
		{ "Comment", "/** The size of the checkered background tiles. */" },
		{ "ModuleRelativePath", "Classes/TextureEditorSettings.h" },
		{ "ToolTip", "The size of the checkered background tiles." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CheckerSize = { "CheckerSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureEditorSettings, CheckerSize), METADATA_PARAMS(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CheckerSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CheckerSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_FitToViewport_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TextureEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_FitToViewport_SetBit(void* Obj)
	{
		((UTextureEditorSettings*)Obj)->FitToViewport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_FitToViewport = { "FitToViewport", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTextureEditorSettings), &Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_FitToViewport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_FitToViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_FitToViewport_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_ZoomMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_ZoomMode_MetaData[] = {
		{ "Comment", "/** Whether the texture should scale to fit or fill the view port, or use a custom zoom level. */" },
		{ "ModuleRelativePath", "Classes/TextureEditorSettings.h" },
		{ "ToolTip", "Whether the texture should scale to fit or fill the view port, or use a custom zoom level." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_ZoomMode = { "ZoomMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureEditorSettings, ZoomMode), Z_Construct_UEnum_TextureEditor_ETextureEditorZoomMode, METADATA_PARAMS(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_ZoomMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_ZoomMode_MetaData)) }; // 1662484012
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_TextureBorderColor_MetaData[] = {
		{ "Category", "TextureBorder" },
		{ "Comment", "/** Color to use for the texture border, if enabled. */" },
		{ "ModuleRelativePath", "Classes/TextureEditorSettings.h" },
		{ "ToolTip", "Color to use for the texture border, if enabled." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_TextureBorderColor = { "TextureBorderColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureEditorSettings, TextureBorderColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_TextureBorderColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_TextureBorderColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_TextureBorderEnabled_MetaData[] = {
		{ "Comment", "/** If true, displays a border around the texture. */" },
		{ "ModuleRelativePath", "Classes/TextureEditorSettings.h" },
		{ "ToolTip", "If true, displays a border around the texture." },
	};
#endif
	void Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_TextureBorderEnabled_SetBit(void* Obj)
	{
		((UTextureEditorSettings*)Obj)->TextureBorderEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_TextureBorderEnabled = { "TextureBorderEnabled", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTextureEditorSettings), &Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_TextureBorderEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_TextureBorderEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_TextureBorderEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_Background,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_Sampling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_VolumeViewMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CubemapViewMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_BackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CheckerColorOne,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CheckerColorTwo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_CheckerSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_FitToViewport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_ZoomMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_ZoomMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_TextureBorderColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEditorSettings_Statics::NewProp_TextureBorderEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureEditorSettings_Statics::ClassParams = {
		&UTextureEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTextureEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEditorSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UTextureEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureEditorSettings.OuterSingleton, Z_Construct_UClass_UTextureEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureEditorSettings.OuterSingleton;
	}
	template<> TEXTUREEDITOR_API UClass* StaticClass<UTextureEditorSettings>()
	{
		return UTextureEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureEditorSettings);
	UTextureEditorSettings::~UTextureEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_Statics::EnumInfo[] = {
		{ ETextureEditorBackgrounds_StaticEnum, TEXT("ETextureEditorBackgrounds"), &Z_Registration_Info_UEnum_ETextureEditorBackgrounds, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3484778779U) },
		{ ETextureEditorSampling_StaticEnum, TEXT("ETextureEditorSampling"), &Z_Registration_Info_UEnum_ETextureEditorSampling, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 704508174U) },
		{ ETextureEditorVolumeViewMode_StaticEnum, TEXT("ETextureEditorVolumeViewMode"), &Z_Registration_Info_UEnum_ETextureEditorVolumeViewMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3069649492U) },
		{ ETextureEditorCubemapViewMode_StaticEnum, TEXT("ETextureEditorCubemapViewMode"), &Z_Registration_Info_UEnum_ETextureEditorCubemapViewMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 150440223U) },
		{ ETextureEditorZoomMode_StaticEnum, TEXT("ETextureEditorZoomMode"), &Z_Registration_Info_UEnum_ETextureEditorZoomMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1662484012U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextureEditorSettings, UTextureEditorSettings::StaticClass, TEXT("UTextureEditorSettings"), &Z_Registration_Info_UClass_UTextureEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureEditorSettings), 3697425607U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_297962258(TEXT("/Script/TextureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
