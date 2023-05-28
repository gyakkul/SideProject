// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CameraCalibrationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraCalibrationSettings() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCameraCalibrationEditorSettings();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCameraCalibrationEditorSettings_NoRegister();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCameraCalibrationSettings();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCameraCalibrationSettings_NoRegister();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensDistortionModelHandlerBase_NoRegister();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensFile_NoRegister();
	CAMERACALIBRATIONCORE_API UEnum* Z_Construct_UEnum_CameraCalibrationCore_ELensDisplayUnit();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLensDataCategoryEditorColor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationCore();
// End Cross Module References
	void UCameraCalibrationSettings::StaticRegisterNativesUCameraCalibrationSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraCalibrationSettings);
	UClass* Z_Construct_UClass_UCameraCalibrationSettings_NoRegister()
	{
		return UCameraCalibrationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCameraCalibrationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartupLensFile_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StartupLensFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplacementMapResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisplacementMapResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalibrationInputTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CalibrationInputTolerance;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultUndistortionDisplacementMaterials_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultUndistortionDisplacementMaterials_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultUndistortionDisplacementMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DefaultUndistortionDisplacementMaterials;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultDistortionDisplacementMaterials_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultDistortionDisplacementMaterials_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDistortionDisplacementMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DefaultDistortionDisplacementMaterials;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultDistortionMaterials_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultDistortionMaterials_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDistortionMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DefaultDistortionMaterials;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CalibrationOverlayMaterialOverrides_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CalibrationOverlayMaterialOverrides_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalibrationOverlayMaterialOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CalibrationOverlayMaterialOverrides;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCalibrationDatasetImportExport_MetaData[];
#endif
		static void NewProp_bEnableCalibrationDatasetImportExport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCalibrationDatasetImportExport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraCalibrationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraCalibrationSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the CameraCalibration plugin modules. \n */" },
		{ "IncludePath", "CameraCalibrationSettings.h" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSettings.h" },
		{ "ToolTip", "Settings for the CameraCalibration plugin modules." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_StartupLensFile_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** \n\x09 * Startup lens file for the project \n\x09 * Can be overriden. Priority of operation is\n\x09 * 1. Apply startup lens file found in 'CameraCalibration.StartupLensFile' cvar at launch\n\x09 * 2. If none found, apply user startup file (only for editor runs)\n\x09 * 3. If none found, apply projet startup file (this one)\n\x09 */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSettings.h" },
		{ "ToolTip", "Startup lens file for the project\nCan be overriden. Priority of operation is\n1. Apply startup lens file found in 'CameraCalibration.StartupLensFile' cvar at launch\n2. If none found, apply user startup file (only for editor runs)\n3. If none found, apply projet startup file (this one)" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_StartupLensFile = { "StartupLensFile", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraCalibrationSettings, StartupLensFile), Z_Construct_UClass_ULensFile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_StartupLensFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_StartupLensFile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DisplacementMapResolution_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Resolution used when creating new distortion and undistortion displacement maps */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSettings.h" },
		{ "ToolTip", "Resolution used when creating new distortion and undistortion displacement maps" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DisplacementMapResolution = { "DisplacementMapResolution", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraCalibrationSettings, DisplacementMapResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DisplacementMapResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DisplacementMapResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_CalibrationInputTolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Tolerance to use when adding or accessing data in a calibrated LensFile */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSettings.h" },
		{ "ToolTip", "Tolerance to use when adding or accessing data in a calibrated LensFile" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_CalibrationInputTolerance = { "CalibrationInputTolerance", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraCalibrationSettings, CalibrationInputTolerance), METADATA_PARAMS(Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_CalibrationInputTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_CalibrationInputTolerance_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DefaultUndistortionDisplacementMaterials_ValueProp = { "DefaultUndistortionDisplacementMaterials", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DefaultUndistortionDisplacementMaterials_Key_KeyProp = { "DefaultUndistortionDisplacementMaterials_Key", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ULensDistortionModelHandlerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DefaultUndistortionDisplacementMaterials_MetaData[] = {
		{ "Comment", "/** Map of Lens Distortion Model Handler classes to the default displacement map material used by that class */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSettings.h" },
		{ "ToolTip", "Map of Lens Distortion Model Handler classes to the default displacement map material used by that class" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DefaultUndistortionDisplacementMaterials = { "DefaultUndistortionDisplacementMaterials", nullptr, (EPropertyFlags)0x0044000000004000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraCalibrationSettings, DefaultUndistortionDisplacementMaterials), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DefaultUndistortionDisplacementMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DefaultUndistortionDisplacementMaterials_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DefaultDistortionDisplacementMaterials_ValueProp = { "DefaultDistortionDisplacementMaterials", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DefaultDistortionDisplacementMaterials_Key_KeyProp = { "DefaultDistortionDisplacementMaterials_Key", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ULensDistortionModelHandlerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DefaultDistortionDisplacementMaterials_MetaData[] = {
		{ "Comment", "/** Map of Lens Distortion Model Handler classes to the default displacement map material used by that class */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSettings.h" },
		{ "ToolTip", "Map of Lens Distortion Model Handler classes to the default displacement map material used by that class" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DefaultDistortionDisplacementMaterials = { "DefaultDistortionDisplacementMaterials", nullptr, (EPropertyFlags)0x0044000000004000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraCalibrationSettings, DefaultDistortionDisplacementMaterials), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DefaultDistortionDisplacementMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DefaultDistortionDisplacementMaterials_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DefaultDistortionMaterials_ValueProp = { "DefaultDistortionMaterials", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DefaultDistortionMaterials_Key_KeyProp = { "DefaultDistortionMaterials_Key", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ULensDistortionModelHandlerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DefaultDistortionMaterials_MetaData[] = {
		{ "Comment", "/** Map of Lens Distortion Model Handler classes to the default lens distortion post-process material used by that class */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSettings.h" },
		{ "ToolTip", "Map of Lens Distortion Model Handler classes to the default lens distortion post-process material used by that class" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DefaultDistortionMaterials = { "DefaultDistortionMaterials", nullptr, (EPropertyFlags)0x0044000000004000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraCalibrationSettings, DefaultDistortionMaterials), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DefaultDistortionMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DefaultDistortionMaterials_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_CalibrationOverlayMaterialOverrides_ValueProp = { "CalibrationOverlayMaterialOverrides", nullptr, (EPropertyFlags)0x0004000800004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_CalibrationOverlayMaterialOverrides_Key_KeyProp = { "CalibrationOverlayMaterialOverrides_Key", nullptr, (EPropertyFlags)0x0000000800004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_CalibrationOverlayMaterialOverrides_MetaData[] = {
		{ "Category", "Overlays" },
		{ "Comment", "/** Map of overlay names to override overlay materials */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSettings.h" },
		{ "ToolTip", "Map of overlay names to override overlay materials" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_CalibrationOverlayMaterialOverrides = { "CalibrationOverlayMaterialOverrides", nullptr, (EPropertyFlags)0x0044000800004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraCalibrationSettings, CalibrationOverlayMaterialOverrides), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_CalibrationOverlayMaterialOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_CalibrationOverlayMaterialOverrides_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_bEnableCalibrationDatasetImportExport_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Setting to toggle the calibration dataset import and export features */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSettings.h" },
		{ "ToolTip", "Setting to toggle the calibration dataset import and export features" },
	};
#endif
	void Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_bEnableCalibrationDatasetImportExport_SetBit(void* Obj)
	{
		((UCameraCalibrationSettings*)Obj)->bEnableCalibrationDatasetImportExport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_bEnableCalibrationDatasetImportExport = { "bEnableCalibrationDatasetImportExport", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCameraCalibrationSettings), &Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_bEnableCalibrationDatasetImportExport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_bEnableCalibrationDatasetImportExport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_bEnableCalibrationDatasetImportExport_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraCalibrationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_StartupLensFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DisplacementMapResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_CalibrationInputTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DefaultUndistortionDisplacementMaterials_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DefaultUndistortionDisplacementMaterials_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DefaultUndistortionDisplacementMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DefaultDistortionDisplacementMaterials_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DefaultDistortionDisplacementMaterials_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DefaultDistortionDisplacementMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DefaultDistortionMaterials_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DefaultDistortionMaterials_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_DefaultDistortionMaterials,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_CalibrationOverlayMaterialOverrides_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_CalibrationOverlayMaterialOverrides_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_CalibrationOverlayMaterialOverrides,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationSettings_Statics::NewProp_bEnableCalibrationDatasetImportExport,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraCalibrationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraCalibrationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraCalibrationSettings_Statics::ClassParams = {
		&UCameraCalibrationSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCameraCalibrationSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCalibrationSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraCalibrationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCalibrationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraCalibrationSettings()
	{
		if (!Z_Registration_Info_UClass_UCameraCalibrationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraCalibrationSettings.OuterSingleton, Z_Construct_UClass_UCameraCalibrationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraCalibrationSettings.OuterSingleton;
	}
	template<> CAMERACALIBRATIONCORE_API UClass* StaticClass<UCameraCalibrationSettings>()
	{
		return UCameraCalibrationSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraCalibrationSettings);
	UCameraCalibrationSettings::~UCameraCalibrationSettings() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LensDataCategoryEditorColor;
class UScriptStruct* FLensDataCategoryEditorColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LensDataCategoryEditorColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LensDataCategoryEditorColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensDataCategoryEditorColor, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("LensDataCategoryEditorColor"));
	}
	return Z_Registration_Info_UScriptStruct_LensDataCategoryEditorColor.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FLensDataCategoryEditorColor>()
{
	return FLensDataCategoryEditorColor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Focus_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Focus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Iris_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Iris;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Zoom_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Zoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distortion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Distortion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageCenter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImageCenter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_STMap_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_STMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodalOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodalOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Lens Data Table Editor Category color. Using for the color of the curves\n*/" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSettings.h" },
		{ "ToolTip", "Lens Data Table Editor Category color. Using for the color of the curves" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensDataCategoryEditorColor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_Focus_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_Focus = { "Focus", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDataCategoryEditorColor, Focus), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_Focus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_Focus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_Iris_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_Iris = { "Iris", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDataCategoryEditorColor, Iris), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_Iris_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_Iris_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_Zoom_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_Zoom = { "Zoom", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDataCategoryEditorColor, Zoom), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_Zoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_Zoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_Distortion_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_Distortion = { "Distortion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDataCategoryEditorColor, Distortion), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_Distortion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_Distortion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_ImageCenter_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_ImageCenter = { "ImageCenter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDataCategoryEditorColor, ImageCenter), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_ImageCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_ImageCenter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_STMap_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_STMap = { "STMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDataCategoryEditorColor, STMap), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_STMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_STMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_NodalOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_NodalOffset = { "NodalOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDataCategoryEditorColor, NodalOffset), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_NodalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_NodalOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_Focus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_Iris,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_Zoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_Distortion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_ImageCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_STMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewProp_NodalOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		&NewStructOps,
		"LensDataCategoryEditorColor",
		sizeof(FLensDataCategoryEditorColor),
		alignof(FLensDataCategoryEditorColor),
		Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLensDataCategoryEditorColor()
	{
		if (!Z_Registration_Info_UScriptStruct_LensDataCategoryEditorColor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LensDataCategoryEditorColor.InnerSingleton, Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LensDataCategoryEditorColor.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELensDisplayUnit;
	static UEnum* ELensDisplayUnit_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELensDisplayUnit.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELensDisplayUnit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CameraCalibrationCore_ELensDisplayUnit, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("ELensDisplayUnit"));
		}
		return Z_Registration_Info_UEnum_ELensDisplayUnit.OuterSingleton;
	}
	template<> CAMERACALIBRATIONCORE_API UEnum* StaticEnum<ELensDisplayUnit>()
	{
		return ELensDisplayUnit_StaticEnum();
	}
	struct Z_Construct_UEnum_CameraCalibrationCore_ELensDisplayUnit_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CameraCalibrationCore_ELensDisplayUnit_Statics::Enumerators[] = {
		{ "ELensDisplayUnit::Millimeters", (int64)ELensDisplayUnit::Millimeters },
		{ "ELensDisplayUnit::Pixels", (int64)ELensDisplayUnit::Pixels },
		{ "ELensDisplayUnit::Normalized", (int64)ELensDisplayUnit::Normalized },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CameraCalibrationCore_ELensDisplayUnit_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Units used to display/interpret Focal Length and Image Center */" },
		{ "Millimeters.Name", "ELensDisplayUnit::Millimeters" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSettings.h" },
		{ "Normalized.Name", "ELensDisplayUnit::Normalized" },
		{ "Pixels.Name", "ELensDisplayUnit::Pixels" },
		{ "ToolTip", "Units used to display/interpret Focal Length and Image Center" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CameraCalibrationCore_ELensDisplayUnit_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		"ELensDisplayUnit",
		"ELensDisplayUnit",
		Z_Construct_UEnum_CameraCalibrationCore_ELensDisplayUnit_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CameraCalibrationCore_ELensDisplayUnit_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CameraCalibrationCore_ELensDisplayUnit_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CameraCalibrationCore_ELensDisplayUnit_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CameraCalibrationCore_ELensDisplayUnit()
	{
		if (!Z_Registration_Info_UEnum_ELensDisplayUnit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELensDisplayUnit.InnerSingleton, Z_Construct_UEnum_CameraCalibrationCore_ELensDisplayUnit_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELensDisplayUnit.InnerSingleton;
	}
	void UCameraCalibrationEditorSettings::StaticRegisterNativesUCameraCalibrationEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraCalibrationEditorSettings);
	UClass* Z_Construct_UClass_UCameraCalibrationEditorSettings_NoRegister()
	{
		return UCameraCalibrationEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowEditorToolbarButton_MetaData[];
#endif
		static void NewProp_bShowEditorToolbarButton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowEditorToolbarButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategoryColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CategoryColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTimeSlider_MetaData[];
#endif
		static void NewProp_bEnableTimeSlider_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTimeSlider;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultDisplayUnit_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDisplayUnit_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultDisplayUnit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceDefaultMediaStepRate_MetaData[];
#endif
		static void NewProp_bForceDefaultMediaStepRate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceDefaultMediaStepRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMediaStepRateInMilliseconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultMediaStepRateInMilliseconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserLensFile_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_UserLensFile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the camera calibration when in editor and standalone.\n * @note Cooked games don't use this setting.\n */" },
		{ "IncludePath", "CameraCalibrationSettings.h" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSettings.h" },
		{ "ToolTip", "Settings for the camera calibration when in editor and standalone.\n@note Cooked games don't use this setting." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_bShowEditorToolbarButton_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * True if a lens file button shortcut should be added to level editor toolbar.\n\x09 */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Enable Lens File Toolbar Button" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSettings.h" },
		{ "ToolTip", "True if a lens file button shortcut should be added to level editor toolbar." },
	};
#endif
	void Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_bShowEditorToolbarButton_SetBit(void* Obj)
	{
		((UCameraCalibrationEditorSettings*)Obj)->bShowEditorToolbarButton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_bShowEditorToolbarButton = { "bShowEditorToolbarButton", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCameraCalibrationEditorSettings), &Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_bShowEditorToolbarButton_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_bShowEditorToolbarButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_bShowEditorToolbarButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_CategoryColor_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * Data Table category color settings\n\x09 */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSettings.h" },
		{ "ToolTip", "Data Table category color settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_CategoryColor = { "CategoryColor", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraCalibrationEditorSettings, CategoryColor), Z_Construct_UScriptStruct_FLensDataCategoryEditorColor, METADATA_PARAMS(Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_CategoryColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_CategoryColor_MetaData)) }; // 565091961
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_bEnableTimeSlider_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSettings.h" },
		{ "ToolTip", "Enable or Disable Time input driven by evaluation inputs." },
	};
#endif
	void Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_bEnableTimeSlider_SetBit(void* Obj)
	{
		((UCameraCalibrationEditorSettings*)Obj)->bEnableTimeSlider = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_bEnableTimeSlider = { "bEnableTimeSlider", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCameraCalibrationEditorSettings), &Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_bEnableTimeSlider_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_bEnableTimeSlider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_bEnableTimeSlider_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_DefaultDisplayUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_DefaultDisplayUnit_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** \n\x09 * Units used to display/interpret Focal Length and Image Center \n\x09 */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSettings.h" },
		{ "ToolTip", "Units used to display/interpret Focal Length and Image Center" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_DefaultDisplayUnit = { "DefaultDisplayUnit", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraCalibrationEditorSettings, DefaultDisplayUnit), Z_Construct_UEnum_CameraCalibrationCore_ELensDisplayUnit, METADATA_PARAMS(Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_DefaultDisplayUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_DefaultDisplayUnit_MetaData)) }; // 1832250167
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_bForceDefaultMediaStepRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * If true, the media player in the calibration tools will always use the default step rate. \n\x09 * Otherwise, it will try to use the frame rate of the media to step by exactly one frame. \n\x09 */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSettings.h" },
		{ "ToolTip", "If true, the media player in the calibration tools will always use the default step rate.\nOtherwise, it will try to use the frame rate of the media to step by exactly one frame." },
	};
#endif
	void Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_bForceDefaultMediaStepRate_SetBit(void* Obj)
	{
		((UCameraCalibrationEditorSettings*)Obj)->bForceDefaultMediaStepRate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_bForceDefaultMediaStepRate = { "bForceDefaultMediaStepRate", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCameraCalibrationEditorSettings), &Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_bForceDefaultMediaStepRate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_bForceDefaultMediaStepRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_bForceDefaultMediaStepRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_DefaultMediaStepRateInMilliseconds_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * The default step rate (ms) that the media player in the calibration tools should use when stepping forward/back\n\x09 */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSettings.h" },
		{ "ToolTip", "The default step rate (ms) that the media player in the calibration tools should use when stepping forward/back" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_DefaultMediaStepRateInMilliseconds = { "DefaultMediaStepRateInMilliseconds", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraCalibrationEditorSettings, DefaultMediaStepRateInMilliseconds), METADATA_PARAMS(Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_DefaultMediaStepRateInMilliseconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_DefaultMediaStepRateInMilliseconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_UserLensFile_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** \n\x09 * Startup lens file per user in editor \n\x09 * Can be overridden. Priority of operation is\n\x09 * 1. Apply startup lens file found in 'CameraCalibration.StartupLensFile' cvar at launch\n\x09 * 2. If none found, apply user startup file (this one)\n\x09 * 3. If none found, apply project startup file\n\x09 */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSettings.h" },
		{ "ToolTip", "Startup lens file per user in editor\nCan be overridden. Priority of operation is\n1. Apply startup lens file found in 'CameraCalibration.StartupLensFile' cvar at launch\n2. If none found, apply user startup file (this one)\n3. If none found, apply project startup file" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_UserLensFile = { "UserLensFile", nullptr, (EPropertyFlags)0x0044000800004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraCalibrationEditorSettings, UserLensFile), Z_Construct_UClass_ULensFile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_UserLensFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_UserLensFile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_bShowEditorToolbarButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_CategoryColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_bEnableTimeSlider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_DefaultDisplayUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_DefaultDisplayUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_bForceDefaultMediaStepRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_DefaultMediaStepRateInMilliseconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::NewProp_UserLensFile,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraCalibrationEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::ClassParams = {
		&UCameraCalibrationEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::PropPointers), 0),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraCalibrationEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UCameraCalibrationEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraCalibrationEditorSettings.OuterSingleton, Z_Construct_UClass_UCameraCalibrationEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraCalibrationEditorSettings.OuterSingleton;
	}
	template<> CAMERACALIBRATIONCORE_API UClass* StaticClass<UCameraCalibrationEditorSettings>()
	{
		return UCameraCalibrationEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraCalibrationEditorSettings);
	UCameraCalibrationEditorSettings::~UCameraCalibrationEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSettings_h_Statics::EnumInfo[] = {
		{ ELensDisplayUnit_StaticEnum, TEXT("ELensDisplayUnit"), &Z_Registration_Info_UEnum_ELensDisplayUnit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1832250167U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSettings_h_Statics::ScriptStructInfo[] = {
		{ FLensDataCategoryEditorColor::StaticStruct, Z_Construct_UScriptStruct_FLensDataCategoryEditorColor_Statics::NewStructOps, TEXT("LensDataCategoryEditorColor"), &Z_Registration_Info_UScriptStruct_LensDataCategoryEditorColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLensDataCategoryEditorColor), 565091961U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraCalibrationSettings, UCameraCalibrationSettings::StaticClass, TEXT("UCameraCalibrationSettings"), &Z_Registration_Info_UClass_UCameraCalibrationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraCalibrationSettings), 488360178U) },
		{ Z_Construct_UClass_UCameraCalibrationEditorSettings, UCameraCalibrationEditorSettings::StaticClass, TEXT("UCameraCalibrationEditorSettings"), &Z_Registration_Info_UClass_UCameraCalibrationEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraCalibrationEditorSettings), 2168560624U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSettings_h_2589101023(TEXT("/Script/CameraCalibrationCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
