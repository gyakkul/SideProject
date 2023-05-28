// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSessionClient.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineSessionClient() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UOnlineSession();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineSessionClient();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineSessionClient_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	void UOnlineSessionClient::StaticRegisterNativesUOnlineSessionClient()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineSessionClient);
	UClass* Z_Construct_UClass_UOnlineSessionClient_NoRegister()
	{
		return UOnlineSessionClient::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineSessionClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFromInvite_MetaData[];
#endif
		static void NewProp_bIsFromInvite_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFromInvite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHandlingDisconnect_MetaData[];
#endif
		static void NewProp_bHandlingDisconnect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHandlingDisconnect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineSessionClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineSession,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSessionClient_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OnlineSessionClient.h" },
		{ "ModuleRelativePath", "Classes/OnlineSessionClient.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bIsFromInvite_MetaData[] = {
		{ "Comment", "/** Is this join from an invite */" },
		{ "ModuleRelativePath", "Classes/OnlineSessionClient.h" },
		{ "ToolTip", "Is this join from an invite" },
	};
#endif
	void Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bIsFromInvite_SetBit(void* Obj)
	{
		((UOnlineSessionClient*)Obj)->bIsFromInvite = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bIsFromInvite = { "bIsFromInvite", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOnlineSessionClient), &Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bIsFromInvite_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bIsFromInvite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bIsFromInvite_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bHandlingDisconnect_MetaData[] = {
		{ "Comment", "/** Have we started returning to main menu already */" },
		{ "ModuleRelativePath", "Classes/OnlineSessionClient.h" },
		{ "ToolTip", "Have we started returning to main menu already" },
	};
#endif
	void Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bHandlingDisconnect_SetBit(void* Obj)
	{
		((UOnlineSessionClient*)Obj)->bHandlingDisconnect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bHandlingDisconnect = { "bHandlingDisconnect", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOnlineSessionClient), &Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bHandlingDisconnect_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bHandlingDisconnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bHandlingDisconnect_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineSessionClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bIsFromInvite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bHandlingDisconnect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineSessionClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineSessionClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineSessionClient_Statics::ClassParams = {
		&UOnlineSessionClient::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOnlineSessionClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSessionClient_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineSessionClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSessionClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineSessionClient()
	{
		if (!Z_Registration_Info_UClass_UOnlineSessionClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineSessionClient.OuterSingleton, Z_Construct_UClass_UOnlineSessionClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineSessionClient.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UOnlineSessionClient>()
	{
		return UOnlineSessionClient::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineSessionClient);
	UOnlineSessionClient::~UOnlineSessionClient() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineSessionClient, UOnlineSessionClient::StaticClass, TEXT("UOnlineSessionClient"), &Z_Registration_Info_UClass_UOnlineSessionClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineSessionClient), 3314383053U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_3329811239(TEXT("/Script/OnlineSubsystemUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
