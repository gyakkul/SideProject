// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IpConnection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIpConnection() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNetConnection();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpConnection();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpConnection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	void UIpConnection::StaticRegisterNativesUIpConnection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIpConnection);
	UClass* Z_Construct_UClass_UIpConnection_NoRegister()
	{
		return UIpConnection::StaticClass();
	}
	struct Z_Construct_UClass_UIpConnection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketErrorDisconnectDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SocketErrorDisconnectDelay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIpConnection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNetConnection,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIpConnection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IpConnection.h" },
		{ "ModuleRelativePath", "Classes/IpConnection.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIpConnection_Statics::NewProp_SocketErrorDisconnectDelay_MetaData[] = {
		{ "Comment", "/** Instead of disconnecting immediately on a socket error, wait for some time to see if we can recover. Specified in Seconds. */" },
		{ "ModuleRelativePath", "Classes/IpConnection.h" },
		{ "ToolTip", "Instead of disconnecting immediately on a socket error, wait for some time to see if we can recover. Specified in Seconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIpConnection_Statics::NewProp_SocketErrorDisconnectDelay = { "SocketErrorDisconnectDelay", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIpConnection, SocketErrorDisconnectDelay), METADATA_PARAMS(Z_Construct_UClass_UIpConnection_Statics::NewProp_SocketErrorDisconnectDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIpConnection_Statics::NewProp_SocketErrorDisconnectDelay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIpConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIpConnection_Statics::NewProp_SocketErrorDisconnectDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIpConnection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIpConnection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIpConnection_Statics::ClassParams = {
		&UIpConnection::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIpConnection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIpConnection_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UIpConnection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIpConnection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIpConnection()
	{
		if (!Z_Registration_Info_UClass_UIpConnection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIpConnection.OuterSingleton, Z_Construct_UClass_UIpConnection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIpConnection.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UIpConnection>()
	{
		return UIpConnection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIpConnection);
	UIpConnection::~UIpConnection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpConnection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpConnection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIpConnection, UIpConnection::StaticClass, TEXT("UIpConnection"), &Z_Registration_Info_UClass_UIpConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIpConnection), 1907793023U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpConnection_h_2979133833(TEXT("/Script/OnlineSubsystemUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpConnection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpConnection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
