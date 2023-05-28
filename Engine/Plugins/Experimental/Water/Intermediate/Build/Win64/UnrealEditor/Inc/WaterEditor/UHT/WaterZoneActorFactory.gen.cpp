// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/WaterZoneActorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterZoneActorFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_WaterEditor();
	WATEREDITOR_API UClass* Z_Construct_UClass_UWaterZoneActorFactory();
	WATEREDITOR_API UClass* Z_Construct_UClass_UWaterZoneActorFactory_NoRegister();
// End Cross Module References
	void UWaterZoneActorFactory::StaticRegisterNativesUWaterZoneActorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterZoneActorFactory);
	UClass* Z_Construct_UClass_UWaterZoneActorFactory_NoRegister()
	{
		return UWaterZoneActorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UWaterZoneActorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterZoneActorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_WaterEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterZoneActorFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "WaterZoneActorFactory.h" },
		{ "ModuleRelativePath", "Private/WaterZoneActorFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterZoneActorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterZoneActorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterZoneActorFactory_Statics::ClassParams = {
		&UWaterZoneActorFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWaterZoneActorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterZoneActorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterZoneActorFactory()
	{
		if (!Z_Registration_Info_UClass_UWaterZoneActorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterZoneActorFactory.OuterSingleton, Z_Construct_UClass_UWaterZoneActorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterZoneActorFactory.OuterSingleton;
	}
	template<> WATEREDITOR_API UClass* StaticClass<UWaterZoneActorFactory>()
	{
		return UWaterZoneActorFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterZoneActorFactory);
	UWaterZoneActorFactory::~UWaterZoneActorFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterZoneActorFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterZoneActorFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterZoneActorFactory, UWaterZoneActorFactory::StaticClass, TEXT("UWaterZoneActorFactory"), &Z_Registration_Info_UClass_UWaterZoneActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterZoneActorFactory), 277216035U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterZoneActorFactory_h_4013933964(TEXT("/Script/WaterEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterZoneActorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterZoneActorFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
