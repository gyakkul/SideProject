// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocation.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocation();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleLocation::StaticRegisterNativesUParticleModuleLocation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleLocation);
	UClass* Z_Construct_UClass_UParticleModuleLocation_NoRegister()
	{
		return UParticleModuleLocation::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistributeOverNPoints_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistributeOverNPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistributeThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistributeThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleLocationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocation_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Initial Location" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Location/ParticleModuleLocation.h" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_StartLocation_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** \n\x09 *\x09The location the particle should be emitted.\n\x09 *\x09Relative in local space to the emitter by default.\n\x09 *\x09Relative in world space as a WorldOffset module or when the emitter's UseLocalSpace is off.\n\x09 *\x09Retrieved using the EmitterTime at the spawn of the particle.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocation.h" },
		{ "ToolTip", "The location the particle should be emitted.\nRelative in local space to the emitter by default.\nRelative in world space as a WorldOffset module or when the emitter's UseLocalSpace is off.\nRetrieved using the EmitterTime at the spawn of the particle." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocation, StartLocation), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_StartLocation_MetaData)) }; // 3056335262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_DistributeOverNPoints_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/**\n\x09 *  When set to a non-zero value this will force the particles to only spawn on evenly distributed\n\x09 *  positions between the two points specified.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocation.h" },
		{ "ToolTip", "When set to a non-zero value this will force the particles to only spawn on evenly distributed\npositions between the two points specified." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_DistributeOverNPoints = { "DistributeOverNPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocation, DistributeOverNPoints), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_DistributeOverNPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_DistributeOverNPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_DistributeThreshold_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/**\n\x09 *  When DistributeOverNPoints is set to a non-zero value, this specifies the ratio of particles spawned\n\x09 *  that should use the distribution.  (For example setting this to 1 will cause all the particles to\n\x09 *  be distributed evenly whereas .75 would cause 1/4 of the particles to be randomly placed).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocation.h" },
		{ "ToolTip", "When DistributeOverNPoints is set to a non-zero value, this specifies the ratio of particles spawned\nthat should use the distribution.  (For example setting this to 1 will cause all the particles to\nbe distributed evenly whereas .75 would cause 1/4 of the particles to be randomly placed)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_DistributeThreshold = { "DistributeThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocation, DistributeThreshold), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_DistributeThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_DistributeThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_StartLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_DistributeOverNPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_DistributeThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLocation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLocation_Statics::ClassParams = {
		&UParticleModuleLocation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleLocation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocation_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleLocation()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleLocation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleLocation.OuterSingleton, Z_Construct_UClass_UParticleModuleLocation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleLocation.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleLocation>()
	{
		return UParticleModuleLocation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocation);
	UParticleModuleLocation::~UParticleModuleLocation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleLocation, UParticleModuleLocation::StaticClass, TEXT("UParticleModuleLocation"), &Z_Registration_Info_UClass_UParticleModuleLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleLocation), 2999982607U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocation_h_2984552746(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
