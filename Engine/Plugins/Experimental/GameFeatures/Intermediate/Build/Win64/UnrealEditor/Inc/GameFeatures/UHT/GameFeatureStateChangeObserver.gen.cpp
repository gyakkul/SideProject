// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFeatureStateChangeObserver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeatureStateChangeObserver() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureStateChangeObserver();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureStateChangeObserver_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameFeatures();
// End Cross Module References
	void UGameFeatureStateChangeObserver::StaticRegisterNativesUGameFeatureStateChangeObserver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeatureStateChangeObserver);
	UClass* Z_Construct_UClass_UGameFeatureStateChangeObserver_NoRegister()
	{
		return UGameFeatureStateChangeObserver::StaticClass();
	}
	struct Z_Construct_UClass_UGameFeatureStateChangeObserver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameFeatureStateChangeObserver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFeatures,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureStateChangeObserver_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFeatureStateChangeObserver.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameFeatureStateChangeObserver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGameFeatureStateChangeObserver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureStateChangeObserver_Statics::ClassParams = {
		&UGameFeatureStateChangeObserver::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameFeatureStateChangeObserver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureStateChangeObserver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameFeatureStateChangeObserver()
	{
		if (!Z_Registration_Info_UClass_UGameFeatureStateChangeObserver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureStateChangeObserver.OuterSingleton, Z_Construct_UClass_UGameFeatureStateChangeObserver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameFeatureStateChangeObserver.OuterSingleton;
	}
	template<> GAMEFEATURES_API UClass* StaticClass<UGameFeatureStateChangeObserver>()
	{
		return UGameFeatureStateChangeObserver::StaticClass();
	}
	UGameFeatureStateChangeObserver::UGameFeatureStateChangeObserver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureStateChangeObserver);
	UGameFeatureStateChangeObserver::~UGameFeatureStateChangeObserver() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureStateChangeObserver, UGameFeatureStateChangeObserver::StaticClass, TEXT("UGameFeatureStateChangeObserver"), &Z_Registration_Info_UClass_UGameFeatureStateChangeObserver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureStateChangeObserver), 2774822704U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_3273806787(TEXT("/Script/GameFeatures"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
