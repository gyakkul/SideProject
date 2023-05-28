// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType_Actor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryItemType_Actor() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_Actor();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_Actor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_ActorBase();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UEnvQueryItemType_Actor::StaticRegisterNativesUEnvQueryItemType_Actor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryItemType_Actor);
	UClass* Z_Construct_UClass_UEnvQueryItemType_Actor_NoRegister()
	{
		return UEnvQueryItemType_Actor::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryItemType_Actor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryItemType_Actor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryItemType_ActorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryItemType_Actor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/Items/EnvQueryItemType_Actor.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Items/EnvQueryItemType_Actor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryItemType_Actor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryItemType_Actor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryItemType_Actor_Statics::ClassParams = {
		&UEnvQueryItemType_Actor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryItemType_Actor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryItemType_Actor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryItemType_Actor()
	{
		if (!Z_Registration_Info_UClass_UEnvQueryItemType_Actor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryItemType_Actor.OuterSingleton, Z_Construct_UClass_UEnvQueryItemType_Actor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvQueryItemType_Actor.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryItemType_Actor>()
	{
		return UEnvQueryItemType_Actor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryItemType_Actor);
	UEnvQueryItemType_Actor::~UEnvQueryItemType_Actor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_Actor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_Actor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryItemType_Actor, UEnvQueryItemType_Actor::StaticClass, TEXT("UEnvQueryItemType_Actor"), &Z_Registration_Info_UClass_UEnvQueryItemType_Actor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryItemType_Actor), 4134178755U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_Actor_h_61622646(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_Actor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_Actor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
