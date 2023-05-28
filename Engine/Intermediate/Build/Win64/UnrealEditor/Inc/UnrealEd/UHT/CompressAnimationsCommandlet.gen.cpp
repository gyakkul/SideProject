// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/CompressAnimationsCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompressAnimationsCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UCompressAnimationsCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UCompressAnimationsCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UCompressAnimationsCommandlet::StaticRegisterNativesUCompressAnimationsCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompressAnimationsCommandlet);
	UClass* Z_Construct_UClass_UCompressAnimationsCommandlet_NoRegister()
	{
		return UCompressAnimationsCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UCompressAnimationsCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompressAnimationsCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompressAnimationsCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/CompressAnimationsCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/CompressAnimationsCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompressAnimationsCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompressAnimationsCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompressAnimationsCommandlet_Statics::ClassParams = {
		&UCompressAnimationsCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCompressAnimationsCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompressAnimationsCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompressAnimationsCommandlet()
	{
		if (!Z_Registration_Info_UClass_UCompressAnimationsCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompressAnimationsCommandlet.OuterSingleton, Z_Construct_UClass_UCompressAnimationsCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCompressAnimationsCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UCompressAnimationsCommandlet>()
	{
		return UCompressAnimationsCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompressAnimationsCommandlet);
	UCompressAnimationsCommandlet::~UCompressAnimationsCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CompressAnimationsCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CompressAnimationsCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCompressAnimationsCommandlet, UCompressAnimationsCommandlet::StaticClass, TEXT("UCompressAnimationsCommandlet"), &Z_Registration_Info_UClass_UCompressAnimationsCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompressAnimationsCommandlet), 1566422854U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CompressAnimationsCommandlet_h_1235831457(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CompressAnimationsCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CompressAnimationsCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
