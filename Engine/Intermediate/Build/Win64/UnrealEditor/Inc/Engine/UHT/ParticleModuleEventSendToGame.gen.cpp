// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleEventSendToGame() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventSendToGame();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventSendToGame_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleEventSendToGame::StaticRegisterNativesUParticleModuleEventSendToGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleEventSendToGame);
	UClass* Z_Construct_UClass_UParticleModuleEventSendToGame_NoRegister()
	{
		return UParticleModuleEventSendToGame::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleEventSendToGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleEventSendToGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleEventSendToGame_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Particles/Event/ParticleModuleEventSendToGame.h" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventSendToGame.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleEventSendToGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleEventSendToGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleEventSendToGame_Statics::ClassParams = {
		&UParticleModuleEventSendToGame::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleEventSendToGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventSendToGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleEventSendToGame()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleEventSendToGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleEventSendToGame.OuterSingleton, Z_Construct_UClass_UParticleModuleEventSendToGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleEventSendToGame.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleEventSendToGame>()
	{
		return UParticleModuleEventSendToGame::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleEventSendToGame);
	UParticleModuleEventSendToGame::~UParticleModuleEventSendToGame() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventSendToGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventSendToGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleEventSendToGame, UParticleModuleEventSendToGame::StaticClass, TEXT("UParticleModuleEventSendToGame"), &Z_Registration_Info_UClass_UParticleModuleEventSendToGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleEventSendToGame), 1152798952U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventSendToGame_h_962248290(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventSendToGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventSendToGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
