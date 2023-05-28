// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TextureStats.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureStats() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureGroup();
	STATSVIEWER_API UClass* Z_Construct_UClass_UTextureStats();
	STATSVIEWER_API UClass* Z_Construct_UClass_UTextureStats_NoRegister();
	STATSVIEWER_API UEnum* Z_Construct_UEnum_StatsViewer_ETextureObjectSets();
	UPackage* Z_Construct_UPackage__Script_StatsViewer();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureObjectSets;
	static UEnum* ETextureObjectSets_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureObjectSets.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureObjectSets.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StatsViewer_ETextureObjectSets, (UObject*)Z_Construct_UPackage__Script_StatsViewer(), TEXT("ETextureObjectSets"));
		}
		return Z_Registration_Info_UEnum_ETextureObjectSets.OuterSingleton;
	}
	template<> STATSVIEWER_API UEnum* StaticEnum<ETextureObjectSets>()
	{
		return ETextureObjectSets_StaticEnum();
	}
	struct Z_Construct_UEnum_StatsViewer_ETextureObjectSets_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StatsViewer_ETextureObjectSets_Statics::Enumerators[] = {
		{ "TextureObjectSet_CurrentStreamingLevel", (int64)TextureObjectSet_CurrentStreamingLevel },
		{ "TextureObjectSet_AllStreamingLevels", (int64)TextureObjectSet_AllStreamingLevels },
		{ "TextureObjectSet_SelectedActors", (int64)TextureObjectSet_SelectedActors },
		{ "TextureObjectSet_SelectedMaterials", (int64)TextureObjectSet_SelectedMaterials },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StatsViewer_ETextureObjectSets_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Enum defining the object sets for this stats object */" },
		{ "ModuleRelativePath", "Classes/TextureStats.h" },
		{ "TextureObjectSet_AllStreamingLevels.DisplayName", "All Streaming Levels" },
		{ "TextureObjectSet_AllStreamingLevels.Name", "TextureObjectSet_AllStreamingLevels" },
		{ "TextureObjectSet_AllStreamingLevels.ToolTip", "Display texture statistics for all streaming levels" },
		{ "TextureObjectSet_CurrentStreamingLevel.DisplayName", "Current Streaming Level" },
		{ "TextureObjectSet_CurrentStreamingLevel.Name", "TextureObjectSet_CurrentStreamingLevel" },
		{ "TextureObjectSet_CurrentStreamingLevel.ToolTip", "Display texture statistics for the current streaming level" },
		{ "TextureObjectSet_SelectedActors.DisplayName", "Selected Actor(s)" },
		{ "TextureObjectSet_SelectedActors.Name", "TextureObjectSet_SelectedActors" },
		{ "TextureObjectSet_SelectedActors.ToolTip", "Display texture statistics of selected Actors" },
		{ "TextureObjectSet_SelectedMaterials.DisplayName", "Selected Materials(s)" },
		{ "TextureObjectSet_SelectedMaterials.Name", "TextureObjectSet_SelectedMaterials" },
		{ "TextureObjectSet_SelectedMaterials.ToolTip", "Display texture statistics of selected Materials" },
		{ "ToolTip", "Enum defining the object sets for this stats object" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StatsViewer_ETextureObjectSets_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StatsViewer,
		nullptr,
		"ETextureObjectSets",
		"ETextureObjectSets",
		Z_Construct_UEnum_StatsViewer_ETextureObjectSets_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StatsViewer_ETextureObjectSets_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_StatsViewer_ETextureObjectSets_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StatsViewer_ETextureObjectSets_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StatsViewer_ETextureObjectSets()
	{
		if (!Z_Registration_Info_UEnum_ETextureObjectSets.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureObjectSets.InnerSingleton, Z_Construct_UEnum_StatsViewer_ETextureObjectSets_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureObjectSets.InnerSingleton;
	}
	void UTextureStats::StaticRegisterNativesUTextureStats()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureStats);
	UClass* Z_Construct_UClass_UTextureStats_NoRegister()
	{
		return UTextureStats::StaticClass();
	}
	struct Z_Construct_UClass_UTextureStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Virtual_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Virtual;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDim_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxDim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDim_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentDim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Format;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Group;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODBias_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentKB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentKB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullyLoadedKB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FullyLoadedKB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumUses_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumUses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastTimeRendered_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastTimeRendered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsViewer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureStats_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Statistics page for textures. */" },
		{ "DisplayName", "Texture Stats" },
		{ "IncludePath", "TextureStats.h" },
		{ "ModuleRelativePath", "Classes/TextureStats.h" },
		{ "ObjectSetType", "ETextureObjectSets" },
		{ "ToolTip", "Statistics page for textures." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureStats_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "100" },
		{ "Comment", "/** Texture - click to go to asset */" },
		{ "DisplayName", "Name" },
		{ "ModuleRelativePath", "Classes/TextureStats.h" },
		{ "ToolTip", "Texture - click to go to asset" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UTextureStats_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014010000020001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureStats, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTextureStats_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureStats_Statics::NewProp_Texture_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UTextureStats_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureStats_Statics::NewProp_Actors_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "100" },
		{ "Comment", "/** Actor(s) - click to select & zoom Actor(s) */" },
		{ "DisplayName", "Actor(s)" },
		{ "ModuleRelativePath", "Classes/TextureStats.h" },
		{ "ToolTip", "Actor(s) - click to select & zoom Actor(s)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTextureStats_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0014010000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureStats, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTextureStats_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureStats_Statics::NewProp_Actors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureStats_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "60" },
		{ "Comment", "/** Texture type e.g. 2D, 3D, Cube, \"\" if not known, ... */" },
		{ "ModuleRelativePath", "Classes/TextureStats.h" },
		{ "ToolTip", "Texture type e.g. 2D, 3D, Cube, \"\" if not known, ..." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTextureStats_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureStats, Type), METADATA_PARAMS(Z_Construct_UClass_UTextureStats_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureStats_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureStats_Statics::NewProp_Virtual_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "60" },
		{ "Comment", "/** Is the texture virtual? Yes/No */" },
		{ "ModuleRelativePath", "Classes/TextureStats.h" },
		{ "ToolTip", "Is the texture virtual? Yes/No" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTextureStats_Statics::NewProp_Virtual = { "Virtual", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureStats, Virtual), METADATA_PARAMS(Z_Construct_UClass_UTextureStats_Statics::NewProp_Virtual_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureStats_Statics::NewProp_Virtual_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureStats_Statics::NewProp_MaxDim_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "90" },
		{ "Comment", "/** Max Dimension e.g. 256x256, not including the format */" },
		{ "DisplayName", "Max Dimension" },
		{ "ModuleRelativePath", "Classes/TextureStats.h" },
		{ "ToolTip", "Max Dimension e.g. 256x256, not including the format" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextureStats_Statics::NewProp_MaxDim = { "MaxDim", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureStats, MaxDim), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UTextureStats_Statics::NewProp_MaxDim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureStats_Statics::NewProp_MaxDim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureStats_Statics::NewProp_CurrentDim_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "90" },
		{ "Comment", "/** Current Dimension e.g 256x256 */" },
		{ "DisplayName", "Current Dimension" },
		{ "ModuleRelativePath", "Classes/TextureStats.h" },
		{ "ToolTip", "Current Dimension e.g 256x256" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextureStats_Statics::NewProp_CurrentDim = { "CurrentDim", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureStats, CurrentDim), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UTextureStats_Statics::NewProp_CurrentDim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureStats_Statics::NewProp_CurrentDim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureStats_Statics::NewProp_Format_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "96" },
		{ "Comment", "/** The texture format, e.g. PF_DXT1 */" },
		{ "ModuleRelativePath", "Classes/TextureStats.h" },
		{ "ToolTip", "The texture format, e.g. PF_DXT1" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureStats_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureStats, Format), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(Z_Construct_UClass_UTextureStats_Statics::NewProp_Format_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureStats_Statics::NewProp_Format_MetaData)) }; // 2651536151
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureStats_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "94" },
		{ "Comment", "/** The texture group, TEXTUREGROUP_MAX is not used, e.g. TEXTUREGROUP_World */" },
		{ "ModuleRelativePath", "Classes/TextureStats.h" },
		{ "ToolTip", "The texture group, TEXTUREGROUP_MAX is not used, e.g. TEXTUREGROUP_World" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureStats_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureStats, Group), Z_Construct_UEnum_Engine_TextureGroup, METADATA_PARAMS(Z_Construct_UClass_UTextureStats_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureStats_Statics::NewProp_Group_MetaData)) }; // 3720270347
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureStats_Statics::NewProp_LODBias_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "70" },
		{ "Comment", "/** LOD Bias for this texture. (Texture LODBias + Texture group) */" },
		{ "DisplayName", "LODBias" },
		{ "ModuleRelativePath", "Classes/TextureStats.h" },
		{ "ToolTip", "LOD Bias for this texture. (Texture LODBias + Texture group)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureStats_Statics::NewProp_LODBias = { "LODBias", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureStats, LODBias), METADATA_PARAMS(Z_Construct_UClass_UTextureStats_Statics::NewProp_LODBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureStats_Statics::NewProp_LODBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureStats_Statics::NewProp_CurrentKB_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "80" },
		{ "Comment", "/** The memory used currently in KB */" },
		{ "DisplayName", "Current Memory" },
		{ "ModuleRelativePath", "Classes/TextureStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "The memory used currently in KB" },
		{ "Unit", "KB" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextureStats_Statics::NewProp_CurrentKB = { "CurrentKB", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureStats, CurrentKB), METADATA_PARAMS(Z_Construct_UClass_UTextureStats_Statics::NewProp_CurrentKB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureStats_Statics::NewProp_CurrentKB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureStats_Statics::NewProp_FullyLoadedKB_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "110" },
		{ "Comment", "/** The memory used when the texture is fully loaded in KB*/" },
		{ "DisplayName", "Fully Loaded Memory" },
		{ "ModuleRelativePath", "Classes/TextureStats.h" },
		{ "ShowTotal", "true" },
		{ "SortMode", "Descending" },
		{ "ToolTip", "The memory used when the texture is fully loaded in KB" },
		{ "Unit", "KB" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextureStats_Statics::NewProp_FullyLoadedKB = { "FullyLoadedKB", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureStats, FullyLoadedKB), METADATA_PARAMS(Z_Construct_UClass_UTextureStats_Statics::NewProp_FullyLoadedKB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureStats_Statics::NewProp_FullyLoadedKB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureStats_Statics::NewProp_NumUses_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "74" },
		{ "Comment", "/** The number of times the texture is used */" },
		{ "DisplayName", "Uses" },
		{ "ModuleRelativePath", "Classes/TextureStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "The number of times the texture is used" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureStats_Statics::NewProp_NumUses = { "NumUses", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureStats, NumUses), METADATA_PARAMS(Z_Construct_UClass_UTextureStats_Statics::NewProp_NumUses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureStats_Statics::NewProp_NumUses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureStats_Statics::NewProp_LastTimeRendered_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "78" },
		{ "Comment", "/** Relative time it was used for rendering the last time */" },
		{ "DisplayName", "Last Seen" },
		{ "ModuleRelativePath", "Classes/TextureStats.h" },
		{ "ToolTip", "Relative time it was used for rendering the last time" },
		{ "Unit", "s" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextureStats_Statics::NewProp_LastTimeRendered = { "LastTimeRendered", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureStats, LastTimeRendered), METADATA_PARAMS(Z_Construct_UClass_UTextureStats_Statics::NewProp_LastTimeRendered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureStats_Statics::NewProp_LastTimeRendered_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureStats_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "200" },
		{ "Comment", "/** Texture path without the name \"package.[group.]\" */" },
		{ "ModuleRelativePath", "Classes/TextureStats.h" },
		{ "ToolTip", "Texture path without the name \"package.[group.]\"" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTextureStats_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureStats, Path), METADATA_PARAMS(Z_Construct_UClass_UTextureStats_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureStats_Statics::NewProp_Path_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureStats_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureStats_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureStats_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureStats_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureStats_Statics::NewProp_Virtual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureStats_Statics::NewProp_MaxDim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureStats_Statics::NewProp_CurrentDim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureStats_Statics::NewProp_Format,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureStats_Statics::NewProp_Group,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureStats_Statics::NewProp_LODBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureStats_Statics::NewProp_CurrentKB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureStats_Statics::NewProp_FullyLoadedKB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureStats_Statics::NewProp_NumUses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureStats_Statics::NewProp_LastTimeRendered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureStats_Statics::NewProp_Path,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureStats>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureStats_Statics::ClassParams = {
		&UTextureStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTextureStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextureStats_Statics::PropPointers),
		0,
		0x000800A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureStats()
	{
		if (!Z_Registration_Info_UClass_UTextureStats.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureStats.OuterSingleton, Z_Construct_UClass_UTextureStats_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureStats.OuterSingleton;
	}
	template<> STATSVIEWER_API UClass* StaticClass<UTextureStats>()
	{
		return UTextureStats::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureStats);
	UTextureStats::~UTextureStats() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_Statics::EnumInfo[] = {
		{ ETextureObjectSets_StaticEnum, TEXT("ETextureObjectSets"), &Z_Registration_Info_UEnum_ETextureObjectSets, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 866923977U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextureStats, UTextureStats::StaticClass, TEXT("UTextureStats"), &Z_Registration_Info_UClass_UTextureStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureStats), 2276965724U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_3062626391(TEXT("/Script/StatsViewer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
