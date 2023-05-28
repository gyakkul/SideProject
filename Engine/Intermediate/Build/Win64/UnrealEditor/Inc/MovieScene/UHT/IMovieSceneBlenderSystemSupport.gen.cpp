// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EntitySystem/IMovieSceneBlenderSystemSupport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMovieSceneBlenderSystemSupport() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBlenderSystemSupport();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBlenderSystemSupport_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	void UMovieSceneBlenderSystemSupport::StaticRegisterNativesUMovieSceneBlenderSystemSupport()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneBlenderSystemSupport);
	UClass* Z_Construct_UClass_UMovieSceneBlenderSystemSupport_NoRegister()
	{
		return UMovieSceneBlenderSystemSupport::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneBlenderSystemSupport_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneBlenderSystemSupport_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneBlenderSystemSupport_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/IMovieSceneBlenderSystemSupport.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneBlenderSystemSupport_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneBlenderSystemSupport>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneBlenderSystemSupport_Statics::ClassParams = {
		&UMovieSceneBlenderSystemSupport::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneBlenderSystemSupport_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBlenderSystemSupport_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneBlenderSystemSupport()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneBlenderSystemSupport.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneBlenderSystemSupport.OuterSingleton, Z_Construct_UClass_UMovieSceneBlenderSystemSupport_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneBlenderSystemSupport.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneBlenderSystemSupport>()
	{
		return UMovieSceneBlenderSystemSupport::StaticClass();
	}
	UMovieSceneBlenderSystemSupport::UMovieSceneBlenderSystemSupport(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBlenderSystemSupport);
	UMovieSceneBlenderSystemSupport::~UMovieSceneBlenderSystemSupport() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneBlenderSystemSupport_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneBlenderSystemSupport_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneBlenderSystemSupport, UMovieSceneBlenderSystemSupport::StaticClass, TEXT("UMovieSceneBlenderSystemSupport"), &Z_Registration_Info_UClass_UMovieSceneBlenderSystemSupport, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneBlenderSystemSupport), 406829995U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneBlenderSystemSupport_h_2366818976(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneBlenderSystemSupport_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneBlenderSystemSupport_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
