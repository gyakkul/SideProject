// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/SummarizeTraceCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSummarizeTraceCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_USummarizeTraceCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_USummarizeTraceCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void USummarizeTraceCommandlet::StaticRegisterNativesUSummarizeTraceCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USummarizeTraceCommandlet);
	UClass* Z_Construct_UClass_USummarizeTraceCommandlet_NoRegister()
	{
		return USummarizeTraceCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_USummarizeTraceCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USummarizeTraceCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USummarizeTraceCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/SummarizeTraceCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/SummarizeTraceCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USummarizeTraceCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USummarizeTraceCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USummarizeTraceCommandlet_Statics::ClassParams = {
		&USummarizeTraceCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USummarizeTraceCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USummarizeTraceCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USummarizeTraceCommandlet()
	{
		if (!Z_Registration_Info_UClass_USummarizeTraceCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USummarizeTraceCommandlet.OuterSingleton, Z_Construct_UClass_USummarizeTraceCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USummarizeTraceCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<USummarizeTraceCommandlet>()
	{
		return USummarizeTraceCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USummarizeTraceCommandlet);
	USummarizeTraceCommandlet::~USummarizeTraceCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SummarizeTraceCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SummarizeTraceCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USummarizeTraceCommandlet, USummarizeTraceCommandlet::StaticClass, TEXT("USummarizeTraceCommandlet"), &Z_Registration_Info_UClass_USummarizeTraceCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USummarizeTraceCommandlet), 812046357U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SummarizeTraceCommandlet_h_759831249(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SummarizeTraceCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SummarizeTraceCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
