// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineGameOverrideSetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineGameOverrideSetting() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineGameOverrideSetting();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineGameOverrideSetting_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineSetting();
	MOVIERENDERPIPELINECORE_API UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineTextureStreamingMethod();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMoviePipelineTextureStreamingMethod;
	static UEnum* EMoviePipelineTextureStreamingMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMoviePipelineTextureStreamingMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMoviePipelineTextureStreamingMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineTextureStreamingMethod, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("EMoviePipelineTextureStreamingMethod"));
		}
		return Z_Registration_Info_UEnum_EMoviePipelineTextureStreamingMethod.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UEnum* StaticEnum<EMoviePipelineTextureStreamingMethod>()
	{
		return EMoviePipelineTextureStreamingMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineTextureStreamingMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineTextureStreamingMethod_Statics::Enumerators[] = {
		{ "EMoviePipelineTextureStreamingMethod::None", (int64)EMoviePipelineTextureStreamingMethod::None },
		{ "EMoviePipelineTextureStreamingMethod::Disabled", (int64)EMoviePipelineTextureStreamingMethod::Disabled },
		{ "EMoviePipelineTextureStreamingMethod::FullyLoad", (int64)EMoviePipelineTextureStreamingMethod::FullyLoad },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineTextureStreamingMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Disabled.Comment", "/** Disable the Texture Streaming system. Requires the highest amount of VRAM, but helps if Fully Load Used Textures still has blurry textures. */" },
		{ "Disabled.DisplayName", "Disable Streaming" },
		{ "Disabled.Name", "EMoviePipelineTextureStreamingMethod::Disabled" },
		{ "Disabled.ToolTip", "Disable the Texture Streaming system. Requires the highest amount of VRAM, but helps if Fully Load Used Textures still has blurry textures." },
		{ "FullyLoad.Comment", "/**  Fully load used textures instead of progressively streaming them in over multiple frames. Requires less VRAM but can occasionally still results in blurry textures. */" },
		{ "FullyLoad.DisplayName", "Fully Load Used Textures" },
		{ "FullyLoad.Name", "EMoviePipelineTextureStreamingMethod::FullyLoad" },
		{ "FullyLoad.ToolTip", "Fully load used textures instead of progressively streaming them in over multiple frames. Requires less VRAM but can occasionally still results in blurry textures." },
		{ "ModuleRelativePath", "Public/MoviePipelineGameOverrideSetting.h" },
		{ "None.Comment", "/** This will not change the texture streaming method / cvars the users has set. */" },
		{ "None.DisplayName", "Don't Override" },
		{ "None.Name", "EMoviePipelineTextureStreamingMethod::None" },
		{ "None.ToolTip", "This will not change the texture streaming method / cvars the users has set." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineTextureStreamingMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		"EMoviePipelineTextureStreamingMethod",
		"EMoviePipelineTextureStreamingMethod",
		Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineTextureStreamingMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineTextureStreamingMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineTextureStreamingMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineTextureStreamingMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineTextureStreamingMethod()
	{
		if (!Z_Registration_Info_UEnum_EMoviePipelineTextureStreamingMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMoviePipelineTextureStreamingMethod.InnerSingleton, Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineTextureStreamingMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMoviePipelineTextureStreamingMethod.InnerSingleton;
	}
	void UMoviePipelineGameOverrideSetting::StaticRegisterNativesUMoviePipelineGameOverrideSetting()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineGameOverrideSetting);
	UClass* Z_Construct_UClass_UMoviePipelineGameOverrideSetting_NoRegister()
	{
		return UMoviePipelineGameOverrideSetting::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameModeOverride_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameModeOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCinematicQualitySettings_MetaData[];
#endif
		static void NewProp_bCinematicQualitySettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCinematicQualitySettings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TextureStreaming_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureStreaming_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TextureStreaming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLODZero_MetaData[];
#endif
		static void NewProp_bUseLODZero_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLODZero;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableHLODs_MetaData[];
#endif
		static void NewProp_bDisableHLODs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableHLODs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseHighQualityShadows_MetaData[];
#endif
		static void NewProp_bUseHighQualityShadows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHighQualityShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowDistanceScale_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ShadowDistanceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowRadiusThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowRadiusThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideViewDistanceScale_MetaData[];
#endif
		static void NewProp_bOverrideViewDistanceScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideViewDistanceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewDistanceScale_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ViewDistanceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlushGrassStreaming_MetaData[];
#endif
		static void NewProp_bFlushGrassStreaming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlushGrassStreaming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlushStreamingManagers_MetaData[];
#endif
		static void NewProp_bFlushStreamingManagers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlushStreamingManagers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideVirtualTextureFeedbackFactor_MetaData[];
#endif
		static void NewProp_bOverrideVirtualTextureFeedbackFactor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideVirtualTextureFeedbackFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureFeedbackFactor_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VirtualTextureFeedbackFactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineSetting,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineGameOverrideSetting.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineGameOverrideSetting.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_GameModeOverride_MetaData[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Optional Game Mode to override the map's default game mode with. This can be useful if the game's normal mode displays UI elements or loading screens that you don't want captured. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineGameOverrideSetting.h" },
		{ "ToolTip", "Optional Game Mode to override the map's default game mode with. This can be useful if the game's normal mode displays UI elements or loading screens that you don't want captured." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_GameModeOverride = { "GameModeOverride", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineGameOverrideSetting, GameModeOverride), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_GameModeOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_GameModeOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bCinematicQualitySettings_MetaData[] = {
		{ "Category", "Game" },
		{ "Comment", "/** If true, automatically set the engine to the Cinematic Scalability quality settings during render. See the Scalability Reference documentation for information on how to edit cvars to add/change default quality values.*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineGameOverrideSetting.h" },
		{ "ToolTip", "If true, automatically set the engine to the Cinematic Scalability quality settings during render. See the Scalability Reference documentation for information on how to edit cvars to add/change default quality values." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bCinematicQualitySettings_SetBit(void* Obj)
	{
		((UMoviePipelineGameOverrideSetting*)Obj)->bCinematicQualitySettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bCinematicQualitySettings = { "bCinematicQualitySettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineGameOverrideSetting), &Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bCinematicQualitySettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bCinematicQualitySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bCinematicQualitySettings_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_TextureStreaming_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_TextureStreaming_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Defines which If true, when using texture streaming fully load the required textures each frame instead of loading them in over time. This solves objects being blurry after camera cuts. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineGameOverrideSetting.h" },
		{ "ToolTip", "Defines which If true, when using texture streaming fully load the required textures each frame instead of loading them in over time. This solves objects being blurry after camera cuts." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_TextureStreaming = { "TextureStreaming", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineGameOverrideSetting, TextureStreaming), Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineTextureStreamingMethod, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_TextureStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_TextureStreaming_MetaData)) }; // 2231136651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bUseLODZero_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Should we try to use the highest quality LOD for meshes and particle systems regardless of distance? */" },
		{ "ModuleRelativePath", "Public/MoviePipelineGameOverrideSetting.h" },
		{ "ToolTip", "Should we try to use the highest quality LOD for meshes and particle systems regardless of distance?" },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bUseLODZero_SetBit(void* Obj)
	{
		((UMoviePipelineGameOverrideSetting*)Obj)->bUseLODZero = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bUseLODZero = { "bUseLODZero", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineGameOverrideSetting), &Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bUseLODZero_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bUseLODZero_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bUseLODZero_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bDisableHLODs_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Should we disable Hierarchical LODs and instead use their real meshes regardless of distance? */" },
		{ "ModuleRelativePath", "Public/MoviePipelineGameOverrideSetting.h" },
		{ "ToolTip", "Should we disable Hierarchical LODs and instead use their real meshes regardless of distance?" },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bDisableHLODs_SetBit(void* Obj)
	{
		((UMoviePipelineGameOverrideSetting*)Obj)->bDisableHLODs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bDisableHLODs = { "bDisableHLODs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineGameOverrideSetting), &Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bDisableHLODs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bDisableHLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bDisableHLODs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bUseHighQualityShadows_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Should we override shadow-related CVars with some high quality preset settings? */" },
		{ "ModuleRelativePath", "Public/MoviePipelineGameOverrideSetting.h" },
		{ "ToolTip", "Should we override shadow-related CVars with some high quality preset settings?" },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bUseHighQualityShadows_SetBit(void* Obj)
	{
		((UMoviePipelineGameOverrideSetting*)Obj)->bUseHighQualityShadows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bUseHighQualityShadows = { "bUseHighQualityShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineGameOverrideSetting), &Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bUseHighQualityShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bUseHighQualityShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bUseHighQualityShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_ShadowDistanceScale_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ClampMin", "0.100000" },
		{ "Comment", "/** Scalability option to trade shadow distance versus performance for directional lights  */" },
		{ "EditCondition", "bUseHighQualityShadows" },
		{ "ModuleRelativePath", "Public/MoviePipelineGameOverrideSetting.h" },
		{ "ToolTip", "Scalability option to trade shadow distance versus performance for directional lights" },
		{ "UIMax", "10" },
		{ "UIMin", "0.100000" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_ShadowDistanceScale = { "ShadowDistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineGameOverrideSetting, ShadowDistanceScale), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_ShadowDistanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_ShadowDistanceScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_ShadowRadiusThreshold_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** Cull shadow casters if they are too small, value is the minimal screen space bounding sphere radius */" },
		{ "EditCondition", "bUseHighQualityShadows" },
		{ "ModuleRelativePath", "Public/MoviePipelineGameOverrideSetting.h" },
		{ "ToolTip", "Cull shadow casters if they are too small, value is the minimal screen space bounding sphere radius" },
		{ "UIMin", "0.001000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_ShadowRadiusThreshold = { "ShadowRadiusThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineGameOverrideSetting, ShadowRadiusThreshold), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_ShadowRadiusThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_ShadowRadiusThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bOverrideViewDistanceScale_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Should we override the View Distance Scale? Can be used in situations where MaxDrawDistance has been set before for in-game performance. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineGameOverrideSetting.h" },
		{ "ToolTip", "Should we override the View Distance Scale? Can be used in situations where MaxDrawDistance has been set before for in-game performance." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bOverrideViewDistanceScale_SetBit(void* Obj)
	{
		((UMoviePipelineGameOverrideSetting*)Obj)->bOverrideViewDistanceScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bOverrideViewDistanceScale = { "bOverrideViewDistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineGameOverrideSetting), &Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bOverrideViewDistanceScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bOverrideViewDistanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bOverrideViewDistanceScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_ViewDistanceScale_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Controls the view distance scale. A primitive's MaxDrawDistance is scaled by this value. */" },
		{ "EditCondition", "bOverrideViewDistanceScale" },
		{ "ModuleRelativePath", "Public/MoviePipelineGameOverrideSetting.h" },
		{ "ToolTip", "Controls the view distance scale. A primitive's MaxDrawDistance is scaled by this value." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_ViewDistanceScale = { "ViewDistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineGameOverrideSetting, ViewDistanceScale), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_ViewDistanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_ViewDistanceScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bFlushGrassStreaming_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Flushing grass streaming (combined with override view distance scale) prevents visible pop-in/culling of grace instances. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineGameOverrideSetting.h" },
		{ "ToolTip", "Flushing grass streaming (combined with override view distance scale) prevents visible pop-in/culling of grace instances." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bFlushGrassStreaming_SetBit(void* Obj)
	{
		((UMoviePipelineGameOverrideSetting*)Obj)->bFlushGrassStreaming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bFlushGrassStreaming = { "bFlushGrassStreaming", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineGameOverrideSetting), &Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bFlushGrassStreaming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bFlushGrassStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bFlushGrassStreaming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bFlushStreamingManagers_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Experimental. If true flush the streaming managers (Texture Streaming) each frame. Allows Texture Streaming to not have visible pop-in in final frames. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineGameOverrideSetting.h" },
		{ "ToolTip", "Experimental. If true flush the streaming managers (Texture Streaming) each frame. Allows Texture Streaming to not have visible pop-in in final frames." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bFlushStreamingManagers_SetBit(void* Obj)
	{
		((UMoviePipelineGameOverrideSetting*)Obj)->bFlushStreamingManagers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bFlushStreamingManagers = { "bFlushStreamingManagers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineGameOverrideSetting), &Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bFlushStreamingManagers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bFlushStreamingManagers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bFlushStreamingManagers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bOverrideVirtualTextureFeedbackFactor_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If true then override the virtual texture feedback resolution factor. Otherwise the value from the project renderer settings will be used. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/MoviePipelineGameOverrideSetting.h" },
		{ "ToolTip", "If true then override the virtual texture feedback resolution factor. Otherwise the value from the project renderer settings will be used." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bOverrideVirtualTextureFeedbackFactor_SetBit(void* Obj)
	{
		((UMoviePipelineGameOverrideSetting*)Obj)->bOverrideVirtualTextureFeedbackFactor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bOverrideVirtualTextureFeedbackFactor = { "bOverrideVirtualTextureFeedbackFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineGameOverrideSetting), &Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bOverrideVirtualTextureFeedbackFactor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bOverrideVirtualTextureFeedbackFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bOverrideVirtualTextureFeedbackFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_VirtualTextureFeedbackFactor_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** The virtual texture feedback resolution factor. A lower factor will increase virtual texture feedback resolution. */" },
		{ "editcondition", "bOverrideVirtualTextureFeedbackFactor" },
		{ "ModuleRelativePath", "Public/MoviePipelineGameOverrideSetting.h" },
		{ "ToolTip", "The virtual texture feedback resolution factor. A lower factor will increase virtual texture feedback resolution." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_VirtualTextureFeedbackFactor = { "VirtualTextureFeedbackFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineGameOverrideSetting, VirtualTextureFeedbackFactor), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_VirtualTextureFeedbackFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_VirtualTextureFeedbackFactor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_GameModeOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bCinematicQualitySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_TextureStreaming_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_TextureStreaming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bUseLODZero,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bDisableHLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bUseHighQualityShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_ShadowDistanceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_ShadowRadiusThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bOverrideViewDistanceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_ViewDistanceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bFlushGrassStreaming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bFlushStreamingManagers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bOverrideVirtualTextureFeedbackFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_VirtualTextureFeedbackFactor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineGameOverrideSetting>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::ClassParams = {
		&UMoviePipelineGameOverrideSetting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineGameOverrideSetting()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineGameOverrideSetting.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineGameOverrideSetting.OuterSingleton, Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineGameOverrideSetting.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineGameOverrideSetting>()
	{
		return UMoviePipelineGameOverrideSetting::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineGameOverrideSetting);
	UMoviePipelineGameOverrideSetting::~UMoviePipelineGameOverrideSetting() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameOverrideSetting_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameOverrideSetting_h_Statics::EnumInfo[] = {
		{ EMoviePipelineTextureStreamingMethod_StaticEnum, TEXT("EMoviePipelineTextureStreamingMethod"), &Z_Registration_Info_UEnum_EMoviePipelineTextureStreamingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2231136651U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameOverrideSetting_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineGameOverrideSetting, UMoviePipelineGameOverrideSetting::StaticClass, TEXT("UMoviePipelineGameOverrideSetting"), &Z_Registration_Info_UClass_UMoviePipelineGameOverrideSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineGameOverrideSetting), 3472969406U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameOverrideSetting_h_1003811816(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameOverrideSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameOverrideSetting_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameOverrideSetting_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameOverrideSetting_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
