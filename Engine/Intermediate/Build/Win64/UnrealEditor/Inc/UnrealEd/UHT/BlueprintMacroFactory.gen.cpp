// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/BlueprintMacroFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintMacroFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UBlueprintFactory();
	UNREALED_API UClass* Z_Construct_UClass_UBlueprintMacroFactory();
	UNREALED_API UClass* Z_Construct_UClass_UBlueprintMacroFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UBlueprintMacroFactory::StaticRegisterNativesUBlueprintMacroFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintMacroFactory);
	UClass* Z_Construct_UClass_UBlueprintMacroFactory_NoRegister()
	{
		return UBlueprintMacroFactory::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintMacroFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintMacroFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintMacroFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/BlueprintMacroFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/BlueprintMacroFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintMacroFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintMacroFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintMacroFactory_Statics::ClassParams = {
		&UBlueprintMacroFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintMacroFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintMacroFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintMacroFactory()
	{
		if (!Z_Registration_Info_UClass_UBlueprintMacroFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintMacroFactory.OuterSingleton, Z_Construct_UClass_UBlueprintMacroFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintMacroFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UBlueprintMacroFactory>()
	{
		return UBlueprintMacroFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintMacroFactory);
	UBlueprintMacroFactory::~UBlueprintMacroFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintMacroFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintMacroFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintMacroFactory, UBlueprintMacroFactory::StaticClass, TEXT("UBlueprintMacroFactory"), &Z_Registration_Info_UClass_UBlueprintMacroFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintMacroFactory), 2111896070U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintMacroFactory_h_4042471397(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintMacroFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintMacroFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
