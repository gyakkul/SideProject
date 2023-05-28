// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/AudioBusSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioBusSubsystem() {}
// Cross Module References
	AUDIOMIXER_API UClass* Z_Construct_UClass_UAudioBusSubsystem();
	AUDIOMIXER_API UClass* Z_Construct_UClass_UAudioBusSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioEngineSubsystem();
	UPackage* Z_Construct_UPackage__Script_AudioMixer();
// End Cross Module References
	void UAudioBusSubsystem::StaticRegisterNativesUAudioBusSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioBusSubsystem);
	UClass* Z_Construct_UClass_UAudioBusSubsystem_NoRegister()
	{
		return UAudioBusSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UAudioBusSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioBusSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioBusSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*  UAudioBusSubsystem\n*/" },
		{ "IncludePath", "AudioBusSubsystem.h" },
		{ "ModuleRelativePath", "Public/AudioBusSubsystem.h" },
		{ "ToolTip", "UAudioBusSubsystem" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioBusSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioBusSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioBusSubsystem_Statics::ClassParams = {
		&UAudioBusSubsystem::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioBusSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioBusSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioBusSubsystem()
	{
		if (!Z_Registration_Info_UClass_UAudioBusSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioBusSubsystem.OuterSingleton, Z_Construct_UClass_UAudioBusSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioBusSubsystem.OuterSingleton;
	}
	template<> AUDIOMIXER_API UClass* StaticClass<UAudioBusSubsystem>()
	{
		return UAudioBusSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioBusSubsystem);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioBusSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioBusSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioBusSubsystem, UAudioBusSubsystem::StaticClass, TEXT("UAudioBusSubsystem"), &Z_Registration_Info_UClass_UAudioBusSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioBusSubsystem), 710038920U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioBusSubsystem_h_2555351841(TEXT("/Script/AudioMixer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioBusSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioBusSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
