// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/InterchangeDatasmithMaterialPipeline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeDatasmithMaterialPipeline() {}
// Cross Module References
	DATASMITHINTERCHANGE_API UClass* Z_Construct_UClass_UInterchangeDatasmithMaterialPipeline();
	DATASMITHINTERCHANGE_API UClass* Z_Construct_UClass_UInterchangeDatasmithMaterialPipeline_NoRegister();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericMaterialPipeline();
	UPackage* Z_Construct_UPackage__Script_DatasmithInterchange();
// End Cross Module References
	void UInterchangeDatasmithMaterialPipeline::StaticRegisterNativesUInterchangeDatasmithMaterialPipeline()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeDatasmithMaterialPipeline);
	UClass* Z_Construct_UClass_UInterchangeDatasmithMaterialPipeline_NoRegister()
	{
		return UInterchangeDatasmithMaterialPipeline::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeDatasmithMaterialPipeline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeDatasmithMaterialPipeline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeGenericMaterialPipeline,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithInterchange,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeDatasmithMaterialPipeline_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeDatasmithMaterialPipeline.h" },
		{ "ModuleRelativePath", "Private/InterchangeDatasmithMaterialPipeline.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeDatasmithMaterialPipeline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeDatasmithMaterialPipeline>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeDatasmithMaterialPipeline_Statics::ClassParams = {
		&UInterchangeDatasmithMaterialPipeline::StaticClass,
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
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeDatasmithMaterialPipeline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDatasmithMaterialPipeline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeDatasmithMaterialPipeline()
	{
		if (!Z_Registration_Info_UClass_UInterchangeDatasmithMaterialPipeline.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeDatasmithMaterialPipeline.OuterSingleton, Z_Construct_UClass_UInterchangeDatasmithMaterialPipeline_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeDatasmithMaterialPipeline.OuterSingleton;
	}
	template<> DATASMITHINTERCHANGE_API UClass* StaticClass<UInterchangeDatasmithMaterialPipeline>()
	{
		return UInterchangeDatasmithMaterialPipeline::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeDatasmithMaterialPipeline);
	UInterchangeDatasmithMaterialPipeline::~UInterchangeDatasmithMaterialPipeline() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Private_InterchangeDatasmithMaterialPipeline_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Private_InterchangeDatasmithMaterialPipeline_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeDatasmithMaterialPipeline, UInterchangeDatasmithMaterialPipeline::StaticClass, TEXT("UInterchangeDatasmithMaterialPipeline"), &Z_Registration_Info_UClass_UInterchangeDatasmithMaterialPipeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeDatasmithMaterialPipeline), 493074365U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Private_InterchangeDatasmithMaterialPipeline_h_519901252(TEXT("/Script/DatasmithInterchange"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Private_InterchangeDatasmithMaterialPipeline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Private_InterchangeDatasmithMaterialPipeline_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
