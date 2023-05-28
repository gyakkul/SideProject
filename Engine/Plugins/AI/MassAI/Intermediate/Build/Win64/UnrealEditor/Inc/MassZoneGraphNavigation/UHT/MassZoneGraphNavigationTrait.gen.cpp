// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MassAI/Source/MassZoneGraphNavigation/Public/MassZoneGraphNavigationTrait.h"
#include "../../../../Plugins/AI/MassAI/Source/MassZoneGraphNavigation/Public/MassZoneGraphNavigationFragments.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassZoneGraphNavigationTrait() {}
// Cross Module References
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	MASSZONEGRAPHNAVIGATION_API UClass* Z_Construct_UClass_UMassZoneGraphNavigationTrait();
	MASSZONEGRAPHNAVIGATION_API UClass* Z_Construct_UClass_UMassZoneGraphNavigationTrait_NoRegister();
	MASSZONEGRAPHNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphNavigationParameters();
	UPackage* Z_Construct_UPackage__Script_MassZoneGraphNavigation();
// End Cross Module References
	void UMassZoneGraphNavigationTrait::StaticRegisterNativesUMassZoneGraphNavigationTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassZoneGraphNavigationTrait);
	UClass* Z_Construct_UClass_UMassZoneGraphNavigationTrait_NoRegister()
	{
		return UMassZoneGraphNavigationTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassZoneGraphNavigationTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavigationParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NavigationParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassZoneGraphNavigationTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassZoneGraphNavigation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassZoneGraphNavigationTrait_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "ZoneGraph Navigation" },
		{ "IncludePath", "MassZoneGraphNavigationTrait.h" },
		{ "ModuleRelativePath", "Public/MassZoneGraphNavigationTrait.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassZoneGraphNavigationTrait_Statics::NewProp_NavigationParameters_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MassZoneGraphNavigationTrait.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassZoneGraphNavigationTrait_Statics::NewProp_NavigationParameters = { "NavigationParameters", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassZoneGraphNavigationTrait, NavigationParameters), Z_Construct_UScriptStruct_FMassZoneGraphNavigationParameters, METADATA_PARAMS(Z_Construct_UClass_UMassZoneGraphNavigationTrait_Statics::NewProp_NavigationParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassZoneGraphNavigationTrait_Statics::NewProp_NavigationParameters_MetaData)) }; // 2306280579
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassZoneGraphNavigationTrait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassZoneGraphNavigationTrait_Statics::NewProp_NavigationParameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassZoneGraphNavigationTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassZoneGraphNavigationTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassZoneGraphNavigationTrait_Statics::ClassParams = {
		&UMassZoneGraphNavigationTrait::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassZoneGraphNavigationTrait_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassZoneGraphNavigationTrait_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassZoneGraphNavigationTrait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassZoneGraphNavigationTrait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassZoneGraphNavigationTrait()
	{
		if (!Z_Registration_Info_UClass_UMassZoneGraphNavigationTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassZoneGraphNavigationTrait.OuterSingleton, Z_Construct_UClass_UMassZoneGraphNavigationTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassZoneGraphNavigationTrait.OuterSingleton;
	}
	template<> MASSZONEGRAPHNAVIGATION_API UClass* StaticClass<UMassZoneGraphNavigationTrait>()
	{
		return UMassZoneGraphNavigationTrait::StaticClass();
	}
	UMassZoneGraphNavigationTrait::UMassZoneGraphNavigationTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassZoneGraphNavigationTrait);
	UMassZoneGraphNavigationTrait::~UMassZoneGraphNavigationTrait() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassZoneGraphNavigation_Public_MassZoneGraphNavigationTrait_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassZoneGraphNavigation_Public_MassZoneGraphNavigationTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassZoneGraphNavigationTrait, UMassZoneGraphNavigationTrait::StaticClass, TEXT("UMassZoneGraphNavigationTrait"), &Z_Registration_Info_UClass_UMassZoneGraphNavigationTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassZoneGraphNavigationTrait), 948695430U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassZoneGraphNavigation_Public_MassZoneGraphNavigationTrait_h_1435207533(TEXT("/Script/MassZoneGraphNavigation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassZoneGraphNavigation_Public_MassZoneGraphNavigationTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassZoneGraphNavigation_Public_MassZoneGraphNavigationTrait_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
