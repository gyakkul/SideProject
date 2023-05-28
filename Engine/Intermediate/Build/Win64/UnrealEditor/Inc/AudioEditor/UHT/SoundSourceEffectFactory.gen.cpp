// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/SoundSourceEffectFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSourceEffectFactory() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSourceEffectChainFactory();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSourceEffectChainFactory_NoRegister();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSourceEffectFactory();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSourceEffectFactory_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void USoundSourceEffectFactory::StaticRegisterNativesUSoundSourceEffectFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundSourceEffectFactory);
	UClass* Z_Construct_UClass_USoundSourceEffectFactory_NoRegister()
	{
		return USoundSourceEffectFactory::StaticClass();
	}
	struct Z_Construct_UClass_USoundSourceEffectFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundEffectSourcepresetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SoundEffectSourcepresetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundSourceEffectFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSourceEffectFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/SoundSourceEffectFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/SoundSourceEffectFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSourceEffectFactory_Statics::NewProp_SoundEffectSourcepresetClass_MetaData[] = {
		{ "Category", "CurveFactory" },
		{ "Comment", "/** The type of sound source effect preset that will be created */" },
		{ "ModuleRelativePath", "Classes/Factories/SoundSourceEffectFactory.h" },
		{ "ToolTip", "The type of sound source effect preset that will be created" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USoundSourceEffectFactory_Statics::NewProp_SoundEffectSourcepresetClass = { "SoundEffectSourcepresetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundSourceEffectFactory, SoundEffectSourcepresetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USoundEffectSourcePreset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundSourceEffectFactory_Statics::NewProp_SoundEffectSourcepresetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSourceEffectFactory_Statics::NewProp_SoundEffectSourcepresetClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundSourceEffectFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSourceEffectFactory_Statics::NewProp_SoundEffectSourcepresetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundSourceEffectFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundSourceEffectFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundSourceEffectFactory_Statics::ClassParams = {
		&USoundSourceEffectFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundSourceEffectFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundSourceEffectFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundSourceEffectFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSourceEffectFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundSourceEffectFactory()
	{
		if (!Z_Registration_Info_UClass_USoundSourceEffectFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundSourceEffectFactory.OuterSingleton, Z_Construct_UClass_USoundSourceEffectFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundSourceEffectFactory.OuterSingleton;
	}
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundSourceEffectFactory>()
	{
		return USoundSourceEffectFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSourceEffectFactory);
	USoundSourceEffectFactory::~USoundSourceEffectFactory() {}
	void USoundSourceEffectChainFactory::StaticRegisterNativesUSoundSourceEffectChainFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundSourceEffectChainFactory);
	UClass* Z_Construct_UClass_USoundSourceEffectChainFactory_NoRegister()
	{
		return USoundSourceEffectChainFactory::StaticClass();
	}
	struct Z_Construct_UClass_USoundSourceEffectChainFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundSourceEffectChainFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSourceEffectChainFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/SoundSourceEffectFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/SoundSourceEffectFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundSourceEffectChainFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundSourceEffectChainFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundSourceEffectChainFactory_Statics::ClassParams = {
		&USoundSourceEffectChainFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundSourceEffectChainFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSourceEffectChainFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundSourceEffectChainFactory()
	{
		if (!Z_Registration_Info_UClass_USoundSourceEffectChainFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundSourceEffectChainFactory.OuterSingleton, Z_Construct_UClass_USoundSourceEffectChainFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundSourceEffectChainFactory.OuterSingleton;
	}
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundSourceEffectChainFactory>()
	{
		return USoundSourceEffectChainFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSourceEffectChainFactory);
	USoundSourceEffectChainFactory::~USoundSourceEffectChainFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceEffectFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceEffectFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundSourceEffectFactory, USoundSourceEffectFactory::StaticClass, TEXT("USoundSourceEffectFactory"), &Z_Registration_Info_UClass_USoundSourceEffectFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundSourceEffectFactory), 3910908362U) },
		{ Z_Construct_UClass_USoundSourceEffectChainFactory, USoundSourceEffectChainFactory::StaticClass, TEXT("USoundSourceEffectChainFactory"), &Z_Registration_Info_UClass_USoundSourceEffectChainFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundSourceEffectChainFactory), 3270180809U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceEffectFactory_h_1979419112(TEXT("/Script/AudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceEffectFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceEffectFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
