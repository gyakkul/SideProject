// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/MergeShaderPipelineCachesCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMergeShaderPipelineCachesCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UMergeShaderPipelineCachesCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UMergeShaderPipelineCachesCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UMergeShaderPipelineCachesCommandlet::StaticRegisterNativesUMergeShaderPipelineCachesCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMergeShaderPipelineCachesCommandlet);
	UClass* Z_Construct_UClass_UMergeShaderPipelineCachesCommandlet_NoRegister()
	{
		return UMergeShaderPipelineCachesCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UMergeShaderPipelineCachesCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMergeShaderPipelineCachesCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMergeShaderPipelineCachesCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/MergeShaderPipelineCachesCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/MergeShaderPipelineCachesCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMergeShaderPipelineCachesCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMergeShaderPipelineCachesCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMergeShaderPipelineCachesCommandlet_Statics::ClassParams = {
		&UMergeShaderPipelineCachesCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMergeShaderPipelineCachesCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMergeShaderPipelineCachesCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMergeShaderPipelineCachesCommandlet()
	{
		if (!Z_Registration_Info_UClass_UMergeShaderPipelineCachesCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMergeShaderPipelineCachesCommandlet.OuterSingleton, Z_Construct_UClass_UMergeShaderPipelineCachesCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMergeShaderPipelineCachesCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UMergeShaderPipelineCachesCommandlet>()
	{
		return UMergeShaderPipelineCachesCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMergeShaderPipelineCachesCommandlet);
	UMergeShaderPipelineCachesCommandlet::~UMergeShaderPipelineCachesCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_MergeShaderPipelineCachesCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_MergeShaderPipelineCachesCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMergeShaderPipelineCachesCommandlet, UMergeShaderPipelineCachesCommandlet::StaticClass, TEXT("UMergeShaderPipelineCachesCommandlet"), &Z_Registration_Info_UClass_UMergeShaderPipelineCachesCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMergeShaderPipelineCachesCommandlet), 3646585906U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_MergeShaderPipelineCachesCommandlet_h_1342393685(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_MergeShaderPipelineCachesCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_MergeShaderPipelineCachesCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
