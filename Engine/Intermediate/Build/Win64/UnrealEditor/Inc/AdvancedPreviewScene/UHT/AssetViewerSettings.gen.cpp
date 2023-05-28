// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetViewerSettings.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Scene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetViewerSettings() {}
// Cross Module References
	ADVANCEDPREVIEWSCENE_API UClass* Z_Construct_UClass_UAssetViewerSettings();
	ADVANCEDPREVIEWSCENE_API UClass* Z_Construct_UClass_UAssetViewerSettings_NoRegister();
	ADVANCEDPREVIEWSCENE_API UClass* Z_Construct_UClass_ULocalProfiles();
	ADVANCEDPREVIEWSCENE_API UClass* Z_Construct_UClass_ULocalProfiles_NoRegister();
	ADVANCEDPREVIEWSCENE_API UClass* Z_Construct_UClass_USharedProfiles();
	ADVANCEDPREVIEWSCENE_API UClass* Z_Construct_UClass_USharedProfiles_NoRegister();
	ADVANCEDPREVIEWSCENE_API UScriptStruct* Z_Construct_UScriptStruct_FPreviewSceneProfile();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	UPackage* Z_Construct_UPackage__Script_AdvancedPreviewScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PreviewSceneProfile;
class UScriptStruct* FPreviewSceneProfile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PreviewSceneProfile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PreviewSceneProfile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPreviewSceneProfile, (UObject*)Z_Construct_UPackage__Script_AdvancedPreviewScene(), TEXT("PreviewSceneProfile"));
	}
	return Z_Registration_Info_UScriptStruct_PreviewSceneProfile.OuterSingleton;
}
template<> ADVANCEDPREVIEWSCENE_API UScriptStruct* StaticStruct<FPreviewSceneProfile>()
{
	return FPreviewSceneProfile::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProfileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSharedProfile_MetaData[];
#endif
		static void NewProp_bSharedProfile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSharedProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSkyLighting_MetaData[];
#endif
		static void NewProp_bUseSkyLighting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSkyLighting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionalLightIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectionalLightIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionalLightColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionalLightColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyLightIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SkyLightIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotateLightingRig_MetaData[];
#endif
		static void NewProp_bRotateLightingRig_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateLightingRig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowEnvironment_MetaData[];
#endif
		static void NewProp_bShowEnvironment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowEnvironment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowFloor_MetaData[];
#endif
		static void NewProp_bShowFloor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFloor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvironmentColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnvironmentColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvironmentIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnvironmentIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvironmentCubeMap_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_EnvironmentCubeMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvironmentCubeMapPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EnvironmentCubeMapPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPostProcessingEnabled_MetaData[];
#endif
		static void NewProp_bPostProcessingEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPostProcessingEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessingSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightingRigRotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightingRigRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionalLightRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionalLightRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Preview scene profile settings structure.\n*/" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Preview scene profile settings structure." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPreviewSceneProfile>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_ProfileName_MetaData[] = {
		{ "Category", "Profile" },
		{ "Comment", "/** Name to identify the profile */" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Name to identify the profile" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPreviewSceneProfile, ProfileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_ProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_ProfileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bSharedProfile_MetaData[] = {
		{ "Category", "Profile" },
		{ "Comment", "/** Whether or not this profile should be stored in the Project ini file */" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Whether or not this profile should be stored in the Project ini file" },
	};
#endif
	void Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bSharedProfile_SetBit(void* Obj)
	{
		((FPreviewSceneProfile*)Obj)->bSharedProfile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bSharedProfile = { "bSharedProfile", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPreviewSceneProfile), &Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bSharedProfile_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bSharedProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bSharedProfile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bUseSkyLighting_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Whether or not image based lighting is enabled for the environment cube map */" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Whether or not image based lighting is enabled for the environment cube map" },
	};
#endif
	void Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bUseSkyLighting_SetBit(void* Obj)
	{
		((FPreviewSceneProfile*)Obj)->bUseSkyLighting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bUseSkyLighting = { "bUseSkyLighting", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPreviewSceneProfile), &Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bUseSkyLighting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bUseSkyLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bUseSkyLighting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_DirectionalLightIntensity_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Manually set the directional light intensity (0.0 - 20.0) */" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Manually set the directional light intensity (0.0 - 20.0)" },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_DirectionalLightIntensity = { "DirectionalLightIntensity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPreviewSceneProfile, DirectionalLightIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_DirectionalLightIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_DirectionalLightIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_DirectionalLightColor_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Manually set the directional light colour */" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Manually set the directional light colour" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_DirectionalLightColor = { "DirectionalLightColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPreviewSceneProfile, DirectionalLightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_DirectionalLightColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_DirectionalLightColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_SkyLightIntensity_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Manually set the sky light intensity (0.0 - 20.0) */" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Manually set the sky light intensity (0.0 - 20.0)" },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_SkyLightIntensity = { "SkyLightIntensity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPreviewSceneProfile, SkyLightIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_SkyLightIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_SkyLightIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bRotateLightingRig_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Toggle rotating of the sky and directional lighting, press K and drag for manual rotating of Sky and L for Directional lighting */" },
		{ "DisplayName", "Rotate Sky and Directional Lighting" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Toggle rotating of the sky and directional lighting, press K and drag for manual rotating of Sky and L for Directional lighting" },
	};
#endif
	void Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bRotateLightingRig_SetBit(void* Obj)
	{
		((FPreviewSceneProfile*)Obj)->bRotateLightingRig = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bRotateLightingRig = { "bRotateLightingRig", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPreviewSceneProfile), &Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bRotateLightingRig_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bRotateLightingRig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bRotateLightingRig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bShowEnvironment_MetaData[] = {
		{ "Category", "Environment" },
		{ "Comment", "/** Toggle visibility of the environment sphere */" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Toggle visibility of the environment sphere" },
	};
#endif
	void Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bShowEnvironment_SetBit(void* Obj)
	{
		((FPreviewSceneProfile*)Obj)->bShowEnvironment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bShowEnvironment = { "bShowEnvironment", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPreviewSceneProfile), &Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bShowEnvironment_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bShowEnvironment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bShowEnvironment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bShowFloor_MetaData[] = {
		{ "Category", "Environment" },
		{ "Comment", "/** Toggle visibility of the floor mesh */" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Toggle visibility of the floor mesh" },
	};
#endif
	void Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bShowFloor_SetBit(void* Obj)
	{
		((FPreviewSceneProfile*)Obj)->bShowFloor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bShowFloor = { "bShowFloor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPreviewSceneProfile), &Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bShowFloor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bShowFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bShowFloor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentColor_MetaData[] = {
		{ "Category", "Environment" },
		{ "Comment", "/** The environment color, used if Show Environment is false. */" },
		{ "EditCondition", "!bShowEnvironment" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "The environment color, used if Show Environment is false." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentColor = { "EnvironmentColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPreviewSceneProfile, EnvironmentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentIntensity_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** The environment intensity (0.0 - 20.0), used if Show Environment is false. */" },
		{ "EditCondition", "!bShowEnvironment" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "The environment intensity (0.0 - 20.0), used if Show Environment is false." },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentIntensity = { "EnvironmentIntensity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPreviewSceneProfile, EnvironmentIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentCubeMap_MetaData[] = {
		{ "Category", "Environment" },
		{ "Comment", "/** Sets environment cube map used for sky lighting and reflections */" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Sets environment cube map used for sky lighting and reflections" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentCubeMap = { "EnvironmentCubeMap", nullptr, (EPropertyFlags)0x0014000000002001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPreviewSceneProfile, EnvironmentCubeMap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentCubeMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentCubeMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentCubeMapPath_MetaData[] = {
		{ "Comment", "/** Storing path to environment cube to prevent it from getting cooked */" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Storing path to environment cube to prevent it from getting cooked" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentCubeMapPath = { "EnvironmentCubeMapPath", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPreviewSceneProfile, EnvironmentCubeMapPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentCubeMapPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentCubeMapPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bPostProcessingEnabled_MetaData[] = {
		{ "Category", "PostProcessing" },
		{ "Comment", "/** Whether or not the Post Processing should influence the scene */" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Whether or not the Post Processing should influence the scene" },
	};
#endif
	void Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bPostProcessingEnabled_SetBit(void* Obj)
	{
		((FPreviewSceneProfile*)Obj)->bPostProcessingEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bPostProcessingEnabled = { "bPostProcessingEnabled", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPreviewSceneProfile), &Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bPostProcessingEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bPostProcessingEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bPostProcessingEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_PostProcessingSettings_MetaData[] = {
		{ "Category", "PostProcessing" },
		{ "Comment", "/** Manual set post processing settings */" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Manual set post processing settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_PostProcessingSettings = { "PostProcessingSettings", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPreviewSceneProfile, PostProcessingSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_PostProcessingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_PostProcessingSettings_MetaData)) }; // 1889339962
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_LightingRigRotation_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Current rotation value of the sky in degrees (0 - 360) */" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Current rotation value of the sky in degrees (0 - 360)" },
		{ "UIMax", "360" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_LightingRigRotation = { "LightingRigRotation", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPreviewSceneProfile, LightingRigRotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_LightingRigRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_LightingRigRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Speed at which the sky rotates when rotating is toggled */" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Speed at which the sky rotates when rotating is toggled" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPreviewSceneProfile, RotationSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_RotationSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_DirectionalLightRotation_MetaData[] = {
		{ "Comment", "/** Rotation for directional light */" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Rotation for directional light" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_DirectionalLightRotation = { "DirectionalLightRotation", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPreviewSceneProfile, DirectionalLightRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_DirectionalLightRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_DirectionalLightRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_ProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bSharedProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bUseSkyLighting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_DirectionalLightIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_DirectionalLightColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_SkyLightIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bRotateLightingRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bShowEnvironment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bShowFloor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentCubeMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentCubeMapPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bPostProcessingEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_PostProcessingSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_LightingRigRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_RotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_DirectionalLightRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedPreviewScene,
		nullptr,
		&NewStructOps,
		"PreviewSceneProfile",
		sizeof(FPreviewSceneProfile),
		alignof(FPreviewSceneProfile),
		Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPreviewSceneProfile()
	{
		if (!Z_Registration_Info_UScriptStruct_PreviewSceneProfile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PreviewSceneProfile.InnerSingleton, Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PreviewSceneProfile.InnerSingleton;
	}
	void ULocalProfiles::StaticRegisterNativesULocalProfiles()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocalProfiles);
	UClass* Z_Construct_UClass_ULocalProfiles_NoRegister()
	{
		return ULocalProfiles::StaticClass();
	}
	struct Z_Construct_UClass_ULocalProfiles_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Profiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Profiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Profiles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalProfiles_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedPreviewScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalProfiles_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetViewerSettings.h" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULocalProfiles_Statics::NewProp_Profiles_Inner = { "Profiles", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPreviewSceneProfile, METADATA_PARAMS(nullptr, 0) }; // 3037303526
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalProfiles_Statics::NewProp_Profiles_MetaData[] = {
		{ "Comment", "/** Collection of local scene profiles */" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Collection of local scene profiles" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULocalProfiles_Statics::NewProp_Profiles = { "Profiles", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULocalProfiles, Profiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULocalProfiles_Statics::NewProp_Profiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocalProfiles_Statics::NewProp_Profiles_MetaData)) }; // 3037303526
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocalProfiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalProfiles_Statics::NewProp_Profiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalProfiles_Statics::NewProp_Profiles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalProfiles_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalProfiles>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocalProfiles_Statics::ClassParams = {
		&ULocalProfiles::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULocalProfiles_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULocalProfiles_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULocalProfiles_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULocalProfiles_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalProfiles()
	{
		if (!Z_Registration_Info_UClass_ULocalProfiles.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocalProfiles.OuterSingleton, Z_Construct_UClass_ULocalProfiles_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULocalProfiles.OuterSingleton;
	}
	template<> ADVANCEDPREVIEWSCENE_API UClass* StaticClass<ULocalProfiles>()
	{
		return ULocalProfiles::StaticClass();
	}
	ULocalProfiles::ULocalProfiles(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalProfiles);
	ULocalProfiles::~ULocalProfiles() {}
	void USharedProfiles::StaticRegisterNativesUSharedProfiles()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USharedProfiles);
	UClass* Z_Construct_UClass_USharedProfiles_NoRegister()
	{
		return USharedProfiles::StaticClass();
	}
	struct Z_Construct_UClass_USharedProfiles_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Profiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Profiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Profiles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USharedProfiles_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedPreviewScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USharedProfiles_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetViewerSettings.h" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USharedProfiles_Statics::NewProp_Profiles_Inner = { "Profiles", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPreviewSceneProfile, METADATA_PARAMS(nullptr, 0) }; // 3037303526
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USharedProfiles_Statics::NewProp_Profiles_MetaData[] = {
		{ "Comment", "/** Collection of shared scene profiles */" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Collection of shared scene profiles" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USharedProfiles_Statics::NewProp_Profiles = { "Profiles", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USharedProfiles, Profiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USharedProfiles_Statics::NewProp_Profiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USharedProfiles_Statics::NewProp_Profiles_MetaData)) }; // 3037303526
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USharedProfiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USharedProfiles_Statics::NewProp_Profiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USharedProfiles_Statics::NewProp_Profiles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USharedProfiles_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USharedProfiles>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USharedProfiles_Statics::ClassParams = {
		&USharedProfiles::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USharedProfiles_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USharedProfiles_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USharedProfiles_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USharedProfiles_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USharedProfiles()
	{
		if (!Z_Registration_Info_UClass_USharedProfiles.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USharedProfiles.OuterSingleton, Z_Construct_UClass_USharedProfiles_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USharedProfiles.OuterSingleton;
	}
	template<> ADVANCEDPREVIEWSCENE_API UClass* StaticClass<USharedProfiles>()
	{
		return USharedProfiles::StaticClass();
	}
	USharedProfiles::USharedProfiles(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USharedProfiles);
	USharedProfiles::~USharedProfiles() {}
	void UAssetViewerSettings::StaticRegisterNativesUAssetViewerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetViewerSettings);
	UClass* Z_Construct_UClass_UAssetViewerSettings_NoRegister()
	{
		return UAssetViewerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAssetViewerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Profiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Profiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Profiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFakeConfigValue_HACK_MetaData[];
#endif
		static void NewProp_bFakeConfigValue_HACK_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFakeConfigValue_HACK;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetViewerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedPreviewScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetViewerSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Default asset viewer settings.\n*/" },
		{ "DisplayName", "Asset Viewer" },
		{ "IncludePath", "AssetViewerSettings.h" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Default asset viewer settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetViewerSettings_Statics::NewProp_Profiles_Inner = { "Profiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPreviewSceneProfile, METADATA_PARAMS(nullptr, 0) }; // 3037303526
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetViewerSettings_Statics::NewProp_Profiles_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Collection of scene profiles */" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Collection of scene profiles" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetViewerSettings_Statics::NewProp_Profiles = { "Profiles", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAssetViewerSettings, Profiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAssetViewerSettings_Statics::NewProp_Profiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetViewerSettings_Statics::NewProp_Profiles_MetaData)) }; // 3037303526
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetViewerSettings_Statics::NewProp_bFakeConfigValue_HACK_MetaData[] = {
		{ "Comment", "// This will enforce mutable CDO of UAssetViewerSettings transacted\n" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "This will enforce mutable CDO of UAssetViewerSettings transacted" },
	};
#endif
	void Z_Construct_UClass_UAssetViewerSettings_Statics::NewProp_bFakeConfigValue_HACK_SetBit(void* Obj)
	{
		((UAssetViewerSettings*)Obj)->bFakeConfigValue_HACK = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetViewerSettings_Statics::NewProp_bFakeConfigValue_HACK = { "bFakeConfigValue_HACK", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAssetViewerSettings), &Z_Construct_UClass_UAssetViewerSettings_Statics::NewProp_bFakeConfigValue_HACK_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetViewerSettings_Statics::NewProp_bFakeConfigValue_HACK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetViewerSettings_Statics::NewProp_bFakeConfigValue_HACK_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetViewerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetViewerSettings_Statics::NewProp_Profiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetViewerSettings_Statics::NewProp_Profiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetViewerSettings_Statics::NewProp_bFakeConfigValue_HACK,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetViewerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetViewerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetViewerSettings_Statics::ClassParams = {
		&UAssetViewerSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAssetViewerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAssetViewerSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetViewerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetViewerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetViewerSettings()
	{
		if (!Z_Registration_Info_UClass_UAssetViewerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetViewerSettings.OuterSingleton, Z_Construct_UClass_UAssetViewerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetViewerSettings.OuterSingleton;
	}
	template<> ADVANCEDPREVIEWSCENE_API UClass* StaticClass<UAssetViewerSettings>()
	{
		return UAssetViewerSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetViewerSettings);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_Statics::ScriptStructInfo[] = {
		{ FPreviewSceneProfile::StaticStruct, Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewStructOps, TEXT("PreviewSceneProfile"), &Z_Registration_Info_UScriptStruct_PreviewSceneProfile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPreviewSceneProfile), 3037303526U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULocalProfiles, ULocalProfiles::StaticClass, TEXT("ULocalProfiles"), &Z_Registration_Info_UClass_ULocalProfiles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocalProfiles), 2427011717U) },
		{ Z_Construct_UClass_USharedProfiles, USharedProfiles::StaticClass, TEXT("USharedProfiles"), &Z_Registration_Info_UClass_USharedProfiles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USharedProfiles), 4079743296U) },
		{ Z_Construct_UClass_UAssetViewerSettings, UAssetViewerSettings::StaticClass, TEXT("UAssetViewerSettings"), &Z_Registration_Info_UClass_UAssetViewerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetViewerSettings), 283883429U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_3891268423(TEXT("/Script/AdvancedPreviewScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AdvancedPreviewScene_Public_AssetViewerSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
