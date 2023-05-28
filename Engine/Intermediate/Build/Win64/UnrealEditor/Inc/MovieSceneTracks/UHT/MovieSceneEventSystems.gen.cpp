// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/MovieSceneEventSystems.h"
#include "Channels/MovieSceneEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEventSystems() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventSystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePostEvalEventSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePostEvalEventSystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePostSpawnEventSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePostSpawnEventSystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePreSpawnEventSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePreSpawnEventSystem_NoRegister();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventPtrs();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventTriggerData();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEventTriggerData;
class UScriptStruct* FMovieSceneEventTriggerData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEventTriggerData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEventTriggerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventTriggerData, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEventTriggerData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEventTriggerData.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneEventTriggerData>()
{
	return FMovieSceneEventTriggerData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ptrs_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ptrs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectBindingID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBindingID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Systems/MovieSceneEventSystems.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEventTriggerData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::NewProp_Ptrs_MetaData[] = {
		{ "ModuleRelativePath", "Public/Systems/MovieSceneEventSystems.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::NewProp_Ptrs = { "Ptrs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEventTriggerData, Ptrs), Z_Construct_UScriptStruct_FMovieSceneEventPtrs, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::NewProp_Ptrs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::NewProp_Ptrs_MetaData)) }; // 3110520864
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::NewProp_ObjectBindingID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Systems/MovieSceneEventSystems.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::NewProp_ObjectBindingID = { "ObjectBindingID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEventTriggerData, ObjectBindingID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::NewProp_ObjectBindingID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::NewProp_ObjectBindingID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::NewProp_Ptrs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::NewProp_ObjectBindingID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneEventTriggerData",
		sizeof(FMovieSceneEventTriggerData),
		alignof(FMovieSceneEventTriggerData),
		Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventTriggerData()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneEventTriggerData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEventTriggerData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneEventTriggerData.InnerSingleton;
	}
	void UMovieSceneEventSystem::StaticRegisterNativesUMovieSceneEventSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneEventSystem);
	UClass* Z_Construct_UClass_UMovieSceneEventSystem_NoRegister()
	{
		return UMovieSceneEventSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneEventSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneEventSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Systems that triggers events based on one-shot FMovieSceneEventComponent components\n * Works by iterating all pending instances of TMovieSceneComponentID<FMovieSceneEventComponent> and triggering inline.\n * Does not dispatch any async tasks\n */" },
		{ "IncludePath", "Systems/MovieSceneEventSystems.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneEventSystems.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Systems that triggers events based on one-shot FMovieSceneEventComponent components\nWorks by iterating all pending instances of TMovieSceneComponentID<FMovieSceneEventComponent> and triggering inline.\nDoes not dispatch any async tasks" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneEventSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEventSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEventSystem_Statics::ClassParams = {
		&UMovieSceneEventSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneEventSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneEventSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneEventSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneEventSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneEventSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneEventSystem>()
	{
		return UMovieSceneEventSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEventSystem);
	UMovieSceneEventSystem::~UMovieSceneEventSystem() {}
	void UMovieScenePreSpawnEventSystem::StaticRegisterNativesUMovieScenePreSpawnEventSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScenePreSpawnEventSystem);
	UClass* Z_Construct_UClass_UMovieScenePreSpawnEventSystem_NoRegister()
	{
		return UMovieScenePreSpawnEventSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScenePreSpawnEventSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScenePreSpawnEventSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEventSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePreSpawnEventSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** System that triggers events before any spawnables */" },
		{ "IncludePath", "Systems/MovieSceneEventSystems.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneEventSystems.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that triggers events before any spawnables" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScenePreSpawnEventSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePreSpawnEventSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePreSpawnEventSystem_Statics::ClassParams = {
		&UMovieScenePreSpawnEventSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieScenePreSpawnEventSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePreSpawnEventSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScenePreSpawnEventSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieScenePreSpawnEventSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScenePreSpawnEventSystem.OuterSingleton, Z_Construct_UClass_UMovieScenePreSpawnEventSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieScenePreSpawnEventSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePreSpawnEventSystem>()
	{
		return UMovieScenePreSpawnEventSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePreSpawnEventSystem);
	UMovieScenePreSpawnEventSystem::~UMovieScenePreSpawnEventSystem() {}
	void UMovieScenePostSpawnEventSystem::StaticRegisterNativesUMovieScenePostSpawnEventSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScenePostSpawnEventSystem);
	UClass* Z_Construct_UClass_UMovieScenePostSpawnEventSystem_NoRegister()
	{
		return UMovieScenePostSpawnEventSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScenePostSpawnEventSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScenePostSpawnEventSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEventSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePostSpawnEventSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** System that triggers events after any spawnables */" },
		{ "IncludePath", "Systems/MovieSceneEventSystems.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneEventSystems.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that triggers events after any spawnables" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScenePostSpawnEventSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePostSpawnEventSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePostSpawnEventSystem_Statics::ClassParams = {
		&UMovieScenePostSpawnEventSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieScenePostSpawnEventSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePostSpawnEventSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScenePostSpawnEventSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieScenePostSpawnEventSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScenePostSpawnEventSystem.OuterSingleton, Z_Construct_UClass_UMovieScenePostSpawnEventSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieScenePostSpawnEventSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePostSpawnEventSystem>()
	{
		return UMovieScenePostSpawnEventSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePostSpawnEventSystem);
	UMovieScenePostSpawnEventSystem::~UMovieScenePostSpawnEventSystem() {}
	void UMovieScenePostEvalEventSystem::StaticRegisterNativesUMovieScenePostEvalEventSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScenePostEvalEventSystem);
	UClass* Z_Construct_UClass_UMovieScenePostEvalEventSystem_NoRegister()
	{
		return UMovieScenePostEvalEventSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScenePostEvalEventSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScenePostEvalEventSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEventSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePostEvalEventSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** System that triggers events right at the end of evaluation */" },
		{ "IncludePath", "Systems/MovieSceneEventSystems.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneEventSystems.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that triggers events right at the end of evaluation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScenePostEvalEventSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePostEvalEventSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePostEvalEventSystem_Statics::ClassParams = {
		&UMovieScenePostEvalEventSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieScenePostEvalEventSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePostEvalEventSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScenePostEvalEventSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieScenePostEvalEventSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScenePostEvalEventSystem.OuterSingleton, Z_Construct_UClass_UMovieScenePostEvalEventSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieScenePostEvalEventSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePostEvalEventSystem>()
	{
		return UMovieScenePostEvalEventSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePostEvalEventSystem);
	UMovieScenePostEvalEventSystem::~UMovieScenePostEvalEventSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneEventTriggerData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::NewStructOps, TEXT("MovieSceneEventTriggerData"), &Z_Registration_Info_UScriptStruct_MovieSceneEventTriggerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEventTriggerData), 2622557534U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneEventSystem, UMovieSceneEventSystem::StaticClass, TEXT("UMovieSceneEventSystem"), &Z_Registration_Info_UClass_UMovieSceneEventSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneEventSystem), 745618549U) },
		{ Z_Construct_UClass_UMovieScenePreSpawnEventSystem, UMovieScenePreSpawnEventSystem::StaticClass, TEXT("UMovieScenePreSpawnEventSystem"), &Z_Registration_Info_UClass_UMovieScenePreSpawnEventSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScenePreSpawnEventSystem), 355788481U) },
		{ Z_Construct_UClass_UMovieScenePostSpawnEventSystem, UMovieScenePostSpawnEventSystem::StaticClass, TEXT("UMovieScenePostSpawnEventSystem"), &Z_Registration_Info_UClass_UMovieScenePostSpawnEventSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScenePostSpawnEventSystem), 4205229901U) },
		{ Z_Construct_UClass_UMovieScenePostEvalEventSystem, UMovieScenePostEvalEventSystem::StaticClass, TEXT("UMovieScenePostEvalEventSystem"), &Z_Registration_Info_UClass_UMovieScenePostEvalEventSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScenePostEvalEventSystem), 3920270272U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_3341725686(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
