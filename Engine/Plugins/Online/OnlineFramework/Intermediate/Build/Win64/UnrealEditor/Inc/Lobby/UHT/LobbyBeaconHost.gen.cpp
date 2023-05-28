// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LobbyBeaconHost.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyBeaconHost() {}
// Cross Module References
	LOBBY_API UClass* Z_Construct_UClass_ALobbyBeaconHost();
	LOBBY_API UClass* Z_Construct_UClass_ALobbyBeaconHost_NoRegister();
	LOBBY_API UClass* Z_Construct_UClass_ALobbyBeaconState_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHostObject();
	UPackage* Z_Construct_UPackage__Script_Lobby();
// End Cross Module References
	void ALobbyBeaconHost::StaticRegisterNativesALobbyBeaconHost()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALobbyBeaconHost);
	UClass* Z_Construct_UClass_ALobbyBeaconHost_NoRegister()
	{
		return ALobbyBeaconHost::StaticClass();
	}
	struct Z_Construct_UClass_ALobbyBeaconHost_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LobbyStateClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_LobbyStateClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LobbyState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LobbyState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALobbyBeaconHost_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOnlineBeaconHostObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Lobby,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyBeaconHost_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Host object for maintaining a lobby before players actually join a server ready to receive them\n */" },
		{ "IncludePath", "LobbyBeaconHost.h" },
		{ "ModuleRelativePath", "Public/LobbyBeaconHost.h" },
		{ "ToolTip", "Host object for maintaining a lobby before players actually join a server ready to receive them" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyBeaconHost_Statics::NewProp_LobbyStateClass_MetaData[] = {
		{ "Comment", "/** Class to use for the lobby beacon state */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconHost.h" },
		{ "ToolTip", "Class to use for the lobby beacon state" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ALobbyBeaconHost_Statics::NewProp_LobbyStateClass = { "LobbyStateClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALobbyBeaconHost, LobbyStateClass), Z_Construct_UClass_ALobbyBeaconState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALobbyBeaconHost_Statics::NewProp_LobbyStateClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyBeaconHost_Statics::NewProp_LobbyStateClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyBeaconHost_Statics::NewProp_LobbyState_MetaData[] = {
		{ "Comment", "/** Actor representing the state of the lobby (similar to AGameState) */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconHost.h" },
		{ "ToolTip", "Actor representing the state of the lobby (similar to AGameState)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALobbyBeaconHost_Statics::NewProp_LobbyState = { "LobbyState", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALobbyBeaconHost, LobbyState), Z_Construct_UClass_ALobbyBeaconState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALobbyBeaconHost_Statics::NewProp_LobbyState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyBeaconHost_Statics::NewProp_LobbyState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALobbyBeaconHost_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyBeaconHost_Statics::NewProp_LobbyStateClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyBeaconHost_Statics::NewProp_LobbyState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALobbyBeaconHost_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALobbyBeaconHost>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALobbyBeaconHost_Statics::ClassParams = {
		&ALobbyBeaconHost::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALobbyBeaconHost_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyBeaconHost_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALobbyBeaconHost_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyBeaconHost_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALobbyBeaconHost()
	{
		if (!Z_Registration_Info_UClass_ALobbyBeaconHost.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALobbyBeaconHost.OuterSingleton, Z_Construct_UClass_ALobbyBeaconHost_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALobbyBeaconHost.OuterSingleton;
	}
	template<> LOBBY_API UClass* StaticClass<ALobbyBeaconHost>()
	{
		return ALobbyBeaconHost::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALobbyBeaconHost);
	ALobbyBeaconHost::~ALobbyBeaconHost() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconHost_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconHost_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALobbyBeaconHost, ALobbyBeaconHost::StaticClass, TEXT("ALobbyBeaconHost"), &Z_Registration_Info_UClass_ALobbyBeaconHost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALobbyBeaconHost), 1056665974U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconHost_h_659873398(TEXT("/Script/Lobby"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconHost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconHost_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
