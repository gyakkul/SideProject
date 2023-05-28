// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HLODBuilderMeshMerge.h"
#include "../../Source/Runtime/Engine/Classes/Engine/MeshMerging.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODBuilderMeshMerge() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UHLODBuilder();
	ENGINE_API UClass* Z_Construct_UClass_UHLODBuilderSettings();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshMergingSettings();
	UPackage* Z_Construct_UPackage__Script_WorldPartitionHLODUtilities();
	WORLDPARTITIONHLODUTILITIES_API UClass* Z_Construct_UClass_UHLODBuilderMeshMerge();
	WORLDPARTITIONHLODUTILITIES_API UClass* Z_Construct_UClass_UHLODBuilderMeshMerge_NoRegister();
	WORLDPARTITIONHLODUTILITIES_API UClass* Z_Construct_UClass_UHLODBuilderMeshMergeSettings();
	WORLDPARTITIONHLODUTILITIES_API UClass* Z_Construct_UClass_UHLODBuilderMeshMergeSettings_NoRegister();
// End Cross Module References
	void UHLODBuilderMeshMergeSettings::StaticRegisterNativesUHLODBuilderMeshMergeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHLODBuilderMeshMergeSettings);
	UClass* Z_Construct_UClass_UHLODBuilderMeshMergeSettings_NoRegister()
	{
		return UHLODBuilderMeshMergeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UHLODBuilderMeshMergeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshMergeSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshMergeSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HLODMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_HLODMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHLODBuilderMeshMergeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHLODBuilderSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldPartitionHLODUtilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODBuilderMeshMergeSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HLODBuilderMeshMerge.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HLODBuilderMeshMerge.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODBuilderMeshMergeSettings_Statics::NewProp_MeshMergeSettings_MetaData[] = {
		{ "Category", "HLOD" },
		{ "Comment", "/** Merged mesh generation settings */" },
		{ "ModuleRelativePath", "Public/HLODBuilderMeshMerge.h" },
		{ "ToolTip", "Merged mesh generation settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHLODBuilderMeshMergeSettings_Statics::NewProp_MeshMergeSettings = { "MeshMergeSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHLODBuilderMeshMergeSettings, MeshMergeSettings), Z_Construct_UScriptStruct_FMeshMergingSettings, METADATA_PARAMS(Z_Construct_UClass_UHLODBuilderMeshMergeSettings_Statics::NewProp_MeshMergeSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODBuilderMeshMergeSettings_Statics::NewProp_MeshMergeSettings_MetaData)) }; // 1528135240
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODBuilderMeshMergeSettings_Statics::NewProp_HLODMaterial_MetaData[] = {
		{ "Category", "HLOD" },
		{ "Comment", "/** Material that will be used by the generated HLOD static mesh */" },
		{ "DisplayName", "HLOD Material" },
		{ "ModuleRelativePath", "Public/HLODBuilderMeshMerge.h" },
		{ "ToolTip", "Material that will be used by the generated HLOD static mesh" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHLODBuilderMeshMergeSettings_Statics::NewProp_HLODMaterial = { "HLODMaterial", nullptr, (EPropertyFlags)0x0014040000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHLODBuilderMeshMergeSettings, HLODMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHLODBuilderMeshMergeSettings_Statics::NewProp_HLODMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODBuilderMeshMergeSettings_Statics::NewProp_HLODMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHLODBuilderMeshMergeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODBuilderMeshMergeSettings_Statics::NewProp_MeshMergeSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODBuilderMeshMergeSettings_Statics::NewProp_HLODMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHLODBuilderMeshMergeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHLODBuilderMeshMergeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHLODBuilderMeshMergeSettings_Statics::ClassParams = {
		&UHLODBuilderMeshMergeSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHLODBuilderMeshMergeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHLODBuilderMeshMergeSettings_Statics::PropPointers),
		0,
		0x001004A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHLODBuilderMeshMergeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODBuilderMeshMergeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHLODBuilderMeshMergeSettings()
	{
		if (!Z_Registration_Info_UClass_UHLODBuilderMeshMergeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHLODBuilderMeshMergeSettings.OuterSingleton, Z_Construct_UClass_UHLODBuilderMeshMergeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHLODBuilderMeshMergeSettings.OuterSingleton;
	}
	template<> WORLDPARTITIONHLODUTILITIES_API UClass* StaticClass<UHLODBuilderMeshMergeSettings>()
	{
		return UHLODBuilderMeshMergeSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHLODBuilderMeshMergeSettings);
	UHLODBuilderMeshMergeSettings::~UHLODBuilderMeshMergeSettings() {}
	void UHLODBuilderMeshMerge::StaticRegisterNativesUHLODBuilderMeshMerge()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHLODBuilderMeshMerge);
	UClass* Z_Construct_UClass_UHLODBuilderMeshMerge_NoRegister()
	{
		return UHLODBuilderMeshMerge::StaticClass();
	}
	struct Z_Construct_UClass_UHLODBuilderMeshMerge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHLODBuilderMeshMerge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHLODBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldPartitionHLODUtilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODBuilderMeshMerge_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Build a merged mesh using geometry from the provided actors\n */" },
		{ "IncludePath", "HLODBuilderMeshMerge.h" },
		{ "ModuleRelativePath", "Public/HLODBuilderMeshMerge.h" },
		{ "ToolTip", "Build a merged mesh using geometry from the provided actors" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHLODBuilderMeshMerge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHLODBuilderMeshMerge>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHLODBuilderMeshMerge_Statics::ClassParams = {
		&UHLODBuilderMeshMerge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x041000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHLODBuilderMeshMerge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODBuilderMeshMerge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHLODBuilderMeshMerge()
	{
		if (!Z_Registration_Info_UClass_UHLODBuilderMeshMerge.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHLODBuilderMeshMerge.OuterSingleton, Z_Construct_UClass_UHLODBuilderMeshMerge_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHLODBuilderMeshMerge.OuterSingleton;
	}
	template<> WORLDPARTITIONHLODUTILITIES_API UClass* StaticClass<UHLODBuilderMeshMerge>()
	{
		return UHLODBuilderMeshMerge::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHLODBuilderMeshMerge);
	UHLODBuilderMeshMerge::~UHLODBuilderMeshMerge() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_HLODBuilderMeshMerge_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_HLODBuilderMeshMerge_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHLODBuilderMeshMergeSettings, UHLODBuilderMeshMergeSettings::StaticClass, TEXT("UHLODBuilderMeshMergeSettings"), &Z_Registration_Info_UClass_UHLODBuilderMeshMergeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHLODBuilderMeshMergeSettings), 2913807824U) },
		{ Z_Construct_UClass_UHLODBuilderMeshMerge, UHLODBuilderMeshMerge::StaticClass, TEXT("UHLODBuilderMeshMerge"), &Z_Registration_Info_UClass_UHLODBuilderMeshMerge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHLODBuilderMeshMerge), 935185312U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_HLODBuilderMeshMerge_h_2334031189(TEXT("/Script/WorldPartitionHLODUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_HLODBuilderMeshMerge_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_HLODBuilderMeshMerge_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
