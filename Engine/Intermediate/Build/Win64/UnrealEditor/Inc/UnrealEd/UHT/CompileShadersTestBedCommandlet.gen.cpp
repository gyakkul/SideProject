// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/CompileShadersTestBedCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompileShadersTestBedCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UCompileShadersTestBedCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UCompileShadersTestBedCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UCompileShadersTestBedCommandlet::StaticRegisterNativesUCompileShadersTestBedCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompileShadersTestBedCommandlet);
	UClass* Z_Construct_UClass_UCompileShadersTestBedCommandlet_NoRegister()
	{
		return UCompileShadersTestBedCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UCompileShadersTestBedCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompileShadersTestBedCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompileShadersTestBedCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/CompileShadersTestBedCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/CompileShadersTestBedCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompileShadersTestBedCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompileShadersTestBedCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompileShadersTestBedCommandlet_Statics::ClassParams = {
		&UCompileShadersTestBedCommandlet::StaticClass,
		"Editor",
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
		METADATA_PARAMS(Z_Construct_UClass_UCompileShadersTestBedCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompileShadersTestBedCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompileShadersTestBedCommandlet()
	{
		if (!Z_Registration_Info_UClass_UCompileShadersTestBedCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompileShadersTestBedCommandlet.OuterSingleton, Z_Construct_UClass_UCompileShadersTestBedCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCompileShadersTestBedCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UCompileShadersTestBedCommandlet>()
	{
		return UCompileShadersTestBedCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompileShadersTestBedCommandlet);
	UCompileShadersTestBedCommandlet::~UCompileShadersTestBedCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CompileShadersTestBedCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CompileShadersTestBedCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCompileShadersTestBedCommandlet, UCompileShadersTestBedCommandlet::StaticClass, TEXT("UCompileShadersTestBedCommandlet"), &Z_Registration_Info_UClass_UCompileShadersTestBedCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompileShadersTestBedCommandlet), 4238905866U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CompileShadersTestBedCommandlet_h_2829637359(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CompileShadersTestBedCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CompileShadersTestBedCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
