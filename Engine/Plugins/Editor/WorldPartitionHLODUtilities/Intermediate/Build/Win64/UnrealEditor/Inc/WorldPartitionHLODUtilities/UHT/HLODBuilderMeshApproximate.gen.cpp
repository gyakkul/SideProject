// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HLODBuilderMeshApproximate.h"
#include "../../Source/Runtime/Engine/Classes/Engine/MeshMerging.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODBuilderMeshApproximate() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UHLODBuilder();
	ENGINE_API UClass* Z_Construct_UClass_UHLODBuilderSettings();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshApproximationSettings();
	UPackage* Z_Construct_UPackage__Script_WorldPartitionHLODUtilities();
	WORLDPARTITIONHLODUTILITIES_API UClass* Z_Construct_UClass_UHLODBuilderMeshApproximate();
	WORLDPARTITIONHLODUTILITIES_API UClass* Z_Construct_UClass_UHLODBuilderMeshApproximate_NoRegister();
	WORLDPARTITIONHLODUTILITIES_API UClass* Z_Construct_UClass_UHLODBuilderMeshApproximateSettings();
	WORLDPARTITIONHLODUTILITIES_API UClass* Z_Construct_UClass_UHLODBuilderMeshApproximateSettings_NoRegister();
// End Cross Module References
	void UHLODBuilderMeshApproximateSettings::StaticRegisterNativesUHLODBuilderMeshApproximateSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHLODBuilderMeshApproximateSettings);
	UClass* Z_Construct_UClass_UHLODBuilderMeshApproximateSettings_NoRegister()
	{
		return UHLODBuilderMeshApproximateSettings::StaticClass();
	}
	struct Z_Construct_UClass_UHLODBuilderMeshApproximateSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshApproximationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshApproximationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HLODMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_HLODMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHLODBuilderMeshApproximateSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHLODBuilderSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldPartitionHLODUtilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODBuilderMeshApproximateSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HLODBuilderMeshApproximate.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HLODBuilderMeshApproximate.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODBuilderMeshApproximateSettings_Statics::NewProp_MeshApproximationSettings_MetaData[] = {
		{ "Category", "HLOD" },
		{ "Comment", "/** Mesh approximation settings */" },
		{ "EditInline", "" },
		{ "ModuleRelativePath", "Public/HLODBuilderMeshApproximate.h" },
		{ "ToolTip", "Mesh approximation settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHLODBuilderMeshApproximateSettings_Statics::NewProp_MeshApproximationSettings = { "MeshApproximationSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHLODBuilderMeshApproximateSettings, MeshApproximationSettings), Z_Construct_UScriptStruct_FMeshApproximationSettings, METADATA_PARAMS(Z_Construct_UClass_UHLODBuilderMeshApproximateSettings_Statics::NewProp_MeshApproximationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODBuilderMeshApproximateSettings_Statics::NewProp_MeshApproximationSettings_MetaData)) }; // 1720125939
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODBuilderMeshApproximateSettings_Statics::NewProp_HLODMaterial_MetaData[] = {
		{ "Category", "HLOD" },
		{ "Comment", "/** Material that will be used by the generated HLOD static mesh */" },
		{ "DisplayName", "HLOD Material" },
		{ "ModuleRelativePath", "Public/HLODBuilderMeshApproximate.h" },
		{ "ToolTip", "Material that will be used by the generated HLOD static mesh" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHLODBuilderMeshApproximateSettings_Statics::NewProp_HLODMaterial = { "HLODMaterial", nullptr, (EPropertyFlags)0x0014040000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHLODBuilderMeshApproximateSettings, HLODMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHLODBuilderMeshApproximateSettings_Statics::NewProp_HLODMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODBuilderMeshApproximateSettings_Statics::NewProp_HLODMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHLODBuilderMeshApproximateSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODBuilderMeshApproximateSettings_Statics::NewProp_MeshApproximationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODBuilderMeshApproximateSettings_Statics::NewProp_HLODMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHLODBuilderMeshApproximateSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHLODBuilderMeshApproximateSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHLODBuilderMeshApproximateSettings_Statics::ClassParams = {
		&UHLODBuilderMeshApproximateSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHLODBuilderMeshApproximateSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHLODBuilderMeshApproximateSettings_Statics::PropPointers),
		0,
		0x001004A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHLODBuilderMeshApproximateSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODBuilderMeshApproximateSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHLODBuilderMeshApproximateSettings()
	{
		if (!Z_Registration_Info_UClass_UHLODBuilderMeshApproximateSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHLODBuilderMeshApproximateSettings.OuterSingleton, Z_Construct_UClass_UHLODBuilderMeshApproximateSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHLODBuilderMeshApproximateSettings.OuterSingleton;
	}
	template<> WORLDPARTITIONHLODUTILITIES_API UClass* StaticClass<UHLODBuilderMeshApproximateSettings>()
	{
		return UHLODBuilderMeshApproximateSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHLODBuilderMeshApproximateSettings);
	UHLODBuilderMeshApproximateSettings::~UHLODBuilderMeshApproximateSettings() {}
	void UHLODBuilderMeshApproximate::StaticRegisterNativesUHLODBuilderMeshApproximate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHLODBuilderMeshApproximate);
	UClass* Z_Construct_UClass_UHLODBuilderMeshApproximate_NoRegister()
	{
		return UHLODBuilderMeshApproximate::StaticClass();
	}
	struct Z_Construct_UClass_UHLODBuilderMeshApproximate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHLODBuilderMeshApproximate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHLODBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldPartitionHLODUtilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODBuilderMeshApproximate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Build an approximated mesh using geometry from the provided actors\n */" },
		{ "IncludePath", "HLODBuilderMeshApproximate.h" },
		{ "ModuleRelativePath", "Public/HLODBuilderMeshApproximate.h" },
		{ "ToolTip", "Build an approximated mesh using geometry from the provided actors" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHLODBuilderMeshApproximate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHLODBuilderMeshApproximate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHLODBuilderMeshApproximate_Statics::ClassParams = {
		&UHLODBuilderMeshApproximate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHLODBuilderMeshApproximate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODBuilderMeshApproximate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHLODBuilderMeshApproximate()
	{
		if (!Z_Registration_Info_UClass_UHLODBuilderMeshApproximate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHLODBuilderMeshApproximate.OuterSingleton, Z_Construct_UClass_UHLODBuilderMeshApproximate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHLODBuilderMeshApproximate.OuterSingleton;
	}
	template<> WORLDPARTITIONHLODUTILITIES_API UClass* StaticClass<UHLODBuilderMeshApproximate>()
	{
		return UHLODBuilderMeshApproximate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHLODBuilderMeshApproximate);
	UHLODBuilderMeshApproximate::~UHLODBuilderMeshApproximate() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_HLODBuilderMeshApproximate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_HLODBuilderMeshApproximate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHLODBuilderMeshApproximateSettings, UHLODBuilderMeshApproximateSettings::StaticClass, TEXT("UHLODBuilderMeshApproximateSettings"), &Z_Registration_Info_UClass_UHLODBuilderMeshApproximateSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHLODBuilderMeshApproximateSettings), 2873184248U) },
		{ Z_Construct_UClass_UHLODBuilderMeshApproximate, UHLODBuilderMeshApproximate::StaticClass, TEXT("UHLODBuilderMeshApproximate"), &Z_Registration_Info_UClass_UHLODBuilderMeshApproximate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHLODBuilderMeshApproximate), 375327474U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_HLODBuilderMeshApproximate_h_2998687777(TEXT("/Script/WorldPartitionHLODUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_HLODBuilderMeshApproximate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_HLODBuilderMeshApproximate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
