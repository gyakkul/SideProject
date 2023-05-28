// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneConsoleVariableTrackInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneConsoleVariableTrackInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneConsoleVariableTrackInterface::StaticRegisterNativesUMovieSceneConsoleVariableTrackInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneConsoleVariableTrackInterface);
	UClass* Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface_NoRegister()
	{
		return UMovieSceneConsoleVariableTrackInterface::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneConsoleVariableTrackInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneConsoleVariableTrackInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface_Statics::ClassParams = {
		&UMovieSceneConsoleVariableTrackInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneConsoleVariableTrackInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneConsoleVariableTrackInterface.OuterSingleton, Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneConsoleVariableTrackInterface.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneConsoleVariableTrackInterface>()
	{
		return UMovieSceneConsoleVariableTrackInterface::StaticClass();
	}
	UMovieSceneConsoleVariableTrackInterface::UMovieSceneConsoleVariableTrackInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneConsoleVariableTrackInterface);
	UMovieSceneConsoleVariableTrackInterface::~UMovieSceneConsoleVariableTrackInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConsoleVariableTrackInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConsoleVariableTrackInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface, UMovieSceneConsoleVariableTrackInterface::StaticClass, TEXT("UMovieSceneConsoleVariableTrackInterface"), &Z_Registration_Info_UClass_UMovieSceneConsoleVariableTrackInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneConsoleVariableTrackInterface), 755196591U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConsoleVariableTrackInterface_h_131357333(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConsoleVariableTrackInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConsoleVariableTrackInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
