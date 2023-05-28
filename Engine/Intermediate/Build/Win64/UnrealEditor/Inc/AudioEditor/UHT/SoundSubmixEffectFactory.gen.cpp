// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/SoundSubmixEffectFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSubmixEffectFactory() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSubmixEffectFactory();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSubmixEffectFactory_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void USoundSubmixEffectFactory::StaticRegisterNativesUSoundSubmixEffectFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundSubmixEffectFactory);
	UClass* Z_Construct_UClass_USoundSubmixEffectFactory_NoRegister()
	{
		return USoundSubmixEffectFactory::StaticClass();
	}
	struct Z_Construct_UClass_USoundSubmixEffectFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundEffectSubmixPresetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SoundEffectSubmixPresetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundSubmixEffectFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmixEffectFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/SoundSubmixEffectFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/SoundSubmixEffectFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmixEffectFactory_Statics::NewProp_SoundEffectSubmixPresetClass_MetaData[] = {
		{ "Category", "CurveFactory" },
		{ "Comment", "/** The type of sound source effect preset that will be created */" },
		{ "ModuleRelativePath", "Classes/Factories/SoundSubmixEffectFactory.h" },
		{ "ToolTip", "The type of sound source effect preset that will be created" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USoundSubmixEffectFactory_Statics::NewProp_SoundEffectSubmixPresetClass = { "SoundEffectSubmixPresetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundSubmixEffectFactory, SoundEffectSubmixPresetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundSubmixEffectFactory_Statics::NewProp_SoundEffectSubmixPresetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmixEffectFactory_Statics::NewProp_SoundEffectSubmixPresetClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundSubmixEffectFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmixEffectFactory_Statics::NewProp_SoundEffectSubmixPresetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundSubmixEffectFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundSubmixEffectFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundSubmixEffectFactory_Statics::ClassParams = {
		&USoundSubmixEffectFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundSubmixEffectFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmixEffectFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundSubmixEffectFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmixEffectFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundSubmixEffectFactory()
	{
		if (!Z_Registration_Info_UClass_USoundSubmixEffectFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundSubmixEffectFactory.OuterSingleton, Z_Construct_UClass_USoundSubmixEffectFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundSubmixEffectFactory.OuterSingleton;
	}
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundSubmixEffectFactory>()
	{
		return USoundSubmixEffectFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSubmixEffectFactory);
	USoundSubmixEffectFactory::~USoundSubmixEffectFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSubmixEffectFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSubmixEffectFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundSubmixEffectFactory, USoundSubmixEffectFactory::StaticClass, TEXT("USoundSubmixEffectFactory"), &Z_Registration_Info_UClass_USoundSubmixEffectFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundSubmixEffectFactory), 1421539522U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSubmixEffectFactory_h_1945197568(TEXT("/Script/AudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSubmixEffectFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSubmixEffectFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
