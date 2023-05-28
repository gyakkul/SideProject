// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassSpawnerSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassSpawnerSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor_NoRegister();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassSpawnerSubsystem();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassSpawnerSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassSpawner();
// End Cross Module References
	void UMassSpawnerSubsystem::StaticRegisterNativesUMassSpawnerSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassSpawnerSubsystem);
	UClass* Z_Construct_UClass_UMassSpawnerSubsystem_NoRegister()
	{
		return UMassSpawnerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMassSpawnerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpawnDataInitializers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnDataInitializers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnDataInitializers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassSpawnerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MassSpawner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSpawnerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassSpawnerSubsystem.h" },
		{ "ModuleRelativePath", "Public/MassSpawnerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassSpawnerSubsystem_Statics::NewProp_SpawnDataInitializers_Inner = { "SpawnDataInitializers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMassProcessor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSpawnerSubsystem_Statics::NewProp_SpawnDataInitializers_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassSpawnerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassSpawnerSubsystem_Statics::NewProp_SpawnDataInitializers = { "SpawnDataInitializers", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassSpawnerSubsystem, SpawnDataInitializers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMassSpawnerSubsystem_Statics::NewProp_SpawnDataInitializers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSpawnerSubsystem_Statics::NewProp_SpawnDataInitializers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassSpawnerSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassSpawnerSubsystem_Statics::NewProp_SpawnDataInitializers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassSpawnerSubsystem_Statics::NewProp_SpawnDataInitializers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassSpawnerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassSpawnerSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassSpawnerSubsystem_Statics::ClassParams = {
		&UMassSpawnerSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassSpawnerSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassSpawnerSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassSpawnerSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSpawnerSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassSpawnerSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMassSpawnerSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassSpawnerSubsystem.OuterSingleton, Z_Construct_UClass_UMassSpawnerSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassSpawnerSubsystem.OuterSingleton;
	}
	template<> MASSSPAWNER_API UClass* StaticClass<UMassSpawnerSubsystem>()
	{
		return UMassSpawnerSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassSpawnerSubsystem);
	UMassSpawnerSubsystem::~UMassSpawnerSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawnerSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawnerSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassSpawnerSubsystem, UMassSpawnerSubsystem::StaticClass, TEXT("UMassSpawnerSubsystem"), &Z_Registration_Info_UClass_UMassSpawnerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassSpawnerSubsystem), 835332570U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawnerSubsystem_h_3414489320(TEXT("/Script/MassSpawner"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawnerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawnerSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
