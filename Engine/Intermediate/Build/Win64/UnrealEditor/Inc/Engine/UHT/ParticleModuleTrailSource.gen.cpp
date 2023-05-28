// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Trail/ParticleModuleTrailSource.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleTrailSource() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTrailBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTrailSource();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTrailSource_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETrail2SourceMethod();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETrail2SourceMethod;
	static UEnum* ETrail2SourceMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETrail2SourceMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETrail2SourceMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETrail2SourceMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETrail2SourceMethod"));
		}
		return Z_Registration_Info_UEnum_ETrail2SourceMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETrail2SourceMethod>()
	{
		return ETrail2SourceMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETrail2SourceMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETrail2SourceMethod_Statics::Enumerators[] = {
		{ "PET2SRCM_Default", (int64)PET2SRCM_Default },
		{ "PET2SRCM_Particle", (int64)PET2SRCM_Particle },
		{ "PET2SRCM_Actor", (int64)PET2SRCM_Actor },
		{ "PET2SRCM_MAX", (int64)PET2SRCM_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETrail2SourceMethod_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
		{ "PET2SRCM_Actor.Comment", "/** Actor\x09\x09- use the actor as the source.\n\x09 *\x09The name of the actor should be set in SourceName.\n\x09 */" },
		{ "PET2SRCM_Actor.Name", "PET2SRCM_Actor" },
		{ "PET2SRCM_Actor.ToolTip", "Actor          - use the actor as the source.\n    The name of the actor should be set in SourceName." },
		{ "PET2SRCM_Default.Comment", "/** Default\x09- use the emitter position. \n\x09 *\x09This is the fallback for when other modes can't be resolved.\n\x09 */" },
		{ "PET2SRCM_Default.Name", "PET2SRCM_Default" },
		{ "PET2SRCM_Default.ToolTip", "Default        - use the emitter position.\n    This is the fallback for when other modes can't be resolved." },
		{ "PET2SRCM_MAX.Name", "PET2SRCM_MAX" },
		{ "PET2SRCM_Particle.Comment", "/** Particle\x09- use the particles from a given emitter in the system.\x09\x09\n\x09 *\x09The name of the emitter should be set in SourceName.\n\x09 */" },
		{ "PET2SRCM_Particle.Name", "PET2SRCM_Particle" },
		{ "PET2SRCM_Particle.ToolTip", "Particle       - use the particles from a given emitter in the system.\n    The name of the emitter should be set in SourceName." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETrail2SourceMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETrail2SourceMethod",
		"ETrail2SourceMethod",
		Z_Construct_UEnum_Engine_ETrail2SourceMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETrail2SourceMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETrail2SourceMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETrail2SourceMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETrail2SourceMethod()
	{
		if (!Z_Registration_Info_UEnum_ETrail2SourceMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETrail2SourceMethod.InnerSingleton, Z_Construct_UEnum_Engine_ETrail2SourceMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETrail2SourceMethod.InnerSingleton;
	}
	void UParticleModuleTrailSource::StaticRegisterNativesUParticleModuleTrailSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleTrailSource);
	UClass* Z_Construct_UClass_UParticleModuleTrailSource_NoRegister()
	{
		return UParticleModuleTrailSource::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleTrailSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceStrength_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockSourceStength_MetaData[];
#endif
		static void NewProp_bLockSourceStength_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockSourceStength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceOffsetCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SourceOffsetCount;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceOffsetDefaults_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceOffsetDefaults_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceOffsetDefaults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInheritRotation_MetaData[];
#endif
		static void NewProp_bInheritRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleTrailSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleTrailBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTrailSource_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Source" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Trail/ParticleModuleTrailSource.h" },
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceMethod_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The source method for the trail. */" },
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
		{ "ToolTip", "The source method for the trail." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceMethod = { "SourceMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleTrailSource, SourceMethod), Z_Construct_UEnum_Engine_ETrail2SourceMethod, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceMethod_MetaData)) }; // 4029902288
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceName_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The name of the source - either the emitter or Actor. */" },
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
		{ "ToolTip", "The name of the source - either the emitter or Actor." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleTrailSource, SourceName), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceStrength_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The strength of the tangent from the source point for each Trail. */" },
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
		{ "ToolTip", "The strength of the tangent from the source point for each Trail." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceStrength = { "SourceStrength", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleTrailSource, SourceStrength), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceStrength_MetaData)) }; // 2827880765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bLockSourceStength_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Whether to lock the source to the life of the particle. */" },
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
		{ "ToolTip", "Whether to lock the source to the life of the particle." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bLockSourceStength_SetBit(void* Obj)
	{
		((UParticleModuleTrailSource*)Obj)->bLockSourceStength = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bLockSourceStength = { "bLockSourceStength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleTrailSource), &Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bLockSourceStength_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bLockSourceStength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bLockSourceStength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceOffsetCount_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/**\n\x09 *\x09SourceOffsetCount\n\x09 *\x09The number of source offsets that can be expected to be found on the instance.\n\x09 *\x09These must be named\n\x09 *\x09\x09TrailSourceOffset#\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
		{ "ToolTip", "SourceOffsetCount\nThe number of source offsets that can be expected to be found on the instance.\nThese must be named\n        TrailSourceOffset#" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceOffsetCount = { "SourceOffsetCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleTrailSource, SourceOffsetCount), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceOffsetCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceOffsetCount_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceOffsetDefaults_Inner = { "SourceOffsetDefaults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceOffsetDefaults_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** \n\x09 *\x09""Default offsets from the source(s). \n\x09 *\x09If there are < SourceOffsetCount slots, the grabbing of values will simply wrap.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
		{ "ToolTip", "Default offsets from the source(s).\nIf there are < SourceOffsetCount slots, the grabbing of values will simply wrap." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceOffsetDefaults = { "SourceOffsetDefaults", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleTrailSource, SourceOffsetDefaults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceOffsetDefaults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceOffsetDefaults_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SelectionMethod_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/**\x09Particle selection method, when using the SourceMethod of Particle. */" },
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
		{ "ToolTip", "Particle selection method, when using the SourceMethod of Particle." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SelectionMethod = { "SelectionMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleTrailSource, SelectionMethod), Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SelectionMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SelectionMethod_MetaData)) }; // 740835518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bInheritRotation_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/**\x09Interhit particle rotation - only valid for SourceMethod of PET2SRCM_Particle. */" },
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
		{ "ToolTip", "Interhit particle rotation - only valid for SourceMethod of PET2SRCM_Particle." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bInheritRotation_SetBit(void* Obj)
	{
		((UParticleModuleTrailSource*)Obj)->bInheritRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bInheritRotation = { "bInheritRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleTrailSource), &Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bInheritRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bInheritRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bInheritRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleTrailSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bLockSourceStength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceOffsetCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceOffsetDefaults_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceOffsetDefaults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SelectionMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bInheritRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleTrailSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleTrailSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleTrailSource_Statics::ClassParams = {
		&UParticleModuleTrailSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleTrailSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTrailSource_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTrailSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTrailSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleTrailSource()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleTrailSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleTrailSource.OuterSingleton, Z_Construct_UClass_UParticleModuleTrailSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleTrailSource.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleTrailSource>()
	{
		return UParticleModuleTrailSource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleTrailSource);
	UParticleModuleTrailSource::~UParticleModuleTrailSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_Statics::EnumInfo[] = {
		{ ETrail2SourceMethod_StaticEnum, TEXT("ETrail2SourceMethod"), &Z_Registration_Info_UEnum_ETrail2SourceMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4029902288U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleTrailSource, UParticleModuleTrailSource::StaticClass, TEXT("UParticleModuleTrailSource"), &Z_Registration_Info_UClass_UParticleModuleTrailSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleTrailSource), 4125631141U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_196746582(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
