// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassReplication/Public/MassReplicationGridProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassReplicationGridProcessor() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverProcessor();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSREPLICATION_API UClass* Z_Construct_UClass_UMassReplicationGridProcessor();
	MASSREPLICATION_API UClass* Z_Construct_UClass_UMassReplicationGridProcessor_NoRegister();
	MASSREPLICATION_API UClass* Z_Construct_UClass_UMassReplicationGridRemoverProcessor();
	MASSREPLICATION_API UClass* Z_Construct_UClass_UMassReplicationGridRemoverProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassReplication();
// End Cross Module References
	void UMassReplicationGridProcessor::StaticRegisterNativesUMassReplicationGridProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassReplicationGridProcessor);
	UClass* Z_Construct_UClass_UMassReplicationGridProcessor_NoRegister()
	{
		return UMassReplicationGridProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassReplicationGridProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassReplicationGridProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassReplication,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassReplicationGridProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Processor to update entity in the replication grid used to fetch entities close to clients */" },
		{ "IncludePath", "MassReplicationGridProcessor.h" },
		{ "ModuleRelativePath", "Public/MassReplicationGridProcessor.h" },
		{ "ToolTip", "Processor to update entity in the replication grid used to fetch entities close to clients" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassReplicationGridProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassReplicationGridProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassReplicationGridProcessor_Statics::ClassParams = {
		&UMassReplicationGridProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassReplicationGridProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassReplicationGridProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassReplicationGridProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassReplicationGridProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassReplicationGridProcessor.OuterSingleton, Z_Construct_UClass_UMassReplicationGridProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassReplicationGridProcessor.OuterSingleton;
	}
	template<> MASSREPLICATION_API UClass* StaticClass<UMassReplicationGridProcessor>()
	{
		return UMassReplicationGridProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassReplicationGridProcessor);
	UMassReplicationGridProcessor::~UMassReplicationGridProcessor() {}
	void UMassReplicationGridRemoverProcessor::StaticRegisterNativesUMassReplicationGridRemoverProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassReplicationGridRemoverProcessor);
	UClass* Z_Construct_UClass_UMassReplicationGridRemoverProcessor_NoRegister()
	{
		return UMassReplicationGridRemoverProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassReplicationGridRemoverProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassReplicationGridRemoverProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassObserverProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassReplication,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassReplicationGridRemoverProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Deinitializer processor to remove entity from the replication grid */" },
		{ "IncludePath", "MassReplicationGridProcessor.h" },
		{ "ModuleRelativePath", "Public/MassReplicationGridProcessor.h" },
		{ "ToolTip", "Deinitializer processor to remove entity from the replication grid" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassReplicationGridRemoverProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassReplicationGridRemoverProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassReplicationGridRemoverProcessor_Statics::ClassParams = {
		&UMassReplicationGridRemoverProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassReplicationGridRemoverProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassReplicationGridRemoverProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassReplicationGridRemoverProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassReplicationGridRemoverProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassReplicationGridRemoverProcessor.OuterSingleton, Z_Construct_UClass_UMassReplicationGridRemoverProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassReplicationGridRemoverProcessor.OuterSingleton;
	}
	template<> MASSREPLICATION_API UClass* StaticClass<UMassReplicationGridRemoverProcessor>()
	{
		return UMassReplicationGridRemoverProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassReplicationGridRemoverProcessor);
	UMassReplicationGridRemoverProcessor::~UMassReplicationGridRemoverProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationGridProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationGridProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassReplicationGridProcessor, UMassReplicationGridProcessor::StaticClass, TEXT("UMassReplicationGridProcessor"), &Z_Registration_Info_UClass_UMassReplicationGridProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassReplicationGridProcessor), 3457016647U) },
		{ Z_Construct_UClass_UMassReplicationGridRemoverProcessor, UMassReplicationGridRemoverProcessor::StaticClass, TEXT("UMassReplicationGridRemoverProcessor"), &Z_Registration_Info_UClass_UMassReplicationGridRemoverProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassReplicationGridRemoverProcessor), 2827003401U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationGridProcessor_h_385408615(TEXT("/Script/MassReplication"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationGridProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationGridProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
