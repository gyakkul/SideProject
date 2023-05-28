// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassReplication/Public/MassReplicationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassReplicationSettings() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassModuleSettings();
	MASSREPLICATION_API UClass* Z_Construct_UClass_UMassReplicationSettings();
	MASSREPLICATION_API UClass* Z_Construct_UClass_UMassReplicationSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassReplication();
// End Cross Module References
	void UMassReplicationSettings::StaticRegisterNativesUMassReplicationSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassReplicationSettings);
	UClass* Z_Construct_UClass_UMassReplicationSettings_NoRegister()
	{
		return UMassReplicationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMassReplicationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationGridCellSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReplicationGridCellSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassReplicationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassModuleSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_MassReplication,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassReplicationSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Mass Replication" },
		{ "IncludePath", "MassReplicationSettings.h" },
		{ "ModuleRelativePath", "Public/MassReplicationSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassReplicationSettings_Statics::NewProp_ReplicationGridCellSize_MetaData[] = {
		{ "Category", "Replication" },
		{ "ModuleRelativePath", "Public/MassReplicationSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassReplicationSettings_Statics::NewProp_ReplicationGridCellSize = { "ReplicationGridCellSize", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassReplicationSettings, ReplicationGridCellSize), METADATA_PARAMS(Z_Construct_UClass_UMassReplicationSettings_Statics::NewProp_ReplicationGridCellSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassReplicationSettings_Statics::NewProp_ReplicationGridCellSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassReplicationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassReplicationSettings_Statics::NewProp_ReplicationGridCellSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassReplicationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassReplicationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassReplicationSettings_Statics::ClassParams = {
		&UMassReplicationSettings::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassReplicationSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassReplicationSettings_Statics::PropPointers),
		0,
		0x001020A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassReplicationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassReplicationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassReplicationSettings()
	{
		if (!Z_Registration_Info_UClass_UMassReplicationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassReplicationSettings.OuterSingleton, Z_Construct_UClass_UMassReplicationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassReplicationSettings.OuterSingleton;
	}
	template<> MASSREPLICATION_API UClass* StaticClass<UMassReplicationSettings>()
	{
		return UMassReplicationSettings::StaticClass();
	}
	UMassReplicationSettings::UMassReplicationSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassReplicationSettings);
	UMassReplicationSettings::~UMassReplicationSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassReplicationSettings, UMassReplicationSettings::StaticClass, TEXT("UMassReplicationSettings"), &Z_Registration_Info_UClass_UMassReplicationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassReplicationSettings), 183181969U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationSettings_h_3290526024(TEXT("/Script/MassReplication"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
