// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueSoundWaveProxy() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDialogueSoundWaveProxy();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueSoundWaveProxy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDialogueSoundWaveProxy::StaticRegisterNativesUDialogueSoundWaveProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueSoundWaveProxy);
	UClass* Z_Construct_UClass_UDialogueSoundWaveProxy_NoRegister()
	{
		return UDialogueSoundWaveProxy::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueSoundWaveProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueSoundWaveProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueSoundWaveProxy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Sound/DialogueSoundWaveProxy.h" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueSoundWaveProxy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueSoundWaveProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueSoundWaveProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueSoundWaveProxy_Statics::ClassParams = {
		&UDialogueSoundWaveProxy::StaticClass,
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
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueSoundWaveProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueSoundWaveProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueSoundWaveProxy()
	{
		if (!Z_Registration_Info_UClass_UDialogueSoundWaveProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueSoundWaveProxy.OuterSingleton, Z_Construct_UClass_UDialogueSoundWaveProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueSoundWaveProxy.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDialogueSoundWaveProxy>()
	{
		return UDialogueSoundWaveProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueSoundWaveProxy);
	UDialogueSoundWaveProxy::~UDialogueSoundWaveProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueSoundWaveProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueSoundWaveProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueSoundWaveProxy, UDialogueSoundWaveProxy::StaticClass, TEXT("UDialogueSoundWaveProxy"), &Z_Registration_Info_UClass_UDialogueSoundWaveProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueSoundWaveProxy), 1750362434U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueSoundWaveProxy_h_2620775334(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueSoundWaveProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueSoundWaveProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
