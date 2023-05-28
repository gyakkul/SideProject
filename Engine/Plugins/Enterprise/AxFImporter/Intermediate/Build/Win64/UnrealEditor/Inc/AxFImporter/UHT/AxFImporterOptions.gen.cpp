// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AxFImporterOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxFImporterOptions() {}
// Cross Module References
	AXFIMPORTER_API UClass* Z_Construct_UClass_UAxFImporterOptions();
	AXFIMPORTER_API UClass* Z_Construct_UClass_UAxFImporterOptions_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AxFImporter();
// End Cross Module References
	void UAxFImporterOptions::StaticRegisterNativesUAxFImporterOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAxFImporterOptions);
	UClass* Z_Construct_UClass_UAxFImporterOptions_NoRegister()
	{
		return UAxFImporterOptions::StaticClass();
	}
	struct Z_Construct_UClass_UAxFImporterOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetersPerSceneUnit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MetersPerSceneUnit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAxFImporterOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AxFImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxFImporterOptions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AxFImporterOptions.h" },
		{ "ModuleRelativePath", "Private/AxFImporterOptions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxFImporterOptions_Statics::NewProp_MetersPerSceneUnit_MetaData[] = {
		{ "ClampMax", "1000" },
		{ "ClampMin", "0.010000" },
		{ "DisplayName", "Meters per scene unit" },
		{ "ModuleRelativePath", "Private/AxFImporterOptions.h" },
		{ "ToolTip", "The conversion ratio between meters and scene units for materials." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAxFImporterOptions_Statics::NewProp_MetersPerSceneUnit = { "MetersPerSceneUnit", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAxFImporterOptions, MetersPerSceneUnit), METADATA_PARAMS(Z_Construct_UClass_UAxFImporterOptions_Statics::NewProp_MetersPerSceneUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxFImporterOptions_Statics::NewProp_MetersPerSceneUnit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAxFImporterOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxFImporterOptions_Statics::NewProp_MetersPerSceneUnit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAxFImporterOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxFImporterOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAxFImporterOptions_Statics::ClassParams = {
		&UAxFImporterOptions::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAxFImporterOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAxFImporterOptions_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAxFImporterOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAxFImporterOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAxFImporterOptions()
	{
		if (!Z_Registration_Info_UClass_UAxFImporterOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAxFImporterOptions.OuterSingleton, Z_Construct_UClass_UAxFImporterOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAxFImporterOptions.OuterSingleton;
	}
	template<> AXFIMPORTER_API UClass* StaticClass<UAxFImporterOptions>()
	{
		return UAxFImporterOptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAxFImporterOptions);
	UAxFImporterOptions::~UAxFImporterOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_AxFImporter_Source_AxFImporter_Private_AxFImporterOptions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_AxFImporter_Source_AxFImporter_Private_AxFImporterOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAxFImporterOptions, UAxFImporterOptions::StaticClass, TEXT("UAxFImporterOptions"), &Z_Registration_Info_UClass_UAxFImporterOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAxFImporterOptions), 879034750U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_AxFImporter_Source_AxFImporter_Private_AxFImporterOptions_h_4150182154(TEXT("/Script/AxFImporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_AxFImporter_Source_AxFImporter_Private_AxFImporterOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_AxFImporter_Source_AxFImporter_Private_AxFImporterOptions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
