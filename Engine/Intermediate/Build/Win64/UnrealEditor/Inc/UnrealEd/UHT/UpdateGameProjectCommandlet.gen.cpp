// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/UpdateGameProjectCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpdateGameProjectCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UUpdateGameProjectCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UUpdateGameProjectCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UUpdateGameProjectCommandlet::StaticRegisterNativesUUpdateGameProjectCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUpdateGameProjectCommandlet);
	UClass* Z_Construct_UClass_UUpdateGameProjectCommandlet_NoRegister()
	{
		return UUpdateGameProjectCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UUpdateGameProjectCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUpdateGameProjectCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpdateGameProjectCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/UpdateGameProjectCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/UpdateGameProjectCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUpdateGameProjectCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUpdateGameProjectCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUpdateGameProjectCommandlet_Statics::ClassParams = {
		&UUpdateGameProjectCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUpdateGameProjectCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateGameProjectCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUpdateGameProjectCommandlet()
	{
		if (!Z_Registration_Info_UClass_UUpdateGameProjectCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUpdateGameProjectCommandlet.OuterSingleton, Z_Construct_UClass_UUpdateGameProjectCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUpdateGameProjectCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UUpdateGameProjectCommandlet>()
	{
		return UUpdateGameProjectCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUpdateGameProjectCommandlet);
	UUpdateGameProjectCommandlet::~UUpdateGameProjectCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_UpdateGameProjectCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_UpdateGameProjectCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUpdateGameProjectCommandlet, UUpdateGameProjectCommandlet::StaticClass, TEXT("UUpdateGameProjectCommandlet"), &Z_Registration_Info_UClass_UUpdateGameProjectCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUpdateGameProjectCommandlet), 1926279679U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_UpdateGameProjectCommandlet_h_4192483205(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_UpdateGameProjectCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_UpdateGameProjectCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
