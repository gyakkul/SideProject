// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/TouchInterfaceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTouchInterfaceFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UTouchInterfaceFactory();
	UNREALED_API UClass* Z_Construct_UClass_UTouchInterfaceFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTouchInterfaceFactory::StaticRegisterNativesUTouchInterfaceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTouchInterfaceFactory);
	UClass* Z_Construct_UClass_UTouchInterfaceFactory_NoRegister()
	{
		return UTouchInterfaceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UTouchInterfaceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTouchInterfaceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchInterfaceFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/TouchInterfaceFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/TouchInterfaceFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTouchInterfaceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTouchInterfaceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTouchInterfaceFactory_Statics::ClassParams = {
		&UTouchInterfaceFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTouchInterfaceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchInterfaceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTouchInterfaceFactory()
	{
		if (!Z_Registration_Info_UClass_UTouchInterfaceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTouchInterfaceFactory.OuterSingleton, Z_Construct_UClass_UTouchInterfaceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTouchInterfaceFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UTouchInterfaceFactory>()
	{
		return UTouchInterfaceFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTouchInterfaceFactory);
	UTouchInterfaceFactory::~UTouchInterfaceFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TouchInterfaceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TouchInterfaceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTouchInterfaceFactory, UTouchInterfaceFactory::StaticClass, TEXT("UTouchInterfaceFactory"), &Z_Registration_Info_UClass_UTouchInterfaceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTouchInterfaceFactory), 483801213U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TouchInterfaceFactory_h_3344914971(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TouchInterfaceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TouchInterfaceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
