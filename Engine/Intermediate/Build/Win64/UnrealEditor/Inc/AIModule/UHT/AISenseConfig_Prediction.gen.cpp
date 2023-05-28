// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/Perception/AISenseConfig_Prediction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISenseConfig_Prediction() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Prediction();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Prediction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UAISenseConfig_Prediction::StaticRegisterNativesUAISenseConfig_Prediction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISenseConfig_Prediction);
	UClass* Z_Construct_UClass_UAISenseConfig_Prediction_NoRegister()
	{
		return UAISenseConfig_Prediction::StaticClass();
	}
	struct Z_Construct_UClass_UAISenseConfig_Prediction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISenseConfig_Prediction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISenseConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Prediction_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "AI Prediction sense config" },
		{ "IncludePath", "Perception/AISenseConfig_Prediction.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Prediction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISenseConfig_Prediction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISenseConfig_Prediction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISenseConfig_Prediction_Statics::ClassParams = {
		&UAISenseConfig_Prediction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Prediction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Prediction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISenseConfig_Prediction()
	{
		if (!Z_Registration_Info_UClass_UAISenseConfig_Prediction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISenseConfig_Prediction.OuterSingleton, Z_Construct_UClass_UAISenseConfig_Prediction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAISenseConfig_Prediction.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UAISenseConfig_Prediction>()
	{
		return UAISenseConfig_Prediction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseConfig_Prediction);
	UAISenseConfig_Prediction::~UAISenseConfig_Prediction() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Prediction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Prediction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAISenseConfig_Prediction, UAISenseConfig_Prediction::StaticClass, TEXT("UAISenseConfig_Prediction"), &Z_Registration_Info_UClass_UAISenseConfig_Prediction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISenseConfig_Prediction), 1890086962U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Prediction_h_151956152(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Prediction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Prediction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
