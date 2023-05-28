// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassReplication/Public/MassReplicationTrait.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassReplication/Public/MassReplicationFragments.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassReplicationTrait() {}
// Cross Module References
	MASSREPLICATION_API UClass* Z_Construct_UClass_UMassReplicationTrait();
	MASSREPLICATION_API UClass* Z_Construct_UClass_UMassReplicationTrait_NoRegister();
	MASSREPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassReplicationParameters();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	UPackage* Z_Construct_UPackage__Script_MassReplication();
// End Cross Module References
	void UMassReplicationTrait::StaticRegisterNativesUMassReplicationTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassReplicationTrait);
	UClass* Z_Construct_UClass_UMassReplicationTrait_NoRegister()
	{
		return UMassReplicationTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassReplicationTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassReplicationTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassReplication,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassReplicationTrait_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Replication" },
		{ "IncludePath", "MassReplicationTrait.h" },
		{ "ModuleRelativePath", "Public/MassReplicationTrait.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassReplicationTrait_Statics::NewProp_Params_MetaData[] = {
		{ "Category", "Mass|Replication" },
		{ "ModuleRelativePath", "Public/MassReplicationTrait.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassReplicationTrait_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassReplicationTrait, Params), Z_Construct_UScriptStruct_FMassReplicationParameters, METADATA_PARAMS(Z_Construct_UClass_UMassReplicationTrait_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassReplicationTrait_Statics::NewProp_Params_MetaData)) }; // 3836671750
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassReplicationTrait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassReplicationTrait_Statics::NewProp_Params,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassReplicationTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassReplicationTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassReplicationTrait_Statics::ClassParams = {
		&UMassReplicationTrait::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassReplicationTrait_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassReplicationTrait_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassReplicationTrait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassReplicationTrait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassReplicationTrait()
	{
		if (!Z_Registration_Info_UClass_UMassReplicationTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassReplicationTrait.OuterSingleton, Z_Construct_UClass_UMassReplicationTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassReplicationTrait.OuterSingleton;
	}
	template<> MASSREPLICATION_API UClass* StaticClass<UMassReplicationTrait>()
	{
		return UMassReplicationTrait::StaticClass();
	}
	UMassReplicationTrait::UMassReplicationTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassReplicationTrait);
	UMassReplicationTrait::~UMassReplicationTrait() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationTrait_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassReplicationTrait, UMassReplicationTrait::StaticClass, TEXT("UMassReplicationTrait"), &Z_Registration_Info_UClass_UMassReplicationTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassReplicationTrait), 3568938212U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationTrait_h_910311241(TEXT("/Script/MassReplication"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationTrait_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
