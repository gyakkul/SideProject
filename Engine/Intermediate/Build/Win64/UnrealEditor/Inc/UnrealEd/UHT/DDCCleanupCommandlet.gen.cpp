// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/DDCCleanupCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDDCCleanupCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UDDCCleanupCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UDDCCleanupCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UDDCCleanupCommandlet::StaticRegisterNativesUDDCCleanupCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDDCCleanupCommandlet);
	UClass* Z_Construct_UClass_UDDCCleanupCommandlet_NoRegister()
	{
		return UDDCCleanupCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UDDCCleanupCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDDCCleanupCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDCCleanupCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/DDCCleanupCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/DDCCleanupCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDDCCleanupCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDDCCleanupCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDDCCleanupCommandlet_Statics::ClassParams = {
		&UDDCCleanupCommandlet::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDDCCleanupCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDDCCleanupCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDDCCleanupCommandlet()
	{
		if (!Z_Registration_Info_UClass_UDDCCleanupCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDDCCleanupCommandlet.OuterSingleton, Z_Construct_UClass_UDDCCleanupCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDDCCleanupCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UDDCCleanupCommandlet>()
	{
		return UDDCCleanupCommandlet::StaticClass();
	}
	UDDCCleanupCommandlet::UDDCCleanupCommandlet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDDCCleanupCommandlet);
	UDDCCleanupCommandlet::~UDDCCleanupCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DDCCleanupCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DDCCleanupCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDDCCleanupCommandlet, UDDCCleanupCommandlet::StaticClass, TEXT("UDDCCleanupCommandlet"), &Z_Registration_Info_UClass_UDDCCleanupCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDDCCleanupCommandlet), 159178040U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DDCCleanupCommandlet_h_225892185(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DDCCleanupCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DDCCleanupCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
