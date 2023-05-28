// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioGameplayComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioGameplayComponent() {}
// Cross Module References
	AUDIOGAMEPLAY_API UClass* Z_Construct_UClass_UAudioGameplayComponent();
	AUDIOGAMEPLAY_API UClass* Z_Construct_UClass_UAudioGameplayComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AudioGameplay();
// End Cross Module References
	void UAudioGameplayComponent::StaticRegisterNativesUAudioGameplayComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioGameplayComponent);
	UClass* Z_Construct_UClass_UAudioGameplayComponent_NoRegister()
	{
		return UAudioGameplayComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAudioGameplayComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioGameplayComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioGameplay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioGameplayComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "AudioGameplayComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AudioGameplayComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioGameplayComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioGameplayComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioGameplayComponent_Statics::ClassParams = {
		&UAudioGameplayComponent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioGameplayComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioGameplayComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioGameplayComponent()
	{
		if (!Z_Registration_Info_UClass_UAudioGameplayComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioGameplayComponent.OuterSingleton, Z_Construct_UClass_UAudioGameplayComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioGameplayComponent.OuterSingleton;
	}
	template<> AUDIOGAMEPLAY_API UClass* StaticClass<UAudioGameplayComponent>()
	{
		return UAudioGameplayComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioGameplayComponent);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioGameplayComponent, UAudioGameplayComponent::StaticClass, TEXT("UAudioGameplayComponent"), &Z_Registration_Info_UClass_UAudioGameplayComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioGameplayComponent), 2234380467U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayComponent_h_2216978079(TEXT("/Script/AudioGameplay"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
