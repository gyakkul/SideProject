// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DefaultTemplateProjectDefs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultTemplateProjectDefs() {}
// Cross Module References
	GAMEPROJECTGENERATION_API UClass* Z_Construct_UClass_UDefaultTemplateProjectDefs();
	GAMEPROJECTGENERATION_API UClass* Z_Construct_UClass_UDefaultTemplateProjectDefs_NoRegister();
	GAMEPROJECTGENERATION_API UClass* Z_Construct_UClass_UTemplateProjectDefs();
	UPackage* Z_Construct_UPackage__Script_GameProjectGeneration();
// End Cross Module References
	void UDefaultTemplateProjectDefs::StaticRegisterNativesUDefaultTemplateProjectDefs()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDefaultTemplateProjectDefs);
	UClass* Z_Construct_UClass_UDefaultTemplateProjectDefs_NoRegister()
	{
		return UDefaultTemplateProjectDefs::StaticClass();
	}
	struct Z_Construct_UClass_UDefaultTemplateProjectDefs_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDefaultTemplateProjectDefs_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTemplateProjectDefs,
		(UObject* (*)())Z_Construct_UPackage__Script_GameProjectGeneration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultTemplateProjectDefs_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DefaultTemplateProjectDefs.h" },
		{ "ModuleRelativePath", "Classes/DefaultTemplateProjectDefs.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDefaultTemplateProjectDefs_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDefaultTemplateProjectDefs>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDefaultTemplateProjectDefs_Statics::ClassParams = {
		&UDefaultTemplateProjectDefs::StaticClass,
		"TemplateDefs",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDefaultTemplateProjectDefs_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultTemplateProjectDefs_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDefaultTemplateProjectDefs()
	{
		if (!Z_Registration_Info_UClass_UDefaultTemplateProjectDefs.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDefaultTemplateProjectDefs.OuterSingleton, Z_Construct_UClass_UDefaultTemplateProjectDefs_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDefaultTemplateProjectDefs.OuterSingleton;
	}
	template<> GAMEPROJECTGENERATION_API UClass* StaticClass<UDefaultTemplateProjectDefs>()
	{
		return UDefaultTemplateProjectDefs::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDefaultTemplateProjectDefs);
	UDefaultTemplateProjectDefs::~UDefaultTemplateProjectDefs() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_GameProjectGeneration_Classes_DefaultTemplateProjectDefs_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_GameProjectGeneration_Classes_DefaultTemplateProjectDefs_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDefaultTemplateProjectDefs, UDefaultTemplateProjectDefs::StaticClass, TEXT("UDefaultTemplateProjectDefs"), &Z_Registration_Info_UClass_UDefaultTemplateProjectDefs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDefaultTemplateProjectDefs), 240878179U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_GameProjectGeneration_Classes_DefaultTemplateProjectDefs_h_4156846075(TEXT("/Script/GameProjectGeneration"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_GameProjectGeneration_Classes_DefaultTemplateProjectDefs_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_GameProjectGeneration_Classes_DefaultTemplateProjectDefs_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
