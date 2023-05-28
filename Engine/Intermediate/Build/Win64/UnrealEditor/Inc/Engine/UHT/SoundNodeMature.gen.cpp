// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundNodeMature.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeMature() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeMature();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeMature_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeMature::StaticRegisterNativesUSoundNodeMature()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeMature);
	UClass* Z_Construct_UClass_USoundNodeMature_NoRegister()
	{
		return USoundNodeMature::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeMature_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeMature_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeMature_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This SoundNode uses UEngine::bAllowMatureLanguage to determine whether child nodes\n * that have USoundWave::bMature=true should be played. \n */" },
		{ "DisplayName", "Mature" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeMature.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeMature.h" },
		{ "ToolTip", "This SoundNode uses UEngine::bAllowMatureLanguage to determine whether child nodes\nthat have USoundWave::bMature=true should be played." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeMature_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeMature>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeMature_Statics::ClassParams = {
		&USoundNodeMature::StaticClass,
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
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeMature_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeMature_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeMature()
	{
		if (!Z_Registration_Info_UClass_USoundNodeMature.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeMature.OuterSingleton, Z_Construct_UClass_USoundNodeMature_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundNodeMature.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundNodeMature>()
	{
		return USoundNodeMature::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeMature);
	USoundNodeMature::~USoundNodeMature() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeMature, USoundNodeMature::StaticClass, TEXT("USoundNodeMature"), &Z_Registration_Info_UClass_USoundNodeMature, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeMature), 1536051784U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h_3873097417(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
