// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType_Direction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryItemType_Direction() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_Direction();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_Direction_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_VectorBase();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UEnvQueryItemType_Direction::StaticRegisterNativesUEnvQueryItemType_Direction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryItemType_Direction);
	UClass* Z_Construct_UClass_UEnvQueryItemType_Direction_NoRegister()
	{
		return UEnvQueryItemType_Direction::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryItemType_Direction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryItemType_Direction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryItemType_VectorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryItemType_Direction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/Items/EnvQueryItemType_Direction.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Items/EnvQueryItemType_Direction.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryItemType_Direction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryItemType_Direction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryItemType_Direction_Statics::ClassParams = {
		&UEnvQueryItemType_Direction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryItemType_Direction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryItemType_Direction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryItemType_Direction()
	{
		if (!Z_Registration_Info_UClass_UEnvQueryItemType_Direction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryItemType_Direction.OuterSingleton, Z_Construct_UClass_UEnvQueryItemType_Direction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvQueryItemType_Direction.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryItemType_Direction>()
	{
		return UEnvQueryItemType_Direction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryItemType_Direction);
	UEnvQueryItemType_Direction::~UEnvQueryItemType_Direction() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_Direction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_Direction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryItemType_Direction, UEnvQueryItemType_Direction::StaticClass, TEXT("UEnvQueryItemType_Direction"), &Z_Registration_Info_UClass_UEnvQueryItemType_Direction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryItemType_Direction), 4150520041U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_Direction_h_2093903613(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_Direction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Items_EnvQueryItemType_Direction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
