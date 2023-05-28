// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_PerceivedActors.h"
#include "../../AIModule/Classes/DataProviders/AIDataProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_PerceivedActors() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UEnvQueryGenerator_PerceivedActors::StaticRegisterNativesUEnvQueryGenerator_PerceivedActors()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryGenerator_PerceivedActors);
	UClass* Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_NoRegister()
	{
		return UEnvQueryGenerator_PerceivedActors::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AllowedActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchRadius_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SearchRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ListenerContext_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ListenerContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SenseToUse_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SenseToUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeKnownActors_MetaData[];
#endif
		static void NewProp_bIncludeKnownActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeKnownActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Gathers actors perceived by context */" },
		{ "DisplayName", "Perceived Actors" },
		{ "IncludePath", "EnvironmentQuery/Generators/EnvQueryGenerator_PerceivedActors.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_PerceivedActors.h" },
		{ "ToolTip", "Gathers actors perceived by context" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_AllowedActorClass_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** If set will be used to filter results */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_PerceivedActors.h" },
		{ "ToolTip", "If set will be used to filter results" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_AllowedActorClass = { "AllowedActorClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_PerceivedActors, AllowedActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_AllowedActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_AllowedActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_SearchRadius_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** Additional distance limit imposed on the items generated. Perception's range limit still applies. */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_PerceivedActors.h" },
		{ "ToolTip", "Additional distance limit imposed on the items generated. Perception's range limit still applies." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_SearchRadius = { "SearchRadius", nullptr, (EPropertyFlags)0x0020088000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_PerceivedActors, SearchRadius), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_SearchRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_SearchRadius_MetaData)) }; // 2399041136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_ListenerContext_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** The perception listener to use as a source of information */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_PerceivedActors.h" },
		{ "ToolTip", "The perception listener to use as a source of information" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_ListenerContext = { "ListenerContext", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_PerceivedActors, ListenerContext), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_ListenerContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_ListenerContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_SenseToUse_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** If set will be used to filter gathered results so that only actors perceived with a given sense are considered */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_PerceivedActors.h" },
		{ "ToolTip", "If set will be used to filter gathered results so that only actors perceived with a given sense are considered" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_SenseToUse = { "SenseToUse", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_PerceivedActors, SenseToUse), Z_Construct_UClass_UClass, Z_Construct_UClass_UAISense_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_SenseToUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_SenseToUse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_bIncludeKnownActors_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/**\n\x09 * Indicates whether to include all actors known via perception (TRUE) or just the ones actively being perceived \n\x09 * at the moment (example \"currently visible\" as opposed to \"seen and the perception stimulus haven't expired yet\").\n\x09 * @see FAIStimulus.bExpired\n\x09 */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_PerceivedActors.h" },
		{ "ToolTip", "Indicates whether to include all actors known via perception (TRUE) or just the ones actively being perceived\nat the moment (example \"currently visible\" as opposed to \"seen and the perception stimulus haven't expired yet\").\n@see FAIStimulus.bExpired" },
	};
#endif
	void Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_bIncludeKnownActors_SetBit(void* Obj)
	{
		((UEnvQueryGenerator_PerceivedActors*)Obj)->bIncludeKnownActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_bIncludeKnownActors = { "bIncludeKnownActors", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEnvQueryGenerator_PerceivedActors), &Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_bIncludeKnownActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_bIncludeKnownActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_bIncludeKnownActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_AllowedActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_SearchRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_ListenerContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_SenseToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_bIncludeKnownActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryGenerator_PerceivedActors>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::ClassParams = {
		&UEnvQueryGenerator_PerceivedActors::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors()
	{
		if (!Z_Registration_Info_UClass_UEnvQueryGenerator_PerceivedActors.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryGenerator_PerceivedActors.OuterSingleton, Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvQueryGenerator_PerceivedActors.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryGenerator_PerceivedActors>()
	{
		return UEnvQueryGenerator_PerceivedActors::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_PerceivedActors);
	UEnvQueryGenerator_PerceivedActors::~UEnvQueryGenerator_PerceivedActors() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_PerceivedActors_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_PerceivedActors_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors, UEnvQueryGenerator_PerceivedActors::StaticClass, TEXT("UEnvQueryGenerator_PerceivedActors"), &Z_Registration_Info_UClass_UEnvQueryGenerator_PerceivedActors, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryGenerator_PerceivedActors), 3241308076U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_PerceivedActors_h_3521500872(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_PerceivedActors_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_PerceivedActors_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
