// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundNodeAssetReferencer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeAssetReferencer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeAssetReferencer();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeAssetReferencer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeAssetReferencer::StaticRegisterNativesUSoundNodeAssetReferencer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeAssetReferencer);
	UClass* Z_Construct_UClass_USoundNodeAssetReferencer_NoRegister()
	{
		return USoundNodeAssetReferencer::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeAssetReferencer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeAssetReferencer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeAssetReferencer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Sound node that contains a reference to the raw wave file to be played\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Sound/SoundNodeAssetReferencer.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeAssetReferencer.h" },
		{ "ToolTip", "Sound node that contains a reference to the raw wave file to be played" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeAssetReferencer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeAssetReferencer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeAssetReferencer_Statics::ClassParams = {
		&USoundNodeAssetReferencer::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeAssetReferencer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeAssetReferencer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeAssetReferencer()
	{
		if (!Z_Registration_Info_UClass_USoundNodeAssetReferencer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeAssetReferencer.OuterSingleton, Z_Construct_UClass_USoundNodeAssetReferencer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundNodeAssetReferencer.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundNodeAssetReferencer>()
	{
		return USoundNodeAssetReferencer::StaticClass();
	}
	USoundNodeAssetReferencer::USoundNodeAssetReferencer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeAssetReferencer);
	USoundNodeAssetReferencer::~USoundNodeAssetReferencer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeAssetReferencer, USoundNodeAssetReferencer::StaticClass, TEXT("USoundNodeAssetReferencer"), &Z_Registration_Info_UClass_USoundNodeAssetReferencer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeAssetReferencer), 3232878722U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_550559819(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAssetReferencer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
