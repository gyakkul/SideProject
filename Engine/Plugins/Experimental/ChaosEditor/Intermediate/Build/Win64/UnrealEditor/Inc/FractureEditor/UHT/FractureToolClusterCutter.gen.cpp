// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/FractureToolClusterCutter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureToolClusterCutter() {}
// Cross Module References
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureClusterCutterSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureClusterCutterSettings_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolClusterCutter();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolClusterCutter_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolVoronoiCutterBase();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	void UFractureClusterCutterSettings::StaticRegisterNativesUFractureClusterCutterSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureClusterCutterSettings);
	UClass* Z_Construct_UClass_UFractureClusterCutterSettings_NoRegister()
	{
		return UFractureClusterCutterSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFractureClusterCutterSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberClustersMin_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberClustersMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberClustersMax_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberClustersMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SitesPerClusterMin_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SitesPerClusterMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SitesPerClusterMax_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SitesPerClusterMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterRadiusFractionMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClusterRadiusFractionMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterRadiusFractionMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClusterRadiusFractionMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterRadiusOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClusterRadiusOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureClusterCutterSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureClusterCutterSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FractureToolClusterCutter.h" },
		{ "ModuleRelativePath", "Private/FractureToolClusterCutter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_NumberClustersMin_MetaData[] = {
		{ "Category", "ClusterVoronoi" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Minimum number of clusters of Voronoi sites to create. The amount of clusters created will be chosen at random between Min and Max */" },
		{ "DisplayName", "Min Num Clusters" },
		{ "ModuleRelativePath", "Private/FractureToolClusterCutter.h" },
		{ "ToolTip", "Minimum number of clusters of Voronoi sites to create. The amount of clusters created will be chosen at random between Min and Max" },
		{ "UIMax", "200" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_NumberClustersMin = { "NumberClustersMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureClusterCutterSettings, NumberClustersMin), METADATA_PARAMS(Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_NumberClustersMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_NumberClustersMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_NumberClustersMax_MetaData[] = {
		{ "Category", "ClusterVoronoi" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Maximum number of clusters of Voronoi sites to create. The amount of clusters created will be chosen at random between Min and Max */" },
		{ "DisplayName", "Max Num Clusters" },
		{ "ModuleRelativePath", "Private/FractureToolClusterCutter.h" },
		{ "ToolTip", "Maximum number of clusters of Voronoi sites to create. The amount of clusters created will be chosen at random between Min and Max" },
		{ "UIMax", "200" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_NumberClustersMax = { "NumberClustersMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureClusterCutterSettings, NumberClustersMax), METADATA_PARAMS(Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_NumberClustersMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_NumberClustersMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_SitesPerClusterMin_MetaData[] = {
		{ "Category", "ClusterVoronoi" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Minimum number of Voronoi sites per cluster. The amount of sites in each cluster will be chosen at random between Min and Max */" },
		{ "DisplayName", "Min Sites Per Cluster" },
		{ "ModuleRelativePath", "Private/FractureToolClusterCutter.h" },
		{ "ToolTip", "Minimum number of Voronoi sites per cluster. The amount of sites in each cluster will be chosen at random between Min and Max" },
		{ "UIMax", "200" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_SitesPerClusterMin = { "SitesPerClusterMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureClusterCutterSettings, SitesPerClusterMin), METADATA_PARAMS(Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_SitesPerClusterMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_SitesPerClusterMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_SitesPerClusterMax_MetaData[] = {
		{ "Category", "ClusterVoronoi" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum number of Voronoi sites per cluster. The amount of sites in each cluster will be chosen at random between Min and Max */" },
		{ "DisplayName", "Max Sites Per Cluster" },
		{ "ModuleRelativePath", "Private/FractureToolClusterCutter.h" },
		{ "ToolTip", "Maximum number of Voronoi sites per cluster. The amount of sites in each cluster will be chosen at random between Min and Max" },
		{ "UIMax", "200" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_SitesPerClusterMax = { "SitesPerClusterMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureClusterCutterSettings, SitesPerClusterMax), METADATA_PARAMS(Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_SitesPerClusterMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_SitesPerClusterMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_ClusterRadiusFractionMin_MetaData[] = {
		{ "Category", "ClusterVoronoi" },
		{ "Comment", "/**\n\x09 * Minimum cluster radius (as fraction of the overall Voronoi diagram size). Cluster Radius Offset will be added to this\n\x09 * Each Voronoi site will be placed at least this far (plus the Cluster Radius Offset) from its cluster center\n\x09 */" },
		{ "DisplayName", "Min Dist from Center (as Frac of Bounds)" },
		{ "ModuleRelativePath", "Private/FractureToolClusterCutter.h" },
		{ "ToolTip", "Minimum cluster radius (as fraction of the overall Voronoi diagram size). Cluster Radius Offset will be added to this\nEach Voronoi site will be placed at least this far (plus the Cluster Radius Offset) from its cluster center" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_ClusterRadiusFractionMin = { "ClusterRadiusFractionMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureClusterCutterSettings, ClusterRadiusFractionMin), METADATA_PARAMS(Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_ClusterRadiusFractionMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_ClusterRadiusFractionMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_ClusterRadiusFractionMax_MetaData[] = {
		{ "Category", "ClusterVoronoi" },
		{ "Comment", "/**\n\x09 * Maximum cluster radius (as fraction of the overall Voronoi diagram size). Cluster Radius Offset will be added to this\n\x09 * Each Voronoi site will be placed at most this far (plus the Cluster Radius Offset) from its cluster center\n\x09 */" },
		{ "DisplayName", "Max Dist from Center (as Frac of Bounds)" },
		{ "ModuleRelativePath", "Private/FractureToolClusterCutter.h" },
		{ "ToolTip", "Maximum cluster radius (as fraction of the overall Voronoi diagram size). Cluster Radius Offset will be added to this\nEach Voronoi site will be placed at most this far (plus the Cluster Radius Offset) from its cluster center" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_ClusterRadiusFractionMax = { "ClusterRadiusFractionMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureClusterCutterSettings, ClusterRadiusFractionMax), METADATA_PARAMS(Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_ClusterRadiusFractionMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_ClusterRadiusFractionMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_ClusterRadiusOffset_MetaData[] = {
		{ "Category", "ClusterVoronoi" },
		{ "Comment", "/** Cluster radius offset (in cm). This offset will be added to the 'Min/Max Dist from Center' distance */" },
		{ "ModuleRelativePath", "Private/FractureToolClusterCutter.h" },
		{ "ToolTip", "Cluster radius offset (in cm). This offset will be added to the 'Min/Max Dist from Center' distance" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_ClusterRadiusOffset = { "ClusterRadiusOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureClusterCutterSettings, ClusterRadiusOffset), METADATA_PARAMS(Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_ClusterRadiusOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_ClusterRadiusOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureClusterCutterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_NumberClustersMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_NumberClustersMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_SitesPerClusterMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_SitesPerClusterMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_ClusterRadiusFractionMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_ClusterRadiusFractionMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureClusterCutterSettings_Statics::NewProp_ClusterRadiusOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureClusterCutterSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureClusterCutterSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureClusterCutterSettings_Statics::ClassParams = {
		&UFractureClusterCutterSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureClusterCutterSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureClusterCutterSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureClusterCutterSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureClusterCutterSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureClusterCutterSettings()
	{
		if (!Z_Registration_Info_UClass_UFractureClusterCutterSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureClusterCutterSettings.OuterSingleton, Z_Construct_UClass_UFractureClusterCutterSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureClusterCutterSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureClusterCutterSettings>()
	{
		return UFractureClusterCutterSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureClusterCutterSettings);
	UFractureClusterCutterSettings::~UFractureClusterCutterSettings() {}
	void UFractureToolClusterCutter::StaticRegisterNativesUFractureToolClusterCutter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolClusterCutter);
	UClass* Z_Construct_UClass_UFractureToolClusterCutter_NoRegister()
	{
		return UFractureToolClusterCutter::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolClusterCutter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClusterSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolClusterCutter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolVoronoiCutterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolClusterCutter_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "Cluster Voronoi" },
		{ "IncludePath", "FractureToolClusterCutter.h" },
		{ "ModuleRelativePath", "Private/FractureToolClusterCutter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolClusterCutter_Statics::NewProp_ClusterSettings_MetaData[] = {
		{ "Category", "Cluster" },
		{ "ModuleRelativePath", "Private/FractureToolClusterCutter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolClusterCutter_Statics::NewProp_ClusterSettings = { "ClusterSettings", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolClusterCutter, ClusterSettings), Z_Construct_UClass_UFractureClusterCutterSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolClusterCutter_Statics::NewProp_ClusterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolClusterCutter_Statics::NewProp_ClusterSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureToolClusterCutter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolClusterCutter_Statics::NewProp_ClusterSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolClusterCutter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolClusterCutter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolClusterCutter_Statics::ClassParams = {
		&UFractureToolClusterCutter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureToolClusterCutter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolClusterCutter_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolClusterCutter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolClusterCutter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolClusterCutter()
	{
		if (!Z_Registration_Info_UClass_UFractureToolClusterCutter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolClusterCutter.OuterSingleton, Z_Construct_UClass_UFractureToolClusterCutter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolClusterCutter.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolClusterCutter>()
	{
		return UFractureToolClusterCutter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolClusterCutter);
	UFractureToolClusterCutter::~UFractureToolClusterCutter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolClusterCutter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolClusterCutter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFractureClusterCutterSettings, UFractureClusterCutterSettings::StaticClass, TEXT("UFractureClusterCutterSettings"), &Z_Registration_Info_UClass_UFractureClusterCutterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureClusterCutterSettings), 1688608815U) },
		{ Z_Construct_UClass_UFractureToolClusterCutter, UFractureToolClusterCutter::StaticClass, TEXT("UFractureToolClusterCutter"), &Z_Registration_Info_UClass_UFractureToolClusterCutter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolClusterCutter), 1419072273U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolClusterCutter_h_3915118794(TEXT("/Script/FractureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolClusterCutter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolClusterCutter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
