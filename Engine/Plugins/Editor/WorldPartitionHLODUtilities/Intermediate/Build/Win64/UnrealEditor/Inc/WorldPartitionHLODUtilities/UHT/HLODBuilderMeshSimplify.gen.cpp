// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HLODBuilderMeshSimplify.h"
#include "../../Source/Runtime/Engine/Classes/Engine/MeshMerging.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODBuilderMeshSimplify() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UHLODBuilder();
	ENGINE_API UClass* Z_Construct_UClass_UHLODBuilderSettings();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshProxySettings();
	UPackage* Z_Construct_UPackage__Script_WorldPartitionHLODUtilities();
	WORLDPARTITIONHLODUTILITIES_API UClass* Z_Construct_UClass_UHLODBuilderMeshSimplify();
	WORLDPARTITIONHLODUTILITIES_API UClass* Z_Construct_UClass_UHLODBuilderMeshSimplify_NoRegister();
	WORLDPARTITIONHLODUTILITIES_API UClass* Z_Construct_UClass_UHLODBuilderMeshSimplifySettings();
	WORLDPARTITIONHLODUTILITIES_API UClass* Z_Construct_UClass_UHLODBuilderMeshSimplifySettings_NoRegister();
// End Cross Module References
	void UHLODBuilderMeshSimplifySettings::StaticRegisterNativesUHLODBuilderMeshSimplifySettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHLODBuilderMeshSimplifySettings);
	UClass* Z_Construct_UClass_UHLODBuilderMeshSimplifySettings_NoRegister()
	{
		return UHLODBuilderMeshSimplifySettings::StaticClass();
	}
	struct Z_Construct_UClass_UHLODBuilderMeshSimplifySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshSimplifySettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshSimplifySettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HLODMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_HLODMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHLODBuilderMeshSimplifySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHLODBuilderSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldPartitionHLODUtilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODBuilderMeshSimplifySettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HLODBuilderMeshSimplify.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HLODBuilderMeshSimplify.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODBuilderMeshSimplifySettings_Statics::NewProp_MeshSimplifySettings_MetaData[] = {
		{ "Category", "HLOD" },
		{ "Comment", "/** Simplified mesh generation settings */" },
		{ "ModuleRelativePath", "Public/HLODBuilderMeshSimplify.h" },
		{ "ToolTip", "Simplified mesh generation settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHLODBuilderMeshSimplifySettings_Statics::NewProp_MeshSimplifySettings = { "MeshSimplifySettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHLODBuilderMeshSimplifySettings, MeshSimplifySettings), Z_Construct_UScriptStruct_FMeshProxySettings, METADATA_PARAMS(Z_Construct_UClass_UHLODBuilderMeshSimplifySettings_Statics::NewProp_MeshSimplifySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODBuilderMeshSimplifySettings_Statics::NewProp_MeshSimplifySettings_MetaData)) }; // 1902887107
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODBuilderMeshSimplifySettings_Statics::NewProp_HLODMaterial_MetaData[] = {
		{ "Category", "HLOD" },
		{ "Comment", "/** Material that will be used by the generated HLOD static mesh */" },
		{ "DisplayName", "HLOD Material" },
		{ "ModuleRelativePath", "Public/HLODBuilderMeshSimplify.h" },
		{ "ToolTip", "Material that will be used by the generated HLOD static mesh" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHLODBuilderMeshSimplifySettings_Statics::NewProp_HLODMaterial = { "HLODMaterial", nullptr, (EPropertyFlags)0x0014040000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHLODBuilderMeshSimplifySettings, HLODMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHLODBuilderMeshSimplifySettings_Statics::NewProp_HLODMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODBuilderMeshSimplifySettings_Statics::NewProp_HLODMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHLODBuilderMeshSimplifySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODBuilderMeshSimplifySettings_Statics::NewProp_MeshSimplifySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODBuilderMeshSimplifySettings_Statics::NewProp_HLODMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHLODBuilderMeshSimplifySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHLODBuilderMeshSimplifySettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHLODBuilderMeshSimplifySettings_Statics::ClassParams = {
		&UHLODBuilderMeshSimplifySettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHLODBuilderMeshSimplifySettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHLODBuilderMeshSimplifySettings_Statics::PropPointers),
		0,
		0x001004A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHLODBuilderMeshSimplifySettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODBuilderMeshSimplifySettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHLODBuilderMeshSimplifySettings()
	{
		if (!Z_Registration_Info_UClass_UHLODBuilderMeshSimplifySettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHLODBuilderMeshSimplifySettings.OuterSingleton, Z_Construct_UClass_UHLODBuilderMeshSimplifySettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHLODBuilderMeshSimplifySettings.OuterSingleton;
	}
	template<> WORLDPARTITIONHLODUTILITIES_API UClass* StaticClass<UHLODBuilderMeshSimplifySettings>()
	{
		return UHLODBuilderMeshSimplifySettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHLODBuilderMeshSimplifySettings);
	UHLODBuilderMeshSimplifySettings::~UHLODBuilderMeshSimplifySettings() {}
	void UHLODBuilderMeshSimplify::StaticRegisterNativesUHLODBuilderMeshSimplify()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHLODBuilderMeshSimplify);
	UClass* Z_Construct_UClass_UHLODBuilderMeshSimplify_NoRegister()
	{
		return UHLODBuilderMeshSimplify::StaticClass();
	}
	struct Z_Construct_UClass_UHLODBuilderMeshSimplify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHLODBuilderMeshSimplify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHLODBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldPartitionHLODUtilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODBuilderMeshSimplify_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Build a simplified mesh using geometry from the provided actors\n */" },
		{ "IncludePath", "HLODBuilderMeshSimplify.h" },
		{ "ModuleRelativePath", "Public/HLODBuilderMeshSimplify.h" },
		{ "ToolTip", "Build a simplified mesh using geometry from the provided actors" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHLODBuilderMeshSimplify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHLODBuilderMeshSimplify>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHLODBuilderMeshSimplify_Statics::ClassParams = {
		&UHLODBuilderMeshSimplify::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHLODBuilderMeshSimplify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODBuilderMeshSimplify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHLODBuilderMeshSimplify()
	{
		if (!Z_Registration_Info_UClass_UHLODBuilderMeshSimplify.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHLODBuilderMeshSimplify.OuterSingleton, Z_Construct_UClass_UHLODBuilderMeshSimplify_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHLODBuilderMeshSimplify.OuterSingleton;
	}
	template<> WORLDPARTITIONHLODUTILITIES_API UClass* StaticClass<UHLODBuilderMeshSimplify>()
	{
		return UHLODBuilderMeshSimplify::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHLODBuilderMeshSimplify);
	UHLODBuilderMeshSimplify::~UHLODBuilderMeshSimplify() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_HLODBuilderMeshSimplify_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_HLODBuilderMeshSimplify_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHLODBuilderMeshSimplifySettings, UHLODBuilderMeshSimplifySettings::StaticClass, TEXT("UHLODBuilderMeshSimplifySettings"), &Z_Registration_Info_UClass_UHLODBuilderMeshSimplifySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHLODBuilderMeshSimplifySettings), 2613708859U) },
		{ Z_Construct_UClass_UHLODBuilderMeshSimplify, UHLODBuilderMeshSimplify::StaticClass, TEXT("UHLODBuilderMeshSimplify"), &Z_Registration_Info_UClass_UHLODBuilderMeshSimplify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHLODBuilderMeshSimplify), 167661968U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_HLODBuilderMeshSimplify_h_1075257293(TEXT("/Script/WorldPartitionHLODUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_HLODBuilderMeshSimplify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_HLODBuilderMeshSimplify_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
