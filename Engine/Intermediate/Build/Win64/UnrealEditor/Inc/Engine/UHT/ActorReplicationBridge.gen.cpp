// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Net/Iris/ReplicationSystem/ActorReplicationBridge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorReplicationBridge() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorReplicationBridge();
	ENGINE_API UClass* Z_Construct_UClass_UActorReplicationBridge_NoRegister();
	IRISCORE_API UClass* Z_Construct_UClass_UObjectReplicationBridge();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UActorReplicationBridge::StaticRegisterNativesUActorReplicationBridge()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorReplicationBridge);
	UClass* Z_Construct_UClass_UActorReplicationBridge_NoRegister()
	{
		return UActorReplicationBridge::StaticClass();
	}
	struct Z_Construct_UClass_UActorReplicationBridge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorReplicationBridge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObjectReplicationBridge,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorReplicationBridge_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Net/Iris/ReplicationSystem/ActorReplicationBridge.h" },
		{ "ModuleRelativePath", "Public/Net/Iris/ReplicationSystem/ActorReplicationBridge.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorReplicationBridge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorReplicationBridge>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorReplicationBridge_Statics::ClassParams = {
		&UActorReplicationBridge::StaticClass,
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
		0x000800A8u,
		METADATA_PARAMS(Z_Construct_UClass_UActorReplicationBridge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorReplicationBridge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorReplicationBridge()
	{
		if (!Z_Registration_Info_UClass_UActorReplicationBridge.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorReplicationBridge.OuterSingleton, Z_Construct_UClass_UActorReplicationBridge_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorReplicationBridge.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UActorReplicationBridge>()
	{
		return UActorReplicationBridge::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorReplicationBridge);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_ActorReplicationBridge_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_ActorReplicationBridge_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorReplicationBridge, UActorReplicationBridge::StaticClass, TEXT("UActorReplicationBridge"), &Z_Registration_Info_UClass_UActorReplicationBridge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorReplicationBridge), 1352682023U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_ActorReplicationBridge_h_391221748(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_ActorReplicationBridge_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_ActorReplicationBridge_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
