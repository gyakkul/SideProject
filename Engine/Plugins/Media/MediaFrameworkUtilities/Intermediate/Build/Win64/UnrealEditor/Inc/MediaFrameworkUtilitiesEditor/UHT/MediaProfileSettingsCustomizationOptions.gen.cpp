// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Profile/MediaProfileSettingsCustomizationOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaProfileSettingsCustomizationOptions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	MEDIAFRAMEWORKUTILITIESEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions();
	UPackage* Z_Construct_UPackage__Script_MediaFrameworkUtilitiesEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MediaProfileSettingsCustomizationOptions;
class UScriptStruct* FMediaProfileSettingsCustomizationOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MediaProfileSettingsCustomizationOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MediaProfileSettingsCustomizationOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions, (UObject*)Z_Construct_UPackage__Script_MediaFrameworkUtilitiesEditor(), TEXT("MediaProfileSettingsCustomizationOptions"));
	}
	return Z_Registration_Info_UScriptStruct_MediaProfileSettingsCustomizationOptions.OuterSingleton;
}
template<> MEDIAFRAMEWORKUTILITIESEDITOR_API UScriptStruct* StaticStruct<FMediaProfileSettingsCustomizationOptions>()
{
	return FMediaProfileSettingsCustomizationOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProxiesLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProxiesLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfSourceProxies_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfSourceProxies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfOutputProxies_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfOutputProxies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldCreateBundle_MetaData[];
#endif
		static void NewProp_bShouldCreateBundle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldCreateBundle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BundlesLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BundlesLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Private/Profile/MediaProfileSettingsCustomizationOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaProfileSettingsCustomizationOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::NewProp_ProxiesLocation_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** The location where the proxies should be created. */" },
		{ "ContentDir", "" },
		{ "ModuleRelativePath", "Private/Profile/MediaProfileSettingsCustomizationOptions.h" },
		{ "ToolTip", "The location where the proxies should be created." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::NewProp_ProxiesLocation = { "ProxiesLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaProfileSettingsCustomizationOptions, ProxiesLocation), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::NewProp_ProxiesLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::NewProp_ProxiesLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::NewProp_NumberOfSourceProxies_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** The number of input source Unreal may capture. */" },
		{ "ModuleRelativePath", "Private/Profile/MediaProfileSettingsCustomizationOptions.h" },
		{ "ToolTip", "The number of input source Unreal may capture." },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::NewProp_NumberOfSourceProxies = { "NumberOfSourceProxies", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaProfileSettingsCustomizationOptions, NumberOfSourceProxies), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::NewProp_NumberOfSourceProxies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::NewProp_NumberOfSourceProxies_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::NewProp_NumberOfOutputProxies_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** The number of output Unreal may generate. */" },
		{ "ModuleRelativePath", "Private/Profile/MediaProfileSettingsCustomizationOptions.h" },
		{ "ToolTip", "The number of output Unreal may generate." },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::NewProp_NumberOfOutputProxies = { "NumberOfOutputProxies", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaProfileSettingsCustomizationOptions, NumberOfOutputProxies), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::NewProp_NumberOfOutputProxies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::NewProp_NumberOfOutputProxies_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::NewProp_bShouldCreateBundle_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Create 1 media bundle for every source proxy created. */" },
		{ "ModuleRelativePath", "Private/Profile/MediaProfileSettingsCustomizationOptions.h" },
		{ "ToolTip", "Create 1 media bundle for every source proxy created." },
	};
#endif
	void Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::NewProp_bShouldCreateBundle_SetBit(void* Obj)
	{
		((FMediaProfileSettingsCustomizationOptions*)Obj)->bShouldCreateBundle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::NewProp_bShouldCreateBundle = { "bShouldCreateBundle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMediaProfileSettingsCustomizationOptions), &Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::NewProp_bShouldCreateBundle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::NewProp_bShouldCreateBundle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::NewProp_bShouldCreateBundle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::NewProp_BundlesLocation_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** The location where the bundles should be created. */" },
		{ "ContentDir", "" },
		{ "EditCondition", "bShouldCreateBundle" },
		{ "ModuleRelativePath", "Private/Profile/MediaProfileSettingsCustomizationOptions.h" },
		{ "ToolTip", "The location where the bundles should be created." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::NewProp_BundlesLocation = { "BundlesLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaProfileSettingsCustomizationOptions, BundlesLocation), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::NewProp_BundlesLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::NewProp_BundlesLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::NewProp_ProxiesLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::NewProp_NumberOfSourceProxies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::NewProp_NumberOfOutputProxies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::NewProp_bShouldCreateBundle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::NewProp_BundlesLocation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaFrameworkUtilitiesEditor,
		nullptr,
		&NewStructOps,
		"MediaProfileSettingsCustomizationOptions",
		sizeof(FMediaProfileSettingsCustomizationOptions),
		alignof(FMediaProfileSettingsCustomizationOptions),
		Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_MediaProfileSettingsCustomizationOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MediaProfileSettingsCustomizationOptions.InnerSingleton, Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MediaProfileSettingsCustomizationOptions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_Profile_MediaProfileSettingsCustomizationOptions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_Profile_MediaProfileSettingsCustomizationOptions_h_Statics::ScriptStructInfo[] = {
		{ FMediaProfileSettingsCustomizationOptions::StaticStruct, Z_Construct_UScriptStruct_FMediaProfileSettingsCustomizationOptions_Statics::NewStructOps, TEXT("MediaProfileSettingsCustomizationOptions"), &Z_Registration_Info_UScriptStruct_MediaProfileSettingsCustomizationOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMediaProfileSettingsCustomizationOptions), 1113641888U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_Profile_MediaProfileSettingsCustomizationOptions_h_1352916931(TEXT("/Script/MediaFrameworkUtilitiesEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_Profile_MediaProfileSettingsCustomizationOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_Profile_MediaProfileSettingsCustomizationOptions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
