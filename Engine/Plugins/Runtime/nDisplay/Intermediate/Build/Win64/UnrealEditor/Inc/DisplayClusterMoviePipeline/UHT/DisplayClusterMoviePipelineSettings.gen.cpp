// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DisplayClusterMoviePipelineSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterMoviePipelineSettings() {}
// Cross Module References
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_ADisplayClusterRootActor_NoRegister();
	DISPLAYCLUSTERMOVIEPIPELINE_API UClass* Z_Construct_UClass_UDisplayClusterMoviePipelineSettings();
	DISPLAYCLUSTERMOVIEPIPELINE_API UClass* Z_Construct_UClass_UDisplayClusterMoviePipelineSettings_NoRegister();
	DISPLAYCLUSTERMOVIEPIPELINE_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineSetting();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterMoviePipeline();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterMoviePipelineConfiguration;
class UScriptStruct* FDisplayClusterMoviePipelineConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterMoviePipelineConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterMoviePipelineConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration, (UObject*)Z_Construct_UPackage__Script_DisplayClusterMoviePipeline(), TEXT("DisplayClusterMoviePipelineConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterMoviePipelineConfiguration.OuterSingleton;
}
template<> DISPLAYCLUSTERMOVIEPIPELINE_API UScriptStruct* StaticStruct<FDisplayClusterMoviePipelineConfiguration>()
{
	return FDisplayClusterMoviePipelineConfiguration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DCRootActor_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DCRootActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseViewportResolutions_MetaData[];
#endif
		static void NewProp_bUseViewportResolutions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseViewportResolutions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderAllViewports_MetaData[];
#endif
		static void NewProp_bRenderAllViewports_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderAllViewports;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AllowedViewportNamesList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedViewportNamesList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedViewportNamesList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterMoviePipelineSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterMoviePipelineConfiguration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::NewProp_DCRootActor_MetaData[] = {
		{ "Category", "nDisplay" },
		{ "Comment", "// Reference to Display Cluster Root Actor\n// If not set, the first available in the scene will be set.\n" },
		{ "DisplayName", "DC Root Actor" },
		{ "ModuleRelativePath", "Public/DisplayClusterMoviePipelineSettings.h" },
		{ "ToolTip", "Reference to Display Cluster Root Actor\nIf not set, the first available in the scene will be set." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::NewProp_DCRootActor = { "DCRootActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterMoviePipelineConfiguration, DCRootActor), Z_Construct_UClass_ADisplayClusterRootActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::NewProp_DCRootActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::NewProp_DCRootActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::NewProp_bUseViewportResolutions_MetaData[] = {
		{ "Category", "nDisplay" },
		{ "Comment", "// Render with nDisplay viewport resolutions.\n" },
		{ "ModuleRelativePath", "Public/DisplayClusterMoviePipelineSettings.h" },
		{ "ToolTip", "Render with nDisplay viewport resolutions." },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::NewProp_bUseViewportResolutions_SetBit(void* Obj)
	{
		((FDisplayClusterMoviePipelineConfiguration*)Obj)->bUseViewportResolutions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::NewProp_bUseViewportResolutions = { "bUseViewportResolutions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterMoviePipelineConfiguration), &Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::NewProp_bUseViewportResolutions_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::NewProp_bUseViewportResolutions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::NewProp_bUseViewportResolutions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::NewProp_bRenderAllViewports_MetaData[] = {
		{ "Category", "nDisplay" },
		{ "Comment", "// Render all viewports\n" },
		{ "ModuleRelativePath", "Public/DisplayClusterMoviePipelineSettings.h" },
		{ "ToolTip", "Render all viewports" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::NewProp_bRenderAllViewports_SetBit(void* Obj)
	{
		((FDisplayClusterMoviePipelineConfiguration*)Obj)->bRenderAllViewports = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::NewProp_bRenderAllViewports = { "bRenderAllViewports", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterMoviePipelineConfiguration), &Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::NewProp_bRenderAllViewports_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::NewProp_bRenderAllViewports_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::NewProp_bRenderAllViewports_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::NewProp_AllowedViewportNamesList_Inner = { "AllowedViewportNamesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::NewProp_AllowedViewportNamesList_MetaData[] = {
		{ "Category", "nDisplay" },
		{ "Comment", "// Render only viewports from this list.\n" },
		{ "DisplayName", "Allowed Viewport Names List" },
		{ "ModuleRelativePath", "Public/DisplayClusterMoviePipelineSettings.h" },
		{ "ToolTip", "Render only viewports from this list." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::NewProp_AllowedViewportNamesList = { "AllowedViewportNamesList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterMoviePipelineConfiguration, AllowedViewportNamesList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::NewProp_AllowedViewportNamesList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::NewProp_AllowedViewportNamesList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::NewProp_DCRootActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::NewProp_bUseViewportResolutions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::NewProp_bRenderAllViewports,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::NewProp_AllowedViewportNamesList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::NewProp_AllowedViewportNamesList,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterMoviePipeline,
		nullptr,
		&NewStructOps,
		"DisplayClusterMoviePipelineConfiguration",
		sizeof(FDisplayClusterMoviePipelineConfiguration),
		alignof(FDisplayClusterMoviePipelineConfiguration),
		Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterMoviePipelineConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterMoviePipelineConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterMoviePipelineConfiguration.InnerSingleton;
	}
	void UDisplayClusterMoviePipelineSettings::StaticRegisterNativesUDisplayClusterMoviePipelineSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterMoviePipelineSettings);
	UClass* Z_Construct_UClass_UDisplayClusterMoviePipelineSettings_NoRegister()
	{
		return UDisplayClusterMoviePipelineSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterMoviePipelineSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Configuration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Configuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterMoviePipelineSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineSetting,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterMoviePipeline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterMoviePipelineSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * nDisplay settings for MoviePipeline\n */" },
		{ "IncludePath", "DisplayClusterMoviePipelineSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterMoviePipelineSettings.h" },
		{ "ToolTip", "nDisplay settings for MoviePipeline" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterMoviePipelineSettings_Statics::NewProp_Configuration_MetaData[] = {
		{ "Category", "nDisplay" },
		{ "Comment", "// Reference to Display Cluster Root Actor\n// If not set, the first available in the scene will be set.\n" },
		{ "DisplayName", "nDisplay" },
		{ "ModuleRelativePath", "Public/DisplayClusterMoviePipelineSettings.h" },
		{ "ToolTip", "Reference to Display Cluster Root Actor\nIf not set, the first available in the scene will be set." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterMoviePipelineSettings_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterMoviePipelineSettings, Configuration), Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterMoviePipelineSettings_Statics::NewProp_Configuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMoviePipelineSettings_Statics::NewProp_Configuration_MetaData)) }; // 334756299
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayClusterMoviePipelineSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterMoviePipelineSettings_Statics::NewProp_Configuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterMoviePipelineSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterMoviePipelineSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterMoviePipelineSettings_Statics::ClassParams = {
		&UDisplayClusterMoviePipelineSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDisplayClusterMoviePipelineSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMoviePipelineSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterMoviePipelineSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMoviePipelineSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterMoviePipelineSettings()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterMoviePipelineSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterMoviePipelineSettings.OuterSingleton, Z_Construct_UClass_UDisplayClusterMoviePipelineSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterMoviePipelineSettings.OuterSingleton;
	}
	template<> DISPLAYCLUSTERMOVIEPIPELINE_API UClass* StaticClass<UDisplayClusterMoviePipelineSettings>()
	{
		return UDisplayClusterMoviePipelineSettings::StaticClass();
	}
	UDisplayClusterMoviePipelineSettings::UDisplayClusterMoviePipelineSettings() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterMoviePipelineSettings);
	UDisplayClusterMoviePipelineSettings::~UDisplayClusterMoviePipelineSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMoviePipeline_Public_DisplayClusterMoviePipelineSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMoviePipeline_Public_DisplayClusterMoviePipelineSettings_h_Statics::ScriptStructInfo[] = {
		{ FDisplayClusterMoviePipelineConfiguration::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterMoviePipelineConfiguration_Statics::NewStructOps, TEXT("DisplayClusterMoviePipelineConfiguration"), &Z_Registration_Info_UScriptStruct_DisplayClusterMoviePipelineConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterMoviePipelineConfiguration), 334756299U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMoviePipeline_Public_DisplayClusterMoviePipelineSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterMoviePipelineSettings, UDisplayClusterMoviePipelineSettings::StaticClass, TEXT("UDisplayClusterMoviePipelineSettings"), &Z_Registration_Info_UClass_UDisplayClusterMoviePipelineSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterMoviePipelineSettings), 991991308U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMoviePipeline_Public_DisplayClusterMoviePipelineSettings_h_175166121(TEXT("/Script/DisplayClusterMoviePipeline"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMoviePipeline_Public_DisplayClusterMoviePipelineSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMoviePipeline_Public_DisplayClusterMoviePipelineSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMoviePipeline_Public_DisplayClusterMoviePipelineSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMoviePipeline_Public_DisplayClusterMoviePipelineSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
