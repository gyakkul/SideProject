// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/HapticFeedbackEffectCurveFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHapticFeedbackEffectCurveFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UHapticFeedbackEffectCurveFactory();
	UNREALED_API UClass* Z_Construct_UClass_UHapticFeedbackEffectCurveFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UHapticFeedbackEffectCurveFactory::StaticRegisterNativesUHapticFeedbackEffectCurveFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHapticFeedbackEffectCurveFactory);
	UClass* Z_Construct_UClass_UHapticFeedbackEffectCurveFactory_NoRegister()
	{
		return UHapticFeedbackEffectCurveFactory::StaticClass();
	}
	struct Z_Construct_UClass_UHapticFeedbackEffectCurveFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHapticFeedbackEffectCurveFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHapticFeedbackEffectCurveFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/HapticFeedbackEffectCurveFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/HapticFeedbackEffectCurveFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHapticFeedbackEffectCurveFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHapticFeedbackEffectCurveFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHapticFeedbackEffectCurveFactory_Statics::ClassParams = {
		&UHapticFeedbackEffectCurveFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHapticFeedbackEffectCurveFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffectCurveFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHapticFeedbackEffectCurveFactory()
	{
		if (!Z_Registration_Info_UClass_UHapticFeedbackEffectCurveFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHapticFeedbackEffectCurveFactory.OuterSingleton, Z_Construct_UClass_UHapticFeedbackEffectCurveFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHapticFeedbackEffectCurveFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UHapticFeedbackEffectCurveFactory>()
	{
		return UHapticFeedbackEffectCurveFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHapticFeedbackEffectCurveFactory);
	UHapticFeedbackEffectCurveFactory::~UHapticFeedbackEffectCurveFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_HapticFeedbackEffectCurveFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_HapticFeedbackEffectCurveFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHapticFeedbackEffectCurveFactory, UHapticFeedbackEffectCurveFactory::StaticClass, TEXT("UHapticFeedbackEffectCurveFactory"), &Z_Registration_Info_UClass_UHapticFeedbackEffectCurveFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHapticFeedbackEffectCurveFactory), 59712767U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_HapticFeedbackEffectCurveFactory_h_2164376893(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_HapticFeedbackEffectCurveFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_HapticFeedbackEffectCurveFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
