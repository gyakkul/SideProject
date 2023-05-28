// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EntitySystem/MovieSceneEntitySystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEntitySystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	void UMovieSceneEntitySystem::StaticRegisterNativesUMovieSceneEntitySystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneEntitySystem);
	UClass* Z_Construct_UClass_UMovieSceneEntitySystem_NoRegister()
	{
		return UMovieSceneEntitySystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneEntitySystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Linker_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Linker;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneEntitySystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEntitySystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// namespace UE\n" },
		{ "IncludePath", "EntitySystem/MovieSceneEntitySystem.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEntitySystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "namespace UE" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEntitySystem_Statics::NewProp_Linker_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEntitySystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneEntitySystem_Statics::NewProp_Linker = { "Linker", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneEntitySystem, Linker), Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEntitySystem_Statics::NewProp_Linker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEntitySystem_Statics::NewProp_Linker_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneEntitySystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEntitySystem_Statics::NewProp_Linker,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneEntitySystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEntitySystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEntitySystem_Statics::ClassParams = {
		&UMovieSceneEntitySystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneEntitySystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEntitySystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEntitySystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEntitySystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneEntitySystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneEntitySystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneEntitySystem.OuterSingleton, Z_Construct_UClass_UMovieSceneEntitySystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneEntitySystem.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneEntitySystem>()
	{
		return UMovieSceneEntitySystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEntitySystem);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneEntitySystem, UMovieSceneEntitySystem::StaticClass, TEXT("UMovieSceneEntitySystem"), &Z_Registration_Info_UClass_UMovieSceneEntitySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneEntitySystem), 134517385U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystem_h_2444272047(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
