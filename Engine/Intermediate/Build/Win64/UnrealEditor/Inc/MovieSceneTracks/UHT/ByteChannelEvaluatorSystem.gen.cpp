// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/ByteChannelEvaluatorSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeByteChannelEvaluatorSystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UByteChannelEvaluatorSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UByteChannelEvaluatorSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UByteChannelEvaluatorSystem::StaticRegisterNativesUByteChannelEvaluatorSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UByteChannelEvaluatorSystem);
	UClass* Z_Construct_UClass_UByteChannelEvaluatorSystem_NoRegister()
	{
		return UByteChannelEvaluatorSystem::StaticClass();
	}
	struct Z_Construct_UClass_UByteChannelEvaluatorSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UByteChannelEvaluatorSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UByteChannelEvaluatorSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that is responsible for evaluating byte channels.\n */" },
		{ "IncludePath", "Systems/ByteChannelEvaluatorSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/ByteChannelEvaluatorSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that is responsible for evaluating byte channels." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UByteChannelEvaluatorSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UByteChannelEvaluatorSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UByteChannelEvaluatorSystem_Statics::ClassParams = {
		&UByteChannelEvaluatorSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UByteChannelEvaluatorSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UByteChannelEvaluatorSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UByteChannelEvaluatorSystem()
	{
		if (!Z_Registration_Info_UClass_UByteChannelEvaluatorSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UByteChannelEvaluatorSystem.OuterSingleton, Z_Construct_UClass_UByteChannelEvaluatorSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UByteChannelEvaluatorSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UByteChannelEvaluatorSystem>()
	{
		return UByteChannelEvaluatorSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UByteChannelEvaluatorSystem);
	UByteChannelEvaluatorSystem::~UByteChannelEvaluatorSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_ByteChannelEvaluatorSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_ByteChannelEvaluatorSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UByteChannelEvaluatorSystem, UByteChannelEvaluatorSystem::StaticClass, TEXT("UByteChannelEvaluatorSystem"), &Z_Registration_Info_UClass_UByteChannelEvaluatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UByteChannelEvaluatorSystem), 3700509744U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_ByteChannelEvaluatorSystem_h_582568417(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_ByteChannelEvaluatorSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_ByteChannelEvaluatorSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
