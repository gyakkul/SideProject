// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EntitySystem/MovieSceneBlenderSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBlenderSystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBlenderSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBlenderSystem_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	void UMovieSceneBlenderSystem::StaticRegisterNativesUMovieSceneBlenderSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneBlenderSystem);
	UClass* Z_Construct_UClass_UMovieSceneBlenderSystem_NoRegister()
	{
		return UMovieSceneBlenderSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneBlenderSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneBlenderSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneBlenderSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all systems that blend data from multiple entities/components into a single entity\n *\n * This system has direct coupling to TCompositePropertySystemManager and forms the basis for built-in\n * blend modes in Sequencer (Absolute, Relative and Additive). Blend 'channels' are allocated in this\n * system which define a many to one relationship by corresponding blend input(many)/output(one) components\n * added to the relevant entities. Blend input and output channel components are uint16.\n *\n * The class supports a maximum of 65535 blend channels.\n *\n * Additionally, blender systems tag their inputs using the built in Absolute, Relative and Additive tags\n * for efficient computation of each type of blending (this allows each blend type to be computed without branching).\n *\n * A simple example of 3 blended floats is as follows:\n *   Entity Data:\n *       Inputs:\n *         float [float component], uint16 [blend channel input], [Absolute Tag] => [ { 100.f, 0 }, { 200.f, 1 } ]\n *         float [float component], uint16 [blend channel input], [Additive Tag] => [ { 50.f, 1} ]\n *       Outputs:\n *         float [float component], uint16 [blend channel output]                => [ { 0.f, 0}, { 0.f, 1} ]\n * To perform blending for this data, accumulation buffers are allocated per-blend-type, and each blend accumulates\n * into the index of its blend channel input component. A final combination pass walks over blend channel outputs\n * a writes the results into the result component from the accumulation buffer.\n */" },
		{ "IncludePath", "EntitySystem/MovieSceneBlenderSystem.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneBlenderSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for all systems that blend data from multiple entities/components into a single entity\n\nThis system has direct coupling to TCompositePropertySystemManager and forms the basis for built-in\nblend modes in Sequencer (Absolute, Relative and Additive). Blend 'channels' are allocated in this\nsystem which define a many to one relationship by corresponding blend input(many)/output(one) components\nadded to the relevant entities. Blend input and output channel components are uint16.\n\nThe class supports a maximum of 65535 blend channels.\n\nAdditionally, blender systems tag their inputs using the built in Absolute, Relative and Additive tags\nfor efficient computation of each type of blending (this allows each blend type to be computed without branching).\n\nA simple example of 3 blended floats is as follows:\n  Entity Data:\n      Inputs:\n        float [float component], uint16 [blend channel input], [Absolute Tag] => [ { 100.f, 0 }, { 200.f, 1 } ]\n        float [float component], uint16 [blend channel input], [Additive Tag] => [ { 50.f, 1} ]\n      Outputs:\n        float [float component], uint16 [blend channel output]                => [ { 0.f, 0}, { 0.f, 1} ]\nTo perform blending for this data, accumulation buffers are allocated per-blend-type, and each blend accumulates\ninto the index of its blend channel input component. A final combination pass walks over blend channel outputs\na writes the results into the result component from the accumulation buffer." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneBlenderSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneBlenderSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneBlenderSystem_Statics::ClassParams = {
		&UMovieSceneBlenderSystem::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneBlenderSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBlenderSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneBlenderSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneBlenderSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneBlenderSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneBlenderSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneBlenderSystem.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneBlenderSystem>()
	{
		return UMovieSceneBlenderSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBlenderSystem);
	UMovieSceneBlenderSystem::~UMovieSceneBlenderSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBlenderSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBlenderSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneBlenderSystem, UMovieSceneBlenderSystem::StaticClass, TEXT("UMovieSceneBlenderSystem"), &Z_Registration_Info_UClass_UMovieSceneBlenderSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneBlenderSystem), 2070588140U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBlenderSystem_h_44700860(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBlenderSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBlenderSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
