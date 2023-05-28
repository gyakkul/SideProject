// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/IntegerChannelEvaluatorSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntegerChannelEvaluatorSystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UIntegerChannelEvaluatorSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UIntegerChannelEvaluatorSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UIntegerChannelEvaluatorSystem::StaticRegisterNativesUIntegerChannelEvaluatorSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIntegerChannelEvaluatorSystem);
	UClass* Z_Construct_UClass_UIntegerChannelEvaluatorSystem_NoRegister()
	{
		return UIntegerChannelEvaluatorSystem::StaticClass();
	}
	struct Z_Construct_UClass_UIntegerChannelEvaluatorSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIntegerChannelEvaluatorSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntegerChannelEvaluatorSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that is responsible for evaluating integer channels.\n */" },
		{ "IncludePath", "Systems/IntegerChannelEvaluatorSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/IntegerChannelEvaluatorSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that is responsible for evaluating integer channels." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIntegerChannelEvaluatorSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIntegerChannelEvaluatorSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIntegerChannelEvaluatorSystem_Statics::ClassParams = {
		&UIntegerChannelEvaluatorSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIntegerChannelEvaluatorSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIntegerChannelEvaluatorSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIntegerChannelEvaluatorSystem()
	{
		if (!Z_Registration_Info_UClass_UIntegerChannelEvaluatorSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIntegerChannelEvaluatorSystem.OuterSingleton, Z_Construct_UClass_UIntegerChannelEvaluatorSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIntegerChannelEvaluatorSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UIntegerChannelEvaluatorSystem>()
	{
		return UIntegerChannelEvaluatorSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIntegerChannelEvaluatorSystem);
	UIntegerChannelEvaluatorSystem::~UIntegerChannelEvaluatorSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_IntegerChannelEvaluatorSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_IntegerChannelEvaluatorSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIntegerChannelEvaluatorSystem, UIntegerChannelEvaluatorSystem::StaticClass, TEXT("UIntegerChannelEvaluatorSystem"), &Z_Registration_Info_UClass_UIntegerChannelEvaluatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIntegerChannelEvaluatorSystem), 2632200473U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_IntegerChannelEvaluatorSystem_h_3873508946(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_IntegerChannelEvaluatorSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_IntegerChannelEvaluatorSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
