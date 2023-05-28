// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/PackFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePackFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UPackFactory();
	UNREALED_API UClass* Z_Construct_UClass_UPackFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UPackFactory::StaticRegisterNativesUPackFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPackFactory);
	UClass* Z_Construct_UClass_UPackFactory_NoRegister()
	{
		return UPackFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPackFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPackFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPackFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Factory for unpacking upack files\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/PackFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/PackFactory.h" },
		{ "ToolTip", "Factory for unpacking upack files" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPackFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPackFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPackFactory_Statics::ClassParams = {
		&UPackFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPackFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPackFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPackFactory()
	{
		if (!Z_Registration_Info_UClass_UPackFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPackFactory.OuterSingleton, Z_Construct_UClass_UPackFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPackFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UPackFactory>()
	{
		return UPackFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPackFactory);
	UPackFactory::~UPackFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPackFactory, UPackFactory::StaticClass, TEXT("UPackFactory"), &Z_Registration_Info_UClass_UPackFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPackFactory), 3810970062U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackFactory_h_843192286(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
