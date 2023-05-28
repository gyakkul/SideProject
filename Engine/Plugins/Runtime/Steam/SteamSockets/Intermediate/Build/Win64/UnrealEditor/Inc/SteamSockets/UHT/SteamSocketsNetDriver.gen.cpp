// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamSocketsNetDriver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamSocketsNetDriver() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNetDriver();
	STEAMSOCKETS_API UClass* Z_Construct_UClass_USteamSocketsNetDriver();
	STEAMSOCKETS_API UClass* Z_Construct_UClass_USteamSocketsNetDriver_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamSockets();
// End Cross Module References
	void USteamSocketsNetDriver::StaticRegisterNativesUSteamSocketsNetDriver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamSocketsNetDriver);
	UClass* Z_Construct_UClass_USteamSocketsNetDriver_NoRegister()
	{
		return USteamSocketsNetDriver::StaticClass();
	}
	struct Z_Construct_UClass_USteamSocketsNetDriver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamSocketsNetDriver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNetDriver,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamSockets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamSocketsNetDriver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamSocketsNetDriver.h" },
		{ "ModuleRelativePath", "Public/SteamSocketsNetDriver.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamSocketsNetDriver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamSocketsNetDriver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamSocketsNetDriver_Statics::ClassParams = {
		&USteamSocketsNetDriver::StaticClass,
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
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_USteamSocketsNetDriver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamSocketsNetDriver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamSocketsNetDriver()
	{
		if (!Z_Registration_Info_UClass_USteamSocketsNetDriver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamSocketsNetDriver.OuterSingleton, Z_Construct_UClass_USteamSocketsNetDriver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamSocketsNetDriver.OuterSingleton;
	}
	template<> STEAMSOCKETS_API UClass* StaticClass<USteamSocketsNetDriver>()
	{
		return USteamSocketsNetDriver::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamSocketsNetDriver);
	USteamSocketsNetDriver::~USteamSocketsNetDriver() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetDriver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetDriver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamSocketsNetDriver, USteamSocketsNetDriver::StaticClass, TEXT("USteamSocketsNetDriver"), &Z_Registration_Info_UClass_USteamSocketsNetDriver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamSocketsNetDriver), 953697147U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetDriver_h_2827920277(TEXT("/Script/SteamSockets"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetDriver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetDriver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
