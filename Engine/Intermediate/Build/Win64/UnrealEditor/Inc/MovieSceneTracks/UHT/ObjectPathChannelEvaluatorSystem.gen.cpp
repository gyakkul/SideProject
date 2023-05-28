// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/ObjectPathChannelEvaluatorSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectPathChannelEvaluatorSystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UObjectPathChannelEvaluatorSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UObjectPathChannelEvaluatorSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UObjectPathChannelEvaluatorSystem::StaticRegisterNativesUObjectPathChannelEvaluatorSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectPathChannelEvaluatorSystem);
	UClass* Z_Construct_UClass_UObjectPathChannelEvaluatorSystem_NoRegister()
	{
		return UObjectPathChannelEvaluatorSystem::StaticClass();
	}
	struct Z_Construct_UClass_UObjectPathChannelEvaluatorSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectPathChannelEvaluatorSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPathChannelEvaluatorSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that is responsible for evaluating object path channels.\n */" },
		{ "IncludePath", "Systems/ObjectPathChannelEvaluatorSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/ObjectPathChannelEvaluatorSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that is responsible for evaluating object path channels." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectPathChannelEvaluatorSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectPathChannelEvaluatorSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectPathChannelEvaluatorSystem_Statics::ClassParams = {
		&UObjectPathChannelEvaluatorSystem::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectPathChannelEvaluatorSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPathChannelEvaluatorSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectPathChannelEvaluatorSystem()
	{
		if (!Z_Registration_Info_UClass_UObjectPathChannelEvaluatorSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectPathChannelEvaluatorSystem.OuterSingleton, Z_Construct_UClass_UObjectPathChannelEvaluatorSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjectPathChannelEvaluatorSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UObjectPathChannelEvaluatorSystem>()
	{
		return UObjectPathChannelEvaluatorSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectPathChannelEvaluatorSystem);
	UObjectPathChannelEvaluatorSystem::~UObjectPathChannelEvaluatorSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_ObjectPathChannelEvaluatorSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_ObjectPathChannelEvaluatorSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UObjectPathChannelEvaluatorSystem, UObjectPathChannelEvaluatorSystem::StaticClass, TEXT("UObjectPathChannelEvaluatorSystem"), &Z_Registration_Info_UClass_UObjectPathChannelEvaluatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectPathChannelEvaluatorSystem), 3037474285U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_ObjectPathChannelEvaluatorSystem_h_3844767038(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_ObjectPathChannelEvaluatorSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_ObjectPathChannelEvaluatorSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
