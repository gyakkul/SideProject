// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GerstnerWaterWaveSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGerstnerWaterWaveSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_UGerstnerWaterWaveSubsystem();
	WATER_API UClass* Z_Construct_UClass_UGerstnerWaterWaveSubsystem_NoRegister();
// End Cross Module References
	void UGerstnerWaterWaveSubsystem::StaticRegisterNativesUGerstnerWaterWaveSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGerstnerWaterWaveSubsystem);
	UClass* Z_Construct_UClass_UGerstnerWaterWaveSubsystem_NoRegister()
	{
		return UGerstnerWaterWaveSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UGerstnerWaterWaveSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGerstnerWaterWaveSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGerstnerWaterWaveSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** UGerstnerWaterWaveSubsystem manages all UGerstnerWaterWaves objects, regardless of which world they belong to (it's a UEngineSubsystem) */" },
		{ "IncludePath", "GerstnerWaterWaveSubsystem.h" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaveSubsystem.h" },
		{ "ToolTip", "UGerstnerWaterWaveSubsystem manages all UGerstnerWaterWaves objects, regardless of which world they belong to (it's a UEngineSubsystem)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGerstnerWaterWaveSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGerstnerWaterWaveSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGerstnerWaterWaveSubsystem_Statics::ClassParams = {
		&UGerstnerWaterWaveSubsystem::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGerstnerWaterWaveSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGerstnerWaterWaveSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGerstnerWaterWaveSubsystem()
	{
		if (!Z_Registration_Info_UClass_UGerstnerWaterWaveSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGerstnerWaterWaveSubsystem.OuterSingleton, Z_Construct_UClass_UGerstnerWaterWaveSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGerstnerWaterWaveSubsystem.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UGerstnerWaterWaveSubsystem>()
	{
		return UGerstnerWaterWaveSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGerstnerWaterWaveSubsystem);
	UGerstnerWaterWaveSubsystem::~UGerstnerWaterWaveSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaveSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaveSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGerstnerWaterWaveSubsystem, UGerstnerWaterWaveSubsystem::StaticClass, TEXT("UGerstnerWaterWaveSubsystem"), &Z_Registration_Info_UClass_UGerstnerWaterWaveSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGerstnerWaterWaveSubsystem), 745354606U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaveSubsystem_h_2990916328(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaveSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaveSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
