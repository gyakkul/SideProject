// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tools/LODGenerationSettingsAsset.h"
#include "Graphs/GenerateStaticMeshLODProcess.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLODGenerationSettingsAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_UStaticMeshLODGenerationSettings();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_UStaticMeshLODGenerationSettings_NoRegister();
	MESHLODTOOLSET_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings();
	MESHLODTOOLSET_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_NormalsSettings();
	MESHLODTOOLSET_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings();
	MESHLODTOOLSET_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings();
	MESHLODTOOLSET_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings();
	MESHLODTOOLSET_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings();
	MESHLODTOOLSET_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings();
	UPackage* Z_Construct_UPackage__Script_MeshLODToolset();
// End Cross Module References
	void UStaticMeshLODGenerationSettings::StaticRegisterNativesUStaticMeshLODGenerationSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaticMeshLODGenerationSettings);
	UClass* Z_Construct_UClass_UStaticMeshLODGenerationSettings_NoRegister()
	{
		return UStaticMeshLODGenerationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preprocessing_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Preprocessing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshGeneration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshGeneration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Simplification_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Simplification;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureBaking_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureBaking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVGeneration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVGeneration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimpleCollision_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleCollision;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshLODToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UStaticMeshLODGenerationSettings is intended to be a stored version of the settings used\n * by UGenerateStaticMeshLODProcess (and the associated UGenerateStaticMeshLODAssetTool). \n * This UObject is exposed as an Asset type in the Editor via UStaticMeshLODGenerationSettingsFactory.\n * \n * The Tool uses these serialized settings as a 'Preset', ie the user can save a set\n * of configured settings, or load previously-saved settings. \n */" },
		{ "IncludePath", "Tools/LODGenerationSettingsAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tools/LODGenerationSettingsAsset.h" },
		{ "ToolTip", "UStaticMeshLODGenerationSettings is intended to be a stored version of the settings used\nby UGenerateStaticMeshLODProcess (and the associated UGenerateStaticMeshLODAssetTool).\nThis UObject is exposed as an Asset type in the Editor via UStaticMeshLODGenerationSettingsFactory.\n\nThe Tool uses these serialized settings as a 'Preset', ie the user can save a set\nof configured settings, or load previously-saved settings." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_Preprocessing_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Tools/LODGenerationSettingsAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_Preprocessing = { "Preprocessing", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMeshLODGenerationSettings, Preprocessing), Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_Preprocessing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_Preprocessing_MetaData)) }; // 2333318121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_MeshGeneration_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Tools/LODGenerationSettingsAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_MeshGeneration = { "MeshGeneration", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMeshLODGenerationSettings, MeshGeneration), Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_MeshGeneration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_MeshGeneration_MetaData)) }; // 3183980117
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_Simplification_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Tools/LODGenerationSettingsAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_Simplification = { "Simplification", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMeshLODGenerationSettings, Simplification), Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_Simplification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_Simplification_MetaData)) }; // 1872819562
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_Normals_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Tools/LODGenerationSettingsAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMeshLODGenerationSettings, Normals), Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_NormalsSettings, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_Normals_MetaData)) }; // 1423837322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_TextureBaking_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Tools/LODGenerationSettingsAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_TextureBaking = { "TextureBaking", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMeshLODGenerationSettings, TextureBaking), Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_TextureBaking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_TextureBaking_MetaData)) }; // 1273141117
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_UVGeneration_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Tools/LODGenerationSettingsAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_UVGeneration = { "UVGeneration", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMeshLODGenerationSettings, UVGeneration), Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_UVGeneration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_UVGeneration_MetaData)) }; // 3025364498
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_SimpleCollision_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Tools/LODGenerationSettingsAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_SimpleCollision = { "SimpleCollision", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMeshLODGenerationSettings, SimpleCollision), Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_SimpleCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_SimpleCollision_MetaData)) }; // 2593582274
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_Preprocessing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_MeshGeneration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_Simplification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_Normals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_TextureBaking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_UVGeneration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::NewProp_SimpleCollision,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMeshLODGenerationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::ClassParams = {
		&UStaticMeshLODGenerationSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::PropPointers), 0),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticMeshLODGenerationSettings()
	{
		if (!Z_Registration_Info_UClass_UStaticMeshLODGenerationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaticMeshLODGenerationSettings.OuterSingleton, Z_Construct_UClass_UStaticMeshLODGenerationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStaticMeshLODGenerationSettings.OuterSingleton;
	}
	template<> MESHLODTOOLSET_API UClass* StaticClass<UStaticMeshLODGenerationSettings>()
	{
		return UStaticMeshLODGenerationSettings::StaticClass();
	}
	UStaticMeshLODGenerationSettings::UStaticMeshLODGenerationSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshLODGenerationSettings);
	UStaticMeshLODGenerationSettings::~UStaticMeshLODGenerationSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODGenerationSettingsAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODGenerationSettingsAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStaticMeshLODGenerationSettings, UStaticMeshLODGenerationSettings::StaticClass, TEXT("UStaticMeshLODGenerationSettings"), &Z_Registration_Info_UClass_UStaticMeshLODGenerationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaticMeshLODGenerationSettings), 1327738223U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODGenerationSettingsAsset_h_200814858(TEXT("/Script/MeshLODToolset"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODGenerationSettingsAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODGenerationSettingsAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
