// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DNAIndexMapping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDNAIndexMapping() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	RIGLOGICMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_DNAIndexMapping();
	RIGLOGICMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_DNAIndexMapping_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RigLogicModule();
// End Cross Module References
	void UDEPRECATED_DNAIndexMapping::StaticRegisterNativesUDEPRECATED_DNAIndexMapping()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_DNAIndexMapping);
	UClass* Z_Construct_UClass_UDEPRECATED_DNAIndexMapping_NoRegister()
	{
		return UDEPRECATED_DNAIndexMapping::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_DNAIndexMapping_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_DNAIndexMapping_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_RigLogicModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_DNAIndexMapping_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "DNAIndexMapping.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/DNAIndexMapping.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_DNAIndexMapping_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_DNAIndexMapping>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_DNAIndexMapping_Statics::ClassParams = {
		&UDEPRECATED_DNAIndexMapping::StaticClass,
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
		0x022012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_DNAIndexMapping_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_DNAIndexMapping_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_DNAIndexMapping()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_DNAIndexMapping.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_DNAIndexMapping.OuterSingleton, Z_Construct_UClass_UDEPRECATED_DNAIndexMapping_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_DNAIndexMapping.OuterSingleton;
	}
	template<> RIGLOGICMODULE_API UClass* StaticClass<UDEPRECATED_DNAIndexMapping>()
	{
		return UDEPRECATED_DNAIndexMapping::StaticClass();
	}
	UDEPRECATED_DNAIndexMapping::UDEPRECATED_DNAIndexMapping(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_DNAIndexMapping);
	UDEPRECATED_DNAIndexMapping::~UDEPRECATED_DNAIndexMapping() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Private_DNAIndexMapping_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Private_DNAIndexMapping_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_DNAIndexMapping, UDEPRECATED_DNAIndexMapping::StaticClass, TEXT("UDEPRECATED_DNAIndexMapping"), &Z_Registration_Info_UClass_UDEPRECATED_DNAIndexMapping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_DNAIndexMapping), 1208945879U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Private_DNAIndexMapping_h_3669048133(TEXT("/Script/RigLogicModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Private_DNAIndexMapping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Private_DNAIndexMapping_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
