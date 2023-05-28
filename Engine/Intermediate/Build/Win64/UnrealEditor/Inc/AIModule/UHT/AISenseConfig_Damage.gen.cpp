// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/Perception/AISenseConfig_Damage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISenseConfig_Damage() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Damage_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Damage();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Damage_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UAISenseConfig_Damage::StaticRegisterNativesUAISenseConfig_Damage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISenseConfig_Damage);
	UClass* Z_Construct_UClass_UAISenseConfig_Damage_NoRegister()
	{
		return UAISenseConfig_Damage::StaticClass();
	}
	struct Z_Construct_UClass_UAISenseConfig_Damage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Implementation_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Implementation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISenseConfig_Damage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISenseConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Damage_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "AI Damage sense config" },
		{ "IncludePath", "Perception/AISenseConfig_Damage.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Damage.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Damage_Statics::NewProp_Implementation_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Damage.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAISenseConfig_Damage_Statics::NewProp_Implementation = { "Implementation", nullptr, (EPropertyFlags)0x0014000002014015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISenseConfig_Damage, Implementation), Z_Construct_UClass_UClass, Z_Construct_UClass_UAISense_Damage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Damage_Statics::NewProp_Implementation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Damage_Statics::NewProp_Implementation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISenseConfig_Damage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Damage_Statics::NewProp_Implementation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISenseConfig_Damage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISenseConfig_Damage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISenseConfig_Damage_Statics::ClassParams = {
		&UAISenseConfig_Damage::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISenseConfig_Damage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Damage_Statics::PropPointers),
		0,
		0x001010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Damage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Damage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISenseConfig_Damage()
	{
		if (!Z_Registration_Info_UClass_UAISenseConfig_Damage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISenseConfig_Damage.OuterSingleton, Z_Construct_UClass_UAISenseConfig_Damage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAISenseConfig_Damage.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UAISenseConfig_Damage>()
	{
		return UAISenseConfig_Damage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseConfig_Damage);
	UAISenseConfig_Damage::~UAISenseConfig_Damage() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Damage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Damage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAISenseConfig_Damage, UAISenseConfig_Damage::StaticClass, TEXT("UAISenseConfig_Damage"), &Z_Registration_Info_UClass_UAISenseConfig_Damage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISenseConfig_Damage), 2888270880U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Damage_h_118207818(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Damage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Damage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
