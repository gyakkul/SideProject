// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassLookAtTargetTrait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassLookAtTargetTrait() {}
// Cross Module References
	MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassLookAtTargetTrait();
	MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassLookAtTargetTrait_NoRegister();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	UPackage* Z_Construct_UPackage__Script_MassAIBehavior();
// End Cross Module References
	void UMassLookAtTargetTrait::StaticRegisterNativesUMassLookAtTargetTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassLookAtTargetTrait);
	UClass* Z_Construct_UClass_UMassLookAtTargetTrait_NoRegister()
	{
		return UMassLookAtTargetTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassLookAtTargetTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassLookAtTargetTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassLookAtTargetTrait_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Look At Target" },
		{ "IncludePath", "MassLookAtTargetTrait.h" },
		{ "ModuleRelativePath", "Public/MassLookAtTargetTrait.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassLookAtTargetTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassLookAtTargetTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassLookAtTargetTrait_Statics::ClassParams = {
		&UMassLookAtTargetTrait::StaticClass,
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
		0x000030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassLookAtTargetTrait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassLookAtTargetTrait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassLookAtTargetTrait()
	{
		if (!Z_Registration_Info_UClass_UMassLookAtTargetTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassLookAtTargetTrait.OuterSingleton, Z_Construct_UClass_UMassLookAtTargetTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassLookAtTargetTrait.OuterSingleton;
	}
	template<> MASSAIBEHAVIOR_API UClass* StaticClass<UMassLookAtTargetTrait>()
	{
		return UMassLookAtTargetTrait::StaticClass();
	}
	UMassLookAtTargetTrait::UMassLookAtTargetTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassLookAtTargetTrait);
	UMassLookAtTargetTrait::~UMassLookAtTargetTrait() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtTargetTrait_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtTargetTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassLookAtTargetTrait, UMassLookAtTargetTrait::StaticClass, TEXT("UMassLookAtTargetTrait"), &Z_Registration_Info_UClass_UMassLookAtTargetTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassLookAtTargetTrait), 4208038764U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtTargetTrait_h_1662143454(TEXT("/Script/MassAIBehavior"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtTargetTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtTargetTrait_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
