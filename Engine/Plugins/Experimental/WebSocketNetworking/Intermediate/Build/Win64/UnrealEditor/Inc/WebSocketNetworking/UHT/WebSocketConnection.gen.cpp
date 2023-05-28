// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebSocketConnection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSocketConnection() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNetConnection();
	UPackage* Z_Construct_UPackage__Script_WebSocketNetworking();
	WEBSOCKETNETWORKING_API UClass* Z_Construct_UClass_UWebSocketConnection();
	WEBSOCKETNETWORKING_API UClass* Z_Construct_UClass_UWebSocketConnection_NoRegister();
// End Cross Module References
	void UWebSocketConnection::StaticRegisterNativesUWebSocketConnection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebSocketConnection);
	UClass* Z_Construct_UClass_UWebSocketConnection_NoRegister()
	{
		return UWebSocketConnection::StaticClass();
	}
	struct Z_Construct_UClass_UWebSocketConnection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebSocketConnection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNetConnection,
		(UObject* (*)())Z_Construct_UPackage__Script_WebSocketNetworking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketConnection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WebSocketConnection.h" },
		{ "ModuleRelativePath", "Public/WebSocketConnection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebSocketConnection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSocketConnection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebSocketConnection_Statics::ClassParams = {
		&UWebSocketConnection::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebSocketConnection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketConnection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebSocketConnection()
	{
		if (!Z_Registration_Info_UClass_UWebSocketConnection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebSocketConnection.OuterSingleton, Z_Construct_UClass_UWebSocketConnection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebSocketConnection.OuterSingleton;
	}
	template<> WEBSOCKETNETWORKING_API UClass* StaticClass<UWebSocketConnection>()
	{
		return UWebSocketConnection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSocketConnection);
	UWebSocketConnection::~UWebSocketConnection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WebSocketNetworking_Source_WebSocketNetworking_Public_WebSocketConnection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WebSocketNetworking_Source_WebSocketNetworking_Public_WebSocketConnection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebSocketConnection, UWebSocketConnection::StaticClass, TEXT("UWebSocketConnection"), &Z_Registration_Info_UClass_UWebSocketConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebSocketConnection), 3753961727U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WebSocketNetworking_Source_WebSocketNetworking_Public_WebSocketConnection_h_2412525311(TEXT("/Script/WebSocketNetworking"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WebSocketNetworking_Source_WebSocketNetworking_Public_WebSocketConnection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WebSocketNetworking_Source_WebSocketNetworking_Public_WebSocketConnection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
