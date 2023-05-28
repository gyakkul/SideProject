// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/EnvironmentQuery/EnvQueryDebugHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryDebugHelpers() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryDebugHelpers();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryDebugHelpers_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UEnvQueryDebugHelpers::StaticRegisterNativesUEnvQueryDebugHelpers()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryDebugHelpers);
	UClass* Z_Construct_UClass_UEnvQueryDebugHelpers_NoRegister()
	{
		return UEnvQueryDebugHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryDebugHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryDebugHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryDebugHelpers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/EnvQueryDebugHelpers.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryDebugHelpers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryDebugHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryDebugHelpers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryDebugHelpers_Statics::ClassParams = {
		&UEnvQueryDebugHelpers::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryDebugHelpers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryDebugHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryDebugHelpers()
	{
		if (!Z_Registration_Info_UClass_UEnvQueryDebugHelpers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryDebugHelpers.OuterSingleton, Z_Construct_UClass_UEnvQueryDebugHelpers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvQueryDebugHelpers.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryDebugHelpers>()
	{
		return UEnvQueryDebugHelpers::StaticClass();
	}
	UEnvQueryDebugHelpers::UEnvQueryDebugHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryDebugHelpers);
	UEnvQueryDebugHelpers::~UEnvQueryDebugHelpers() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryDebugHelpers_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryDebugHelpers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryDebugHelpers, UEnvQueryDebugHelpers::StaticClass, TEXT("UEnvQueryDebugHelpers"), &Z_Registration_Info_UClass_UEnvQueryDebugHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryDebugHelpers), 593348574U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryDebugHelpers_h_2181016190(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryDebugHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryDebugHelpers_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
