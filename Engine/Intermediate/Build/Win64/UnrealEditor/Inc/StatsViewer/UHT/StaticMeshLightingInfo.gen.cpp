// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StaticMeshLightingInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshLightingInfo() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	STATSVIEWER_API UClass* Z_Construct_UClass_UStaticMeshLightingInfo();
	STATSVIEWER_API UClass* Z_Construct_UClass_UStaticMeshLightingInfo_NoRegister();
	STATSVIEWER_API UEnum* Z_Construct_UEnum_StatsViewer_EStaticMeshLightingInfoObjectSets();
	UPackage* Z_Construct_UPackage__Script_StatsViewer();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStaticMeshLightingInfoObjectSets;
	static UEnum* EStaticMeshLightingInfoObjectSets_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStaticMeshLightingInfoObjectSets.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStaticMeshLightingInfoObjectSets.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StatsViewer_EStaticMeshLightingInfoObjectSets, (UObject*)Z_Construct_UPackage__Script_StatsViewer(), TEXT("EStaticMeshLightingInfoObjectSets"));
		}
		return Z_Registration_Info_UEnum_EStaticMeshLightingInfoObjectSets.OuterSingleton;
	}
	template<> STATSVIEWER_API UEnum* StaticEnum<EStaticMeshLightingInfoObjectSets>()
	{
		return EStaticMeshLightingInfoObjectSets_StaticEnum();
	}
	struct Z_Construct_UEnum_StatsViewer_EStaticMeshLightingInfoObjectSets_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StatsViewer_EStaticMeshLightingInfoObjectSets_Statics::Enumerators[] = {
		{ "StaticMeshLightingInfoObjectSets_CurrentLevel", (int64)StaticMeshLightingInfoObjectSets_CurrentLevel },
		{ "StaticMeshLightingInfoObjectSets_SelectedLevels", (int64)StaticMeshLightingInfoObjectSets_SelectedLevels },
		{ "StaticMeshLightingInfoObjectSets_AllLevels", (int64)StaticMeshLightingInfoObjectSets_AllLevels },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StatsViewer_EStaticMeshLightingInfoObjectSets_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Enum defining the object sets for this stats object */" },
		{ "ModuleRelativePath", "Classes/StaticMeshLightingInfo.h" },
		{ "StaticMeshLightingInfoObjectSets_AllLevels.DisplayName", "All Levels" },
		{ "StaticMeshLightingInfoObjectSets_AllLevels.Name", "StaticMeshLightingInfoObjectSets_AllLevels" },
		{ "StaticMeshLightingInfoObjectSets_AllLevels.ToolTip", "View static mesh lighting info for all levels" },
		{ "StaticMeshLightingInfoObjectSets_CurrentLevel.DisplayName", "Current Level" },
		{ "StaticMeshLightingInfoObjectSets_CurrentLevel.Name", "StaticMeshLightingInfoObjectSets_CurrentLevel" },
		{ "StaticMeshLightingInfoObjectSets_CurrentLevel.ToolTip", "View static mesh lighting info for the current level" },
		{ "StaticMeshLightingInfoObjectSets_SelectedLevels.DisplayName", "Selected Levels" },
		{ "StaticMeshLightingInfoObjectSets_SelectedLevels.Name", "StaticMeshLightingInfoObjectSets_SelectedLevels" },
		{ "StaticMeshLightingInfoObjectSets_SelectedLevels.ToolTip", "View lighting info for selected levels" },
		{ "ToolTip", "Enum defining the object sets for this stats object" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StatsViewer_EStaticMeshLightingInfoObjectSets_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StatsViewer,
		nullptr,
		"EStaticMeshLightingInfoObjectSets",
		"EStaticMeshLightingInfoObjectSets",
		Z_Construct_UEnum_StatsViewer_EStaticMeshLightingInfoObjectSets_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StatsViewer_EStaticMeshLightingInfoObjectSets_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_StatsViewer_EStaticMeshLightingInfoObjectSets_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StatsViewer_EStaticMeshLightingInfoObjectSets_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StatsViewer_EStaticMeshLightingInfoObjectSets()
	{
		if (!Z_Registration_Info_UEnum_EStaticMeshLightingInfoObjectSets.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStaticMeshLightingInfoObjectSets.InnerSingleton, Z_Construct_UEnum_StatsViewer_EStaticMeshLightingInfoObjectSets_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStaticMeshLightingInfoObjectSets.InnerSingleton;
	}
	void UStaticMeshLightingInfo::StaticRegisterNativesUStaticMeshLightingInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaticMeshLightingInfo);
	UClass* Z_Construct_UClass_UStaticMeshLightingInfo_NoRegister()
	{
		return UStaticMeshLightingInfo::StaticClass();
	}
	struct Z_Construct_UClass_UStaticMeshLightingInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshActor_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_StaticMeshActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LevelName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureMapping_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TextureMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTextureMapping_MetaData[];
#endif
		static void NewProp_bTextureMapping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTextureMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasLightmapTexCoords_MetaData[];
#endif
		static void NewProp_bHasLightmapTexCoords_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasLightmapTexCoords;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticLightingResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StaticLightingResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureLightMapMemoryUsage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TextureLightMapMemoryUsage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexLightMapMemoryUsage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VertexLightMapMemoryUsage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightMapLightCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LightMapLightCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureShadowMapMemoryUsage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TextureShadowMapMemoryUsage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexShadowMapMemoryUsage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VertexShadowMapMemoryUsage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowMapLightCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ShadowMapLightCount;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LightmapTextureNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightmapTextureNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LightmapTextureNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaticMeshLightingInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsViewer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLightingInfo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Statistics page for static meshes. */" },
		{ "DisplayName", "Static Mesh Lighting Info" },
		{ "IncludePath", "StaticMeshLightingInfo.h" },
		{ "ModuleRelativePath", "Classes/StaticMeshLightingInfo.h" },
		{ "ObjectSetType", "EStaticMeshLightingInfoObjectSets" },
		{ "ToolTip", "Statistics page for static meshes." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_StaticMeshActor_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "200" },
		{ "Comment", "/** The actor that is related to this error/warning. */" },
		{ "DisplayName", "Actor" },
		{ "ModuleRelativePath", "Classes/StaticMeshLightingInfo.h" },
		{ "ToolTip", "The actor that is related to this error/warning." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_StaticMeshActor = { "StaticMeshActor", nullptr, (EPropertyFlags)0x0014010000020001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMeshLightingInfo, StaticMeshActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_StaticMeshActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_StaticMeshActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "200" },
		{ "Comment", "/** The source StaticMesh that is related to this info. */" },
		{ "ModuleRelativePath", "Classes/StaticMeshLightingInfo.h" },
		{ "ToolTip", "The source StaticMesh that is related to this info." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014010000020001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMeshLightingInfo, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_LevelName_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "150" },
		{ "Comment", "/** Cached version of the level name this object resides in */" },
		{ "DisplayName", "Level" },
		{ "ModuleRelativePath", "Classes/StaticMeshLightingInfo.h" },
		{ "ToolTip", "Cached version of the level name this object resides in" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMeshLightingInfo, LevelName), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_LevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_LevelName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_TextureMapping_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "82" },
		{ "Comment", "/** Current mapping type string */" },
		{ "DisplayName", "Type" },
		{ "ModuleRelativePath", "Classes/StaticMeshLightingInfo.h" },
		{ "ToolTip", "Current mapping type string" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_TextureMapping = { "TextureMapping", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMeshLightingInfo, TextureMapping), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_TextureMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_TextureMapping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_bTextureMapping_MetaData[] = {
		{ "Comment", "/** Current mapping type flag - not displayed */" },
		{ "ModuleRelativePath", "Classes/StaticMeshLightingInfo.h" },
		{ "ToolTip", "Current mapping type flag - not displayed" },
	};
#endif
	void Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_bTextureMapping_SetBit(void* Obj)
	{
		((UStaticMeshLightingInfo*)Obj)->bTextureMapping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_bTextureMapping = { "bTextureMapping", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UStaticMeshLightingInfo), &Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_bTextureMapping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_bTextureMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_bTextureMapping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_bHasLightmapTexCoords_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "76" },
		{ "Comment", "/** Does the Lightmap have UVs? */" },
		{ "DisplayName", "UVs" },
		{ "ModuleRelativePath", "Classes/StaticMeshLightingInfo.h" },
		{ "ToolTip", "Does the Lightmap have UVs?" },
	};
#endif
	void Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_bHasLightmapTexCoords_SetBit(void* Obj)
	{
		((UStaticMeshLightingInfo*)Obj)->bHasLightmapTexCoords = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_bHasLightmapTexCoords = { "bHasLightmapTexCoords", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UStaticMeshLightingInfo), &Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_bHasLightmapTexCoords_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_bHasLightmapTexCoords_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_bHasLightmapTexCoords_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_StaticLightingResolution_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "74" },
		{ "Comment", "/** The static lighting resolution the texture mapping was estimated with. */" },
		{ "DisplayName", "Res" },
		{ "ModuleRelativePath", "Classes/StaticMeshLightingInfo.h" },
		{ "ToolTip", "The static lighting resolution the texture mapping was estimated with." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_StaticLightingResolution = { "StaticLightingResolution", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMeshLightingInfo, StaticLightingResolution), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_StaticLightingResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_StaticLightingResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_TextureLightMapMemoryUsage_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "118" },
		{ "Comment", "/** Estimated memory usage in KB for light map texel data. */" },
		{ "DisplayName", "Texture LM" },
		{ "ModuleRelativePath", "Classes/StaticMeshLightingInfo.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Estimated memory usage in KB for light map texel data." },
		{ "Unit", "KB" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_TextureLightMapMemoryUsage = { "TextureLightMapMemoryUsage", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMeshLightingInfo, TextureLightMapMemoryUsage), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_TextureLightMapMemoryUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_TextureLightMapMemoryUsage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_VertexLightMapMemoryUsage_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "112" },
		{ "Comment", "/** Estimated memory usage in KB for light map vertex data. */" },
		{ "DisplayName", "Vertex LM" },
		{ "ModuleRelativePath", "Classes/StaticMeshLightingInfo.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Estimated memory usage in KB for light map vertex data." },
		{ "Unit", "KB" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_VertexLightMapMemoryUsage = { "VertexLightMapMemoryUsage", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMeshLightingInfo, VertexLightMapMemoryUsage), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_VertexLightMapMemoryUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_VertexLightMapMemoryUsage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_LightMapLightCount_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "100" },
		{ "Comment", "/** Num lightmap lights */" },
		{ "DisplayName", "Num LM" },
		{ "ModuleRelativePath", "Classes/StaticMeshLightingInfo.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Num lightmap lights" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_LightMapLightCount = { "LightMapLightCount", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMeshLightingInfo, LightMapLightCount), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_LightMapLightCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_LightMapLightCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_TextureShadowMapMemoryUsage_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "120" },
		{ "Comment", "/** Estimated memory usage in KB for shadow map texel data. */" },
		{ "DisplayName", "Texture SM" },
		{ "ModuleRelativePath", "Classes/StaticMeshLightingInfo.h" },
		{ "ShowTotal", "true" },
		{ "SortMode", "Descending" },
		{ "ToolTip", "Estimated memory usage in KB for shadow map texel data." },
		{ "Unit", "KB" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_TextureShadowMapMemoryUsage = { "TextureShadowMapMemoryUsage", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMeshLightingInfo, TextureShadowMapMemoryUsage), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_TextureShadowMapMemoryUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_TextureShadowMapMemoryUsage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_VertexShadowMapMemoryUsage_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "112" },
		{ "Comment", "/** Estimated memory usage in KB for shadow map vertex data. */" },
		{ "DisplayName", "Vertex SM" },
		{ "ModuleRelativePath", "Classes/StaticMeshLightingInfo.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Estimated memory usage in KB for shadow map vertex data." },
		{ "Unit", "KB" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_VertexShadowMapMemoryUsage = { "VertexShadowMapMemoryUsage", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMeshLightingInfo, VertexShadowMapMemoryUsage), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_VertexShadowMapMemoryUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_VertexShadowMapMemoryUsage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_ShadowMapLightCount_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "102" },
		{ "Comment", "/** Number of lights generating shadow maps on the primitive. */" },
		{ "DisplayName", "Num SM" },
		{ "ModuleRelativePath", "Classes/StaticMeshLightingInfo.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Number of lights generating shadow maps on the primitive." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_ShadowMapLightCount = { "ShadowMapLightCount", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMeshLightingInfo, ShadowMapLightCount), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_ShadowMapLightCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_ShadowMapLightCount_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_LightmapTextureNames_Inner = { "LightmapTextureNames", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_LightmapTextureNames_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "300" },
		{ "Comment", "/** The lighting texture names that the static mesh component references. */" },
		{ "DisplayName", "Lightmap Names" },
		{ "ModuleRelativePath", "Classes/StaticMeshLightingInfo.h" },
		{ "ToolTip", "The lighting texture names that the static mesh component references." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_LightmapTextureNames = { "LightmapTextureNames", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMeshLightingInfo, LightmapTextureNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_LightmapTextureNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_LightmapTextureNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStaticMeshLightingInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_StaticMeshActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_LevelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_TextureMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_bTextureMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_bHasLightmapTexCoords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_StaticLightingResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_TextureLightMapMemoryUsage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_VertexLightMapMemoryUsage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_LightMapLightCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_TextureShadowMapMemoryUsage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_VertexShadowMapMemoryUsage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_ShadowMapLightCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_LightmapTextureNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_LightmapTextureNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticMeshLightingInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMeshLightingInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaticMeshLightingInfo_Statics::ClassParams = {
		&UStaticMeshLightingInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStaticMeshLightingInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::PropPointers),
		0,
		0x000800A8u,
		METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticMeshLightingInfo()
	{
		if (!Z_Registration_Info_UClass_UStaticMeshLightingInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaticMeshLightingInfo.OuterSingleton, Z_Construct_UClass_UStaticMeshLightingInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStaticMeshLightingInfo.OuterSingleton;
	}
	template<> STATSVIEWER_API UClass* StaticClass<UStaticMeshLightingInfo>()
	{
		return UStaticMeshLightingInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshLightingInfo);
	UStaticMeshLightingInfo::~UStaticMeshLightingInfo() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_Statics::EnumInfo[] = {
		{ EStaticMeshLightingInfoObjectSets_StaticEnum, TEXT("EStaticMeshLightingInfoObjectSets"), &Z_Registration_Info_UEnum_EStaticMeshLightingInfoObjectSets, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 741627871U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStaticMeshLightingInfo, UStaticMeshLightingInfo::StaticClass, TEXT("UStaticMeshLightingInfo"), &Z_Registration_Info_UClass_UStaticMeshLightingInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaticMeshLightingInfo), 447610548U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_4111811380(TEXT("/Script/StatsViewer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
