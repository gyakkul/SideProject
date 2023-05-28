// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTrackInstanceSystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstance_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstanceSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstanceSystem_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceEntry;
class UScriptStruct* FMovieSceneTrackInstanceEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackInstanceEntry"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceEntry.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTrackInstanceEntry>()
{
	return FMovieSceneTrackInstanceEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoundObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TrackInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackInstanceEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::NewProp_BoundObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::NewProp_BoundObject = { "BoundObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneTrackInstanceEntry, BoundObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::NewProp_BoundObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::NewProp_BoundObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::NewProp_TrackInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::NewProp_TrackInstance = { "TrackInstance", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneTrackInstanceEntry, TrackInstance), Z_Construct_UClass_UMovieSceneTrackInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::NewProp_TrackInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::NewProp_TrackInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::NewProp_BoundObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::NewProp_TrackInstance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneTrackInstanceEntry",
		sizeof(FMovieSceneTrackInstanceEntry),
		alignof(FMovieSceneTrackInstanceEntry),
		Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceEntry.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceEntry.InnerSingleton;
	}
	void UMovieSceneTrackInstanceInstantiator::StaticRegisterNativesUMovieSceneTrackInstanceInstantiator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneTrackInstanceInstantiator);
	UClass* Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_NoRegister()
	{
		return UMovieSceneTrackInstanceInstantiator::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTrackInstanceInstantiator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_Statics::ClassParams = {
		&UMovieSceneTrackInstanceInstantiator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneTrackInstanceInstantiator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneTrackInstanceInstantiator.OuterSingleton, Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneTrackInstanceInstantiator.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneTrackInstanceInstantiator>()
	{
		return UMovieSceneTrackInstanceInstantiator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTrackInstanceInstantiator);
	UMovieSceneTrackInstanceInstantiator::~UMovieSceneTrackInstanceInstantiator() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneTrackInstanceInstantiator)
	void UMovieSceneTrackInstanceSystem::StaticRegisterNativesUMovieSceneTrackInstanceSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneTrackInstanceSystem);
	UClass* Z_Construct_UClass_UMovieSceneTrackInstanceSystem_NoRegister()
	{
		return UMovieSceneTrackInstanceSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instantiator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Instantiator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::NewProp_Instantiator_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::NewProp_Instantiator = { "Instantiator", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneTrackInstanceSystem, Instantiator), Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::NewProp_Instantiator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::NewProp_Instantiator_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::NewProp_Instantiator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTrackInstanceSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::ClassParams = {
		&UMovieSceneTrackInstanceSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneTrackInstanceSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneTrackInstanceSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneTrackInstanceSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneTrackInstanceSystem.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneTrackInstanceSystem>()
	{
		return UMovieSceneTrackInstanceSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTrackInstanceSystem);
	UMovieSceneTrackInstanceSystem::~UMovieSceneTrackInstanceSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneTrackInstanceEntry::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::NewStructOps, TEXT("MovieSceneTrackInstanceEntry"), &Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTrackInstanceEntry), 28451893U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator, UMovieSceneTrackInstanceInstantiator::StaticClass, TEXT("UMovieSceneTrackInstanceInstantiator"), &Z_Registration_Info_UClass_UMovieSceneTrackInstanceInstantiator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneTrackInstanceInstantiator), 1298289300U) },
		{ Z_Construct_UClass_UMovieSceneTrackInstanceSystem, UMovieSceneTrackInstanceSystem::StaticClass, TEXT("UMovieSceneTrackInstanceSystem"), &Z_Registration_Info_UClass_UMovieSceneTrackInstanceSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneTrackInstanceSystem), 285532248U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_311777497(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
