// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleSpriteEmitter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleEmitter();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSpriteEmitter();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSpriteEmitter_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleScreenAlignment();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParticleScreenAlignment;
	static UEnum* EParticleScreenAlignment_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EParticleScreenAlignment.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EParticleScreenAlignment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleScreenAlignment, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EParticleScreenAlignment"));
		}
		return Z_Registration_Info_UEnum_EParticleScreenAlignment.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EParticleScreenAlignment>()
	{
		return EParticleScreenAlignment_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EParticleScreenAlignment_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EParticleScreenAlignment_Statics::Enumerators[] = {
		{ "PSA_FacingCameraPosition", (int64)PSA_FacingCameraPosition },
		{ "PSA_Square", (int64)PSA_Square },
		{ "PSA_Rectangle", (int64)PSA_Rectangle },
		{ "PSA_Velocity", (int64)PSA_Velocity },
		{ "PSA_AwayFromCenter", (int64)PSA_AwayFromCenter },
		{ "PSA_TypeSpecific", (int64)PSA_TypeSpecific },
		{ "PSA_FacingCameraDistanceBlend", (int64)PSA_FacingCameraDistanceBlend },
		{ "PSA_MAX", (int64)PSA_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EParticleScreenAlignment_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSpriteEmitter.h" },
		{ "PSA_AwayFromCenter.Name", "PSA_AwayFromCenter" },
		{ "PSA_FacingCameraDistanceBlend.Name", "PSA_FacingCameraDistanceBlend" },
		{ "PSA_FacingCameraPosition.Name", "PSA_FacingCameraPosition" },
		{ "PSA_MAX.Name", "PSA_MAX" },
		{ "PSA_Rectangle.Name", "PSA_Rectangle" },
		{ "PSA_Square.Name", "PSA_Square" },
		{ "PSA_TypeSpecific.Name", "PSA_TypeSpecific" },
		{ "PSA_Velocity.Name", "PSA_Velocity" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EParticleScreenAlignment_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EParticleScreenAlignment",
		"EParticleScreenAlignment",
		Z_Construct_UEnum_Engine_EParticleScreenAlignment_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleScreenAlignment_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EParticleScreenAlignment_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleScreenAlignment_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EParticleScreenAlignment()
	{
		if (!Z_Registration_Info_UEnum_EParticleScreenAlignment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParticleScreenAlignment.InnerSingleton, Z_Construct_UEnum_Engine_EParticleScreenAlignment_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EParticleScreenAlignment.InnerSingleton;
	}
	void UParticleSpriteEmitter::StaticRegisterNativesUParticleSpriteEmitter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleSpriteEmitter);
	UClass* Z_Construct_UClass_UParticleSpriteEmitter_NoRegister()
	{
		return UParticleSpriteEmitter::StaticClass();
	}
	struct Z_Construct_UClass_UParticleSpriteEmitter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleSpriteEmitter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleEmitter,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSpriteEmitter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/ParticleSpriteEmitter.h" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSpriteEmitter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleSpriteEmitter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleSpriteEmitter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleSpriteEmitter_Statics::ClassParams = {
		&UParticleSpriteEmitter::StaticClass,
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
		0x008830A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleSpriteEmitter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSpriteEmitter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleSpriteEmitter()
	{
		if (!Z_Registration_Info_UClass_UParticleSpriteEmitter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleSpriteEmitter.OuterSingleton, Z_Construct_UClass_UParticleSpriteEmitter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleSpriteEmitter.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleSpriteEmitter>()
	{
		return UParticleSpriteEmitter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleSpriteEmitter);
	UParticleSpriteEmitter::~UParticleSpriteEmitter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_Statics::EnumInfo[] = {
		{ EParticleScreenAlignment_StaticEnum, TEXT("EParticleScreenAlignment"), &Z_Registration_Info_UEnum_EParticleScreenAlignment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3585686584U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleSpriteEmitter, UParticleSpriteEmitter::StaticClass, TEXT("UParticleSpriteEmitter"), &Z_Registration_Info_UClass_UParticleSpriteEmitter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleSpriteEmitter), 1478832230U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_3501546066(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
