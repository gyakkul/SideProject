// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleSourceMovement.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSourceMovement() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSourceMovement();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSourceMovement_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleSourceMovement::StaticRegisterNativesUParticleModuleSourceMovement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleSourceMovement);
	UClass* Z_Construct_UClass_UParticleModuleSourceMovement_NoRegister()
	{
		return UParticleModuleSourceMovement::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleSourceMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMovementScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceMovementScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleSourceMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleLocationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSourceMovement_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Source Movement" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Location/ParticleModuleSourceMovement.h" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleSourceMovement.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSourceMovement_Statics::NewProp_SourceMovementScale_MetaData[] = {
		{ "Category", "SourceMovement" },
		{ "Comment", "/** \n\x09 *\x09The scale factor to apply to the source movement before adding to the particle location.\n\x09 *\x09The value is looked up using the particles RELATIVE time [0..1].\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleSourceMovement.h" },
		{ "ToolTip", "The scale factor to apply to the source movement before adding to the particle location.\nThe value is looked up using the particles RELATIVE time [0..1]." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSourceMovement_Statics::NewProp_SourceMovementScale = { "SourceMovementScale", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleSourceMovement, SourceMovementScale), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSourceMovement_Statics::NewProp_SourceMovementScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSourceMovement_Statics::NewProp_SourceMovementScale_MetaData)) }; // 3056335262
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleSourceMovement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSourceMovement_Statics::NewProp_SourceMovementScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleSourceMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSourceMovement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSourceMovement_Statics::ClassParams = {
		&UParticleModuleSourceMovement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleSourceMovement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSourceMovement_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSourceMovement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSourceMovement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleSourceMovement()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleSourceMovement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleSourceMovement.OuterSingleton, Z_Construct_UClass_UParticleModuleSourceMovement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleSourceMovement.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleSourceMovement>()
	{
		return UParticleModuleSourceMovement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSourceMovement);
	UParticleModuleSourceMovement::~UParticleModuleSourceMovement() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleSourceMovement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleSourceMovement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleSourceMovement, UParticleModuleSourceMovement::StaticClass, TEXT("UParticleModuleSourceMovement"), &Z_Registration_Info_UClass_UParticleModuleSourceMovement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleSourceMovement), 2664437098U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleSourceMovement_h_2184414298(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleSourceMovement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleSourceMovement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
