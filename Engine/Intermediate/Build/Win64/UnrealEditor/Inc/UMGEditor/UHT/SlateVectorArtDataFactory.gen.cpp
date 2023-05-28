// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/SlateVectorArtDataFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateVectorArtDataFactory() {}
// Cross Module References
	UMGEDITOR_API UClass* Z_Construct_UClass_USlateVectorArtDataFactory();
	UMGEDITOR_API UClass* Z_Construct_UClass_USlateVectorArtDataFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UMGEditor();
// End Cross Module References
	void USlateVectorArtDataFactory::StaticRegisterNativesUSlateVectorArtDataFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlateVectorArtDataFactory);
	UClass* Z_Construct_UClass_USlateVectorArtDataFactory_NoRegister()
	{
		return USlateVectorArtDataFactory::StaticClass();
	}
	struct Z_Construct_UClass_USlateVectorArtDataFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlateVectorArtDataFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateVectorArtDataFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "SlateVectorArtDataFactory.h" },
		{ "ModuleRelativePath", "Public/SlateVectorArtDataFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlateVectorArtDataFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateVectorArtDataFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USlateVectorArtDataFactory_Statics::ClassParams = {
		&USlateVectorArtDataFactory::StaticClass,
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
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlateVectorArtDataFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlateVectorArtDataFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlateVectorArtDataFactory()
	{
		if (!Z_Registration_Info_UClass_USlateVectorArtDataFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlateVectorArtDataFactory.OuterSingleton, Z_Construct_UClass_USlateVectorArtDataFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USlateVectorArtDataFactory.OuterSingleton;
	}
	template<> UMGEDITOR_API UClass* StaticClass<USlateVectorArtDataFactory>()
	{
		return USlateVectorArtDataFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateVectorArtDataFactory);
	USlateVectorArtDataFactory::~USlateVectorArtDataFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_SlateVectorArtDataFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_SlateVectorArtDataFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USlateVectorArtDataFactory, USlateVectorArtDataFactory::StaticClass, TEXT("USlateVectorArtDataFactory"), &Z_Registration_Info_UClass_USlateVectorArtDataFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlateVectorArtDataFactory), 3522199323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_SlateVectorArtDataFactory_h_4010657454(TEXT("/Script/UMGEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_SlateVectorArtDataFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_SlateVectorArtDataFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
