// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/CompositeCurveTableFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositeCurveTableFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UCompositeCurveTableFactory();
	UNREALED_API UClass* Z_Construct_UClass_UCompositeCurveTableFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UCompositeCurveTableFactory::StaticRegisterNativesUCompositeCurveTableFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompositeCurveTableFactory);
	UClass* Z_Construct_UClass_UCompositeCurveTableFactory_NoRegister()
	{
		return UCompositeCurveTableFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCompositeCurveTableFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompositeCurveTableFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositeCurveTableFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/CompositeCurveTableFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/CompositeCurveTableFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompositeCurveTableFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositeCurveTableFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositeCurveTableFactory_Statics::ClassParams = {
		&UCompositeCurveTableFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCompositeCurveTableFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeCurveTableFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompositeCurveTableFactory()
	{
		if (!Z_Registration_Info_UClass_UCompositeCurveTableFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositeCurveTableFactory.OuterSingleton, Z_Construct_UClass_UCompositeCurveTableFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCompositeCurveTableFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UCompositeCurveTableFactory>()
	{
		return UCompositeCurveTableFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositeCurveTableFactory);
	UCompositeCurveTableFactory::~UCompositeCurveTableFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CompositeCurveTableFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CompositeCurveTableFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCompositeCurveTableFactory, UCompositeCurveTableFactory::StaticClass, TEXT("UCompositeCurveTableFactory"), &Z_Registration_Info_UClass_UCompositeCurveTableFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositeCurveTableFactory), 795719590U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CompositeCurveTableFactory_h_1211973033(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CompositeCurveTableFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CompositeCurveTableFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
