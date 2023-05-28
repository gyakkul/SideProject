// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassEntitySettings.h"
#include "MassProcessingPhaseManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassEntitySettings() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassEntitySettings();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassEntitySettings_NoRegister();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassModuleSettings();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor_NoRegister();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassProcessingPhaseConfig();
	UPackage* Z_Construct_UPackage__Script_MassEntity();
// End Cross Module References
	void UMassEntitySettings::StaticRegisterNativesUMassEntitySettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassEntitySettings);
	UClass* Z_Construct_UClass_UMassEntitySettings_NoRegister()
	{
		return UMassEntitySettings::StaticClass();
	}
	struct Z_Construct_UClass_UMassEntitySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DumpDependencyGraphFileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DumpDependencyGraphFileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcessingPhasesConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProcessingPhasesConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcessorCDOs_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ProcessorCDOs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcessorCDOs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProcessorCDOs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassEntitySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassModuleSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassEntitySettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for MassEntity plugin\n */" },
		{ "DisplayName", "Mass Entity" },
		{ "IncludePath", "MassEntitySettings.h" },
		{ "ModuleRelativePath", "Public/MassEntitySettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements the settings for MassEntity plugin" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassEntitySettings_Statics::NewProp_DumpDependencyGraphFileName_MetaData[] = {
		{ "Category", "Mass" },
		{ "Comment", "/** \n\x09 * The name of the file to dump the processor dependency graph. T\n\x09 * The dot file will be put in the project log folder.\n\x09 * To generate a svg out of that file, simply run dot executable with following parameters: -Tsvg -O filename.dot \n\x09 */" },
		{ "ModuleRelativePath", "Public/MassEntitySettings.h" },
		{ "ToolTip", "The name of the file to dump the processor dependency graph. T\nThe dot file will be put in the project log folder.\nTo generate a svg out of that file, simply run dot executable with following parameters: -Tsvg -O filename.dot" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMassEntitySettings_Statics::NewProp_DumpDependencyGraphFileName = { "DumpDependencyGraphFileName", nullptr, (EPropertyFlags)0x0010000000012001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassEntitySettings, DumpDependencyGraphFileName), METADATA_PARAMS(Z_Construct_UClass_UMassEntitySettings_Statics::NewProp_DumpDependencyGraphFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassEntitySettings_Statics::NewProp_DumpDependencyGraphFileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassEntitySettings_Statics::NewProp_ProcessingPhasesConfig_MetaData[] = {
		{ "ArraySizeEnum", "/Script/MassEntity.EMassProcessingPhase" },
		{ "Category", "Mass" },
		{ "Comment", "/** Lets users configure processing phases including the composite processor class to be used as a container for the phases' processors. */" },
		{ "ModuleRelativePath", "Public/MassEntitySettings.h" },
		{ "ToolTip", "Lets users configure processing phases including the composite processor class to be used as a container for the phases' processors." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassEntitySettings_Statics::NewProp_ProcessingPhasesConfig = { "ProcessingPhasesConfig", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(ProcessingPhasesConfig, UMassEntitySettings), nullptr, nullptr, STRUCT_OFFSET(UMassEntitySettings, ProcessingPhasesConfig), Z_Construct_UScriptStruct_FMassProcessingPhaseConfig, METADATA_PARAMS(Z_Construct_UClass_UMassEntitySettings_Statics::NewProp_ProcessingPhasesConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassEntitySettings_Statics::NewProp_ProcessingPhasesConfig_MetaData)) }; // 3191894112
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassEntitySettings_Statics::NewProp_ProcessorCDOs_Inner_MetaData[] = {
		{ "Category", "Mass" },
		{ "Comment", "/** This list contains all the processors available in the given binary (including plugins). The contents are sorted by display name.*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassEntitySettings.h" },
		{ "ToolTip", "This list contains all the processors available in the given binary (including plugins). The contents are sorted by display name." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassEntitySettings_Statics::NewProp_ProcessorCDOs_Inner = { "ProcessorCDOs", nullptr, (EPropertyFlags)0x00060000000a0008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMassProcessor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMassEntitySettings_Statics::NewProp_ProcessorCDOs_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassEntitySettings_Statics::NewProp_ProcessorCDOs_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassEntitySettings_Statics::NewProp_ProcessorCDOs_MetaData[] = {
		{ "Category", "Mass" },
		{ "Comment", "/** This list contains all the processors available in the given binary (including plugins). The contents are sorted by display name.*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassEntitySettings.h" },
		{ "ToolTip", "This list contains all the processors available in the given binary (including plugins). The contents are sorted by display name." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassEntitySettings_Statics::NewProp_ProcessorCDOs = { "ProcessorCDOs", nullptr, (EPropertyFlags)0x0014008000022049, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassEntitySettings, ProcessorCDOs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMassEntitySettings_Statics::NewProp_ProcessorCDOs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassEntitySettings_Statics::NewProp_ProcessorCDOs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassEntitySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassEntitySettings_Statics::NewProp_DumpDependencyGraphFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassEntitySettings_Statics::NewProp_ProcessingPhasesConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassEntitySettings_Statics::NewProp_ProcessorCDOs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassEntitySettings_Statics::NewProp_ProcessorCDOs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassEntitySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassEntitySettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassEntitySettings_Statics::ClassParams = {
		&UMassEntitySettings::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassEntitySettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassEntitySettings_Statics::PropPointers),
		0,
		0x009020A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassEntitySettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassEntitySettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassEntitySettings()
	{
		if (!Z_Registration_Info_UClass_UMassEntitySettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassEntitySettings.OuterSingleton, Z_Construct_UClass_UMassEntitySettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassEntitySettings.OuterSingleton;
	}
	template<> MASSENTITY_API UClass* StaticClass<UMassEntitySettings>()
	{
		return UMassEntitySettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassEntitySettings);
	UMassEntitySettings::~UMassEntitySettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassEntitySettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassEntitySettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassEntitySettings, UMassEntitySettings::StaticClass, TEXT("UMassEntitySettings"), &Z_Registration_Info_UClass_UMassEntitySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassEntitySettings), 603542418U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassEntitySettings_h_2291055196(TEXT("/Script/MassEntity"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassEntitySettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassEntitySettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
