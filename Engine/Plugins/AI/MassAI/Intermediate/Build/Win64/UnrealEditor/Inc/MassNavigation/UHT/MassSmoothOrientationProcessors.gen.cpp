// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmoothOrientation/MassSmoothOrientationProcessors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassSmoothOrientationProcessors() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassSmoothOrientationProcessor();
	MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassSmoothOrientationProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassNavigation();
// End Cross Module References
	void UMassSmoothOrientationProcessor::StaticRegisterNativesUMassSmoothOrientationProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassSmoothOrientationProcessor);
	UClass* Z_Construct_UClass_UMassSmoothOrientationProcessor_NoRegister()
	{
		return UMassSmoothOrientationProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassSmoothOrientationProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassSmoothOrientationProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassNavigation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSmoothOrientationProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Updates agent's orientation based on current movement.\n */" },
		{ "IncludePath", "SmoothOrientation/MassSmoothOrientationProcessors.h" },
		{ "ModuleRelativePath", "Public/SmoothOrientation/MassSmoothOrientationProcessors.h" },
		{ "ToolTip", "Updates agent's orientation based on current movement." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassSmoothOrientationProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassSmoothOrientationProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassSmoothOrientationProcessor_Statics::ClassParams = {
		&UMassSmoothOrientationProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassSmoothOrientationProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSmoothOrientationProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassSmoothOrientationProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassSmoothOrientationProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassSmoothOrientationProcessor.OuterSingleton, Z_Construct_UClass_UMassSmoothOrientationProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassSmoothOrientationProcessor.OuterSingleton;
	}
	template<> MASSNAVIGATION_API UClass* StaticClass<UMassSmoothOrientationProcessor>()
	{
		return UMassSmoothOrientationProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassSmoothOrientationProcessor);
	UMassSmoothOrientationProcessor::~UMassSmoothOrientationProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_SmoothOrientation_MassSmoothOrientationProcessors_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_SmoothOrientation_MassSmoothOrientationProcessors_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassSmoothOrientationProcessor, UMassSmoothOrientationProcessor::StaticClass, TEXT("UMassSmoothOrientationProcessor"), &Z_Registration_Info_UClass_UMassSmoothOrientationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassSmoothOrientationProcessor), 3478387577U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_SmoothOrientation_MassSmoothOrientationProcessors_h_3242319656(TEXT("/Script/MassNavigation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_SmoothOrientation_MassSmoothOrientationProcessors_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_SmoothOrientation_MassSmoothOrientationProcessors_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
