// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/BlueprintInterfaceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintInterfaceFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UBlueprintFactory();
	UNREALED_API UClass* Z_Construct_UClass_UBlueprintInterfaceFactory();
	UNREALED_API UClass* Z_Construct_UClass_UBlueprintInterfaceFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UBlueprintInterfaceFactory::StaticRegisterNativesUBlueprintInterfaceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintInterfaceFactory);
	UClass* Z_Construct_UClass_UBlueprintInterfaceFactory_NoRegister()
	{
		return UBlueprintInterfaceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintInterfaceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintInterfaceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintInterfaceFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/BlueprintInterfaceFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/BlueprintInterfaceFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintInterfaceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintInterfaceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintInterfaceFactory_Statics::ClassParams = {
		&UBlueprintInterfaceFactory::StaticClass,
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
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintInterfaceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintInterfaceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintInterfaceFactory()
	{
		if (!Z_Registration_Info_UClass_UBlueprintInterfaceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintInterfaceFactory.OuterSingleton, Z_Construct_UClass_UBlueprintInterfaceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintInterfaceFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UBlueprintInterfaceFactory>()
	{
		return UBlueprintInterfaceFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintInterfaceFactory);
	UBlueprintInterfaceFactory::~UBlueprintInterfaceFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintInterfaceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintInterfaceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintInterfaceFactory, UBlueprintInterfaceFactory::StaticClass, TEXT("UBlueprintInterfaceFactory"), &Z_Registration_Info_UClass_UBlueprintInterfaceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintInterfaceFactory), 1901377417U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintInterfaceFactory_h_4136847018(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintInterfaceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintInterfaceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
