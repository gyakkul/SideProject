// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassReplication/Public/MassReplicationProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassReplicationProcessor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSREPLICATION_API UClass* Z_Construct_UClass_UMassReplicationProcessor();
	MASSREPLICATION_API UClass* Z_Construct_UClass_UMassReplicationProcessor_NoRegister();
	MASSREPLICATION_API UClass* Z_Construct_UClass_UMassReplicationSubsystem_NoRegister();
	MASSREPLICATION_API UClass* Z_Construct_UClass_UMassReplicatorBase();
	MASSREPLICATION_API UClass* Z_Construct_UClass_UMassReplicatorBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassReplication();
// End Cross Module References
	void UMassReplicationProcessor::StaticRegisterNativesUMassReplicationProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassReplicationProcessor);
	UClass* Z_Construct_UClass_UMassReplicationProcessor_NoRegister()
	{
		return UMassReplicationProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassReplicationProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReplicationSubsystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassReplicationProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassReplication,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassReplicationProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n *  Base processor that handles replication and only runs on the server. You should derive from this per entity type (that require different replication processing). It and its derived classes \n *  query Mass entity fragments and set those values for replication when appropriate, using the MassClientBubbleHandler.\n */" },
		{ "IncludePath", "MassReplicationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassReplicationProcessor.h" },
		{ "ToolTip", "Base processor that handles replication and only runs on the server. You should derive from this per entity type (that require different replication processing). It and its derived classes\nquery Mass entity fragments and set those values for replication when appropriate, using the MassClientBubbleHandler." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassReplicationProcessor_Statics::NewProp_ReplicationSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassReplicationProcessor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassReplicationProcessor_Statics::NewProp_ReplicationSubsystem = { "ReplicationSubsystem", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassReplicationProcessor, ReplicationSubsystem), Z_Construct_UClass_UMassReplicationSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMassReplicationProcessor_Statics::NewProp_ReplicationSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassReplicationProcessor_Statics::NewProp_ReplicationSubsystem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassReplicationProcessor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassReplicationProcessor_Statics::NewProp_ReplicationSubsystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassReplicationProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassReplicationProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassReplicationProcessor_Statics::ClassParams = {
		&UMassReplicationProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassReplicationProcessor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassReplicationProcessor_Statics::PropPointers),
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassReplicationProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassReplicationProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassReplicationProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassReplicationProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassReplicationProcessor.OuterSingleton, Z_Construct_UClass_UMassReplicationProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassReplicationProcessor.OuterSingleton;
	}
	template<> MASSREPLICATION_API UClass* StaticClass<UMassReplicationProcessor>()
	{
		return UMassReplicationProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassReplicationProcessor);
	UMassReplicationProcessor::~UMassReplicationProcessor() {}
	void UMassReplicatorBase::StaticRegisterNativesUMassReplicatorBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassReplicatorBase);
	UClass* Z_Construct_UClass_UMassReplicatorBase_NoRegister()
	{
		return UMassReplicatorBase::StaticClass();
	}
	struct Z_Construct_UClass_UMassReplicatorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassReplicatorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MassReplication,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassReplicatorBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassReplicationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassReplicationProcessor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassReplicatorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassReplicatorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassReplicatorBase_Statics::ClassParams = {
		&UMassReplicatorBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMassReplicatorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassReplicatorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassReplicatorBase()
	{
		if (!Z_Registration_Info_UClass_UMassReplicatorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassReplicatorBase.OuterSingleton, Z_Construct_UClass_UMassReplicatorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassReplicatorBase.OuterSingleton;
	}
	template<> MASSREPLICATION_API UClass* StaticClass<UMassReplicatorBase>()
	{
		return UMassReplicatorBase::StaticClass();
	}
	UMassReplicatorBase::UMassReplicatorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassReplicatorBase);
	UMassReplicatorBase::~UMassReplicatorBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassReplicationProcessor, UMassReplicationProcessor::StaticClass, TEXT("UMassReplicationProcessor"), &Z_Registration_Info_UClass_UMassReplicationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassReplicationProcessor), 2706574333U) },
		{ Z_Construct_UClass_UMassReplicatorBase, UMassReplicatorBase::StaticClass, TEXT("UMassReplicatorBase"), &Z_Registration_Info_UClass_UMassReplicatorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassReplicatorBase), 46276717U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationProcessor_h_1149760514(TEXT("/Script/MassReplication"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
