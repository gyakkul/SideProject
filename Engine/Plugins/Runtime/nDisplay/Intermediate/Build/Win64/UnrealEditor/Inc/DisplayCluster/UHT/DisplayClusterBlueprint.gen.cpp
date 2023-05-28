// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprints/DisplayClusterBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterBlueprint() {}
// Cross Module References
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterBlueprint();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterBlueprint_NoRegister();
	DISPLAYCLUSTERCONFIGURATION_API UClass* Z_Construct_UClass_UDisplayClusterConfigurationData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	void UDisplayClusterBlueprint::StaticRegisterNativesUDisplayClusterBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterBlueprint);
	UClass* Z_Construct_UClass_UDisplayClusterBlueprint_NoRegister()
	{
		return UDisplayClusterBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRunConstructionScriptOnInteractiveChange_MetaData[];
#endif
		static void NewProp_bRunConstructionScriptOnInteractiveChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRunConstructionScriptOnInteractiveChange;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigExport_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConfigExport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ConfigData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AssetVersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterBlueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "nDisplay Blueprint" },
		{ "IncludePath", "Blueprints/DisplayClusterBlueprint.h" },
		{ "ModuleRelativePath", "Public/Blueprints/DisplayClusterBlueprint.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterBlueprint_Statics::NewProp_bRunConstructionScriptOnInteractiveChange_MetaData[] = {
		{ "Category", "BlueprintOptions" },
		{ "Comment", "/** Whether or not you want to continuously rerun the construction script while dragging a slider */" },
		{ "ModuleRelativePath", "Public/Blueprints/DisplayClusterBlueprint.h" },
		{ "ToolTip", "Whether or not you want to continuously rerun the construction script while dragging a slider" },
	};
#endif
	void Z_Construct_UClass_UDisplayClusterBlueprint_Statics::NewProp_bRunConstructionScriptOnInteractiveChange_SetBit(void* Obj)
	{
		((UDisplayClusterBlueprint*)Obj)->bRunConstructionScriptOnInteractiveChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplayClusterBlueprint_Statics::NewProp_bRunConstructionScriptOnInteractiveChange = { "bRunConstructionScriptOnInteractiveChange", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDisplayClusterBlueprint), &Z_Construct_UClass_UDisplayClusterBlueprint_Statics::NewProp_bRunConstructionScriptOnInteractiveChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterBlueprint_Statics::NewProp_bRunConstructionScriptOnInteractiveChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterBlueprint_Statics::NewProp_bRunConstructionScriptOnInteractiveChange_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterBlueprint_Statics::NewProp_ConfigExport_MetaData[] = {
		{ "Comment", "// Holds the last saved config export. In the AssetRegistry to allow parsing without loading.\n" },
		{ "ModuleRelativePath", "Public/Blueprints/DisplayClusterBlueprint.h" },
		{ "ToolTip", "Holds the last saved config export. In the AssetRegistry to allow parsing without loading." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDisplayClusterBlueprint_Statics::NewProp_ConfigExport = { "ConfigExport", nullptr, (EPropertyFlags)0x0010010000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterBlueprint, ConfigExport), METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterBlueprint_Statics::NewProp_ConfigExport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterBlueprint_Statics::NewProp_ConfigExport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterBlueprint_Statics::NewProp_ConfigData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprints/DisplayClusterBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplayClusterBlueprint_Statics::NewProp_ConfigData = { "ConfigData", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterBlueprint, ConfigData), Z_Construct_UClass_UDisplayClusterConfigurationData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterBlueprint_Statics::NewProp_ConfigData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterBlueprint_Statics::NewProp_ConfigData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterBlueprint_Statics::NewProp_AssetVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprints/DisplayClusterBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDisplayClusterBlueprint_Statics::NewProp_AssetVersion = { "AssetVersion", nullptr, (EPropertyFlags)0x0040010000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterBlueprint, AssetVersion), METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterBlueprint_Statics::NewProp_AssetVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterBlueprint_Statics::NewProp_AssetVersion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayClusterBlueprint_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterBlueprint_Statics::NewProp_bRunConstructionScriptOnInteractiveChange,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterBlueprint_Statics::NewProp_ConfigExport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterBlueprint_Statics::NewProp_ConfigData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterBlueprint_Statics::NewProp_AssetVersion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterBlueprint_Statics::ClassParams = {
		&UDisplayClusterBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDisplayClusterBlueprint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterBlueprint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterBlueprint()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterBlueprint.OuterSingleton, Z_Construct_UClass_UDisplayClusterBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterBlueprint.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UClass* StaticClass<UDisplayClusterBlueprint>()
	{
		return UDisplayClusterBlueprint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterBlueprint);
	UDisplayClusterBlueprint::~UDisplayClusterBlueprint() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_DisplayClusterBlueprint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_DisplayClusterBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterBlueprint, UDisplayClusterBlueprint::StaticClass, TEXT("UDisplayClusterBlueprint"), &Z_Registration_Info_UClass_UDisplayClusterBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterBlueprint), 3345260440U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_DisplayClusterBlueprint_h_1437931819(TEXT("/Script/DisplayCluster"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_DisplayClusterBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_DisplayClusterBlueprint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
