// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/DoublePerlinNoiseChannelEvaluatorSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoublePerlinNoiseChannelEvaluatorSystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UDoublePerlinNoiseChannelEvaluatorSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UDoublePerlinNoiseChannelEvaluatorSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UDoublePerlinNoiseChannelEvaluatorSystem::StaticRegisterNativesUDoublePerlinNoiseChannelEvaluatorSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDoublePerlinNoiseChannelEvaluatorSystem);
	UClass* Z_Construct_UClass_UDoublePerlinNoiseChannelEvaluatorSystem_NoRegister()
	{
		return UDoublePerlinNoiseChannelEvaluatorSystem::StaticClass();
	}
	struct Z_Construct_UClass_UDoublePerlinNoiseChannelEvaluatorSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoublePerlinNoiseChannelEvaluatorSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoublePerlinNoiseChannelEvaluatorSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that is responsible for evaluating double perlin noise channels.\n */" },
		{ "IncludePath", "Systems/DoublePerlinNoiseChannelEvaluatorSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/DoublePerlinNoiseChannelEvaluatorSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that is responsible for evaluating double perlin noise channels." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoublePerlinNoiseChannelEvaluatorSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoublePerlinNoiseChannelEvaluatorSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDoublePerlinNoiseChannelEvaluatorSystem_Statics::ClassParams = {
		&UDoublePerlinNoiseChannelEvaluatorSystem::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDoublePerlinNoiseChannelEvaluatorSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDoublePerlinNoiseChannelEvaluatorSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDoublePerlinNoiseChannelEvaluatorSystem()
	{
		if (!Z_Registration_Info_UClass_UDoublePerlinNoiseChannelEvaluatorSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDoublePerlinNoiseChannelEvaluatorSystem.OuterSingleton, Z_Construct_UClass_UDoublePerlinNoiseChannelEvaluatorSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDoublePerlinNoiseChannelEvaluatorSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UDoublePerlinNoiseChannelEvaluatorSystem>()
	{
		return UDoublePerlinNoiseChannelEvaluatorSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoublePerlinNoiseChannelEvaluatorSystem);
	UDoublePerlinNoiseChannelEvaluatorSystem::~UDoublePerlinNoiseChannelEvaluatorSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_DoublePerlinNoiseChannelEvaluatorSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_DoublePerlinNoiseChannelEvaluatorSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDoublePerlinNoiseChannelEvaluatorSystem, UDoublePerlinNoiseChannelEvaluatorSystem::StaticClass, TEXT("UDoublePerlinNoiseChannelEvaluatorSystem"), &Z_Registration_Info_UClass_UDoublePerlinNoiseChannelEvaluatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDoublePerlinNoiseChannelEvaluatorSystem), 3016443764U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_DoublePerlinNoiseChannelEvaluatorSystem_h_3498578572(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_DoublePerlinNoiseChannelEvaluatorSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_DoublePerlinNoiseChannelEvaluatorSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
