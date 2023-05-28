// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/BoolChannelEvaluatorSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoolChannelEvaluatorSystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UBoolChannelEvaluatorSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UBoolChannelEvaluatorSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UBoolChannelEvaluatorSystem::StaticRegisterNativesUBoolChannelEvaluatorSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoolChannelEvaluatorSystem);
	UClass* Z_Construct_UClass_UBoolChannelEvaluatorSystem_NoRegister()
	{
		return UBoolChannelEvaluatorSystem::StaticClass();
	}
	struct Z_Construct_UClass_UBoolChannelEvaluatorSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoolChannelEvaluatorSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoolChannelEvaluatorSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that is responsible for evaluating bool channels.\n */" },
		{ "IncludePath", "Systems/BoolChannelEvaluatorSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/BoolChannelEvaluatorSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that is responsible for evaluating bool channels." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoolChannelEvaluatorSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoolChannelEvaluatorSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoolChannelEvaluatorSystem_Statics::ClassParams = {
		&UBoolChannelEvaluatorSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBoolChannelEvaluatorSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBoolChannelEvaluatorSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoolChannelEvaluatorSystem()
	{
		if (!Z_Registration_Info_UClass_UBoolChannelEvaluatorSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoolChannelEvaluatorSystem.OuterSingleton, Z_Construct_UClass_UBoolChannelEvaluatorSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBoolChannelEvaluatorSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UBoolChannelEvaluatorSystem>()
	{
		return UBoolChannelEvaluatorSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoolChannelEvaluatorSystem);
	UBoolChannelEvaluatorSystem::~UBoolChannelEvaluatorSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_BoolChannelEvaluatorSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_BoolChannelEvaluatorSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBoolChannelEvaluatorSystem, UBoolChannelEvaluatorSystem::StaticClass, TEXT("UBoolChannelEvaluatorSystem"), &Z_Registration_Info_UClass_UBoolChannelEvaluatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoolChannelEvaluatorSystem), 1797401648U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_BoolChannelEvaluatorSystem_h_890997966(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_BoolChannelEvaluatorSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_BoolChannelEvaluatorSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
