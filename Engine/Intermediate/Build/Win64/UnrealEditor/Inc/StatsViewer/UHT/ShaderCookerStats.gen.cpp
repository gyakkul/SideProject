// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShaderCookerStats.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShaderCookerStats() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	STATSVIEWER_API UClass* Z_Construct_UClass_UShaderCookerStats();
	STATSVIEWER_API UClass* Z_Construct_UClass_UShaderCookerStats_NoRegister();
	STATSVIEWER_API UEnum* Z_Construct_UEnum_StatsViewer_EShaderCookerStatsSets();
	UPackage* Z_Construct_UPackage__Script_StatsViewer();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EShaderCookerStatsSets;
	static UEnum* EShaderCookerStatsSets_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EShaderCookerStatsSets.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EShaderCookerStatsSets.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StatsViewer_EShaderCookerStatsSets, (UObject*)Z_Construct_UPackage__Script_StatsViewer(), TEXT("EShaderCookerStatsSets"));
		}
		return Z_Registration_Info_UEnum_EShaderCookerStatsSets.OuterSingleton;
	}
	template<> STATSVIEWER_API UEnum* StaticEnum<EShaderCookerStatsSets>()
	{
		return EShaderCookerStatsSets_StaticEnum();
	}
	struct Z_Construct_UEnum_StatsViewer_EShaderCookerStatsSets_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StatsViewer_EShaderCookerStatsSets_Statics::Enumerators[] = {
		{ "EShaderCookerStatsSets_Default", (int64)EShaderCookerStatsSets_Default },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StatsViewer_EShaderCookerStatsSets_Statics::Enum_MetaDataParams[] = {
		{ "EShaderCookerStatsSets_Default.DisplayName", "Default" },
		{ "EShaderCookerStatsSets_Default.Name", "EShaderCookerStatsSets_Default" },
		{ "EShaderCookerStatsSets_Default.ToolTip", "Shader Cooker Sets" },
		{ "ModuleRelativePath", "Classes/ShaderCookerStats.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StatsViewer_EShaderCookerStatsSets_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StatsViewer,
		nullptr,
		"EShaderCookerStatsSets",
		"EShaderCookerStatsSets",
		Z_Construct_UEnum_StatsViewer_EShaderCookerStatsSets_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StatsViewer_EShaderCookerStatsSets_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_StatsViewer_EShaderCookerStatsSets_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StatsViewer_EShaderCookerStatsSets_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StatsViewer_EShaderCookerStatsSets()
	{
		if (!Z_Registration_Info_UEnum_EShaderCookerStatsSets.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EShaderCookerStatsSets.InnerSingleton, Z_Construct_UEnum_StatsViewer_EShaderCookerStatsSets_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EShaderCookerStatsSets.InnerSingleton;
	}
	void UShaderCookerStats::StaticRegisterNativesUShaderCookerStats()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShaderCookerStats);
	UClass* Z_Construct_UClass_UShaderCookerStats_NoRegister()
	{
		return UShaderCookerStats::StaticClass();
	}
	struct Z_Construct_UClass_UShaderCookerStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Platform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Compiled_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Compiled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cooked_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Cooked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Permutations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Permutations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompileTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CompileTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShaderCookerStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsViewer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShaderCookerStats_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Statistics page for shader cooker stats. */" },
		{ "DisplayName", "Shader Cooker Stats" },
		{ "IncludePath", "ShaderCookerStats.h" },
		{ "ModuleRelativePath", "Classes/ShaderCookerStats.h" },
		{ "ObjectSetType", "EShaderCookerStatsSets" },
		{ "ToolTip", "Statistics page for shader cooker stats." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "200" },
		{ "Comment", "/** Material name */" },
		{ "ModuleRelativePath", "Classes/ShaderCookerStats.h" },
		{ "ToolTip", "Material name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShaderCookerStats, Name), METADATA_PARAMS(Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Platform_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "50" },
		{ "Comment", "/** Material platform */" },
		{ "ModuleRelativePath", "Classes/ShaderCookerStats.h" },
		{ "ToolTip", "Material platform" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShaderCookerStats, Platform), METADATA_PARAMS(Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Platform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "50" },
		{ "ModuleRelativePath", "Classes/ShaderCookerStats.h" },
		{ "ToolTip", "Material Category. Edit Engine/Config/ShaderConfiguration.csv & Engine/Config/ShaderConfiguration.csv to configure" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShaderCookerStats, Category), METADATA_PARAMS(Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Compiled_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "74" },
		{ "DisplayName", "Compiled" },
		{ "ModuleRelativePath", "Classes/ShaderCookerStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Number of shaders that was actually compiled and not present in the DDC" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Compiled = { "Compiled", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShaderCookerStats, Compiled), METADATA_PARAMS(Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Compiled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Compiled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Cooked_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "74" },
		{ "DisplayName", "Cooked" },
		{ "ModuleRelativePath", "Classes/ShaderCookerStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Total number of shaders cooked" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Cooked = { "Cooked", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShaderCookerStats, Cooked), METADATA_PARAMS(Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Cooked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Cooked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Permutations_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "74" },
		{ "DisplayName", "Permutations" },
		{ "ModuleRelativePath", "Classes/ShaderCookerStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Number of material permutations generated by switch etc." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Permutations = { "Permutations", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShaderCookerStats, Permutations), METADATA_PARAMS(Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Permutations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Permutations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_CompileTime_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "74" },
		{ "DisplayName", "Compile Time" },
		{ "ModuleRelativePath", "Classes/ShaderCookerStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Cpu time spent compiling shaders not in DDC" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_CompileTime = { "CompileTime", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShaderCookerStats, CompileTime), METADATA_PARAMS(Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_CompileTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_CompileTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "200" },
		{ "Comment", "/** Material path */" },
		{ "ModuleRelativePath", "Classes/ShaderCookerStats.h" },
		{ "ToolTip", "Material path" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShaderCookerStats, Path), METADATA_PARAMS(Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Path_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShaderCookerStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Platform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Compiled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Cooked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Permutations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_CompileTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShaderCookerStats_Statics::NewProp_Path,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShaderCookerStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShaderCookerStats>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UShaderCookerStats_Statics::ClassParams = {
		&UShaderCookerStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShaderCookerStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShaderCookerStats_Statics::PropPointers),
		0,
		0x000800A8u,
		METADATA_PARAMS(Z_Construct_UClass_UShaderCookerStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShaderCookerStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShaderCookerStats()
	{
		if (!Z_Registration_Info_UClass_UShaderCookerStats.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShaderCookerStats.OuterSingleton, Z_Construct_UClass_UShaderCookerStats_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UShaderCookerStats.OuterSingleton;
	}
	template<> STATSVIEWER_API UClass* StaticClass<UShaderCookerStats>()
	{
		return UShaderCookerStats::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShaderCookerStats);
	UShaderCookerStats::~UShaderCookerStats() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_Statics::EnumInfo[] = {
		{ EShaderCookerStatsSets_StaticEnum, TEXT("EShaderCookerStatsSets"), &Z_Registration_Info_UEnum_EShaderCookerStatsSets, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2020804267U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UShaderCookerStats, UShaderCookerStats::StaticClass, TEXT("UShaderCookerStats"), &Z_Registration_Info_UClass_UShaderCookerStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShaderCookerStats), 397134662U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_1150091323(TEXT("/Script/StatsViewer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
