// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EntitySystem/MovieSceneEvaluationHookSystem.h"
#include "EntitySystem/BuiltInComponentTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationHookSystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEvaluationHookSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEvaluationHookSystem_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEvaluationHookEvent;
class UScriptStruct* FMovieSceneEvaluationHookEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationHookEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEvaluationHookEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationHookEvent"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationHookEvent.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationHookEvent>()
{
	return FMovieSceneEvaluationHookEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hook_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hook;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEvaluationHookSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationHookEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics::NewProp_Hook_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEvaluationHookSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics::NewProp_Hook = { "Hook", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationHookEvent, Hook), Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics::NewProp_Hook_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics::NewProp_Hook_MetaData)) }; // 2422559893
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics::NewProp_Hook,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationHookEvent",
		sizeof(FMovieSceneEvaluationHookEvent),
		alignof(FMovieSceneEvaluationHookEvent),
		Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationHookEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEvaluationHookEvent.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationHookEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEvaluationHookEventContainer;
class UScriptStruct* FMovieSceneEvaluationHookEventContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationHookEventContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEvaluationHookEventContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationHookEventContainer"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationHookEventContainer.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationHookEventContainer>()
{
	return FMovieSceneEvaluationHookEventContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Events_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Events;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEvaluationHookSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationHookEventContainer>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent, METADATA_PARAMS(nullptr, 0) }; // 1395005332
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::NewProp_Events_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEvaluationHookSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationHookEventContainer, Events), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::NewProp_Events_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::NewProp_Events_MetaData)) }; // 1395005332
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::NewProp_Events_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::NewProp_Events,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationHookEventContainer",
		sizeof(FMovieSceneEvaluationHookEventContainer),
		alignof(FMovieSceneEvaluationHookEventContainer),
		Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationHookEventContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEvaluationHookEventContainer.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationHookEventContainer.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEvaluationInstanceKey;
class UScriptStruct* FMovieSceneEvaluationInstanceKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationInstanceKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEvaluationInstanceKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationInstanceKey"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationInstanceKey.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationInstanceKey>()
{
	return FMovieSceneEvaluationInstanceKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEvaluationHookSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationInstanceKey>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationInstanceKey",
		sizeof(FMovieSceneEvaluationInstanceKey),
		alignof(FMovieSceneEvaluationInstanceKey),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationInstanceKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEvaluationInstanceKey.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationInstanceKey.InnerSingleton;
	}
	void UMovieSceneEvaluationHookSystem::StaticRegisterNativesUMovieSceneEvaluationHookSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneEvaluationHookSystem);
	UClass* Z_Construct_UClass_UMovieSceneEvaluationHookSystem_NoRegister()
	{
		return UMovieSceneEvaluationHookSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PendingEventsByRootInstance_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PendingEventsByRootInstance_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingEventsByRootInstance_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PendingEventsByRootInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EntitySystem/MovieSceneEvaluationHookSystem.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEvaluationHookSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::NewProp_PendingEventsByRootInstance_ValueProp = { "PendingEventsByRootInstance", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer, METADATA_PARAMS(nullptr, 0) }; // 2379653986
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::NewProp_PendingEventsByRootInstance_Key_KeyProp = { "PendingEventsByRootInstance_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey, METADATA_PARAMS(nullptr, 0) }; // 3741234512
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::NewProp_PendingEventsByRootInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEvaluationHookSystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::NewProp_PendingEventsByRootInstance = { "PendingEventsByRootInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneEvaluationHookSystem, PendingEventsByRootInstance), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::NewProp_PendingEventsByRootInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::NewProp_PendingEventsByRootInstance_MetaData)) }; // 3741234512 2379653986
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::NewProp_PendingEventsByRootInstance_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::NewProp_PendingEventsByRootInstance_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::NewProp_PendingEventsByRootInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEvaluationHookSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::ClassParams = {
		&UMovieSceneEvaluationHookSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneEvaluationHookSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneEvaluationHookSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneEvaluationHookSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneEvaluationHookSystem.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneEvaluationHookSystem>()
	{
		return UMovieSceneEvaluationHookSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEvaluationHookSystem);
	UMovieSceneEvaluationHookSystem::~UMovieSceneEvaluationHookSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneEvaluationHookEvent::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics::NewStructOps, TEXT("MovieSceneEvaluationHookEvent"), &Z_Registration_Info_UScriptStruct_MovieSceneEvaluationHookEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEvaluationHookEvent), 1395005332U) },
		{ FMovieSceneEvaluationHookEventContainer::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::NewStructOps, TEXT("MovieSceneEvaluationHookEventContainer"), &Z_Registration_Info_UScriptStruct_MovieSceneEvaluationHookEventContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEvaluationHookEventContainer), 2379653986U) },
		{ FMovieSceneEvaluationInstanceKey::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey_Statics::NewStructOps, TEXT("MovieSceneEvaluationInstanceKey"), &Z_Registration_Info_UScriptStruct_MovieSceneEvaluationInstanceKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEvaluationInstanceKey), 3741234512U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneEvaluationHookSystem, UMovieSceneEvaluationHookSystem::StaticClass, TEXT("UMovieSceneEvaluationHookSystem"), &Z_Registration_Info_UClass_UMovieSceneEvaluationHookSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneEvaluationHookSystem), 681620399U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h_2652426571(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
