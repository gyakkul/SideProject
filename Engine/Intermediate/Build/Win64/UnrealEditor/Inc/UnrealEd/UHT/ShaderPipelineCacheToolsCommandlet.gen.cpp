// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/ShaderPipelineCacheToolsCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShaderPipelineCacheToolsCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UShaderPipelineCacheToolsCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UShaderPipelineCacheToolsCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UShaderPipelineCacheToolsCommandlet::StaticRegisterNativesUShaderPipelineCacheToolsCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShaderPipelineCacheToolsCommandlet);
	UClass* Z_Construct_UClass_UShaderPipelineCacheToolsCommandlet_NoRegister()
	{
		return UShaderPipelineCacheToolsCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UShaderPipelineCacheToolsCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShaderPipelineCacheToolsCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShaderPipelineCacheToolsCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/ShaderPipelineCacheToolsCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/ShaderPipelineCacheToolsCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShaderPipelineCacheToolsCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShaderPipelineCacheToolsCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UShaderPipelineCacheToolsCommandlet_Statics::ClassParams = {
		&UShaderPipelineCacheToolsCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UShaderPipelineCacheToolsCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShaderPipelineCacheToolsCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShaderPipelineCacheToolsCommandlet()
	{
		if (!Z_Registration_Info_UClass_UShaderPipelineCacheToolsCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShaderPipelineCacheToolsCommandlet.OuterSingleton, Z_Construct_UClass_UShaderPipelineCacheToolsCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UShaderPipelineCacheToolsCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UShaderPipelineCacheToolsCommandlet>()
	{
		return UShaderPipelineCacheToolsCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShaderPipelineCacheToolsCommandlet);
	UShaderPipelineCacheToolsCommandlet::~UShaderPipelineCacheToolsCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ShaderPipelineCacheToolsCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ShaderPipelineCacheToolsCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UShaderPipelineCacheToolsCommandlet, UShaderPipelineCacheToolsCommandlet::StaticClass, TEXT("UShaderPipelineCacheToolsCommandlet"), &Z_Registration_Info_UClass_UShaderPipelineCacheToolsCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShaderPipelineCacheToolsCommandlet), 488622771U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ShaderPipelineCacheToolsCommandlet_h_2927616218(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ShaderPipelineCacheToolsCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ShaderPipelineCacheToolsCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
