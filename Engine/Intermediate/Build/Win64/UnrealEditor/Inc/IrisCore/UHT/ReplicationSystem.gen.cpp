// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Iris/ReplicationSystem/ReplicationSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicationSystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IRISCORE_API UClass* Z_Construct_UClass_UReplicationBridge_NoRegister();
	IRISCORE_API UClass* Z_Construct_UClass_UReplicationSystem();
	IRISCORE_API UClass* Z_Construct_UClass_UReplicationSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References
	void UReplicationSystem::StaticRegisterNativesUReplicationSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplicationSystem);
	UClass* Z_Construct_UClass_UReplicationSystem_NoRegister()
	{
		return UReplicationSystem::StaticClass();
	}
	struct Z_Construct_UClass_UReplicationSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationBridge_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReplicationBridge;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplicationSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/ReplicationSystem.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ReplicationSystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationSystem_Statics::NewProp_ReplicationBridge_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ReplicationSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UReplicationSystem_Statics::NewProp_ReplicationBridge = { "ReplicationBridge", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReplicationSystem, ReplicationBridge), Z_Construct_UClass_UReplicationBridge_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReplicationSystem_Statics::NewProp_ReplicationBridge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationSystem_Statics::NewProp_ReplicationBridge_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReplicationSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicationSystem_Statics::NewProp_ReplicationBridge,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplicationSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicationSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplicationSystem_Statics::ClassParams = {
		&UReplicationSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReplicationSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationSystem_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UReplicationSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplicationSystem()
	{
		if (!Z_Registration_Info_UClass_UReplicationSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplicationSystem.OuterSingleton, Z_Construct_UClass_UReplicationSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReplicationSystem.OuterSingleton;
	}
	template<> IRISCORE_API UClass* StaticClass<UReplicationSystem>()
	{
		return UReplicationSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicationSystem);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ReplicationSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ReplicationSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReplicationSystem, UReplicationSystem::StaticClass, TEXT("UReplicationSystem"), &Z_Registration_Info_UClass_UReplicationSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplicationSystem), 2959181857U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ReplicationSystem_h_723457966(TEXT("/Script/IrisCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ReplicationSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ReplicationSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
