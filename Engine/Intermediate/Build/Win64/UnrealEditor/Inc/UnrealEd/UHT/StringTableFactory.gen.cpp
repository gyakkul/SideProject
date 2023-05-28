// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/StringTableFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStringTableFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UStringTableFactory();
	UNREALED_API UClass* Z_Construct_UClass_UStringTableFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UStringTableFactory::StaticRegisterNativesUStringTableFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStringTableFactory);
	UClass* Z_Construct_UClass_UStringTableFactory_NoRegister()
	{
		return UStringTableFactory::StaticClass();
	}
	struct Z_Construct_UClass_UStringTableFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStringTableFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStringTableFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/StringTableFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/StringTableFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStringTableFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStringTableFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStringTableFactory_Statics::ClassParams = {
		&UStringTableFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStringTableFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStringTableFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStringTableFactory()
	{
		if (!Z_Registration_Info_UClass_UStringTableFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStringTableFactory.OuterSingleton, Z_Construct_UClass_UStringTableFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStringTableFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UStringTableFactory>()
	{
		return UStringTableFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStringTableFactory);
	UStringTableFactory::~UStringTableFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StringTableFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StringTableFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStringTableFactory, UStringTableFactory::StaticClass, TEXT("UStringTableFactory"), &Z_Registration_Info_UClass_UStringTableFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStringTableFactory), 3946691966U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StringTableFactory_h_2947526026(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StringTableFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StringTableFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
