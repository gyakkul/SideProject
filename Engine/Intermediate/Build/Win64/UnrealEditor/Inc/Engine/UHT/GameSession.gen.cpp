// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/GameSession.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSession() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameSession();
	ENGINE_API UClass* Z_Construct_UClass_AGameSession_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void AGameSession::StaticRegisterNativesAGameSession()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameSession);
	UClass* Z_Construct_UClass_AGameSession_NoRegister()
	{
		return AGameSession::StaticClass();
	}
	struct Z_Construct_UClass_AGameSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpectators_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSpectators;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPartySize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPartySize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSplitscreensPerConnection_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaxSplitscreensPerConnection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresPushToTalk_MetaData[];
#endif
		static void NewProp_bRequiresPushToTalk_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresPushToTalk;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameSession_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\nActs as a game-specific wrapper around the session interface. The game code makes calls to this when it needs to interact with the session interface.\nA game session exists only the server, while running an online game.\n*/" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameFramework/GameSession.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameSession.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Acts as a game-specific wrapper around the session interface. The game code makes calls to this when it needs to interact with the session interface.\nA game session exists only the server, while running an online game." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameSession_Statics::NewProp_MaxSpectators_MetaData[] = {
		{ "Comment", "/** Maximum number of spectators allowed by this server. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameSession.h" },
		{ "ToolTip", "Maximum number of spectators allowed by this server." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameSession_Statics::NewProp_MaxSpectators = { "MaxSpectators", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameSession, MaxSpectators), METADATA_PARAMS(Z_Construct_UClass_AGameSession_Statics::NewProp_MaxSpectators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameSession_Statics::NewProp_MaxSpectators_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameSession_Statics::NewProp_MaxPlayers_MetaData[] = {
		{ "Comment", "/** Maximum number of players allowed by this server. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameSession.h" },
		{ "ToolTip", "Maximum number of players allowed by this server." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameSession_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameSession, MaxPlayers), METADATA_PARAMS(Z_Construct_UClass_AGameSession_Statics::NewProp_MaxPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameSession_Statics::NewProp_MaxPlayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameSession_Statics::NewProp_MaxPartySize_MetaData[] = {
		{ "Comment", "/** Restrictions on the largest party that can join together */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameSession.h" },
		{ "ToolTip", "Restrictions on the largest party that can join together" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameSession_Statics::NewProp_MaxPartySize = { "MaxPartySize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameSession, MaxPartySize), METADATA_PARAMS(Z_Construct_UClass_AGameSession_Statics::NewProp_MaxPartySize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameSession_Statics::NewProp_MaxPartySize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameSession_Statics::NewProp_MaxSplitscreensPerConnection_MetaData[] = {
		{ "Comment", "/** Maximum number of splitscreen players to allow from one connection */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameSession.h" },
		{ "ToolTip", "Maximum number of splitscreen players to allow from one connection" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGameSession_Statics::NewProp_MaxSplitscreensPerConnection = { "MaxSplitscreensPerConnection", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameSession, MaxSplitscreensPerConnection), nullptr, METADATA_PARAMS(Z_Construct_UClass_AGameSession_Statics::NewProp_MaxSplitscreensPerConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameSession_Statics::NewProp_MaxSplitscreensPerConnection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameSession_Statics::NewProp_bRequiresPushToTalk_MetaData[] = {
		{ "Comment", "/** Is voice enabled always or via a push to talk keybinding */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameSession.h" },
		{ "ToolTip", "Is voice enabled always or via a push to talk keybinding" },
	};
#endif
	void Z_Construct_UClass_AGameSession_Statics::NewProp_bRequiresPushToTalk_SetBit(void* Obj)
	{
		((AGameSession*)Obj)->bRequiresPushToTalk = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameSession_Statics::NewProp_bRequiresPushToTalk = { "bRequiresPushToTalk", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGameSession), &Z_Construct_UClass_AGameSession_Statics::NewProp_bRequiresPushToTalk_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameSession_Statics::NewProp_bRequiresPushToTalk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameSession_Statics::NewProp_bRequiresPushToTalk_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameSession_Statics::NewProp_SessionName_MetaData[] = {
		{ "Comment", "/** SessionName local copy from PlayerState class.  should really be define in this class, but need to address replication issues */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameSession.h" },
		{ "ToolTip", "SessionName local copy from PlayerState class.  should really be define in this class, but need to address replication issues" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGameSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameSession, SessionName), METADATA_PARAMS(Z_Construct_UClass_AGameSession_Statics::NewProp_SessionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameSession_Statics::NewProp_SessionName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameSession_Statics::NewProp_MaxSpectators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameSession_Statics::NewProp_MaxPlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameSession_Statics::NewProp_MaxPartySize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameSession_Statics::NewProp_MaxSplitscreensPerConnection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameSession_Statics::NewProp_bRequiresPushToTalk,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameSession_Statics::NewProp_SessionName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameSession>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameSession_Statics::ClassParams = {
		&AGameSession::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGameSession_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameSession_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGameSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameSession()
	{
		if (!Z_Registration_Info_UClass_AGameSession.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameSession.OuterSingleton, Z_Construct_UClass_AGameSession_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameSession.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<AGameSession>()
	{
		return AGameSession::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameSession);
	AGameSession::~AGameSession() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameSession_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameSession_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameSession, AGameSession::StaticClass, TEXT("AGameSession"), &Z_Registration_Info_UClass_AGameSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameSession), 879887554U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameSession_h_426846894(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameSession_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameSession_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
