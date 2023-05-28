// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Settings/SkeletalMeshEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	UNREALED_API UClass* Z_Construct_UClass_USkeletalMeshEditorSettings();
	UNREALED_API UClass* Z_Construct_UClass_USkeletalMeshEditorSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void USkeletalMeshEditorSettings::StaticRegisterNativesUSkeletalMeshEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalMeshEditorSettings);
	UClass* Z_Construct_UClass_USkeletalMeshEditorSettings_NoRegister()
	{
		return USkeletalMeshEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMeshEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimPreviewFloorColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimPreviewFloorColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimPreviewSkyColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimPreviewSkyColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimPreviewSkyBrightness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimPreviewSkyBrightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimPreviewLightBrightness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimPreviewLightBrightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimPreviewLightingDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimPreviewLightingDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimPreviewDirectionalColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimPreviewDirectionalColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the skeletal mesh editor.\n */" },
		{ "IncludePath", "Settings/SkeletalMeshEditorSettings.h" },
		{ "ModuleRelativePath", "Classes/Settings/SkeletalMeshEditorSettings.h" },
		{ "ToolTip", "Implements the settings for the skeletal mesh editor." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewFloorColor_MetaData[] = {
		{ "Category", "AnimationPreview" },
		{ "DisplayName", "Viewport Floor Color" },
		{ "ModuleRelativePath", "Classes/Settings/SkeletalMeshEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewFloorColor = { "AnimPreviewFloorColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshEditorSettings, AnimPreviewFloorColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewFloorColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewFloorColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewSkyColor_MetaData[] = {
		{ "Category", "AnimationPreview" },
		{ "DisplayName", "Viewport Sky Color" },
		{ "ModuleRelativePath", "Classes/Settings/SkeletalMeshEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewSkyColor = { "AnimPreviewSkyColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshEditorSettings, AnimPreviewSkyColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewSkyColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewSkyColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewSkyBrightness_MetaData[] = {
		{ "Category", "AnimationPreview" },
		{ "DisplayName", "Viewport Sky Brightness" },
		{ "ModuleRelativePath", "Classes/Settings/SkeletalMeshEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewSkyBrightness = { "AnimPreviewSkyBrightness", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshEditorSettings, AnimPreviewSkyBrightness), METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewSkyBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewSkyBrightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewLightBrightness_MetaData[] = {
		{ "Category", "AnimationPreview" },
		{ "DisplayName", "Viewport Light Brightness" },
		{ "ModuleRelativePath", "Classes/Settings/SkeletalMeshEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewLightBrightness = { "AnimPreviewLightBrightness", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshEditorSettings, AnimPreviewLightBrightness), METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewLightBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewLightBrightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewLightingDirection_MetaData[] = {
		{ "Category", "AnimationPreview" },
		{ "DisplayName", "Viewport Lighting Direction" },
		{ "ModuleRelativePath", "Classes/Settings/SkeletalMeshEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewLightingDirection = { "AnimPreviewLightingDirection", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshEditorSettings, AnimPreviewLightingDirection), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewLightingDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewLightingDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewDirectionalColor_MetaData[] = {
		{ "Category", "AnimationPreview" },
		{ "DisplayName", "Viewport Directional Color" },
		{ "ModuleRelativePath", "Classes/Settings/SkeletalMeshEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewDirectionalColor = { "AnimPreviewDirectionalColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshEditorSettings, AnimPreviewDirectionalColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewDirectionalColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewDirectionalColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewFloorColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewSkyColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewSkyBrightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewLightBrightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewLightingDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewDirectionalColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::ClassParams = {
		&USkeletalMeshEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalMeshEditorSettings()
	{
		if (!Z_Registration_Info_UClass_USkeletalMeshEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalMeshEditorSettings.OuterSingleton, Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkeletalMeshEditorSettings.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<USkeletalMeshEditorSettings>()
	{
		return USkeletalMeshEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshEditorSettings);
	USkeletalMeshEditorSettings::~USkeletalMeshEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_SkeletalMeshEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_SkeletalMeshEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkeletalMeshEditorSettings, USkeletalMeshEditorSettings::StaticClass, TEXT("USkeletalMeshEditorSettings"), &Z_Registration_Info_UClass_USkeletalMeshEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalMeshEditorSettings), 4019438710U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_SkeletalMeshEditorSettings_h_304091297(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_SkeletalMeshEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_SkeletalMeshEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
