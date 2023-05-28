// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrimitiveStats.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrimitiveStats() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STATSVIEWER_API UClass* Z_Construct_UClass_UPrimitiveStats();
	STATSVIEWER_API UClass* Z_Construct_UClass_UPrimitiveStats_NoRegister();
	STATSVIEWER_API UEnum* Z_Construct_UEnum_StatsViewer_EPrimitiveObjectSets();
	UPackage* Z_Construct_UPackage__Script_StatsViewer();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPrimitiveObjectSets;
	static UEnum* EPrimitiveObjectSets_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPrimitiveObjectSets.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPrimitiveObjectSets.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StatsViewer_EPrimitiveObjectSets, (UObject*)Z_Construct_UPackage__Script_StatsViewer(), TEXT("EPrimitiveObjectSets"));
		}
		return Z_Registration_Info_UEnum_EPrimitiveObjectSets.OuterSingleton;
	}
	template<> STATSVIEWER_API UEnum* StaticEnum<EPrimitiveObjectSets>()
	{
		return EPrimitiveObjectSets_StaticEnum();
	}
	struct Z_Construct_UEnum_StatsViewer_EPrimitiveObjectSets_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StatsViewer_EPrimitiveObjectSets_Statics::Enumerators[] = {
		{ "PrimitiveObjectSets_AllObjects", (int64)PrimitiveObjectSets_AllObjects },
		{ "PrimitiveObjectSets_CurrentLevel", (int64)PrimitiveObjectSets_CurrentLevel },
		{ "PrimitiveObjectSets_SelectedObjects", (int64)PrimitiveObjectSets_SelectedObjects },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StatsViewer_EPrimitiveObjectSets_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Enum defining the object sets for this stats object */" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "PrimitiveObjectSets_AllObjects.DisplayName", "All Objects" },
		{ "PrimitiveObjectSets_AllObjects.Name", "PrimitiveObjectSets_AllObjects" },
		{ "PrimitiveObjectSets_AllObjects.ToolTip", "View primitive statistics for all objects in all levels" },
		{ "PrimitiveObjectSets_CurrentLevel.DisplayName", "Current Level" },
		{ "PrimitiveObjectSets_CurrentLevel.Name", "PrimitiveObjectSets_CurrentLevel" },
		{ "PrimitiveObjectSets_CurrentLevel.ToolTip", "View primitive statistics for objects in the current level" },
		{ "PrimitiveObjectSets_SelectedObjects.DisplayName", "Selected Objects" },
		{ "PrimitiveObjectSets_SelectedObjects.Name", "PrimitiveObjectSets_SelectedObjects" },
		{ "PrimitiveObjectSets_SelectedObjects.ToolTip", "View primitive statistics for selected objects" },
		{ "ToolTip", "Enum defining the object sets for this stats object" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StatsViewer_EPrimitiveObjectSets_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StatsViewer,
		nullptr,
		"EPrimitiveObjectSets",
		"EPrimitiveObjectSets",
		Z_Construct_UEnum_StatsViewer_EPrimitiveObjectSets_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StatsViewer_EPrimitiveObjectSets_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_StatsViewer_EPrimitiveObjectSets_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StatsViewer_EPrimitiveObjectSets_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StatsViewer_EPrimitiveObjectSets()
	{
		if (!Z_Registration_Info_UEnum_EPrimitiveObjectSets.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPrimitiveObjectSets.InnerSingleton, Z_Construct_UEnum_StatsViewer_EPrimitiveObjectSets_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPrimitiveObjectSets.InnerSingleton;
	}
	void UPrimitiveStats::StaticRegisterNativesUPrimitiveStats()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPrimitiveStats);
	UClass* Z_Construct_UClass_UPrimitiveStats_NoRegister()
	{
		return UPrimitiveStats::StaticClass();
	}
	struct Z_Construct_UClass_UPrimitiveStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Object;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Sections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HWInstances_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HWInstances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstSections_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstSections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstTriangles_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstTriangles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ResourceSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorMem_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VertexColorMem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstVertexColorMem_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InstVertexColorMem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightsLM_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LightsLM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightsOther_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightsOther;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightsTotal_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightsTotal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjLightCost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ObjLightCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightMapData_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightMapData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LMSMResolution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LMSMResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadiusMin_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_RadiusMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadiusMax_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_RadiusMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadiusAvg_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_RadiusAvg;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPrimitiveStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsViewer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Statistics page for primitives.  */" },
		{ "DisplayName", "Primitive Stats" },
		{ "IncludePath", "PrimitiveStats.h" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ObjectSetType", "EPrimitiveObjectSets" },
		{ "ToolTip", "Statistics page for primitives." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "200" },
		{ "Comment", "/** Resource (e.g. UStaticMesh, USkeletalMesh, UModelComponent, UTerrainComponent, etc */" },
		{ "DisplayName", "Object" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ToolTip", "Resource (e.g. UStaticMesh, USkeletalMesh, UModelComponent, UTerrainComponent, etc" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0014010000020001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPrimitiveStats, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Object_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Actors_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "200" },
		{ "Comment", "/** Actor(s) that use the resource - click to select & zoom Actor(s) */" },
		{ "DisplayName", "Actor(s)" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ToolTip", "Actor(s) that use the resource - click to select & zoom Actor(s)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0014010000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPrimitiveStats, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Actors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "200" },
		{ "Comment", "/** Type name*/" },
		{ "DisplayName", "Type" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ToolTip", "Type name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPrimitiveStats, Type), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "86" },
		{ "Comment", "/** Number of occurrences in map */" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Number of occurrences in map" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPrimitiveStats, Count), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Sections_MetaData[] = {
		{ "Comment", "/** Section count of mesh */" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ToolTip", "Section count of mesh" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPrimitiveStats, Sections), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Sections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_HWInstances_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "102" },
		{ "Comment", "/** Hardware instances */" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Hardware instances" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_HWInstances = { "HWInstances", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPrimitiveStats, HWInstances), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_HWInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_HWInstances_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_InstSections_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "102" },
		{ "Comment", "/** Instanced section count of mesh */" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Instanced section count of mesh" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_InstSections = { "InstSections", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPrimitiveStats, InstSections), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_InstSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_InstSections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Triangles_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "74" },
		{ "Comment", "/** Triangle count of mesh */" },
		{ "DisplayName", "Tris" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Triangle count of mesh" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPrimitiveStats, Triangles), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Triangles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_InstTriangles_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "104" },
		{ "Comment", "/** Triangle count of all mesh occurances (Count * Tris) */" },
		{ "DisplayName", "Sum Tris" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Triangle count of all mesh occurances (Count * Tris)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_InstTriangles = { "InstTriangles", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPrimitiveStats, InstTriangles), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_InstTriangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_InstTriangles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_ResourceSize_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "78" },
		{ "Comment", "/** Resource size in KB */" },
		{ "DisplayName", "Size" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "SortMode", "Descending" },
		{ "ToolTip", "Resource size in KB" },
		{ "Unit", "KB" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_ResourceSize = { "ResourceSize", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPrimitiveStats, ResourceSize), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_ResourceSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_ResourceSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_VertexColorMem_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "68" },
		{ "Comment", "/** Vertex color stat for static and skeletal meshes in KB */" },
		{ "DisplayName", "VC" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Vertex color stat for static and skeletal meshes in KB" },
		{ "Unit", "KB" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_VertexColorMem = { "VertexColorMem", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPrimitiveStats, VertexColorMem), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_VertexColorMem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_VertexColorMem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_InstVertexColorMem_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "94" },
		{ "Comment", "/** Per component vertex color stat for static meshes in KB */" },
		{ "DisplayName", "Inst VC" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Per component vertex color stat for static meshes in KB" },
		{ "Unit", "KB" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_InstVertexColorMem = { "InstVertexColorMem", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPrimitiveStats, InstVertexColorMem), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_InstVertexColorMem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_InstVertexColorMem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightsLM_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "96" },
		{ "Comment", "/** Average number of lightmap lights relevant to each instance */" },
		{ "DisplayName", "Avg LM" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Average number of lightmap lights relevant to each instance" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightsLM = { "LightsLM", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPrimitiveStats, LightsLM), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightsLM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightsLM_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightsOther_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "94" },
		{ "Comment", "/** Average number of other lights relevant to each instance */" },
		{ "DisplayName", "Avg OL" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Average number of other lights relevant to each instance" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightsOther = { "LightsOther", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPrimitiveStats, LightsOther), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightsOther_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightsOther_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightsTotal_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "104" },
		{ "Comment", "/** (Avg OL + Avg LM) / Count */" },
		{ "DisplayName", "Sum Avg" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "(Avg OL + Avg LM) / Count" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightsTotal = { "LightsTotal", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPrimitiveStats, LightsTotal), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightsTotal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightsTotal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_ObjLightCost_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "78" },
		{ "Comment", "/** Avg OL * Sections */" },
		{ "DisplayName", "Cost" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Avg OL * Sections" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_ObjLightCost = { "ObjLightCost", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPrimitiveStats, ObjLightCost), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_ObjLightCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_ObjLightCost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightMapData_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "70" },
		{ "Comment", "/** Light map data in KB */" },
		{ "DisplayName", "LM" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Light map data in KB" },
		{ "Unit", "KB" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightMapData = { "LightMapData", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPrimitiveStats, LightMapData), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightMapData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightMapData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LMSMResolution_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "74" },
		{ "Comment", "/** Light/shadow map resolution */" },
		{ "DisplayName", "Res" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Light/shadow map resolution" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LMSMResolution = { "LMSMResolution", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPrimitiveStats, LMSMResolution), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LMSMResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LMSMResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_RadiusMin_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "84" },
		{ "Comment", "/** Minimum radius of bounding sphere of instance in map */" },
		{ "DisplayName", "Min R" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Minimum radius of bounding sphere of instance in map" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_RadiusMin = { "RadiusMin", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPrimitiveStats, RadiusMin), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_RadiusMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_RadiusMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_RadiusMax_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "88" },
		{ "Comment", "/** Maximum radius of bounding sphere of instance in map */" },
		{ "DisplayName", "Max R" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Maximum radius of bounding sphere of instance in map" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_RadiusMax = { "RadiusMax", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPrimitiveStats, RadiusMax), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_RadiusMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_RadiusMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_RadiusAvg_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "86" },
		{ "Comment", "/** Average radius of bounding sphere of instance in map */" },
		{ "DisplayName", "Avg R" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Average radius of bounding sphere of instance in map" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_RadiusAvg = { "RadiusAvg", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPrimitiveStats, RadiusAvg), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_RadiusAvg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_RadiusAvg_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPrimitiveStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Sections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_HWInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_InstSections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_InstTriangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_ResourceSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_VertexColorMem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_InstVertexColorMem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightsLM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightsOther,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightsTotal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_ObjLightCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightMapData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LMSMResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_RadiusMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_RadiusMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_RadiusAvg,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPrimitiveStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPrimitiveStats>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPrimitiveStats_Statics::ClassParams = {
		&UPrimitiveStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPrimitiveStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::PropPointers),
		0,
		0x000800A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPrimitiveStats()
	{
		if (!Z_Registration_Info_UClass_UPrimitiveStats.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPrimitiveStats.OuterSingleton, Z_Construct_UClass_UPrimitiveStats_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPrimitiveStats.OuterSingleton;
	}
	template<> STATSVIEWER_API UClass* StaticClass<UPrimitiveStats>()
	{
		return UPrimitiveStats::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPrimitiveStats);
	UPrimitiveStats::~UPrimitiveStats() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_Statics::EnumInfo[] = {
		{ EPrimitiveObjectSets_StaticEnum, TEXT("EPrimitiveObjectSets"), &Z_Registration_Info_UEnum_EPrimitiveObjectSets, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2420602093U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPrimitiveStats, UPrimitiveStats::StaticClass, TEXT("UPrimitiveStats"), &Z_Registration_Info_UClass_UPrimitiveStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPrimitiveStats), 1842427179U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_676751445(TEXT("/Script/StatsViewer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
