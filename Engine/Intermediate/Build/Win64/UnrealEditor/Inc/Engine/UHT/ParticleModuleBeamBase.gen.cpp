// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Beam/ParticleModuleBeamBase.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleBeamBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamBase_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_Beam2SourceTargetMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_Beam2SourceTargetTangentMethod();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_Beam2SourceTargetMethod;
	static UEnum* Beam2SourceTargetMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_Beam2SourceTargetMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_Beam2SourceTargetMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_Beam2SourceTargetMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("Beam2SourceTargetMethod"));
		}
		return Z_Registration_Info_UEnum_Beam2SourceTargetMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<Beam2SourceTargetMethod>()
	{
		return Beam2SourceTargetMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_Beam2SourceTargetMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_Beam2SourceTargetMethod_Statics::Enumerators[] = {
		{ "PEB2STM_Default", (int64)PEB2STM_Default },
		{ "PEB2STM_UserSet", (int64)PEB2STM_UserSet },
		{ "PEB2STM_Emitter", (int64)PEB2STM_Emitter },
		{ "PEB2STM_Particle", (int64)PEB2STM_Particle },
		{ "PEB2STM_Actor", (int64)PEB2STM_Actor },
		{ "PEB2STM_MAX", (int64)PEB2STM_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_Beam2SourceTargetMethod_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** The method to use in determining the source/target. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamBase.h" },
		{ "PEB2STM_Actor.Comment", "/** Actor\x09\x09- use the actor as the source/target.\n\x09 *\x09The name of the actor should be set in <Source/Target>Name.\n\x09 */" },
		{ "PEB2STM_Actor.DisplayName", "Actor" },
		{ "PEB2STM_Actor.Name", "PEB2STM_Actor" },
		{ "PEB2STM_Actor.ToolTip", "Actor          - use the actor as the source/target.\n    The name of the actor should be set in <Source/Target>Name." },
		{ "PEB2STM_Default.Comment", "/** Default\x09- use the distribution. \n\x09 *\x09This is the fallback for when other modes can't be resolved.\n\x09 */" },
		{ "PEB2STM_Default.DisplayName", "Default" },
		{ "PEB2STM_Default.Name", "PEB2STM_Default" },
		{ "PEB2STM_Default.ToolTip", "Default        - use the distribution.\n    This is the fallback for when other modes can't be resolved." },
		{ "PEB2STM_Emitter.Comment", "/** Emitter\x09- use the emitter position as the source/target.\n\x09 */" },
		{ "PEB2STM_Emitter.DisplayName", "Emitter" },
		{ "PEB2STM_Emitter.Name", "PEB2STM_Emitter" },
		{ "PEB2STM_Emitter.ToolTip", "Emitter        - use the emitter position as the source/target." },
		{ "PEB2STM_MAX.Name", "PEB2STM_MAX" },
		{ "PEB2STM_Particle.Comment", "/** Particle\x09- use the particles from a given emitter in the system.\x09\x09\n\x09 *\x09The name of the emitter should be set in <Source/Target>Name.\n\x09 */" },
		{ "PEB2STM_Particle.DisplayName", "Particle" },
		{ "PEB2STM_Particle.Name", "PEB2STM_Particle" },
		{ "PEB2STM_Particle.ToolTip", "Particle       - use the particles from a given emitter in the system.\n    The name of the emitter should be set in <Source/Target>Name." },
		{ "PEB2STM_UserSet.Comment", "/** UserSet\x09- use the user set value. \n\x09 *\x09Primarily intended for weapon effects.\n\x09 */" },
		{ "PEB2STM_UserSet.DisplayName", "User Set" },
		{ "PEB2STM_UserSet.Name", "PEB2STM_UserSet" },
		{ "PEB2STM_UserSet.ToolTip", "UserSet        - use the user set value.\n    Primarily intended for weapon effects." },
		{ "ToolTip", "The method to use in determining the source/target." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_Beam2SourceTargetMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"Beam2SourceTargetMethod",
		"Beam2SourceTargetMethod",
		Z_Construct_UEnum_Engine_Beam2SourceTargetMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_Beam2SourceTargetMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_Beam2SourceTargetMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_Beam2SourceTargetMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_Beam2SourceTargetMethod()
	{
		if (!Z_Registration_Info_UEnum_Beam2SourceTargetMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_Beam2SourceTargetMethod.InnerSingleton, Z_Construct_UEnum_Engine_Beam2SourceTargetMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_Beam2SourceTargetMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_Beam2SourceTargetTangentMethod;
	static UEnum* Beam2SourceTargetTangentMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_Beam2SourceTargetTangentMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_Beam2SourceTargetTangentMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_Beam2SourceTargetTangentMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("Beam2SourceTargetTangentMethod"));
		}
		return Z_Registration_Info_UEnum_Beam2SourceTargetTangentMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<Beam2SourceTargetTangentMethod>()
	{
		return Beam2SourceTargetTangentMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_Beam2SourceTargetTangentMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_Beam2SourceTargetTangentMethod_Statics::Enumerators[] = {
		{ "PEB2STTM_Direct", (int64)PEB2STTM_Direct },
		{ "PEB2STTM_UserSet", (int64)PEB2STTM_UserSet },
		{ "PEB2STTM_Distribution", (int64)PEB2STTM_Distribution },
		{ "PEB2STTM_Emitter", (int64)PEB2STTM_Emitter },
		{ "PEB2STTM_MAX", (int64)PEB2STTM_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_Beam2SourceTargetTangentMethod_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** The method to use in determining the source/target tangent. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamBase.h" },
		{ "PEB2STTM_Direct.Comment", "/** Direct - a direct line between source and target.\x09\x09\x09\x09 */" },
		{ "PEB2STTM_Direct.DisplayName", "Direct" },
		{ "PEB2STTM_Direct.Name", "PEB2STTM_Direct" },
		{ "PEB2STTM_Direct.ToolTip", "Direct - a direct line between source and target." },
		{ "PEB2STTM_Distribution.Comment", "/** Distribution - use the distribution.\x09\x09\x09\x09\x09\x09\x09 */" },
		{ "PEB2STTM_Distribution.DisplayName", "Distribution" },
		{ "PEB2STTM_Distribution.Name", "PEB2STTM_Distribution" },
		{ "PEB2STTM_Distribution.ToolTip", "Distribution - use the distribution." },
		{ "PEB2STTM_Emitter.Comment", "/** Emitter\x09- use the emitter direction.\x09\x09\x09\x09\x09\x09\x09 */" },
		{ "PEB2STTM_Emitter.DisplayName", "Emitter" },
		{ "PEB2STTM_Emitter.Name", "PEB2STTM_Emitter" },
		{ "PEB2STTM_Emitter.ToolTip", "Emitter        - use the emitter direction." },
		{ "PEB2STTM_MAX.Name", "PEB2STTM_MAX" },
		{ "PEB2STTM_UserSet.Comment", "/** UserSet\x09- use the user set value.\x09\x09\x09\x09\x09\x09\x09\x09 */" },
		{ "PEB2STTM_UserSet.DisplayName", "User Set" },
		{ "PEB2STTM_UserSet.Name", "PEB2STTM_UserSet" },
		{ "PEB2STTM_UserSet.ToolTip", "UserSet        - use the user set value." },
		{ "ToolTip", "The method to use in determining the source/target tangent." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_Beam2SourceTargetTangentMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"Beam2SourceTargetTangentMethod",
		"Beam2SourceTargetTangentMethod",
		Z_Construct_UEnum_Engine_Beam2SourceTargetTangentMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_Beam2SourceTargetTangentMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_Beam2SourceTargetTangentMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_Beam2SourceTargetTangentMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_Beam2SourceTargetTangentMethod()
	{
		if (!Z_Registration_Info_UEnum_Beam2SourceTargetTangentMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_Beam2SourceTargetTangentMethod.InnerSingleton, Z_Construct_UEnum_Engine_Beam2SourceTargetTangentMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_Beam2SourceTargetTangentMethod.InnerSingleton;
	}
	void UParticleModuleBeamBase::StaticRegisterNativesUParticleModuleBeamBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleBeamBase);
	UClass* Z_Construct_UClass_UParticleModuleBeamBase_NoRegister()
	{
		return UParticleModuleBeamBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleBeamBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleBeamBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Beam" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Beam/ParticleModuleBeamBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleBeamBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleBeamBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleBeamBase_Statics::ClassParams = {
		&UParticleModuleBeamBase::StaticClass,
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
		0x000010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleBeamBase()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleBeamBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleBeamBase.OuterSingleton, Z_Construct_UClass_UParticleModuleBeamBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleBeamBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleBeamBase>()
	{
		return UParticleModuleBeamBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleBeamBase);
	UParticleModuleBeamBase::~UParticleModuleBeamBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamBase_h_Statics::EnumInfo[] = {
		{ Beam2SourceTargetMethod_StaticEnum, TEXT("Beam2SourceTargetMethod"), &Z_Registration_Info_UEnum_Beam2SourceTargetMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 213918748U) },
		{ Beam2SourceTargetTangentMethod_StaticEnum, TEXT("Beam2SourceTargetTangentMethod"), &Z_Registration_Info_UEnum_Beam2SourceTargetTangentMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 954749106U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleBeamBase, UParticleModuleBeamBase::StaticClass, TEXT("UParticleModuleBeamBase"), &Z_Registration_Info_UClass_UParticleModuleBeamBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleBeamBase), 2628906754U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamBase_h_921021747(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamBase_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
