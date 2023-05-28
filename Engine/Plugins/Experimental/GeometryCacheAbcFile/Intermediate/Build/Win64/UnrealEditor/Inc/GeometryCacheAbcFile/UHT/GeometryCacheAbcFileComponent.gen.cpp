// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCacheAbcFileComponent.h"
#include "AbcImportSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheAbcFileComponent() {}
// Cross Module References
	ALEMBICLIBRARY_API UClass* Z_Construct_UClass_UAbcImportSettings_NoRegister();
	ALEMBICLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FAbcConversionSettings();
	ALEMBICLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FAbcGeometryCacheSettings();
	ALEMBICLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FAbcMaterialSettings();
	ALEMBICLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FAbcNormalGenerationSettings();
	ALEMBICLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FAbcSamplingSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheComponent();
	GEOMETRYCACHEABCFILE_API UClass* Z_Construct_UClass_UGeometryCacheAbcFileComponent();
	GEOMETRYCACHEABCFILE_API UClass* Z_Construct_UClass_UGeometryCacheAbcFileComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryCacheAbcFile();
// End Cross Module References
	void UGeometryCacheAbcFileComponent::StaticRegisterNativesUGeometryCacheAbcFileComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryCacheAbcFileComponent);
	UClass* Z_Construct_UClass_UGeometryCacheAbcFileComponent_NoRegister()
	{
		return UGeometryCacheAbcFileComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlembicFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlembicFilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SamplingSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConversionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConversionSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCacheSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeometryCacheSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalGenerationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalGenerationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbcSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbcSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGeometryCacheComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCacheAbcFile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering Experimental" },
		{ "Comment", "/** GeometryCacheAbcFileComponent, encapsulates a transient GeometryCache asset instance that fetches its data from an Alembic file and implements functionality for rendering and playback */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Geometry Cache Alembic File" },
		{ "HideCategories", "Object LOD Mobility Trigger" },
		{ "IncludePath", "GeometryCacheAbcFileComponent.h" },
		{ "ModuleRelativePath", "Public/GeometryCacheAbcFileComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "GeometryCacheAbcFileComponent, encapsulates a transient GeometryCache asset instance that fetches its data from an Alembic file and implements functionality for rendering and playback" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_AlembicFilePath_MetaData[] = {
		{ "Category", "Alembic" },
		{ "FilePathFilter", "Alembic files (*.abc)|*.abc" },
		{ "ModuleRelativePath", "Public/GeometryCacheAbcFileComponent.h" },
		{ "RelativeToGameDir", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_AlembicFilePath = { "AlembicFilePath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCacheAbcFileComponent, AlembicFilePath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_AlembicFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_AlembicFilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_SamplingSettings_MetaData[] = {
		{ "Category", "Alembic" },
		{ "ModuleRelativePath", "Public/GeometryCacheAbcFileComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_SamplingSettings = { "SamplingSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCacheAbcFileComponent, SamplingSettings), Z_Construct_UScriptStruct_FAbcSamplingSettings, METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_SamplingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_SamplingSettings_MetaData)) }; // 1357415953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_ConversionSettings_MetaData[] = {
		{ "Category", "Alembic" },
		{ "ModuleRelativePath", "Public/GeometryCacheAbcFileComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_ConversionSettings = { "ConversionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCacheAbcFileComponent, ConversionSettings), Z_Construct_UScriptStruct_FAbcConversionSettings, METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_ConversionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_ConversionSettings_MetaData)) }; // 2998324651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_GeometryCacheSettings_MetaData[] = {
		{ "Category", "Alembic" },
		{ "ModuleRelativePath", "Public/GeometryCacheAbcFileComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_GeometryCacheSettings = { "GeometryCacheSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCacheAbcFileComponent, GeometryCacheSettings), Z_Construct_UScriptStruct_FAbcGeometryCacheSettings, METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_GeometryCacheSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_GeometryCacheSettings_MetaData)) }; // 3628307381
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_NormalGenerationSettings_MetaData[] = {
		{ "Category", "Alembic" },
		{ "ModuleRelativePath", "Public/GeometryCacheAbcFileComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_NormalGenerationSettings = { "NormalGenerationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCacheAbcFileComponent, NormalGenerationSettings), Z_Construct_UScriptStruct_FAbcNormalGenerationSettings, METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_NormalGenerationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_NormalGenerationSettings_MetaData)) }; // 1512432401
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_MaterialSettings_MetaData[] = {
		{ "Category", "Alembic" },
		{ "ModuleRelativePath", "Public/GeometryCacheAbcFileComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_MaterialSettings = { "MaterialSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCacheAbcFileComponent, MaterialSettings), Z_Construct_UScriptStruct_FAbcMaterialSettings, METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_MaterialSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_MaterialSettings_MetaData)) }; // 1636184379
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_AbcSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCacheAbcFileComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_AbcSettings = { "AbcSettings", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCacheAbcFileComponent, AbcSettings), Z_Construct_UClass_UAbcImportSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_AbcSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_AbcSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_AlembicFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_SamplingSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_ConversionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_GeometryCacheSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_NormalGenerationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_MaterialSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::NewProp_AbcSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCacheAbcFileComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::ClassParams = {
		&UGeometryCacheAbcFileComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryCacheAbcFileComponent()
	{
		if (!Z_Registration_Info_UClass_UGeometryCacheAbcFileComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryCacheAbcFileComponent.OuterSingleton, Z_Construct_UClass_UGeometryCacheAbcFileComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryCacheAbcFileComponent.OuterSingleton;
	}
	template<> GEOMETRYCACHEABCFILE_API UClass* StaticClass<UGeometryCacheAbcFileComponent>()
	{
		return UGeometryCacheAbcFileComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCacheAbcFileComponent);
	UGeometryCacheAbcFileComponent::~UGeometryCacheAbcFileComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCacheAbcFile_Source_GeometryCacheAbcFile_Public_GeometryCacheAbcFileComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCacheAbcFile_Source_GeometryCacheAbcFile_Public_GeometryCacheAbcFileComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryCacheAbcFileComponent, UGeometryCacheAbcFileComponent::StaticClass, TEXT("UGeometryCacheAbcFileComponent"), &Z_Registration_Info_UClass_UGeometryCacheAbcFileComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryCacheAbcFileComponent), 3206441661U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCacheAbcFile_Source_GeometryCacheAbcFile_Public_GeometryCacheAbcFileComponent_h_3274856629(TEXT("/Script/GeometryCacheAbcFile"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCacheAbcFile_Source_GeometryCacheAbcFile_Public_GeometryCacheAbcFileComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCacheAbcFile_Source_GeometryCacheAbcFile_Public_GeometryCacheAbcFileComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
