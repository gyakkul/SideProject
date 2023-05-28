// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationEmitterDirect.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationEmitterDirect() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationEmitterDirect();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationEmitterDirect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleLocationEmitterDirect::StaticRegisterNativesUParticleModuleLocationEmitterDirect()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleLocationEmitterDirect);
	UClass* Z_Construct_UClass_UParticleModuleLocationEmitterDirect_NoRegister()
	{
		return UParticleModuleLocationEmitterDirect::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleLocationEmitterDirect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EmitterName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleLocationEmitterDirect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleLocationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationEmitterDirect_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Emitter Direct Location" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Location/ParticleModuleLocationEmitterDirect.h" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationEmitterDirect.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationEmitterDirect_Statics::NewProp_EmitterName_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** The name of the emitter to use as a source for the location of the particles. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationEmitterDirect.h" },
		{ "ToolTip", "The name of the emitter to use as a source for the location of the particles." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleLocationEmitterDirect_Statics::NewProp_EmitterName = { "EmitterName", nullptr, (EPropertyFlags)0x0010000002000009, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationEmitterDirect, EmitterName), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationEmitterDirect_Statics::NewProp_EmitterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationEmitterDirect_Statics::NewProp_EmitterName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleLocationEmitterDirect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationEmitterDirect_Statics::NewProp_EmitterName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleLocationEmitterDirect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLocationEmitterDirect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLocationEmitterDirect_Statics::ClassParams = {
		&UParticleModuleLocationEmitterDirect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleLocationEmitterDirect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationEmitterDirect_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationEmitterDirect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationEmitterDirect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleLocationEmitterDirect()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleLocationEmitterDirect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleLocationEmitterDirect.OuterSingleton, Z_Construct_UClass_UParticleModuleLocationEmitterDirect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleLocationEmitterDirect.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleLocationEmitterDirect>()
	{
		return UParticleModuleLocationEmitterDirect::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationEmitterDirect);
	UParticleModuleLocationEmitterDirect::~UParticleModuleLocationEmitterDirect() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitterDirect_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitterDirect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleLocationEmitterDirect, UParticleModuleLocationEmitterDirect::StaticClass, TEXT("UParticleModuleLocationEmitterDirect"), &Z_Registration_Info_UClass_UParticleModuleLocationEmitterDirect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleLocationEmitterDirect), 1152291253U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitterDirect_h_4128135432(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitterDirect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitterDirect_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
