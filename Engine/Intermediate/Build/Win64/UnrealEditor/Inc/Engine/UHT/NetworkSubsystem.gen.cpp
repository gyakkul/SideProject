// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Net/Subsystems/NetworkSubsystem.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNetworkSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UNetworkSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UNetworkSubsystem::StaticRegisterNativesUNetworkSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetworkSubsystem);
	UClass* Z_Construct_UClass_UNetworkSubsystem_NoRegister()
	{
		return UNetworkSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UNetworkSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetworkSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Net/Subsystems/NetworkSubsystem.h" },
		{ "ModuleRelativePath", "Public/Net/Subsystems/NetworkSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetworkSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetworkSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetworkSubsystem_Statics::ClassParams = {
		&UNetworkSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNetworkSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetworkSubsystem()
	{
		if (!Z_Registration_Info_UClass_UNetworkSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetworkSubsystem.OuterSingleton, Z_Construct_UClass_UNetworkSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNetworkSubsystem.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UNetworkSubsystem>()
	{
		return UNetworkSubsystem::StaticClass();
	}
	UNetworkSubsystem::UNetworkSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworkSubsystem);
	UNetworkSubsystem::~UNetworkSubsystem() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNetworkSubsystem)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNetworkSubsystem, UNetworkSubsystem::StaticClass, TEXT("UNetworkSubsystem"), &Z_Registration_Info_UClass_UNetworkSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetworkSubsystem), 2244396966U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_916228801(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
