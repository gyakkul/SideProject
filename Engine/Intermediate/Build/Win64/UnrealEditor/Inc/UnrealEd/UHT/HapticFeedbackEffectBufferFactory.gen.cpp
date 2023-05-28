// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/HapticFeedbackEffectBufferFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHapticFeedbackEffectBufferFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UHapticFeedbackEffectBufferFactory();
	UNREALED_API UClass* Z_Construct_UClass_UHapticFeedbackEffectBufferFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UHapticFeedbackEffectBufferFactory::StaticRegisterNativesUHapticFeedbackEffectBufferFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHapticFeedbackEffectBufferFactory);
	UClass* Z_Construct_UClass_UHapticFeedbackEffectBufferFactory_NoRegister()
	{
		return UHapticFeedbackEffectBufferFactory::StaticClass();
	}
	struct Z_Construct_UClass_UHapticFeedbackEffectBufferFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHapticFeedbackEffectBufferFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHapticFeedbackEffectBufferFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/HapticFeedbackEffectBufferFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/HapticFeedbackEffectBufferFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHapticFeedbackEffectBufferFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHapticFeedbackEffectBufferFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHapticFeedbackEffectBufferFactory_Statics::ClassParams = {
		&UHapticFeedbackEffectBufferFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHapticFeedbackEffectBufferFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffectBufferFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHapticFeedbackEffectBufferFactory()
	{
		if (!Z_Registration_Info_UClass_UHapticFeedbackEffectBufferFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHapticFeedbackEffectBufferFactory.OuterSingleton, Z_Construct_UClass_UHapticFeedbackEffectBufferFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHapticFeedbackEffectBufferFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UHapticFeedbackEffectBufferFactory>()
	{
		return UHapticFeedbackEffectBufferFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHapticFeedbackEffectBufferFactory);
	UHapticFeedbackEffectBufferFactory::~UHapticFeedbackEffectBufferFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_HapticFeedbackEffectBufferFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_HapticFeedbackEffectBufferFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHapticFeedbackEffectBufferFactory, UHapticFeedbackEffectBufferFactory::StaticClass, TEXT("UHapticFeedbackEffectBufferFactory"), &Z_Registration_Info_UClass_UHapticFeedbackEffectBufferFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHapticFeedbackEffectBufferFactory), 211776652U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_HapticFeedbackEffectBufferFactory_h_912600974(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_HapticFeedbackEffectBufferFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_HapticFeedbackEffectBufferFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
