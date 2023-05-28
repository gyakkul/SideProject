// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundModWave.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundModWave() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural();
	SOUNDMOD_API UClass* Z_Construct_UClass_USoundMod_NoRegister();
	SOUNDMOD_API UClass* Z_Construct_UClass_USoundModWave();
	SOUNDMOD_API UClass* Z_Construct_UClass_USoundModWave_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SoundMod();
// End Cross Module References
	void USoundModWave::StaticRegisterNativesUSoundModWave()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundModWave);
	UClass* Z_Construct_UClass_USoundModWave_NoRegister()
	{
		return USoundModWave::StaticClass();
	}
	struct Z_Construct_UClass_USoundModWave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundMod_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundMod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundModWave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundWaveProcedural,
		(UObject* (*)())Z_Construct_UPackage__Script_SoundMod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModWave_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "SoundModWave.h" },
		{ "ModuleRelativePath", "Classes/SoundModWave.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModWave_Statics::NewProp_SoundMod_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SoundModWave.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundModWave_Statics::NewProp_SoundMod = { "SoundMod", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundModWave, SoundMod), Z_Construct_UClass_USoundMod_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundModWave_Statics::NewProp_SoundMod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundModWave_Statics::NewProp_SoundMod_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundModWave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundModWave_Statics::NewProp_SoundMod,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundModWave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundModWave>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundModWave_Statics::ClassParams = {
		&USoundModWave::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundModWave_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundModWave_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundModWave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundModWave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundModWave()
	{
		if (!Z_Registration_Info_UClass_USoundModWave.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundModWave.OuterSingleton, Z_Construct_UClass_USoundModWave_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundModWave.OuterSingleton;
	}
	template<> SOUNDMOD_API UClass* StaticClass<USoundModWave>()
	{
		return USoundModWave::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundModWave);
	USoundModWave::~USoundModWave() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundModWave_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundModWave_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundModWave, USoundModWave::StaticClass, TEXT("USoundModWave"), &Z_Registration_Info_UClass_USoundModWave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundModWave), 2210719537U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundModWave_h_1221306747(TEXT("/Script/SoundMod"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundModWave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundModWave_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
