// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/AnimBoneCompressionSettingsFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBoneCompressionSettingsFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UAnimBoneCompressionSettingsFactory();
	UNREALED_API UClass* Z_Construct_UClass_UAnimBoneCompressionSettingsFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UAnimBoneCompressionSettingsFactory::StaticRegisterNativesUAnimBoneCompressionSettingsFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimBoneCompressionSettingsFactory);
	UClass* Z_Construct_UClass_UAnimBoneCompressionSettingsFactory_NoRegister()
	{
		return UAnimBoneCompressionSettingsFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAnimBoneCompressionSettingsFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimBoneCompressionSettingsFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionSettingsFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/AnimBoneCompressionSettingsFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/AnimBoneCompressionSettingsFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimBoneCompressionSettingsFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBoneCompressionSettingsFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimBoneCompressionSettingsFactory_Statics::ClassParams = {
		&UAnimBoneCompressionSettingsFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionSettingsFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionSettingsFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimBoneCompressionSettingsFactory()
	{
		if (!Z_Registration_Info_UClass_UAnimBoneCompressionSettingsFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimBoneCompressionSettingsFactory.OuterSingleton, Z_Construct_UClass_UAnimBoneCompressionSettingsFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimBoneCompressionSettingsFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UAnimBoneCompressionSettingsFactory>()
	{
		return UAnimBoneCompressionSettingsFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBoneCompressionSettingsFactory);
	UAnimBoneCompressionSettingsFactory::~UAnimBoneCompressionSettingsFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimBoneCompressionSettingsFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimBoneCompressionSettingsFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimBoneCompressionSettingsFactory, UAnimBoneCompressionSettingsFactory::StaticClass, TEXT("UAnimBoneCompressionSettingsFactory"), &Z_Registration_Info_UClass_UAnimBoneCompressionSettingsFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimBoneCompressionSettingsFactory), 1927151803U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimBoneCompressionSettingsFactory_h_4061293886(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimBoneCompressionSettingsFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimBoneCompressionSettingsFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
