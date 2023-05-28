// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/ForceFeedbackEffectFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForceFeedbackEffectFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UForceFeedbackEffectFactory();
	UNREALED_API UClass* Z_Construct_UClass_UForceFeedbackEffectFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UForceFeedbackEffectFactory::StaticRegisterNativesUForceFeedbackEffectFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UForceFeedbackEffectFactory);
	UClass* Z_Construct_UClass_UForceFeedbackEffectFactory_NoRegister()
	{
		return UForceFeedbackEffectFactory::StaticClass();
	}
	struct Z_Construct_UClass_UForceFeedbackEffectFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UForceFeedbackEffectFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackEffectFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/ForceFeedbackEffectFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/ForceFeedbackEffectFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UForceFeedbackEffectFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UForceFeedbackEffectFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UForceFeedbackEffectFactory_Statics::ClassParams = {
		&UForceFeedbackEffectFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackEffectFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackEffectFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UForceFeedbackEffectFactory()
	{
		if (!Z_Registration_Info_UClass_UForceFeedbackEffectFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UForceFeedbackEffectFactory.OuterSingleton, Z_Construct_UClass_UForceFeedbackEffectFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UForceFeedbackEffectFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UForceFeedbackEffectFactory>()
	{
		return UForceFeedbackEffectFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UForceFeedbackEffectFactory);
	UForceFeedbackEffectFactory::~UForceFeedbackEffectFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ForceFeedbackEffectFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ForceFeedbackEffectFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UForceFeedbackEffectFactory, UForceFeedbackEffectFactory::StaticClass, TEXT("UForceFeedbackEffectFactory"), &Z_Registration_Info_UClass_UForceFeedbackEffectFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UForceFeedbackEffectFactory), 2472955034U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ForceFeedbackEffectFactory_h_15576314(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ForceFeedbackEffectFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ForceFeedbackEffectFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
