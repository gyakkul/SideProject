// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/WaterBodyIslandActorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterBodyIslandActorFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_WaterEditor();
	WATEREDITOR_API UClass* Z_Construct_UClass_UWaterBodyIslandActorFactory();
	WATEREDITOR_API UClass* Z_Construct_UClass_UWaterBodyIslandActorFactory_NoRegister();
// End Cross Module References
	void UWaterBodyIslandActorFactory::StaticRegisterNativesUWaterBodyIslandActorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterBodyIslandActorFactory);
	UClass* Z_Construct_UClass_UWaterBodyIslandActorFactory_NoRegister()
	{
		return UWaterBodyIslandActorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UWaterBodyIslandActorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterBodyIslandActorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_WaterEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyIslandActorFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "WaterBodyIslandActorFactory.h" },
		{ "ModuleRelativePath", "Private/WaterBodyIslandActorFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterBodyIslandActorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterBodyIslandActorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterBodyIslandActorFactory_Statics::ClassParams = {
		&UWaterBodyIslandActorFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWaterBodyIslandActorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyIslandActorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterBodyIslandActorFactory()
	{
		if (!Z_Registration_Info_UClass_UWaterBodyIslandActorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterBodyIslandActorFactory.OuterSingleton, Z_Construct_UClass_UWaterBodyIslandActorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterBodyIslandActorFactory.OuterSingleton;
	}
	template<> WATEREDITOR_API UClass* StaticClass<UWaterBodyIslandActorFactory>()
	{
		return UWaterBodyIslandActorFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterBodyIslandActorFactory);
	UWaterBodyIslandActorFactory::~UWaterBodyIslandActorFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyIslandActorFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyIslandActorFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterBodyIslandActorFactory, UWaterBodyIslandActorFactory::StaticClass, TEXT("UWaterBodyIslandActorFactory"), &Z_Registration_Info_UClass_UWaterBodyIslandActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterBodyIslandActorFactory), 1079447648U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyIslandActorFactory_h_3335958383(TEXT("/Script/WaterEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyIslandActorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyIslandActorFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
