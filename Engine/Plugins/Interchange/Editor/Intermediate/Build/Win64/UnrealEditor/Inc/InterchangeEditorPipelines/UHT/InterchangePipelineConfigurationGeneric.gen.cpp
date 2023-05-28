// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangePipelineConfigurationGeneric.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangePipelineConfigurationGeneric() {}
// Cross Module References
	INTERCHANGEEDITORPIPELINES_API UClass* Z_Construct_UClass_UInterchangePipelineConfigurationGeneric();
	INTERCHANGEEDITORPIPELINES_API UClass* Z_Construct_UClass_UInterchangePipelineConfigurationGeneric_NoRegister();
	INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangePipelineConfigurationBase();
	UPackage* Z_Construct_UPackage__Script_InterchangeEditorPipelines();
// End Cross Module References
	void UInterchangePipelineConfigurationGeneric::StaticRegisterNativesUInterchangePipelineConfigurationGeneric()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangePipelineConfigurationGeneric);
	UClass* Z_Construct_UClass_UInterchangePipelineConfigurationGeneric_NoRegister()
	{
		return UInterchangePipelineConfigurationGeneric::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangePipelineConfigurationGeneric_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangePipelineConfigurationGeneric_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangePipelineConfigurationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEditorPipelines,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangePipelineConfigurationGeneric_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangePipelineConfigurationGeneric.h" },
		{ "ModuleRelativePath", "Public/InterchangePipelineConfigurationGeneric.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangePipelineConfigurationGeneric_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangePipelineConfigurationGeneric>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangePipelineConfigurationGeneric_Statics::ClassParams = {
		&UInterchangePipelineConfigurationGeneric::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangePipelineConfigurationGeneric_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePipelineConfigurationGeneric_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangePipelineConfigurationGeneric()
	{
		if (!Z_Registration_Info_UClass_UInterchangePipelineConfigurationGeneric.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangePipelineConfigurationGeneric.OuterSingleton, Z_Construct_UClass_UInterchangePipelineConfigurationGeneric_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangePipelineConfigurationGeneric.OuterSingleton;
	}
	template<> INTERCHANGEEDITORPIPELINES_API UClass* StaticClass<UInterchangePipelineConfigurationGeneric>()
	{
		return UInterchangePipelineConfigurationGeneric::StaticClass();
	}
	UInterchangePipelineConfigurationGeneric::UInterchangePipelineConfigurationGeneric(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangePipelineConfigurationGeneric);
	UInterchangePipelineConfigurationGeneric::~UInterchangePipelineConfigurationGeneric() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Editor_Source_Pipelines_Public_InterchangePipelineConfigurationGeneric_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Editor_Source_Pipelines_Public_InterchangePipelineConfigurationGeneric_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangePipelineConfigurationGeneric, UInterchangePipelineConfigurationGeneric::StaticClass, TEXT("UInterchangePipelineConfigurationGeneric"), &Z_Registration_Info_UClass_UInterchangePipelineConfigurationGeneric, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangePipelineConfigurationGeneric), 2969537692U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Editor_Source_Pipelines_Public_InterchangePipelineConfigurationGeneric_h_2833951255(TEXT("/Script/InterchangeEditorPipelines"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Editor_Source_Pipelines_Public_InterchangePipelineConfigurationGeneric_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Editor_Source_Pipelines_Public_InterchangePipelineConfigurationGeneric_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
