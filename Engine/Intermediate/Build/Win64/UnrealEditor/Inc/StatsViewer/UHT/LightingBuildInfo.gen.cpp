// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightingBuildInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightingBuildInfo() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STATSVIEWER_API UClass* Z_Construct_UClass_ULightingBuildInfo();
	STATSVIEWER_API UClass* Z_Construct_UClass_ULightingBuildInfo_NoRegister();
	STATSVIEWER_API UEnum* Z_Construct_UEnum_StatsViewer_ELightingBuildInfoObjectSets();
	UPackage* Z_Construct_UPackage__Script_StatsViewer();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELightingBuildInfoObjectSets;
	static UEnum* ELightingBuildInfoObjectSets_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELightingBuildInfoObjectSets.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELightingBuildInfoObjectSets.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StatsViewer_ELightingBuildInfoObjectSets, (UObject*)Z_Construct_UPackage__Script_StatsViewer(), TEXT("ELightingBuildInfoObjectSets"));
		}
		return Z_Registration_Info_UEnum_ELightingBuildInfoObjectSets.OuterSingleton;
	}
	template<> STATSVIEWER_API UEnum* StaticEnum<ELightingBuildInfoObjectSets>()
	{
		return ELightingBuildInfoObjectSets_StaticEnum();
	}
	struct Z_Construct_UEnum_StatsViewer_ELightingBuildInfoObjectSets_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StatsViewer_ELightingBuildInfoObjectSets_Statics::Enumerators[] = {
		{ "LightingBuildInfoObjectSets_Default", (int64)LightingBuildInfoObjectSets_Default },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StatsViewer_ELightingBuildInfoObjectSets_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Enum defining the object sets for this stats object */" },
		{ "LightingBuildInfoObjectSets_Default.DisplayName", "Default" },
		{ "LightingBuildInfoObjectSets_Default.Name", "LightingBuildInfoObjectSets_Default" },
		{ "LightingBuildInfoObjectSets_Default.ToolTip", "View lighting build statistics" },
		{ "ModuleRelativePath", "Classes/LightingBuildInfo.h" },
		{ "ToolTip", "Enum defining the object sets for this stats object" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StatsViewer_ELightingBuildInfoObjectSets_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StatsViewer,
		nullptr,
		"ELightingBuildInfoObjectSets",
		"ELightingBuildInfoObjectSets",
		Z_Construct_UEnum_StatsViewer_ELightingBuildInfoObjectSets_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StatsViewer_ELightingBuildInfoObjectSets_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_StatsViewer_ELightingBuildInfoObjectSets_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StatsViewer_ELightingBuildInfoObjectSets_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StatsViewer_ELightingBuildInfoObjectSets()
	{
		if (!Z_Registration_Info_UEnum_ELightingBuildInfoObjectSets.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELightingBuildInfoObjectSets.InnerSingleton, Z_Construct_UEnum_StatsViewer_ELightingBuildInfoObjectSets_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELightingBuildInfoObjectSets.InnerSingleton;
	}
	void ULightingBuildInfo::StaticRegisterNativesULightingBuildInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULightingBuildInfo);
	UClass* Z_Construct_UClass_ULightingBuildInfo_NoRegister()
	{
		return ULightingBuildInfo::StaticClass();
	}
	struct Z_Construct_UClass_ULightingBuildInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightingTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightingTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnmappedTexelsPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnmappedTexelsPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnmappedTexelsMemory_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnmappedTexelsMemory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalTexelMemory_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalTexelMemory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LevelName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightingBuildInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsViewer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingBuildInfo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Statistics page for lighting. */" },
		{ "DisplayName", "Lighting Build Info" },
		{ "IncludePath", "LightingBuildInfo.h" },
		{ "ModuleRelativePath", "Classes/LightingBuildInfo.h" },
		{ "ObjectSetType", "ELightingBuildInfoObjectSets" },
		{ "ToolTip", "Statistics page for lighting." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "150" },
		{ "Comment", "/** The actor and/or object that is related to this info. */" },
		{ "ModuleRelativePath", "Classes/LightingBuildInfo.h" },
		{ "ToolTip", "The actor and/or object that is related to this info." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0014010000020001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightingBuildInfo, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_Object_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_LightingTime_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "200" },
		{ "Comment", "/** The lighting time this object took. */" },
		{ "ModuleRelativePath", "Classes/LightingBuildInfo.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "The lighting time this object took." },
		{ "Unit", "s" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_LightingTime = { "LightingTime", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightingBuildInfo, LightingTime), METADATA_PARAMS(Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_LightingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_LightingTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_UnmappedTexelsPercentage_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "142" },
		{ "Comment", "/** The percentage of unmapped texels for this object. */" },
		{ "DisplayName", "Unmapped Texels" },
		{ "ModuleRelativePath", "Classes/LightingBuildInfo.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "The percentage of unmapped texels for this object." },
		{ "Unit", "%" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_UnmappedTexelsPercentage = { "UnmappedTexelsPercentage", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightingBuildInfo, UnmappedTexelsPercentage), METADATA_PARAMS(Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_UnmappedTexelsPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_UnmappedTexelsPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_UnmappedTexelsMemory_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "194" },
		{ "Comment", "/** The memory consumed by unmapped texels for this object, in KB */" },
		{ "ModuleRelativePath", "Classes/LightingBuildInfo.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "The memory consumed by unmapped texels for this object, in KB" },
		{ "Unit", "KB" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_UnmappedTexelsMemory = { "UnmappedTexelsMemory", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightingBuildInfo, UnmappedTexelsMemory), METADATA_PARAMS(Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_UnmappedTexelsMemory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_UnmappedTexelsMemory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_TotalTexelMemory_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "220" },
		{ "Comment", "/** The memory consumed by all texels for this object, in KB */" },
		{ "ModuleRelativePath", "Classes/LightingBuildInfo.h" },
		{ "ShowTotal", "true" },
		{ "SortMode", "Descending" },
		{ "ToolTip", "The memory consumed by all texels for this object, in KB" },
		{ "Unit", "KB" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_TotalTexelMemory = { "TotalTexelMemory", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightingBuildInfo, TotalTexelMemory), METADATA_PARAMS(Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_TotalTexelMemory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_TotalTexelMemory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_LevelName_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "168" },
		{ "Comment", "/** The name of the level this object resides in */" },
		{ "ModuleRelativePath", "Classes/LightingBuildInfo.h" },
		{ "ToolTip", "The name of the level this object resides in" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightingBuildInfo, LevelName), METADATA_PARAMS(Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_LevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_LevelName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightingBuildInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_LightingTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_UnmappedTexelsPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_UnmappedTexelsMemory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_TotalTexelMemory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_LevelName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightingBuildInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightingBuildInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULightingBuildInfo_Statics::ClassParams = {
		&ULightingBuildInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULightingBuildInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULightingBuildInfo_Statics::PropPointers),
		0,
		0x000800A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULightingBuildInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightingBuildInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightingBuildInfo()
	{
		if (!Z_Registration_Info_UClass_ULightingBuildInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULightingBuildInfo.OuterSingleton, Z_Construct_UClass_ULightingBuildInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULightingBuildInfo.OuterSingleton;
	}
	template<> STATSVIEWER_API UClass* StaticClass<ULightingBuildInfo>()
	{
		return ULightingBuildInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightingBuildInfo);
	ULightingBuildInfo::~ULightingBuildInfo() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_Statics::EnumInfo[] = {
		{ ELightingBuildInfoObjectSets_StaticEnum, TEXT("ELightingBuildInfoObjectSets"), &Z_Registration_Info_UEnum_ELightingBuildInfoObjectSets, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2663993494U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULightingBuildInfo, ULightingBuildInfo::StaticClass, TEXT("ULightingBuildInfo"), &Z_Registration_Info_UClass_ULightingBuildInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULightingBuildInfo), 3775437798U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_3316167261(TEXT("/Script/StatsViewer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
