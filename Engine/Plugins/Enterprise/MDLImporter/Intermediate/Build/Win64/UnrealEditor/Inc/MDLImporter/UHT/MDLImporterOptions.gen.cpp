// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MDLImporterOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMDLImporterOptions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	MDLIMPORTER_API UClass* Z_Construct_UClass_UMDLImporterOptions();
	MDLIMPORTER_API UClass* Z_Construct_UClass_UMDLImporterOptions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MDLImporter();
// End Cross Module References
	void UMDLImporterOptions::StaticRegisterNativesUMDLImporterOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMDLImporterOptions);
	UClass* Z_Construct_UClass_UMDLImporterOptions_NoRegister()
	{
		return UMDLImporterOptions::StaticClass();
	}
	struct Z_Construct_UClass_UMDLImporterOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakingResolution_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_BakingResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakingSamples_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_BakingSamples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourcesDir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResourcesDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModulesDir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModulesDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetersPerSceneUnit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MetersPerSceneUnit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceBaking_MetaData[];
#endif
		static void NewProp_bForceBaking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceBaking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMDLImporterOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MDLImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMDLImporterOptions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MDLImporterOptions.h" },
		{ "ModuleRelativePath", "Public/MDLImporterOptions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_BakingResolution_MetaData[] = {
		{ "Category", "Bake options" },
		{ "ClampMax", "16384" },
		{ "ClampMin", "128" },
		{ "DisplayName", "Baking resolution" },
		{ "FixedIncrement", "2" },
		{ "ModuleRelativePath", "Public/MDLImporterOptions.h" },
		{ "ToolTip", "Resolution for baking procedural textures." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_BakingResolution = { "BakingResolution", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMDLImporterOptions, BakingResolution), METADATA_PARAMS(Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_BakingResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_BakingResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_BakingSamples_MetaData[] = {
		{ "Category", "Bake options" },
		{ "ClampMax", "16" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Baking samples" },
		{ "FixedIncrement", "2" },
		{ "ModuleRelativePath", "Public/MDLImporterOptions.h" },
		{ "ToolTip", "Samples used for baking procedural textures." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_BakingSamples = { "BakingSamples", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMDLImporterOptions, BakingSamples), METADATA_PARAMS(Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_BakingSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_BakingSamples_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_ResourcesDir_MetaData[] = {
		{ "Category", "Advanced options" },
		{ "DisplayName", "Resource folder" },
		{ "ModuleRelativePath", "Public/MDLImporterOptions.h" },
		{ "ToolTip", "Path to look for resources: textures, light profiles and other." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_ResourcesDir = { "ResourcesDir", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMDLImporterOptions, ResourcesDir), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_ResourcesDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_ResourcesDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_ModulesDir_MetaData[] = {
		{ "Category", "Advanced options" },
		{ "DisplayName", "Modules folder" },
		{ "ModuleRelativePath", "Public/MDLImporterOptions.h" },
		{ "ToolTip", "Path to look for extra MDL modules." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_ModulesDir = { "ModulesDir", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMDLImporterOptions, ModulesDir), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_ModulesDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_ModulesDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_MetersPerSceneUnit_MetaData[] = {
		{ "ClampMax", "1000" },
		{ "ClampMin", "0.010000" },
		{ "DisplayName", "Meters per scene unit" },
		{ "ModuleRelativePath", "Public/MDLImporterOptions.h" },
		{ "ToolTip", "The conversion ratio between meters and scene units for materials." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_MetersPerSceneUnit = { "MetersPerSceneUnit", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMDLImporterOptions, MetersPerSceneUnit), METADATA_PARAMS(Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_MetersPerSceneUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_MetersPerSceneUnit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_bForceBaking_MetaData[] = {
		{ "DisplayName", "Force baking of all maps" },
		{ "ModuleRelativePath", "Public/MDLImporterOptions.h" },
		{ "ToolTip", "Always bakes the maps to textures instead of using material nodes." },
	};
#endif
	void Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_bForceBaking_SetBit(void* Obj)
	{
		((UMDLImporterOptions*)Obj)->bForceBaking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_bForceBaking = { "bForceBaking", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMDLImporterOptions), &Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_bForceBaking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_bForceBaking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_bForceBaking_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMDLImporterOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_BakingResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_BakingSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_ResourcesDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_ModulesDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_MetersPerSceneUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMDLImporterOptions_Statics::NewProp_bForceBaking,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMDLImporterOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMDLImporterOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMDLImporterOptions_Statics::ClassParams = {
		&UMDLImporterOptions::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMDLImporterOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMDLImporterOptions_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMDLImporterOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMDLImporterOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMDLImporterOptions()
	{
		if (!Z_Registration_Info_UClass_UMDLImporterOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMDLImporterOptions.OuterSingleton, Z_Construct_UClass_UMDLImporterOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMDLImporterOptions.OuterSingleton;
	}
	template<> MDLIMPORTER_API UClass* StaticClass<UMDLImporterOptions>()
	{
		return UMDLImporterOptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMDLImporterOptions);
	UMDLImporterOptions::~UMDLImporterOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Public_MDLImporterOptions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Public_MDLImporterOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMDLImporterOptions, UMDLImporterOptions::StaticClass, TEXT("UMDLImporterOptions"), &Z_Registration_Info_UClass_UMDLImporterOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMDLImporterOptions), 642326140U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Public_MDLImporterOptions_h_2639359561(TEXT("/Script/MDLImporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Public_MDLImporterOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Public_MDLImporterOptions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
