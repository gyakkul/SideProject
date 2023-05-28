// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/AudioMixerCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMixerCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UAudioMixerCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UAudioMixerCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UAudioMixerCommandlet::StaticRegisterNativesUAudioMixerCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioMixerCommandlet);
	UClass* Z_Construct_UClass_UAudioMixerCommandlet_NoRegister()
	{
		return UAudioMixerCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UAudioMixerCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioMixerCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioMixerCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Commandlet used to test various aspects of audio mixer without loading UI.\n*/" },
		{ "IncludePath", "Commandlets/AudioMixerCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/AudioMixerCommandlet.h" },
		{ "ToolTip", "Commandlet used to test various aspects of audio mixer without loading UI." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioMixerCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioMixerCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioMixerCommandlet_Statics::ClassParams = {
		&UAudioMixerCommandlet::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioMixerCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMixerCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioMixerCommandlet()
	{
		if (!Z_Registration_Info_UClass_UAudioMixerCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioMixerCommandlet.OuterSingleton, Z_Construct_UClass_UAudioMixerCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioMixerCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UAudioMixerCommandlet>()
	{
		return UAudioMixerCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioMixerCommandlet);
	UAudioMixerCommandlet::~UAudioMixerCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AudioMixerCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AudioMixerCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioMixerCommandlet, UAudioMixerCommandlet::StaticClass, TEXT("UAudioMixerCommandlet"), &Z_Registration_Info_UClass_UAudioMixerCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioMixerCommandlet), 174200389U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AudioMixerCommandlet_h_2206551376(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AudioMixerCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AudioMixerCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
