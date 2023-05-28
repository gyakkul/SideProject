// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/VersionChecker/DisplayClusterConfigurationVersionCheckerTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterConfigurationVersionCheckerTypes() {}
// Cross Module References
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersion();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersionContainer();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterConfiguration();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationVersion;
class UScriptStruct* FDisplayClusterConfigurationVersion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationVersion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationVersion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersion, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationVersion"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationVersion.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationVersion>()
{
	return FDisplayClusterConfigurationVersion::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersion_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Version;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersion_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// \"Version\" property\n" },
		{ "ModuleRelativePath", "Private/VersionChecker/DisplayClusterConfigurationVersionCheckerTypes.h" },
		{ "ToolTip", "\"Version\" property" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersion_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationVersion>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersion_Statics::NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Private/VersionChecker/DisplayClusterConfigurationVersionCheckerTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersion_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationVersion, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersion_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersion_Statics::NewProp_Version_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersion_Statics::NewProp_Version,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersion_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationVersion",
		sizeof(FDisplayClusterConfigurationVersion),
		alignof(FDisplayClusterConfigurationVersion),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersion_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersion_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersion_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersion_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersion()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationVersion.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationVersion.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersion_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationVersion.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationVersionContainer;
class UScriptStruct* FDisplayClusterConfigurationVersionContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationVersionContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationVersionContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersionContainer, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationVersionContainer"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationVersionContainer.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationVersionContainer>()
{
	return FDisplayClusterConfigurationVersionContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersionContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_nDisplay_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_nDisplay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersionContainer_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// The main JSON container\n" },
		{ "ModuleRelativePath", "Private/VersionChecker/DisplayClusterConfigurationVersionCheckerTypes.h" },
		{ "ToolTip", "The main JSON container" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersionContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationVersionContainer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersionContainer_Statics::NewProp_nDisplay_MetaData[] = {
		{ "ModuleRelativePath", "Private/VersionChecker/DisplayClusterConfigurationVersionCheckerTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersionContainer_Statics::NewProp_nDisplay = { "nDisplay", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationVersionContainer, nDisplay), Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersion, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersionContainer_Statics::NewProp_nDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersionContainer_Statics::NewProp_nDisplay_MetaData)) }; // 504306552
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersionContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersionContainer_Statics::NewProp_nDisplay,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersionContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationVersionContainer",
		sizeof(FDisplayClusterConfigurationVersionContainer),
		alignof(FDisplayClusterConfigurationVersionContainer),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersionContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersionContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersionContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersionContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersionContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationVersionContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationVersionContainer.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersionContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationVersionContainer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Private_VersionChecker_DisplayClusterConfigurationVersionCheckerTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Private_VersionChecker_DisplayClusterConfigurationVersionCheckerTypes_h_Statics::ScriptStructInfo[] = {
		{ FDisplayClusterConfigurationVersion::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersion_Statics::NewStructOps, TEXT("DisplayClusterConfigurationVersion"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationVersion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationVersion), 504306552U) },
		{ FDisplayClusterConfigurationVersionContainer::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationVersionContainer_Statics::NewStructOps, TEXT("DisplayClusterConfigurationVersionContainer"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationVersionContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationVersionContainer), 845647573U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Private_VersionChecker_DisplayClusterConfigurationVersionCheckerTypes_h_3963132074(TEXT("/Script/DisplayClusterConfiguration"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Private_VersionChecker_DisplayClusterConfigurationVersionCheckerTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Private_VersionChecker_DisplayClusterConfigurationVersionCheckerTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
