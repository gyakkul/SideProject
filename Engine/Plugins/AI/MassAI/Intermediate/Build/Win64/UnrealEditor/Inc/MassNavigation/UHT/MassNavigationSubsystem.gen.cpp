// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassNavigationSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassNavigationSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassNavigationSubsystem();
	MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassNavigationSubsystem_NoRegister();
	MASSNAVIGATION_API UEnum* Z_Construct_UEnum_MassNavigation_EMassNavigationObstacleFlags();
	UPackage* Z_Construct_UPackage__Script_MassNavigation();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMassNavigationObstacleFlags;
	static UEnum* EMassNavigationObstacleFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMassNavigationObstacleFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMassNavigationObstacleFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassNavigation_EMassNavigationObstacleFlags, (UObject*)Z_Construct_UPackage__Script_MassNavigation(), TEXT("EMassNavigationObstacleFlags"));
		}
		return Z_Registration_Info_UEnum_EMassNavigationObstacleFlags.OuterSingleton;
	}
	template<> MASSNAVIGATION_API UEnum* StaticEnum<EMassNavigationObstacleFlags>()
	{
		return EMassNavigationObstacleFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_MassNavigation_EMassNavigationObstacleFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MassNavigation_EMassNavigationObstacleFlags_Statics::Enumerators[] = {
		{ "EMassNavigationObstacleFlags::None", (int64)EMassNavigationObstacleFlags::None },
		{ "EMassNavigationObstacleFlags::HasColliderData", (int64)EMassNavigationObstacleFlags::HasColliderData },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MassNavigation_EMassNavigationObstacleFlags_Statics::Enum_MetaDataParams[] = {
		{ "HasColliderData.Name", "EMassNavigationObstacleFlags::HasColliderData" },
		{ "ModuleRelativePath", "Public/MassNavigationSubsystem.h" },
		{ "None.Name", "EMassNavigationObstacleFlags::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassNavigation_EMassNavigationObstacleFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MassNavigation,
		nullptr,
		"EMassNavigationObstacleFlags",
		"EMassNavigationObstacleFlags",
		Z_Construct_UEnum_MassNavigation_EMassNavigationObstacleFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MassNavigation_EMassNavigationObstacleFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MassNavigation_EMassNavigationObstacleFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MassNavigation_EMassNavigationObstacleFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MassNavigation_EMassNavigationObstacleFlags()
	{
		if (!Z_Registration_Info_UEnum_EMassNavigationObstacleFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMassNavigationObstacleFlags.InnerSingleton, Z_Construct_UEnum_MassNavigation_EMassNavigationObstacleFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMassNavigationObstacleFlags.InnerSingleton;
	}
	void UMassNavigationSubsystem::StaticRegisterNativesUMassNavigationSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassNavigationSubsystem);
	UClass* Z_Construct_UClass_UMassNavigationSubsystem_NoRegister()
	{
		return UMassNavigationSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMassNavigationSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassNavigationSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MassNavigation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassNavigationSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// 2 levels of hierarchy, 4 ratio between levels\n" },
		{ "IncludePath", "MassNavigationSubsystem.h" },
		{ "ModuleRelativePath", "Public/MassNavigationSubsystem.h" },
		{ "ToolTip", "2 levels of hierarchy, 4 ratio between levels" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassNavigationSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassNavigationSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassNavigationSubsystem_Statics::ClassParams = {
		&UMassNavigationSubsystem::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassNavigationSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassNavigationSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassNavigationSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMassNavigationSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassNavigationSubsystem.OuterSingleton, Z_Construct_UClass_UMassNavigationSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassNavigationSubsystem.OuterSingleton;
	}
	template<> MASSNAVIGATION_API UClass* StaticClass<UMassNavigationSubsystem>()
	{
		return UMassNavigationSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassNavigationSubsystem);
	UMassNavigationSubsystem::~UMassNavigationSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationSubsystem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationSubsystem_h_Statics::EnumInfo[] = {
		{ EMassNavigationObstacleFlags_StaticEnum, TEXT("EMassNavigationObstacleFlags"), &Z_Registration_Info_UEnum_EMassNavigationObstacleFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1599623694U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassNavigationSubsystem, UMassNavigationSubsystem::StaticClass, TEXT("UMassNavigationSubsystem"), &Z_Registration_Info_UClass_UMassNavigationSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassNavigationSubsystem), 2541130113U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationSubsystem_h_964719737(TEXT("/Script/MassNavigation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationSubsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationSubsystem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
