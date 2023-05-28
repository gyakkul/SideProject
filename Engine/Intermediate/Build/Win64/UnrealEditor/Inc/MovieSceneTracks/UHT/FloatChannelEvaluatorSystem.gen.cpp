// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/FloatChannelEvaluatorSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatChannelEvaluatorSystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UFloatChannelEvaluatorSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UFloatChannelEvaluatorSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UFloatChannelEvaluatorSystem::StaticRegisterNativesUFloatChannelEvaluatorSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloatChannelEvaluatorSystem);
	UClass* Z_Construct_UClass_UFloatChannelEvaluatorSystem_NoRegister()
	{
		return UFloatChannelEvaluatorSystem::StaticClass();
	}
	struct Z_Construct_UClass_UFloatChannelEvaluatorSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloatChannelEvaluatorSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatChannelEvaluatorSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that is responsible for evaluating double channels.\n */" },
		{ "IncludePath", "Systems/FloatChannelEvaluatorSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/FloatChannelEvaluatorSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that is responsible for evaluating double channels." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloatChannelEvaluatorSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloatChannelEvaluatorSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloatChannelEvaluatorSystem_Statics::ClassParams = {
		&UFloatChannelEvaluatorSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFloatChannelEvaluatorSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFloatChannelEvaluatorSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFloatChannelEvaluatorSystem()
	{
		if (!Z_Registration_Info_UClass_UFloatChannelEvaluatorSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloatChannelEvaluatorSystem.OuterSingleton, Z_Construct_UClass_UFloatChannelEvaluatorSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFloatChannelEvaluatorSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UFloatChannelEvaluatorSystem>()
	{
		return UFloatChannelEvaluatorSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloatChannelEvaluatorSystem);
	UFloatChannelEvaluatorSystem::~UFloatChannelEvaluatorSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_FloatChannelEvaluatorSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_FloatChannelEvaluatorSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFloatChannelEvaluatorSystem, UFloatChannelEvaluatorSystem::StaticClass, TEXT("UFloatChannelEvaluatorSystem"), &Z_Registration_Info_UClass_UFloatChannelEvaluatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloatChannelEvaluatorSystem), 3538858146U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_FloatChannelEvaluatorSystem_h_3574444782(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_FloatChannelEvaluatorSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_FloatChannelEvaluatorSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
