// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/EnumFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnumFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UEnumFactory();
	UNREALED_API UClass* Z_Construct_UClass_UEnumFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UEnumFactory::StaticRegisterNativesUEnumFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnumFactory);
	UClass* Z_Construct_UClass_UEnumFactory_NoRegister()
	{
		return UEnumFactory::StaticClass();
	}
	struct Z_Construct_UClass_UEnumFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnumFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnumFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/EnumFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/EnumFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnumFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnumFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnumFactory_Statics::ClassParams = {
		&UEnumFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEnumFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnumFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnumFactory()
	{
		if (!Z_Registration_Info_UClass_UEnumFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnumFactory.OuterSingleton, Z_Construct_UClass_UEnumFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnumFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UEnumFactory>()
	{
		return UEnumFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnumFactory);
	UEnumFactory::~UEnumFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_EnumFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_EnumFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnumFactory, UEnumFactory::StaticClass, TEXT("UEnumFactory"), &Z_Registration_Info_UClass_UEnumFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnumFactory), 2677577720U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_EnumFactory_h_1229962750(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_EnumFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_EnumFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
