// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/MovieScenePropertySystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePropertySystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertySystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertySystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieScenePropertySystem::StaticRegisterNativesUMovieScenePropertySystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScenePropertySystem);
	UClass* Z_Construct_UClass_UMovieScenePropertySystem_NoRegister()
	{
		return UMovieScenePropertySystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScenePropertySystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstantiatorSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InstantiatorSystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScenePropertySystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePropertySystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Abstract base class for any property system that deals with a property registered with FBuiltInComponentTypes::PropertyRegistry */" },
		{ "IncludePath", "Systems/MovieScenePropertySystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieScenePropertySystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Abstract base class for any property system that deals with a property registered with FBuiltInComponentTypes::PropertyRegistry" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePropertySystem_Statics::NewProp_InstantiatorSystem_MetaData[] = {
		{ "Comment", "/** Pointer to the property instantiator system for retrieving property stats */" },
		{ "ModuleRelativePath", "Public/Systems/MovieScenePropertySystem.h" },
		{ "ToolTip", "Pointer to the property instantiator system for retrieving property stats" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieScenePropertySystem_Statics::NewProp_InstantiatorSystem = { "InstantiatorSystem", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScenePropertySystem, InstantiatorSystem), Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieScenePropertySystem_Statics::NewProp_InstantiatorSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePropertySystem_Statics::NewProp_InstantiatorSystem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScenePropertySystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePropertySystem_Statics::NewProp_InstantiatorSystem,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieScenePropertySystem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister, (int32)VTABLE_OFFSET(UMovieScenePropertySystem, IMovieScenePreAnimatedStateSystemInterface), false },  // 1390211309
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScenePropertySystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePropertySystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePropertySystem_Statics::ClassParams = {
		&UMovieScenePropertySystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieScenePropertySystem_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePropertySystem_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScenePropertySystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePropertySystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScenePropertySystem()
	{
		if (!Z_Registration_Info_UClass_UMovieScenePropertySystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScenePropertySystem.OuterSingleton, Z_Construct_UClass_UMovieScenePropertySystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieScenePropertySystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePropertySystem>()
	{
		return UMovieScenePropertySystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePropertySystem);
	UMovieScenePropertySystem::~UMovieScenePropertySystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScenePropertySystem, UMovieScenePropertySystem::StaticClass, TEXT("UMovieScenePropertySystem"), &Z_Registration_Info_UClass_UMovieScenePropertySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScenePropertySystem), 3341530194U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_3984046142(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
