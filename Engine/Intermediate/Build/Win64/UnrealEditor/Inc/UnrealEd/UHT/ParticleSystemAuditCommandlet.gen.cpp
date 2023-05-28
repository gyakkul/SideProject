// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/ParticleSystemAuditCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleSystemAuditCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UParticleSystemAuditCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UParticleSystemAuditCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UParticleSystemAuditCommandlet::StaticRegisterNativesUParticleSystemAuditCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleSystemAuditCommandlet);
	UClass* Z_Construct_UClass_UParticleSystemAuditCommandlet_NoRegister()
	{
		return UParticleSystemAuditCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighSpawnRateOrBurstThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HighSpawnRateOrBurstThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FarLODDistanceTheshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FarLODDistanceTheshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/ParticleSystemAuditCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/ParticleSystemAuditCommandlet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::NewProp_HighSpawnRateOrBurstThreshold_MetaData[] = {
		{ "Comment", "/** If a particle system has a spawn rate or burst count greater than this value, it will be reported */" },
		{ "ModuleRelativePath", "Classes/Commandlets/ParticleSystemAuditCommandlet.h" },
		{ "ToolTip", "If a particle system has a spawn rate or burst count greater than this value, it will be reported" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::NewProp_HighSpawnRateOrBurstThreshold = { "HighSpawnRateOrBurstThreshold", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystemAuditCommandlet, HighSpawnRateOrBurstThreshold), METADATA_PARAMS(Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::NewProp_HighSpawnRateOrBurstThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::NewProp_HighSpawnRateOrBurstThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::NewProp_FarLODDistanceTheshold_MetaData[] = {
		{ "Comment", "/** If a particle system has an LODDistance larger than this value, it will be reported */" },
		{ "ModuleRelativePath", "Classes/Commandlets/ParticleSystemAuditCommandlet.h" },
		{ "ToolTip", "If a particle system has an LODDistance larger than this value, it will be reported" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::NewProp_FarLODDistanceTheshold = { "FarLODDistanceTheshold", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystemAuditCommandlet, FarLODDistanceTheshold), METADATA_PARAMS(Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::NewProp_FarLODDistanceTheshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::NewProp_FarLODDistanceTheshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::NewProp_HighSpawnRateOrBurstThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::NewProp_FarLODDistanceTheshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleSystemAuditCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::ClassParams = {
		&UParticleSystemAuditCommandlet::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::PropPointers),
		0,
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleSystemAuditCommandlet()
	{
		if (!Z_Registration_Info_UClass_UParticleSystemAuditCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleSystemAuditCommandlet.OuterSingleton, Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleSystemAuditCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UParticleSystemAuditCommandlet>()
	{
		return UParticleSystemAuditCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleSystemAuditCommandlet);
	UParticleSystemAuditCommandlet::~UParticleSystemAuditCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ParticleSystemAuditCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ParticleSystemAuditCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleSystemAuditCommandlet, UParticleSystemAuditCommandlet::StaticClass, TEXT("UParticleSystemAuditCommandlet"), &Z_Registration_Info_UClass_UParticleSystemAuditCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleSystemAuditCommandlet), 611418880U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ParticleSystemAuditCommandlet_h_727900998(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ParticleSystemAuditCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ParticleSystemAuditCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
