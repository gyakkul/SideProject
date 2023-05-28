// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamSocketsNetConnection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamSocketsNetConnection() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNetConnection();
	STEAMSOCKETS_API UClass* Z_Construct_UClass_USteamSocketsNetConnection();
	STEAMSOCKETS_API UClass* Z_Construct_UClass_USteamSocketsNetConnection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamSockets();
// End Cross Module References
	void USteamSocketsNetConnection::StaticRegisterNativesUSteamSocketsNetConnection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamSocketsNetConnection);
	UClass* Z_Construct_UClass_USteamSocketsNetConnection_NoRegister()
	{
		return USteamSocketsNetConnection::StaticClass();
	}
	struct Z_Construct_UClass_USteamSocketsNetConnection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamSocketsNetConnection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNetConnection,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamSockets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamSocketsNetConnection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamSocketsNetConnection.h" },
		{ "ModuleRelativePath", "Public/SteamSocketsNetConnection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamSocketsNetConnection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamSocketsNetConnection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamSocketsNetConnection_Statics::ClassParams = {
		&USteamSocketsNetConnection::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamSocketsNetConnection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamSocketsNetConnection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamSocketsNetConnection()
	{
		if (!Z_Registration_Info_UClass_USteamSocketsNetConnection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamSocketsNetConnection.OuterSingleton, Z_Construct_UClass_USteamSocketsNetConnection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamSocketsNetConnection.OuterSingleton;
	}
	template<> STEAMSOCKETS_API UClass* StaticClass<USteamSocketsNetConnection>()
	{
		return USteamSocketsNetConnection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamSocketsNetConnection);
	USteamSocketsNetConnection::~USteamSocketsNetConnection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetConnection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetConnection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamSocketsNetConnection, USteamSocketsNetConnection::StaticClass, TEXT("USteamSocketsNetConnection"), &Z_Registration_Info_UClass_USteamSocketsNetConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamSocketsNetConnection), 560700350U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetConnection_h_3687479101(TEXT("/Script/SteamSockets"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetConnection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetConnection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
