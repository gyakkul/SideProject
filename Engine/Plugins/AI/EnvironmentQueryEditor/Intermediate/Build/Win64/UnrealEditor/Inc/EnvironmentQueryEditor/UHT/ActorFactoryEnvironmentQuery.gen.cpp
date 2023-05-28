// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorFactoryEnvironmentQuery.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryEnvironmentQuery() {}
// Cross Module References
	ENVIRONMENTQUERYEDITOR_API UClass* Z_Construct_UClass_UActorFactoryEnvironmentQuery();
	ENVIRONMENTQUERYEDITOR_API UClass* Z_Construct_UClass_UActorFactoryEnvironmentQuery_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_EnvironmentQueryEditor();
// End Cross Module References
	void UActorFactoryEnvironmentQuery::StaticRegisterNativesUActorFactoryEnvironmentQuery()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryEnvironmentQuery);
	UClass* Z_Construct_UClass_UActorFactoryEnvironmentQuery_NoRegister()
	{
		return UActorFactoryEnvironmentQuery::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryEnvironmentQuery_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryEnvironmentQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_EnvironmentQueryEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryEnvironmentQuery_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ActorFactoryEnvironmentQuery.h" },
		{ "ModuleRelativePath", "Public/ActorFactoryEnvironmentQuery.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryEnvironmentQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryEnvironmentQuery>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryEnvironmentQuery_Statics::ClassParams = {
		&UActorFactoryEnvironmentQuery::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryEnvironmentQuery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryEnvironmentQuery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryEnvironmentQuery()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryEnvironmentQuery.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryEnvironmentQuery.OuterSingleton, Z_Construct_UClass_UActorFactoryEnvironmentQuery_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryEnvironmentQuery.OuterSingleton;
	}
	template<> ENVIRONMENTQUERYEDITOR_API UClass* StaticClass<UActorFactoryEnvironmentQuery>()
	{
		return UActorFactoryEnvironmentQuery::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryEnvironmentQuery);
	UActorFactoryEnvironmentQuery::~UActorFactoryEnvironmentQuery() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_ActorFactoryEnvironmentQuery_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_ActorFactoryEnvironmentQuery_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryEnvironmentQuery, UActorFactoryEnvironmentQuery::StaticClass, TEXT("UActorFactoryEnvironmentQuery"), &Z_Registration_Info_UClass_UActorFactoryEnvironmentQuery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryEnvironmentQuery), 3094901475U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_ActorFactoryEnvironmentQuery_h_3702103207(TEXT("/Script/EnvironmentQueryEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_ActorFactoryEnvironmentQuery_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_ActorFactoryEnvironmentQuery_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
