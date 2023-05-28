// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundWaveProcedural.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundWaveProcedural() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundWave();
	ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural();
	ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundWaveProcedural::StaticRegisterNativesUSoundWaveProcedural()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundWaveProcedural);
	UClass* Z_Construct_UClass_USoundWaveProcedural_NoRegister()
	{
		return USoundWaveProcedural::StaticClass();
	}
	struct Z_Construct_UClass_USoundWaveProcedural_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundWaveProcedural_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundWave,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWaveProcedural_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundWaveProcedural.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWaveProcedural.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundWaveProcedural_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundWaveProcedural>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundWaveProcedural_Statics::ClassParams = {
		&USoundWaveProcedural::StaticClass,
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
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundWaveProcedural_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundWaveProcedural_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundWaveProcedural()
	{
		if (!Z_Registration_Info_UClass_USoundWaveProcedural.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundWaveProcedural.OuterSingleton, Z_Construct_UClass_USoundWaveProcedural_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundWaveProcedural.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundWaveProcedural>()
	{
		return USoundWaveProcedural::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundWaveProcedural);
	USoundWaveProcedural::~USoundWaveProcedural() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USoundWaveProcedural)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveProcedural_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveProcedural_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundWaveProcedural, USoundWaveProcedural::StaticClass, TEXT("USoundWaveProcedural"), &Z_Registration_Info_UClass_USoundWaveProcedural, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundWaveProcedural), 2339957428U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveProcedural_h_3795648155(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveProcedural_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveProcedural_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
