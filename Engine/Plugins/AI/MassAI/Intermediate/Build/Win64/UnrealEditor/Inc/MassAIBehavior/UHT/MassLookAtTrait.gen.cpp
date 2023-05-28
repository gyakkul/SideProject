// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassLookAtTrait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassLookAtTrait() {}
// Cross Module References
	MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassLookAtTrait();
	MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassLookAtTrait_NoRegister();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	UPackage* Z_Construct_UPackage__Script_MassAIBehavior();
// End Cross Module References
	void UMassLookAtTrait::StaticRegisterNativesUMassLookAtTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassLookAtTrait);
	UClass* Z_Construct_UClass_UMassLookAtTrait_NoRegister()
	{
		return UMassLookAtTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassLookAtTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassLookAtTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassLookAtTrait_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Look At" },
		{ "IncludePath", "MassLookAtTrait.h" },
		{ "ModuleRelativePath", "Public/MassLookAtTrait.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassLookAtTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassLookAtTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassLookAtTrait_Statics::ClassParams = {
		&UMassLookAtTrait::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassLookAtTrait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassLookAtTrait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassLookAtTrait()
	{
		if (!Z_Registration_Info_UClass_UMassLookAtTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassLookAtTrait.OuterSingleton, Z_Construct_UClass_UMassLookAtTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassLookAtTrait.OuterSingleton;
	}
	template<> MASSAIBEHAVIOR_API UClass* StaticClass<UMassLookAtTrait>()
	{
		return UMassLookAtTrait::StaticClass();
	}
	UMassLookAtTrait::UMassLookAtTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassLookAtTrait);
	UMassLookAtTrait::~UMassLookAtTrait() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtTrait_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassLookAtTrait, UMassLookAtTrait::StaticClass, TEXT("UMassLookAtTrait"), &Z_Registration_Info_UClass_UMassLookAtTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassLookAtTrait), 3274379902U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtTrait_h_2293226217(TEXT("/Script/MassAIBehavior"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtTrait_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
