// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/ProxyLODMeshSimplificationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProxyLODMeshSimplificationSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UClass* Z_Construct_UClass_UProxyLODMeshSimplificationSettings();
	ENGINE_API UClass* Z_Construct_UClass_UProxyLODMeshSimplificationSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UProxyLODMeshSimplificationSettings::StaticRegisterNativesUProxyLODMeshSimplificationSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProxyLODMeshSimplificationSettings);
	UClass* Z_Construct_UClass_UProxyLODMeshSimplificationSettings_NoRegister()
	{
		return UProxyLODMeshSimplificationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProxyLODMeshReductionModuleName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProxyLODMeshReductionModuleName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Controls the system used to generate proxy LODs with merged meshes (i.e. the HLOD system).\n*/" },
		{ "DisplayName", "Hierarchical LOD Mesh Simplification" },
		{ "IncludePath", "Engine/ProxyLODMeshSimplificationSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/ProxyLODMeshSimplificationSettings.h" },
		{ "ToolTip", "Controls the system used to generate proxy LODs with merged meshes (i.e. the HLOD system)." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::NewProp_ProxyLODMeshReductionModuleName_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Mesh reduction plugin to use when simplifying mesh geometry for Hierarchical LOD */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.ProxyLODMeshReductionModule" },
		{ "DisplayName", "Hierarchical LOD Mesh Reduction Plugin" },
		{ "ModuleRelativePath", "Classes/Engine/ProxyLODMeshSimplificationSettings.h" },
		{ "ToolTip", "Mesh reduction plugin to use when simplifying mesh geometry for Hierarchical LOD" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::NewProp_ProxyLODMeshReductionModuleName = { "ProxyLODMeshReductionModuleName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProxyLODMeshSimplificationSettings, ProxyLODMeshReductionModuleName), METADATA_PARAMS(Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::NewProp_ProxyLODMeshReductionModuleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::NewProp_ProxyLODMeshReductionModuleName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::NewProp_ProxyLODMeshReductionModuleName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProxyLODMeshSimplificationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::ClassParams = {
		&UProxyLODMeshSimplificationSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProxyLODMeshSimplificationSettings()
	{
		if (!Z_Registration_Info_UClass_UProxyLODMeshSimplificationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProxyLODMeshSimplificationSettings.OuterSingleton, Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProxyLODMeshSimplificationSettings.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UProxyLODMeshSimplificationSettings>()
	{
		return UProxyLODMeshSimplificationSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProxyLODMeshSimplificationSettings);
	UProxyLODMeshSimplificationSettings::~UProxyLODMeshSimplificationSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ProxyLODMeshSimplificationSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ProxyLODMeshSimplificationSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProxyLODMeshSimplificationSettings, UProxyLODMeshSimplificationSettings::StaticClass, TEXT("UProxyLODMeshSimplificationSettings"), &Z_Registration_Info_UClass_UProxyLODMeshSimplificationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProxyLODMeshSimplificationSettings), 1800421923U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ProxyLODMeshSimplificationSettings_h_2569520110(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ProxyLODMeshSimplificationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ProxyLODMeshSimplificationSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
