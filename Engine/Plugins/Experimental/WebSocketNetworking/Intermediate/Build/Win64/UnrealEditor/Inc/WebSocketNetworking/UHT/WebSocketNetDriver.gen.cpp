// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebSocketNetDriver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSocketNetDriver() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNetDriver();
	UPackage* Z_Construct_UPackage__Script_WebSocketNetworking();
	WEBSOCKETNETWORKING_API UClass* Z_Construct_UClass_UWebSocketNetDriver();
	WEBSOCKETNETWORKING_API UClass* Z_Construct_UClass_UWebSocketNetDriver_NoRegister();
// End Cross Module References
	void UWebSocketNetDriver::StaticRegisterNativesUWebSocketNetDriver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebSocketNetDriver);
	UClass* Z_Construct_UClass_UWebSocketNetDriver_NoRegister()
	{
		return UWebSocketNetDriver::StaticClass();
	}
	struct Z_Construct_UClass_UWebSocketNetDriver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WebSocketPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WebSocketPort;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebSocketNetDriver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNetDriver,
		(UObject* (*)())Z_Construct_UPackage__Script_WebSocketNetworking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketNetDriver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WebSocketNetDriver.h" },
		{ "ModuleRelativePath", "Public/WebSocketNetDriver.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketNetDriver_Statics::NewProp_WebSocketPort_MetaData[] = {
		{ "Comment", "/** WebSocket server port*/" },
		{ "ModuleRelativePath", "Public/WebSocketNetDriver.h" },
		{ "ToolTip", "WebSocket server port" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWebSocketNetDriver_Statics::NewProp_WebSocketPort = { "WebSocketPort", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebSocketNetDriver, WebSocketPort), METADATA_PARAMS(Z_Construct_UClass_UWebSocketNetDriver_Statics::NewProp_WebSocketPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketNetDriver_Statics::NewProp_WebSocketPort_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebSocketNetDriver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketNetDriver_Statics::NewProp_WebSocketPort,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebSocketNetDriver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSocketNetDriver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebSocketNetDriver_Statics::ClassParams = {
		&UWebSocketNetDriver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebSocketNetDriver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketNetDriver_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UWebSocketNetDriver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketNetDriver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebSocketNetDriver()
	{
		if (!Z_Registration_Info_UClass_UWebSocketNetDriver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebSocketNetDriver.OuterSingleton, Z_Construct_UClass_UWebSocketNetDriver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebSocketNetDriver.OuterSingleton;
	}
	template<> WEBSOCKETNETWORKING_API UClass* StaticClass<UWebSocketNetDriver>()
	{
		return UWebSocketNetDriver::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSocketNetDriver);
	UWebSocketNetDriver::~UWebSocketNetDriver() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WebSocketNetworking_Source_WebSocketNetworking_Public_WebSocketNetDriver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WebSocketNetworking_Source_WebSocketNetworking_Public_WebSocketNetDriver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebSocketNetDriver, UWebSocketNetDriver::StaticClass, TEXT("UWebSocketNetDriver"), &Z_Registration_Info_UClass_UWebSocketNetDriver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebSocketNetDriver), 1449295122U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WebSocketNetworking_Source_WebSocketNetworking_Public_WebSocketNetDriver_h_3572871420(TEXT("/Script/WebSocketNetworking"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WebSocketNetworking_Source_WebSocketNetworking_Public_WebSocketNetDriver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WebSocketNetworking_Source_WebSocketNetworking_Public_WebSocketNetDriver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
