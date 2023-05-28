// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassBehaviorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassBehaviorSettings() {}
// Cross Module References
	MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassBehaviorSettings();
	MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassBehaviorSettings_NoRegister();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassModuleSettings();
	UPackage* Z_Construct_UPackage__Script_MassAIBehavior();
// End Cross Module References
	void UMassBehaviorSettings::StaticRegisterNativesUMassBehaviorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassBehaviorSettings);
	UClass* Z_Construct_UClass_UMassBehaviorSettings_NoRegister()
	{
		return UMassBehaviorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMassBehaviorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxActivationsPerLOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxActivationsPerLOD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassBehaviorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassModuleSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassBehaviorSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Mass Behavior" },
		{ "IncludePath", "MassBehaviorSettings.h" },
		{ "ModuleRelativePath", "Public/MassBehaviorSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassBehaviorSettings_Statics::NewProp_MaxActivationsPerLOD_MetaData[] = {
		{ "ArraySizeEnum", "/Script/MassLOD.EMassLOD" },
		{ "Category", "Mass|LOD" },
		{ "ModuleRelativePath", "Public/MassBehaviorSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMassBehaviorSettings_Statics::NewProp_MaxActivationsPerLOD = { "MaxActivationsPerLOD", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(MaxActivationsPerLOD, UMassBehaviorSettings), nullptr, nullptr, STRUCT_OFFSET(UMassBehaviorSettings, MaxActivationsPerLOD), METADATA_PARAMS(Z_Construct_UClass_UMassBehaviorSettings_Statics::NewProp_MaxActivationsPerLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassBehaviorSettings_Statics::NewProp_MaxActivationsPerLOD_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassBehaviorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassBehaviorSettings_Statics::NewProp_MaxActivationsPerLOD,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassBehaviorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassBehaviorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassBehaviorSettings_Statics::ClassParams = {
		&UMassBehaviorSettings::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassBehaviorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassBehaviorSettings_Statics::PropPointers),
		0,
		0x001020A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassBehaviorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassBehaviorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassBehaviorSettings()
	{
		if (!Z_Registration_Info_UClass_UMassBehaviorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassBehaviorSettings.OuterSingleton, Z_Construct_UClass_UMassBehaviorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassBehaviorSettings.OuterSingleton;
	}
	template<> MASSAIBEHAVIOR_API UClass* StaticClass<UMassBehaviorSettings>()
	{
		return UMassBehaviorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassBehaviorSettings);
	UMassBehaviorSettings::~UMassBehaviorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassBehaviorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassBehaviorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassBehaviorSettings, UMassBehaviorSettings::StaticClass, TEXT("UMassBehaviorSettings"), &Z_Registration_Info_UClass_UMassBehaviorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassBehaviorSettings), 543385631U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassBehaviorSettings_h_1652098687(TEXT("/Script/MassAIBehavior"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassBehaviorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassBehaviorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
