// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/FractureToolUniform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureToolUniform() {}
// Cross Module References
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolUniform();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolUniform_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolVoronoiCutterBase();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureUniformSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureUniformSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	void UFractureUniformSettings::StaticRegisterNativesUFractureUniformSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureUniformSettings);
	UClass* Z_Construct_UClass_UFractureUniformSettings_NoRegister()
	{
		return UFractureUniformSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFractureUniformSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberVoronoiSitesMin_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberVoronoiSitesMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberVoronoiSitesMax_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberVoronoiSitesMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureUniformSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureUniformSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FractureToolUniform.h" },
		{ "ModuleRelativePath", "Private/FractureToolUniform.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureUniformSettings_Statics::NewProp_NumberVoronoiSitesMin_MetaData[] = {
		{ "Category", "UniformVoronoi" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Minimum Number of Voronoi sites. The amount of sites per Voronoi diagram will be chosen at random between Min and Max */" },
		{ "DisplayName", "Min Voronoi Sites" },
		{ "ModuleRelativePath", "Private/FractureToolUniform.h" },
		{ "ToolTip", "Minimum Number of Voronoi sites. The amount of sites per Voronoi diagram will be chosen at random between Min and Max" },
		{ "UIMax", "5000" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFractureUniformSettings_Statics::NewProp_NumberVoronoiSitesMin = { "NumberVoronoiSitesMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureUniformSettings, NumberVoronoiSitesMin), METADATA_PARAMS(Z_Construct_UClass_UFractureUniformSettings_Statics::NewProp_NumberVoronoiSitesMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureUniformSettings_Statics::NewProp_NumberVoronoiSitesMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureUniformSettings_Statics::NewProp_NumberVoronoiSitesMax_MetaData[] = {
		{ "Category", "UniformVoronoi" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Maximum Number of Voronoi sites. The amount of sites per Voronoi diagram will be chosen at random between Min and Max */" },
		{ "DisplayName", "Max Voronoi Sites" },
		{ "ModuleRelativePath", "Private/FractureToolUniform.h" },
		{ "ToolTip", "Maximum Number of Voronoi sites. The amount of sites per Voronoi diagram will be chosen at random between Min and Max" },
		{ "UIMax", "5000" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFractureUniformSettings_Statics::NewProp_NumberVoronoiSitesMax = { "NumberVoronoiSitesMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureUniformSettings, NumberVoronoiSitesMax), METADATA_PARAMS(Z_Construct_UClass_UFractureUniformSettings_Statics::NewProp_NumberVoronoiSitesMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureUniformSettings_Statics::NewProp_NumberVoronoiSitesMax_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureUniformSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureUniformSettings_Statics::NewProp_NumberVoronoiSitesMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureUniformSettings_Statics::NewProp_NumberVoronoiSitesMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureUniformSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureUniformSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureUniformSettings_Statics::ClassParams = {
		&UFractureUniformSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureUniformSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureUniformSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureUniformSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureUniformSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureUniformSettings()
	{
		if (!Z_Registration_Info_UClass_UFractureUniformSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureUniformSettings.OuterSingleton, Z_Construct_UClass_UFractureUniformSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureUniformSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureUniformSettings>()
	{
		return UFractureUniformSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureUniformSettings);
	UFractureUniformSettings::~UFractureUniformSettings() {}
	void UFractureToolUniform::StaticRegisterNativesUFractureToolUniform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolUniform);
	UClass* Z_Construct_UClass_UFractureToolUniform_NoRegister()
	{
		return UFractureToolUniform::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolUniform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniformSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UniformSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolUniform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolVoronoiCutterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolUniform_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "Uniform Voronoi" },
		{ "IncludePath", "FractureToolUniform.h" },
		{ "ModuleRelativePath", "Private/FractureToolUniform.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolUniform_Statics::NewProp_UniformSettings_MetaData[] = {
		{ "Category", "Uniform" },
		{ "Comment", "// Uniform Voronoi Fracture Input Settings\n" },
		{ "ModuleRelativePath", "Private/FractureToolUniform.h" },
		{ "ToolTip", "Uniform Voronoi Fracture Input Settings" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolUniform_Statics::NewProp_UniformSettings = { "UniformSettings", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolUniform, UniformSettings), Z_Construct_UClass_UFractureUniformSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolUniform_Statics::NewProp_UniformSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolUniform_Statics::NewProp_UniformSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureToolUniform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolUniform_Statics::NewProp_UniformSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolUniform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolUniform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolUniform_Statics::ClassParams = {
		&UFractureToolUniform::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureToolUniform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolUniform_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolUniform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolUniform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolUniform()
	{
		if (!Z_Registration_Info_UClass_UFractureToolUniform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolUniform.OuterSingleton, Z_Construct_UClass_UFractureToolUniform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolUniform.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolUniform>()
	{
		return UFractureToolUniform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolUniform);
	UFractureToolUniform::~UFractureToolUniform() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolUniform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolUniform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFractureUniformSettings, UFractureUniformSettings::StaticClass, TEXT("UFractureUniformSettings"), &Z_Registration_Info_UClass_UFractureUniformSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureUniformSettings), 3504685624U) },
		{ Z_Construct_UClass_UFractureToolUniform, UFractureToolUniform::StaticClass, TEXT("UFractureToolUniform"), &Z_Registration_Info_UClass_UFractureToolUniform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolUniform), 3244449222U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolUniform_h_2496196076(TEXT("/Script/FractureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolUniform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolUniform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
