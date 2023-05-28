// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/Perception/AISenseConfig_Blueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISenseConfig_Blueprint() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Blueprint_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Blueprint();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Blueprint_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UAISenseConfig_Blueprint::StaticRegisterNativesUAISenseConfig_Blueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISenseConfig_Blueprint);
	UClass* Z_Construct_UClass_UAISenseConfig_Blueprint_NoRegister()
	{
		return UAISenseConfig_Blueprint::StaticClass();
	}
	struct Z_Construct_UClass_UAISenseConfig_Blueprint_Statics
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
	UObject* (*const Z_Construct_UClass_UAISenseConfig_Blueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISenseConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Blueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Perception/AISenseConfig_Blueprint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Blueprint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Blueprint_Statics::NewProp_Implementation_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Blueprint.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAISenseConfig_Blueprint_Statics::NewProp_Implementation = { "Implementation", nullptr, (EPropertyFlags)0x0014000002014015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISenseConfig_Blueprint, Implementation), Z_Construct_UClass_UClass, Z_Construct_UClass_UAISense_Blueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Blueprint_Statics::NewProp_Implementation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Blueprint_Statics::NewProp_Implementation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISenseConfig_Blueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Blueprint_Statics::NewProp_Implementation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISenseConfig_Blueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISenseConfig_Blueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISenseConfig_Blueprint_Statics::ClassParams = {
		&UAISenseConfig_Blueprint::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISenseConfig_Blueprint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Blueprint_Statics::PropPointers),
		0,
		0x041010A5u,
		METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Blueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Blueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISenseConfig_Blueprint()
	{
		if (!Z_Registration_Info_UClass_UAISenseConfig_Blueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISenseConfig_Blueprint.OuterSingleton, Z_Construct_UClass_UAISenseConfig_Blueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAISenseConfig_Blueprint.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UAISenseConfig_Blueprint>()
	{
		return UAISenseConfig_Blueprint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseConfig_Blueprint);
	UAISenseConfig_Blueprint::~UAISenseConfig_Blueprint() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAISenseConfig_Blueprint, UAISenseConfig_Blueprint::StaticClass, TEXT("UAISenseConfig_Blueprint"), &Z_Registration_Info_UClass_UAISenseConfig_Blueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISenseConfig_Blueprint), 4054594710U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h_2617316715(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Blueprint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
