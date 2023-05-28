// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DisplayClusterConfiguratorVersionUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterConfiguratorVersionUtils() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DISPLAYCLUSTERCONFIGURATION_API UClass* Z_Construct_UClass_UDisplayClusterConfigurationData_NoRegister();
	DISPLAYCLUSTERCONFIGURATOR_API UClass* Z_Construct_UClass_UDisplayClusterConfiguratorEditorData();
	DISPLAYCLUSTERCONFIGURATOR_API UClass* Z_Construct_UClass_UDisplayClusterConfiguratorEditorData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterConfigurator();
// End Cross Module References
	void UDisplayClusterConfiguratorEditorData::StaticRegisterNativesUDisplayClusterConfiguratorEditorData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterConfiguratorEditorData);
	UClass* Z_Construct_UClass_UDisplayClusterConfiguratorEditorData_NoRegister()
	{
		return UDisplayClusterConfiguratorEditorData::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterConfiguratorEditorData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_nDisplayConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_nDisplayConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathToConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathToConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConvertedToBlueprint_MetaData[];
#endif
		static void NewProp_bConvertedToBlueprint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertedToBlueprint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterConfiguratorEditorData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfigurator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterConfiguratorEditorData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The original format of the DisplayCluster config data UAsset, used only for importing 4.26 assets.\n */" },
		{ "IncludePath", "DisplayClusterConfiguratorVersionUtils.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/DisplayClusterConfiguratorVersionUtils.h" },
		{ "ToolTip", "The original format of the DisplayCluster config data UAsset, used only for importing 4.26 assets." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterConfiguratorEditorData_Statics::NewProp_nDisplayConfig_MetaData[] = {
		{ "ModuleRelativePath", "Private/DisplayClusterConfiguratorVersionUtils.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplayClusterConfiguratorEditorData_Statics::NewProp_nDisplayConfig = { "nDisplayConfig", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterConfiguratorEditorData, nDisplayConfig), Z_Construct_UClass_UDisplayClusterConfigurationData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterConfiguratorEditorData_Statics::NewProp_nDisplayConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfiguratorEditorData_Statics::NewProp_nDisplayConfig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterConfiguratorEditorData_Statics::NewProp_PathToConfig_MetaData[] = {
		{ "ModuleRelativePath", "Private/DisplayClusterConfiguratorVersionUtils.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDisplayClusterConfiguratorEditorData_Statics::NewProp_PathToConfig = { "PathToConfig", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterConfiguratorEditorData, PathToConfig), METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterConfiguratorEditorData_Statics::NewProp_PathToConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfiguratorEditorData_Statics::NewProp_PathToConfig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterConfiguratorEditorData_Statics::NewProp_bConvertedToBlueprint_MetaData[] = {
		{ "Comment", "/**\n\x09 * True if the original asset is imported but could not be deleted.\n\x09 */" },
		{ "ModuleRelativePath", "Private/DisplayClusterConfiguratorVersionUtils.h" },
		{ "ToolTip", "True if the original asset is imported but could not be deleted." },
	};
#endif
	void Z_Construct_UClass_UDisplayClusterConfiguratorEditorData_Statics::NewProp_bConvertedToBlueprint_SetBit(void* Obj)
	{
		((UDisplayClusterConfiguratorEditorData*)Obj)->bConvertedToBlueprint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplayClusterConfiguratorEditorData_Statics::NewProp_bConvertedToBlueprint = { "bConvertedToBlueprint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDisplayClusterConfiguratorEditorData), &Z_Construct_UClass_UDisplayClusterConfiguratorEditorData_Statics::NewProp_bConvertedToBlueprint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterConfiguratorEditorData_Statics::NewProp_bConvertedToBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfiguratorEditorData_Statics::NewProp_bConvertedToBlueprint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayClusterConfiguratorEditorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterConfiguratorEditorData_Statics::NewProp_nDisplayConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterConfiguratorEditorData_Statics::NewProp_PathToConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterConfiguratorEditorData_Statics::NewProp_bConvertedToBlueprint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterConfiguratorEditorData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterConfiguratorEditorData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterConfiguratorEditorData_Statics::ClassParams = {
		&UDisplayClusterConfiguratorEditorData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDisplayClusterConfiguratorEditorData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfiguratorEditorData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterConfiguratorEditorData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfiguratorEditorData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterConfiguratorEditorData()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterConfiguratorEditorData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterConfiguratorEditorData.OuterSingleton, Z_Construct_UClass_UDisplayClusterConfiguratorEditorData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterConfiguratorEditorData.OuterSingleton;
	}
	template<> DISPLAYCLUSTERCONFIGURATOR_API UClass* StaticClass<UDisplayClusterConfiguratorEditorData>()
	{
		return UDisplayClusterConfiguratorEditorData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterConfiguratorEditorData);
	UDisplayClusterConfiguratorEditorData::~UDisplayClusterConfiguratorEditorData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_DisplayClusterConfiguratorVersionUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_DisplayClusterConfiguratorVersionUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterConfiguratorEditorData, UDisplayClusterConfiguratorEditorData::StaticClass, TEXT("UDisplayClusterConfiguratorEditorData"), &Z_Registration_Info_UClass_UDisplayClusterConfiguratorEditorData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterConfiguratorEditorData), 3861339162U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_DisplayClusterConfiguratorVersionUtils_h_3066669798(TEXT("/Script/DisplayClusterConfigurator"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_DisplayClusterConfiguratorVersionUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_DisplayClusterConfiguratorVersionUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
