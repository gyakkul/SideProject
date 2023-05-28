// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationSharingSetupFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationSharingSetupFactory() {}
// Cross Module References
	ANIMATIONSHARINGED_API UClass* Z_Construct_UClass_UAnimationSharingSetupFactory();
	ANIMATIONSHARINGED_API UClass* Z_Construct_UClass_UAnimationSharingSetupFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AnimationSharingEd();
// End Cross Module References
	void UAnimationSharingSetupFactory::StaticRegisterNativesUAnimationSharingSetupFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationSharingSetupFactory);
	UClass* Z_Construct_UClass_UAnimationSharingSetupFactory_NoRegister()
	{
		return UAnimationSharingSetupFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationSharingSetupFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationSharingSetupFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationSharingEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSharingSetupFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimationSharingSetupFactory.h" },
		{ "ModuleRelativePath", "Public/AnimationSharingSetupFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationSharingSetupFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationSharingSetupFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationSharingSetupFactory_Statics::ClassParams = {
		&UAnimationSharingSetupFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimationSharingSetupFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSharingSetupFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationSharingSetupFactory()
	{
		if (!Z_Registration_Info_UClass_UAnimationSharingSetupFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationSharingSetupFactory.OuterSingleton, Z_Construct_UClass_UAnimationSharingSetupFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationSharingSetupFactory.OuterSingleton;
	}
	template<> ANIMATIONSHARINGED_API UClass* StaticClass<UAnimationSharingSetupFactory>()
	{
		return UAnimationSharingSetupFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationSharingSetupFactory);
	UAnimationSharingSetupFactory::~UAnimationSharingSetupFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharingEd_Public_AnimationSharingSetupFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharingEd_Public_AnimationSharingSetupFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationSharingSetupFactory, UAnimationSharingSetupFactory::StaticClass, TEXT("UAnimationSharingSetupFactory"), &Z_Registration_Info_UClass_UAnimationSharingSetupFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationSharingSetupFactory), 1475327958U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharingEd_Public_AnimationSharingSetupFactory_h_616651933(TEXT("/Script/AnimationSharingEd"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharingEd_Public_AnimationSharingSetupFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharingEd_Public_AnimationSharingSetupFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
