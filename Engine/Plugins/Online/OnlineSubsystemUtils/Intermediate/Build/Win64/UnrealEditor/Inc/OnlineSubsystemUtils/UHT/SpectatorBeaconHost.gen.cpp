// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/SpectatorBeaconHost.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpectatorBeaconHost() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHostObject();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ASpectatorBeaconHost();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ASpectatorBeaconHost_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_USpectatorBeaconState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	void ASpectatorBeaconHost::StaticRegisterNativesASpectatorBeaconHost()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpectatorBeaconHost);
	UClass* Z_Construct_UClass_ASpectatorBeaconHost_NoRegister()
	{
		return ASpectatorBeaconHost::StaticClass();
	}
	struct Z_Construct_UClass_ASpectatorBeaconHost_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_State;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLogoutOnSessionTimeout_MetaData[];
#endif
		static void NewProp_bLogoutOnSessionTimeout_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogoutOnSessionTimeout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionTimeoutSecs_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SessionTimeoutSecs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TravelSessionTimeoutSecs_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TravelSessionTimeoutSecs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpectatorBeaconHost_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOnlineBeaconHostObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpectatorBeaconHost_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A beacon host used for taking reservations for an existing game session\n*/" },
		{ "IncludePath", "SpectatorBeaconHost.h" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconHost.h" },
		{ "ToolTip", "A beacon host used for taking reservations for an existing game session" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpectatorBeaconHost_Statics::NewProp_State_MetaData[] = {
		{ "Comment", "/** State of the beacon */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconHost.h" },
		{ "ToolTip", "State of the beacon" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASpectatorBeaconHost_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpectatorBeaconHost, State), Z_Construct_UClass_USpectatorBeaconState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpectatorBeaconHost_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpectatorBeaconHost_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpectatorBeaconHost_Statics::NewProp_bLogoutOnSessionTimeout_MetaData[] = {
		{ "Comment", "/** Do the timeouts below cause a player to be removed from the reservation list */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconHost.h" },
		{ "ToolTip", "Do the timeouts below cause a player to be removed from the reservation list" },
	};
#endif
	void Z_Construct_UClass_ASpectatorBeaconHost_Statics::NewProp_bLogoutOnSessionTimeout_SetBit(void* Obj)
	{
		((ASpectatorBeaconHost*)Obj)->bLogoutOnSessionTimeout = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpectatorBeaconHost_Statics::NewProp_bLogoutOnSessionTimeout = { "bLogoutOnSessionTimeout", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ASpectatorBeaconHost), &Z_Construct_UClass_ASpectatorBeaconHost_Statics::NewProp_bLogoutOnSessionTimeout_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpectatorBeaconHost_Statics::NewProp_bLogoutOnSessionTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpectatorBeaconHost_Statics::NewProp_bLogoutOnSessionTimeout_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpectatorBeaconHost_Statics::NewProp_SessionTimeoutSecs_MetaData[] = {
		{ "Comment", "/** Seconds that can elapse before a reservation is removed due to player not being registered with the session */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconHost.h" },
		{ "ToolTip", "Seconds that can elapse before a reservation is removed due to player not being registered with the session" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpectatorBeaconHost_Statics::NewProp_SessionTimeoutSecs = { "SessionTimeoutSecs", nullptr, (EPropertyFlags)0x0020080000006000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpectatorBeaconHost, SessionTimeoutSecs), METADATA_PARAMS(Z_Construct_UClass_ASpectatorBeaconHost_Statics::NewProp_SessionTimeoutSecs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpectatorBeaconHost_Statics::NewProp_SessionTimeoutSecs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpectatorBeaconHost_Statics::NewProp_TravelSessionTimeoutSecs_MetaData[] = {
		{ "Comment", "/** Seconds that can elapse before a reservation is removed due to player not being registered with the session during a travel */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconHost.h" },
		{ "ToolTip", "Seconds that can elapse before a reservation is removed due to player not being registered with the session during a travel" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpectatorBeaconHost_Statics::NewProp_TravelSessionTimeoutSecs = { "TravelSessionTimeoutSecs", nullptr, (EPropertyFlags)0x0020080000006000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpectatorBeaconHost, TravelSessionTimeoutSecs), METADATA_PARAMS(Z_Construct_UClass_ASpectatorBeaconHost_Statics::NewProp_TravelSessionTimeoutSecs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpectatorBeaconHost_Statics::NewProp_TravelSessionTimeoutSecs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpectatorBeaconHost_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpectatorBeaconHost_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpectatorBeaconHost_Statics::NewProp_bLogoutOnSessionTimeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpectatorBeaconHost_Statics::NewProp_SessionTimeoutSecs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpectatorBeaconHost_Statics::NewProp_TravelSessionTimeoutSecs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpectatorBeaconHost_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpectatorBeaconHost>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpectatorBeaconHost_Statics::ClassParams = {
		&ASpectatorBeaconHost::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpectatorBeaconHost_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpectatorBeaconHost_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASpectatorBeaconHost_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpectatorBeaconHost_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpectatorBeaconHost()
	{
		if (!Z_Registration_Info_UClass_ASpectatorBeaconHost.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpectatorBeaconHost.OuterSingleton, Z_Construct_UClass_ASpectatorBeaconHost_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpectatorBeaconHost.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<ASpectatorBeaconHost>()
	{
		return ASpectatorBeaconHost::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpectatorBeaconHost);
	ASpectatorBeaconHost::~ASpectatorBeaconHost() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconHost_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconHost_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpectatorBeaconHost, ASpectatorBeaconHost::StaticClass, TEXT("ASpectatorBeaconHost"), &Z_Registration_Info_UClass_ASpectatorBeaconHost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpectatorBeaconHost), 4102023331U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconHost_h_2507078311(TEXT("/Script/OnlineSubsystemUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconHost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconHost_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
