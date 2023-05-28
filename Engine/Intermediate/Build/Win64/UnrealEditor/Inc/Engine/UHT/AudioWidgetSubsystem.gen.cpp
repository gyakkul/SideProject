// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Audio/AudioWidgetSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioWidgetSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAudioWidgetSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UAudioWidgetSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAudioWidgetSubsystem::StaticRegisterNativesUAudioWidgetSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioWidgetSubsystem);
	UClass* Z_Construct_UClass_UAudioWidgetSubsystem_NoRegister()
	{
		return UAudioWidgetSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UAudioWidgetSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioWidgetSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioWidgetSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Audio/AudioWidgetSubsystem.h" },
		{ "ModuleRelativePath", "Public/Audio/AudioWidgetSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioWidgetSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioWidgetSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioWidgetSubsystem_Statics::ClassParams = {
		&UAudioWidgetSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAudioWidgetSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioWidgetSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioWidgetSubsystem()
	{
		if (!Z_Registration_Info_UClass_UAudioWidgetSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioWidgetSubsystem.OuterSingleton, Z_Construct_UClass_UAudioWidgetSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioWidgetSubsystem.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAudioWidgetSubsystem>()
	{
		return UAudioWidgetSubsystem::StaticClass();
	}
	UAudioWidgetSubsystem::UAudioWidgetSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioWidgetSubsystem);
	UAudioWidgetSubsystem::~UAudioWidgetSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_AudioWidgetSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_AudioWidgetSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioWidgetSubsystem, UAudioWidgetSubsystem::StaticClass, TEXT("UAudioWidgetSubsystem"), &Z_Registration_Info_UClass_UAudioWidgetSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioWidgetSubsystem), 1359529536U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_AudioWidgetSubsystem_h_3571588160(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_AudioWidgetSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_AudioWidgetSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
