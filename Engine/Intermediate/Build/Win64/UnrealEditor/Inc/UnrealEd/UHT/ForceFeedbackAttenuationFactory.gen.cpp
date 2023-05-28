// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/ForceFeedbackAttenuationFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForceFeedbackAttenuationFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UForceFeedbackAttenuationFactory();
	UNREALED_API UClass* Z_Construct_UClass_UForceFeedbackAttenuationFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UForceFeedbackAttenuationFactory::StaticRegisterNativesUForceFeedbackAttenuationFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UForceFeedbackAttenuationFactory);
	UClass* Z_Construct_UClass_UForceFeedbackAttenuationFactory_NoRegister()
	{
		return UForceFeedbackAttenuationFactory::StaticClass();
	}
	struct Z_Construct_UClass_UForceFeedbackAttenuationFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UForceFeedbackAttenuationFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackAttenuationFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/ForceFeedbackAttenuationFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/ForceFeedbackAttenuationFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UForceFeedbackAttenuationFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UForceFeedbackAttenuationFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UForceFeedbackAttenuationFactory_Statics::ClassParams = {
		&UForceFeedbackAttenuationFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackAttenuationFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackAttenuationFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UForceFeedbackAttenuationFactory()
	{
		if (!Z_Registration_Info_UClass_UForceFeedbackAttenuationFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UForceFeedbackAttenuationFactory.OuterSingleton, Z_Construct_UClass_UForceFeedbackAttenuationFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UForceFeedbackAttenuationFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UForceFeedbackAttenuationFactory>()
	{
		return UForceFeedbackAttenuationFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UForceFeedbackAttenuationFactory);
	UForceFeedbackAttenuationFactory::~UForceFeedbackAttenuationFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ForceFeedbackAttenuationFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ForceFeedbackAttenuationFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UForceFeedbackAttenuationFactory, UForceFeedbackAttenuationFactory::StaticClass, TEXT("UForceFeedbackAttenuationFactory"), &Z_Registration_Info_UClass_UForceFeedbackAttenuationFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UForceFeedbackAttenuationFactory), 432450838U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ForceFeedbackAttenuationFactory_h_1421670941(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ForceFeedbackAttenuationFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ForceFeedbackAttenuationFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
