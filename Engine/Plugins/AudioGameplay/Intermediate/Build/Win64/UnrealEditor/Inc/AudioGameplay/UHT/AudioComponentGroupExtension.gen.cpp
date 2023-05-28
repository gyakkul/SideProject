// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioComponentGroupExtension.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioComponentGroupExtension() {}
// Cross Module References
	AUDIOGAMEPLAY_API UClass* Z_Construct_UClass_UAudioComponentGroupExtension();
	AUDIOGAMEPLAY_API UClass* Z_Construct_UClass_UAudioComponentGroupExtension_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AudioGameplay();
// End Cross Module References
	void UAudioComponentGroupExtension::StaticRegisterNativesUAudioComponentGroupExtension()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioComponentGroupExtension);
	UClass* Z_Construct_UClass_UAudioComponentGroupExtension_NoRegister()
	{
		return UAudioComponentGroupExtension::StaticClass();
	}
	struct Z_Construct_UClass_UAudioComponentGroupExtension_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioComponentGroupExtension_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioGameplay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponentGroupExtension_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AudioComponentGroupExtension.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioComponentGroupExtension_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAudioComponentGroupExtension>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioComponentGroupExtension_Statics::ClassParams = {
		&UAudioComponentGroupExtension::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioComponentGroupExtension_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponentGroupExtension_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioComponentGroupExtension()
	{
		if (!Z_Registration_Info_UClass_UAudioComponentGroupExtension.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioComponentGroupExtension.OuterSingleton, Z_Construct_UClass_UAudioComponentGroupExtension_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioComponentGroupExtension.OuterSingleton;
	}
	template<> AUDIOGAMEPLAY_API UClass* StaticClass<UAudioComponentGroupExtension>()
	{
		return UAudioComponentGroupExtension::StaticClass();
	}
	UAudioComponentGroupExtension::UAudioComponentGroupExtension(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioComponentGroupExtension);
	UAudioComponentGroupExtension::~UAudioComponentGroupExtension() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroupExtension_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroupExtension_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioComponentGroupExtension, UAudioComponentGroupExtension::StaticClass, TEXT("UAudioComponentGroupExtension"), &Z_Registration_Info_UClass_UAudioComponentGroupExtension, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioComponentGroupExtension), 155445926U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroupExtension_h_4069804951(TEXT("/Script/AudioGameplay"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroupExtension_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroupExtension_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
