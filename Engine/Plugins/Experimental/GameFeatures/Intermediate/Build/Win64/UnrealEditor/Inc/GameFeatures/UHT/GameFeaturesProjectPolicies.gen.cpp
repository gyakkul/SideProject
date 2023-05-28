// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFeaturesProjectPolicies.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeaturesProjectPolicies() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UDefaultGameFeaturesProjectPolicies();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UDefaultGameFeaturesProjectPolicies_NoRegister();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeaturesProjectPolicies();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeaturesProjectPolicies_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameFeatures();
// End Cross Module References
	void UGameFeaturesProjectPolicies::StaticRegisterNativesUGameFeaturesProjectPolicies()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeaturesProjectPolicies);
	UClass* Z_Construct_UClass_UGameFeaturesProjectPolicies_NoRegister()
	{
		return UGameFeaturesProjectPolicies::StaticClass();
	}
	struct Z_Construct_UClass_UGameFeaturesProjectPolicies_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameFeaturesProjectPolicies_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFeatures,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeaturesProjectPolicies_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// This class allows project-specific rules to be implemented for game feature plugins.\n// Create a subclass and choose it in Project Settings .. Game Features\n" },
		{ "IncludePath", "GameFeaturesProjectPolicies.h" },
		{ "ModuleRelativePath", "Public/GameFeaturesProjectPolicies.h" },
		{ "ToolTip", "This class allows project-specific rules to be implemented for game feature plugins.\nCreate a subclass and choose it in Project Settings .. Game Features" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameFeaturesProjectPolicies_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeaturesProjectPolicies>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeaturesProjectPolicies_Statics::ClassParams = {
		&UGameFeaturesProjectPolicies::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGameFeaturesProjectPolicies_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeaturesProjectPolicies_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameFeaturesProjectPolicies()
	{
		if (!Z_Registration_Info_UClass_UGameFeaturesProjectPolicies.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeaturesProjectPolicies.OuterSingleton, Z_Construct_UClass_UGameFeaturesProjectPolicies_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameFeaturesProjectPolicies.OuterSingleton;
	}
	template<> GAMEFEATURES_API UClass* StaticClass<UGameFeaturesProjectPolicies>()
	{
		return UGameFeaturesProjectPolicies::StaticClass();
	}
	UGameFeaturesProjectPolicies::UGameFeaturesProjectPolicies(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeaturesProjectPolicies);
	UGameFeaturesProjectPolicies::~UGameFeaturesProjectPolicies() {}
	void UDefaultGameFeaturesProjectPolicies::StaticRegisterNativesUDefaultGameFeaturesProjectPolicies()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDefaultGameFeaturesProjectPolicies);
	UClass* Z_Construct_UClass_UDefaultGameFeaturesProjectPolicies_NoRegister()
	{
		return UDefaultGameFeaturesProjectPolicies::StaticClass();
	}
	struct Z_Construct_UClass_UDefaultGameFeaturesProjectPolicies_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDefaultGameFeaturesProjectPolicies_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameFeaturesProjectPolicies,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFeatures,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultGameFeaturesProjectPolicies_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// This is a default implementation that immediately processes all game feature plugins the based on\n// their BuiltInAutoRegister, BuiltInAutoLoad, and BuiltInAutoActivate settings.\n//\n// It will be used if no project-specific policy is set in Project Settings .. Game Features\n" },
		{ "IncludePath", "GameFeaturesProjectPolicies.h" },
		{ "ModuleRelativePath", "Public/GameFeaturesProjectPolicies.h" },
		{ "ToolTip", "This is a default implementation that immediately processes all game feature plugins the based on\ntheir BuiltInAutoRegister, BuiltInAutoLoad, and BuiltInAutoActivate settings.\n\nIt will be used if no project-specific policy is set in Project Settings .. Game Features" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDefaultGameFeaturesProjectPolicies_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDefaultGameFeaturesProjectPolicies>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDefaultGameFeaturesProjectPolicies_Statics::ClassParams = {
		&UDefaultGameFeaturesProjectPolicies::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDefaultGameFeaturesProjectPolicies_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultGameFeaturesProjectPolicies_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDefaultGameFeaturesProjectPolicies()
	{
		if (!Z_Registration_Info_UClass_UDefaultGameFeaturesProjectPolicies.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDefaultGameFeaturesProjectPolicies.OuterSingleton, Z_Construct_UClass_UDefaultGameFeaturesProjectPolicies_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDefaultGameFeaturesProjectPolicies.OuterSingleton;
	}
	template<> GAMEFEATURES_API UClass* StaticClass<UDefaultGameFeaturesProjectPolicies>()
	{
		return UDefaultGameFeaturesProjectPolicies::StaticClass();
	}
	UDefaultGameFeaturesProjectPolicies::UDefaultGameFeaturesProjectPolicies(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDefaultGameFeaturesProjectPolicies);
	UDefaultGameFeaturesProjectPolicies::~UDefaultGameFeaturesProjectPolicies() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesProjectPolicies_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesProjectPolicies_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeaturesProjectPolicies, UGameFeaturesProjectPolicies::StaticClass, TEXT("UGameFeaturesProjectPolicies"), &Z_Registration_Info_UClass_UGameFeaturesProjectPolicies, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeaturesProjectPolicies), 2068910814U) },
		{ Z_Construct_UClass_UDefaultGameFeaturesProjectPolicies, UDefaultGameFeaturesProjectPolicies::StaticClass, TEXT("UDefaultGameFeaturesProjectPolicies"), &Z_Registration_Info_UClass_UDefaultGameFeaturesProjectPolicies, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDefaultGameFeaturesProjectPolicies), 193600945U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesProjectPolicies_h_669161661(TEXT("/Script/GameFeatures"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesProjectPolicies_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesProjectPolicies_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
