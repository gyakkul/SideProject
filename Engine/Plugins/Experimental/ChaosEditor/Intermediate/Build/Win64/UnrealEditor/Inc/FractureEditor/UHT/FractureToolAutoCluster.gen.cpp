// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/FractureToolAutoCluster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureToolAutoCluster() {}
// Cross Module References
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureAutoClusterSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureAutoClusterSettings_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureModalTool();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolAutoCluster();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolAutoCluster_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSettings();
	FRACTUREEDITOR_API UEnum* Z_Construct_UEnum_FractureEditor_EClusterSizeMethod();
	FRACTUREEDITOR_API UEnum* Z_Construct_UEnum_FractureEditor_EFractureAutoClusterMode();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFractureAutoClusterMode;
	static UEnum* EFractureAutoClusterMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFractureAutoClusterMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFractureAutoClusterMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FractureEditor_EFractureAutoClusterMode, (UObject*)Z_Construct_UPackage__Script_FractureEditor(), TEXT("EFractureAutoClusterMode"));
		}
		return Z_Registration_Info_UEnum_EFractureAutoClusterMode.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UEnum* StaticEnum<EFractureAutoClusterMode>()
	{
		return EFractureAutoClusterMode_StaticEnum();
	}
	struct Z_Construct_UEnum_FractureEditor_EFractureAutoClusterMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FractureEditor_EFractureAutoClusterMode_Statics::Enumerators[] = {
		{ "EFractureAutoClusterMode::BoundingBox", (int64)EFractureAutoClusterMode::BoundingBox },
		{ "EFractureAutoClusterMode::Proximity", (int64)EFractureAutoClusterMode::Proximity },
		{ "EFractureAutoClusterMode::Distance", (int64)EFractureAutoClusterMode::Distance },
		{ "EFractureAutoClusterMode::Voronoi", (int64)EFractureAutoClusterMode::Voronoi },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FractureEditor_EFractureAutoClusterMode_Statics::Enum_MetaDataParams[] = {
		{ "BoundingBox.Comment", "/** Overlapping bounding box*/" },
		{ "BoundingBox.DisplayName", "Bounding Box" },
		{ "BoundingBox.Name", "EFractureAutoClusterMode::BoundingBox" },
		{ "BoundingBox.ToolTip", "Overlapping bounding box" },
		{ "Comment", "// Note: Only Voronoi-based auto-clustering is currently supported\n" },
		{ "Distance.Comment", "/** Distance */" },
		{ "Distance.DisplayName", "Distance" },
		{ "Distance.Name", "EFractureAutoClusterMode::Distance" },
		{ "Distance.ToolTip", "Distance" },
		{ "ModuleRelativePath", "Private/FractureToolAutoCluster.h" },
		{ "Proximity.Comment", "/** GC connectivity */" },
		{ "Proximity.DisplayName", "Proximity" },
		{ "Proximity.Name", "EFractureAutoClusterMode::Proximity" },
		{ "Proximity.ToolTip", "GC connectivity" },
		{ "ToolTip", "Note: Only Voronoi-based auto-clustering is currently supported" },
		{ "Voronoi.DisplayName", "Voronoi" },
		{ "Voronoi.Name", "EFractureAutoClusterMode::Voronoi" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FractureEditor_EFractureAutoClusterMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FractureEditor,
		nullptr,
		"EFractureAutoClusterMode",
		"EFractureAutoClusterMode",
		Z_Construct_UEnum_FractureEditor_EFractureAutoClusterMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EFractureAutoClusterMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FractureEditor_EFractureAutoClusterMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EFractureAutoClusterMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FractureEditor_EFractureAutoClusterMode()
	{
		if (!Z_Registration_Info_UEnum_EFractureAutoClusterMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFractureAutoClusterMode.InnerSingleton, Z_Construct_UEnum_FractureEditor_EFractureAutoClusterMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFractureAutoClusterMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClusterSizeMethod;
	static UEnum* EClusterSizeMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EClusterSizeMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EClusterSizeMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FractureEditor_EClusterSizeMethod, (UObject*)Z_Construct_UPackage__Script_FractureEditor(), TEXT("EClusterSizeMethod"));
		}
		return Z_Registration_Info_UEnum_EClusterSizeMethod.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UEnum* StaticEnum<EClusterSizeMethod>()
	{
		return EClusterSizeMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_FractureEditor_EClusterSizeMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FractureEditor_EClusterSizeMethod_Statics::Enumerators[] = {
		{ "EClusterSizeMethod::ByNumber", (int64)EClusterSizeMethod::ByNumber },
		{ "EClusterSizeMethod::ByFractionOfInput", (int64)EClusterSizeMethod::ByFractionOfInput },
		{ "EClusterSizeMethod::BySize", (int64)EClusterSizeMethod::BySize },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FractureEditor_EClusterSizeMethod_Statics::Enum_MetaDataParams[] = {
		{ "ByFractionOfInput.Comment", "// Cluster by specifying a fraction of the number of input bones\n" },
		{ "ByFractionOfInput.Name", "EClusterSizeMethod::ByFractionOfInput" },
		{ "ByFractionOfInput.ToolTip", "Cluster by specifying a fraction of the number of input bones" },
		{ "ByNumber.Comment", "// Cluster by specifying an absolute number of clusters\n" },
		{ "ByNumber.Name", "EClusterSizeMethod::ByNumber" },
		{ "ByNumber.ToolTip", "Cluster by specifying an absolute number of clusters" },
		{ "BySize.Comment", "// Cluster by specifying the density of the input bones\n" },
		{ "BySize.Name", "EClusterSizeMethod::BySize" },
		{ "BySize.ToolTip", "Cluster by specifying the density of the input bones" },
		{ "ModuleRelativePath", "Private/FractureToolAutoCluster.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FractureEditor_EClusterSizeMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FractureEditor,
		nullptr,
		"EClusterSizeMethod",
		"EClusterSizeMethod",
		Z_Construct_UEnum_FractureEditor_EClusterSizeMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EClusterSizeMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FractureEditor_EClusterSizeMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EClusterSizeMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FractureEditor_EClusterSizeMethod()
	{
		if (!Z_Registration_Info_UEnum_EClusterSizeMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClusterSizeMethod.InnerSingleton, Z_Construct_UEnum_FractureEditor_EClusterSizeMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EClusterSizeMethod.InnerSingleton;
	}
	void UFractureAutoClusterSettings::StaticRegisterNativesUFractureAutoClusterSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureAutoClusterSettings);
	UClass* Z_Construct_UClass_UFractureAutoClusterSettings_NoRegister()
	{
		return UFractureAutoClusterSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFractureAutoClusterSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoClusterMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoClusterMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoClusterMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClusterSizeMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterSizeMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ClusterSizeMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SiteCount_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_SiteCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SiteCountFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SiteCountFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SiteSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SiteSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnforceConnectivity_MetaData[];
#endif
		static void NewProp_bEnforceConnectivity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnforceConnectivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAvoidIsolated_MetaData[];
#endif
		static void NewProp_bAvoidIsolated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAvoidIsolated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureAutoClusterSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoClusterSettings_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "Auto Cluster" },
		{ "IncludePath", "FractureToolAutoCluster.h" },
		{ "ModuleRelativePath", "Private/FractureToolAutoCluster.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_AutoClusterMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_AutoClusterMode_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Simplified interface now only supports Voronoi clustering." },
		{ "ModuleRelativePath", "Private/FractureToolAutoCluster.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_AutoClusterMode = { "AutoClusterMode", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureAutoClusterSettings, AutoClusterMode_DEPRECATED), Z_Construct_UEnum_FractureEditor_EFractureAutoClusterMode, METADATA_PARAMS(Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_AutoClusterMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_AutoClusterMode_MetaData)) }; // 1070483322
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_ClusterSizeMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_ClusterSizeMethod_MetaData[] = {
		{ "Category", "ClusterSize" },
		{ "Comment", "/** How to choose the size of the clusters to create */" },
		{ "ModuleRelativePath", "Private/FractureToolAutoCluster.h" },
		{ "ToolTip", "How to choose the size of the clusters to create" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_ClusterSizeMethod = { "ClusterSizeMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureAutoClusterSettings, ClusterSizeMethod), Z_Construct_UEnum_FractureEditor_EClusterSizeMethod, METADATA_PARAMS(Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_ClusterSizeMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_ClusterSizeMethod_MetaData)) }; // 99397144
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_SiteCount_MetaData[] = {
		{ "Category", "ClusterSize" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Use a Voronoi diagram with this many Voronoi sites as a guide for deciding cluster boundaries */" },
		{ "DisplayName", "Cluster Sites" },
		{ "EditCondition", "ClusterSizeMethod == EClusterSizeMethod::ByNumber" },
		{ "ModuleRelativePath", "Private/FractureToolAutoCluster.h" },
		{ "ToolTip", "Use a Voronoi diagram with this many Voronoi sites as a guide for deciding cluster boundaries" },
		{ "UIMax", "5000" },
		{ "UIMin", "2" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_SiteCount = { "SiteCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureAutoClusterSettings, SiteCount), METADATA_PARAMS(Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_SiteCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_SiteCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_SiteCountFraction_MetaData[] = {
		{ "Category", "ClusterSize" },
		{ "ClampMax", ".5" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Choose the number of Voronoi sites used for clustering as a fraction of the number of child bones to process */" },
		{ "DisplayName", "Cluster Fraction" },
		{ "EditCondition", "ClusterSizeMethod == EClusterSizeMethod::ByFractionOfInput" },
		{ "ModuleRelativePath", "Private/FractureToolAutoCluster.h" },
		{ "ToolTip", "Choose the number of Voronoi sites used for clustering as a fraction of the number of child bones to process" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_SiteCountFraction = { "SiteCountFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureAutoClusterSettings, SiteCountFraction), METADATA_PARAMS(Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_SiteCountFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_SiteCountFraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_SiteSize_MetaData[] = {
		{ "Category", "ClusterSize" },
		{ "ClampMax", "10000" },
		{ "ClampMin", ".0001" },
		{ "Comment", "/** Choose the Edge-Size of the cube used to groups bones under a cluster (in cm). */" },
		{ "DisplayName", "Cluster Size" },
		{ "EditCondition", "ClusterSizeMethod == EClusterSizeMethod::BySize" },
		{ "ModuleRelativePath", "Private/FractureToolAutoCluster.h" },
		{ "ToolTip", "Choose the Edge-Size of the cube used to groups bones under a cluster (in cm)." },
		{ "UIMax", "100" },
		{ "UIMin", ".01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_SiteSize = { "SiteSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureAutoClusterSettings, SiteSize), METADATA_PARAMS(Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_SiteSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_SiteSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_bEnforceConnectivity_MetaData[] = {
		{ "Category", "AutoCluster" },
		{ "Comment", "/** If true, bones will only be added to the same cluster if they are physically connected (either directly, or via other bones in the same cluster) */" },
		{ "DisplayName", "Enforce Cluster Connectivity" },
		{ "ModuleRelativePath", "Private/FractureToolAutoCluster.h" },
		{ "ToolTip", "If true, bones will only be added to the same cluster if they are physically connected (either directly, or via other bones in the same cluster)" },
	};
#endif
	void Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_bEnforceConnectivity_SetBit(void* Obj)
	{
		((UFractureAutoClusterSettings*)Obj)->bEnforceConnectivity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_bEnforceConnectivity = { "bEnforceConnectivity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureAutoClusterSettings), &Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_bEnforceConnectivity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_bEnforceConnectivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_bEnforceConnectivity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_bAvoidIsolated_MetaData[] = {
		{ "Category", "AutoCluster" },
		{ "Comment", "/** If true, prevent the creation of clusters with only a single child. Either by merging into a neighboring cluster, or not creating the cluster. */" },
		{ "ModuleRelativePath", "Private/FractureToolAutoCluster.h" },
		{ "ToolTip", "If true, prevent the creation of clusters with only a single child. Either by merging into a neighboring cluster, or not creating the cluster." },
	};
#endif
	void Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_bAvoidIsolated_SetBit(void* Obj)
	{
		((UFractureAutoClusterSettings*)Obj)->bAvoidIsolated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_bAvoidIsolated = { "bAvoidIsolated", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureAutoClusterSettings), &Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_bAvoidIsolated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_bAvoidIsolated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_bAvoidIsolated_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureAutoClusterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_AutoClusterMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_AutoClusterMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_ClusterSizeMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_ClusterSizeMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_SiteCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_SiteCountFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_SiteSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_bEnforceConnectivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoClusterSettings_Statics::NewProp_bAvoidIsolated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureAutoClusterSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureAutoClusterSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureAutoClusterSettings_Statics::ClassParams = {
		&UFractureAutoClusterSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureAutoClusterSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoClusterSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureAutoClusterSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoClusterSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureAutoClusterSettings()
	{
		if (!Z_Registration_Info_UClass_UFractureAutoClusterSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureAutoClusterSettings.OuterSingleton, Z_Construct_UClass_UFractureAutoClusterSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureAutoClusterSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureAutoClusterSettings>()
	{
		return UFractureAutoClusterSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureAutoClusterSettings);
	UFractureAutoClusterSettings::~UFractureAutoClusterSettings() {}
	void UFractureToolAutoCluster::StaticRegisterNativesUFractureToolAutoCluster()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolAutoCluster);
	UClass* Z_Construct_UClass_UFractureToolAutoCluster_NoRegister()
	{
		return UFractureToolAutoCluster::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolAutoCluster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoClusterSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AutoClusterSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolAutoCluster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureModalTool,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolAutoCluster_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "AutoCluster" },
		{ "IncludePath", "FractureToolAutoCluster.h" },
		{ "ModuleRelativePath", "Private/FractureToolAutoCluster.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolAutoCluster_Statics::NewProp_AutoClusterSettings_MetaData[] = {
		{ "Category", "AutoCluster" },
		{ "ModuleRelativePath", "Private/FractureToolAutoCluster.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolAutoCluster_Statics::NewProp_AutoClusterSettings = { "AutoClusterSettings", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolAutoCluster, AutoClusterSettings), Z_Construct_UClass_UFractureAutoClusterSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolAutoCluster_Statics::NewProp_AutoClusterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolAutoCluster_Statics::NewProp_AutoClusterSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureToolAutoCluster_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolAutoCluster_Statics::NewProp_AutoClusterSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolAutoCluster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolAutoCluster>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolAutoCluster_Statics::ClassParams = {
		&UFractureToolAutoCluster::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureToolAutoCluster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolAutoCluster_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolAutoCluster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolAutoCluster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolAutoCluster()
	{
		if (!Z_Registration_Info_UClass_UFractureToolAutoCluster.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolAutoCluster.OuterSingleton, Z_Construct_UClass_UFractureToolAutoCluster_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolAutoCluster.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolAutoCluster>()
	{
		return UFractureToolAutoCluster::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolAutoCluster);
	UFractureToolAutoCluster::~UFractureToolAutoCluster() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolAutoCluster_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolAutoCluster_h_Statics::EnumInfo[] = {
		{ EFractureAutoClusterMode_StaticEnum, TEXT("EFractureAutoClusterMode"), &Z_Registration_Info_UEnum_EFractureAutoClusterMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1070483322U) },
		{ EClusterSizeMethod_StaticEnum, TEXT("EClusterSizeMethod"), &Z_Registration_Info_UEnum_EClusterSizeMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 99397144U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolAutoCluster_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFractureAutoClusterSettings, UFractureAutoClusterSettings::StaticClass, TEXT("UFractureAutoClusterSettings"), &Z_Registration_Info_UClass_UFractureAutoClusterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureAutoClusterSettings), 393867456U) },
		{ Z_Construct_UClass_UFractureToolAutoCluster, UFractureToolAutoCluster::StaticClass, TEXT("UFractureToolAutoCluster"), &Z_Registration_Info_UClass_UFractureToolAutoCluster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolAutoCluster), 3439097406U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolAutoCluster_h_1453614159(TEXT("/Script/FractureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolAutoCluster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolAutoCluster_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolAutoCluster_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolAutoCluster_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
