// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionalTestGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFunctionalTestGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalTestGameMode();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalTestGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
// End Cross Module References
	void AFunctionalTestGameMode::StaticRegisterNativesAFunctionalTestGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFunctionalTestGameMode);
	UClass* Z_Construct_UClass_AFunctionalTestGameMode_NoRegister()
	{
		return AFunctionalTestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFunctionalTestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFunctionalTestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalTestGameMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FunctionalTestGameMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/FunctionalTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFunctionalTestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFunctionalTestGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFunctionalTestGameMode_Statics::ClassParams = {
		&AFunctionalTestGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFunctionalTestGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFunctionalTestGameMode()
	{
		if (!Z_Registration_Info_UClass_AFunctionalTestGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFunctionalTestGameMode.OuterSingleton, Z_Construct_UClass_AFunctionalTestGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFunctionalTestGameMode.OuterSingleton;
	}
	template<> FUNCTIONALTESTING_API UClass* StaticClass<AFunctionalTestGameMode>()
	{
		return AFunctionalTestGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFunctionalTestGameMode);
	AFunctionalTestGameMode::~AFunctionalTestGameMode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFunctionalTestGameMode, AFunctionalTestGameMode::StaticClass, TEXT("AFunctionalTestGameMode"), &Z_Registration_Info_UClass_AFunctionalTestGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFunctionalTestGameMode), 2244558190U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_3768105874(TEXT("/Script/FunctionalTesting"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
