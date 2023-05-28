// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/InterchangeDatasmithLevelPipeline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeDatasmithLevelPipeline() {}
// Cross Module References
	DATASMITHINTERCHANGE_API UClass* Z_Construct_UClass_UInterchangeDatasmithLevelPipeline();
	DATASMITHINTERCHANGE_API UClass* Z_Construct_UClass_UInterchangeDatasmithLevelPipeline_NoRegister();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericLevelPipeline();
	UPackage* Z_Construct_UPackage__Script_DatasmithInterchange();
// End Cross Module References
	void UInterchangeDatasmithLevelPipeline::StaticRegisterNativesUInterchangeDatasmithLevelPipeline()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeDatasmithLevelPipeline);
	UClass* Z_Construct_UClass_UInterchangeDatasmithLevelPipeline_NoRegister()
	{
		return UInterchangeDatasmithLevelPipeline::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeDatasmithLevelPipeline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeDatasmithLevelPipeline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeGenericLevelPipeline,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithInterchange,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeDatasmithLevelPipeline_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeDatasmithLevelPipeline.h" },
		{ "ModuleRelativePath", "Private/InterchangeDatasmithLevelPipeline.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeDatasmithLevelPipeline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeDatasmithLevelPipeline>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeDatasmithLevelPipeline_Statics::ClassParams = {
		&UInterchangeDatasmithLevelPipeline::StaticClass,
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
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeDatasmithLevelPipeline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDatasmithLevelPipeline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeDatasmithLevelPipeline()
	{
		if (!Z_Registration_Info_UClass_UInterchangeDatasmithLevelPipeline.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeDatasmithLevelPipeline.OuterSingleton, Z_Construct_UClass_UInterchangeDatasmithLevelPipeline_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeDatasmithLevelPipeline.OuterSingleton;
	}
	template<> DATASMITHINTERCHANGE_API UClass* StaticClass<UInterchangeDatasmithLevelPipeline>()
	{
		return UInterchangeDatasmithLevelPipeline::StaticClass();
	}
	UInterchangeDatasmithLevelPipeline::UInterchangeDatasmithLevelPipeline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeDatasmithLevelPipeline);
	UInterchangeDatasmithLevelPipeline::~UInterchangeDatasmithLevelPipeline() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Private_InterchangeDatasmithLevelPipeline_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Private_InterchangeDatasmithLevelPipeline_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeDatasmithLevelPipeline, UInterchangeDatasmithLevelPipeline::StaticClass, TEXT("UInterchangeDatasmithLevelPipeline"), &Z_Registration_Info_UClass_UInterchangeDatasmithLevelPipeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeDatasmithLevelPipeline), 787988388U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Private_InterchangeDatasmithLevelPipeline_h_4187935097(TEXT("/Script/DatasmithInterchange"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Private_InterchangeDatasmithLevelPipeline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Private_InterchangeDatasmithLevelPipeline_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
