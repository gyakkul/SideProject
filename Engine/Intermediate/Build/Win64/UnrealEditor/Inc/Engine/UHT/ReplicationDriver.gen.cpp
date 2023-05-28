// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/ReplicationDriver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicationDriver() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UReplicationConnectionDriver();
	ENGINE_API UClass* Z_Construct_UClass_UReplicationConnectionDriver_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UReplicationDriver();
	ENGINE_API UClass* Z_Construct_UClass_UReplicationDriver_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UReplicationDriver::StaticRegisterNativesUReplicationDriver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplicationDriver);
	UClass* Z_Construct_UClass_UReplicationDriver_NoRegister()
	{
		return UReplicationDriver::StaticClass();
	}
	struct Z_Construct_UClass_UReplicationDriver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplicationDriver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationDriver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/ReplicationDriver.h" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicationDriver.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplicationDriver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicationDriver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplicationDriver_Statics::ClassParams = {
		&UReplicationDriver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A9u,
		METADATA_PARAMS(Z_Construct_UClass_UReplicationDriver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationDriver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplicationDriver()
	{
		if (!Z_Registration_Info_UClass_UReplicationDriver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplicationDriver.OuterSingleton, Z_Construct_UClass_UReplicationDriver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReplicationDriver.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UReplicationDriver>()
	{
		return UReplicationDriver::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicationDriver);
	UReplicationDriver::~UReplicationDriver() {}
	void UReplicationConnectionDriver::StaticRegisterNativesUReplicationConnectionDriver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplicationConnectionDriver);
	UClass* Z_Construct_UClass_UReplicationConnectionDriver_NoRegister()
	{
		return UReplicationConnectionDriver::StaticClass();
	}
	struct Z_Construct_UClass_UReplicationConnectionDriver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplicationConnectionDriver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationConnectionDriver_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Class/interface for replication extension that is per connection. It is up to the replication driver to create and associate these with a UNetConnection */" },
		{ "IncludePath", "Engine/ReplicationDriver.h" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicationDriver.h" },
		{ "ToolTip", "Class/interface for replication extension that is per connection. It is up to the replication driver to create and associate these with a UNetConnection" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplicationConnectionDriver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicationConnectionDriver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplicationConnectionDriver_Statics::ClassParams = {
		&UReplicationConnectionDriver::StaticClass,
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
		0x001000A9u,
		METADATA_PARAMS(Z_Construct_UClass_UReplicationConnectionDriver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationConnectionDriver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplicationConnectionDriver()
	{
		if (!Z_Registration_Info_UClass_UReplicationConnectionDriver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplicationConnectionDriver.OuterSingleton, Z_Construct_UClass_UReplicationConnectionDriver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReplicationConnectionDriver.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UReplicationConnectionDriver>()
	{
		return UReplicationConnectionDriver::StaticClass();
	}
	UReplicationConnectionDriver::UReplicationConnectionDriver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicationConnectionDriver);
	UReplicationConnectionDriver::~UReplicationConnectionDriver() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReplicationDriver, UReplicationDriver::StaticClass, TEXT("UReplicationDriver"), &Z_Registration_Info_UClass_UReplicationDriver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplicationDriver), 238767636U) },
		{ Z_Construct_UClass_UReplicationConnectionDriver, UReplicationConnectionDriver::StaticClass, TEXT("UReplicationConnectionDriver"), &Z_Registration_Info_UClass_UReplicationConnectionDriver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplicationConnectionDriver), 3674402432U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_4180060528(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
