// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioLinkSettingsAbstract.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioLinkSettingsAbstract() {}
// Cross Module References
	AUDIOLINKCORE_API UClass* Z_Construct_UClass_UAudioLinkSettingsAbstract();
	AUDIOLINKCORE_API UClass* Z_Construct_UClass_UAudioLinkSettingsAbstract_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AudioLinkCore();
// End Cross Module References
	void UAudioLinkSettingsAbstract::StaticRegisterNativesUAudioLinkSettingsAbstract()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioLinkSettingsAbstract);
	UClass* Z_Construct_UClass_UAudioLinkSettingsAbstract_NoRegister()
	{
		return UAudioLinkSettingsAbstract::StaticClass();
	}
	struct Z_Construct_UClass_UAudioLinkSettingsAbstract_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioLinkSettingsAbstract_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioLinkCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioLinkSettingsAbstract_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n  * This opaque class should be used for specifying settings for how audio should be\n  * send to an external audio link.\n  */" },
		{ "IncludePath", "AudioLinkSettingsAbstract.h" },
		{ "ModuleRelativePath", "Public/AudioLinkSettingsAbstract.h" },
		{ "ToolTip", "This opaque class should be used for specifying settings for how audio should be\nsend to an external audio link." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioLinkSettingsAbstract_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioLinkSettingsAbstract>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioLinkSettingsAbstract_Statics::ClassParams = {
		&UAudioLinkSettingsAbstract::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioLinkSettingsAbstract_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioLinkSettingsAbstract_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioLinkSettingsAbstract()
	{
		if (!Z_Registration_Info_UClass_UAudioLinkSettingsAbstract.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioLinkSettingsAbstract.OuterSingleton, Z_Construct_UClass_UAudioLinkSettingsAbstract_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioLinkSettingsAbstract.OuterSingleton;
	}
	template<> AUDIOLINKCORE_API UClass* StaticClass<UAudioLinkSettingsAbstract>()
	{
		return UAudioLinkSettingsAbstract::StaticClass();
	}
	UAudioLinkSettingsAbstract::UAudioLinkSettingsAbstract(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioLinkSettingsAbstract);
	UAudioLinkSettingsAbstract::~UAudioLinkSettingsAbstract() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioLink_AudioLinkCore_Public_AudioLinkSettingsAbstract_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioLink_AudioLinkCore_Public_AudioLinkSettingsAbstract_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioLinkSettingsAbstract, UAudioLinkSettingsAbstract::StaticClass, TEXT("UAudioLinkSettingsAbstract"), &Z_Registration_Info_UClass_UAudioLinkSettingsAbstract, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioLinkSettingsAbstract), 2252110865U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioLink_AudioLinkCore_Public_AudioLinkSettingsAbstract_h_1061861720(TEXT("/Script/AudioLinkCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioLink_AudioLinkCore_Public_AudioLinkSettingsAbstract_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioLink_AudioLinkCore_Public_AudioLinkSettingsAbstract_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
