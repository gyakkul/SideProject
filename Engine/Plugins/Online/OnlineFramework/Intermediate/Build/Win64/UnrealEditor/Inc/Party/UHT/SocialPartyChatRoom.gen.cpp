// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chat/SocialPartyChatRoom.h"
#include "Chat/SocialChatManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialPartyChatRoom() {}
// Cross Module References
	PARTY_API UClass* Z_Construct_UClass_USocialChatRoom();
	PARTY_API UClass* Z_Construct_UClass_USocialPartyChatRoom();
	PARTY_API UClass* Z_Construct_UClass_USocialPartyChatRoom_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Party();
// End Cross Module References
	void USocialPartyChatRoom::StaticRegisterNativesUSocialPartyChatRoom()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USocialPartyChatRoom);
	UClass* Z_Construct_UClass_USocialPartyChatRoom_NoRegister()
	{
		return USocialPartyChatRoom::StaticClass();
	}
	struct Z_Construct_UClass_USocialPartyChatRoom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocialPartyChatRoom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USocialChatRoom,
		(UObject* (*)())Z_Construct_UPackage__Script_Party,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialPartyChatRoom_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A multi-user chat room channel. Used for all chat situations outside of private user-to-user direct messages. */" },
		{ "IncludePath", "Chat/SocialPartyChatRoom.h" },
		{ "ModuleRelativePath", "Public/Chat/SocialPartyChatRoom.h" },
		{ "ToolTip", "A multi-user chat room channel. Used for all chat situations outside of private user-to-user direct messages." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocialPartyChatRoom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialPartyChatRoom>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USocialPartyChatRoom_Statics::ClassParams = {
		&USocialPartyChatRoom::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USocialPartyChatRoom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USocialPartyChatRoom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocialPartyChatRoom()
	{
		if (!Z_Registration_Info_UClass_USocialPartyChatRoom.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USocialPartyChatRoom.OuterSingleton, Z_Construct_UClass_USocialPartyChatRoom_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USocialPartyChatRoom.OuterSingleton;
	}
	template<> PARTY_API UClass* StaticClass<USocialPartyChatRoom>()
	{
		return USocialPartyChatRoom::StaticClass();
	}
	USocialPartyChatRoom::USocialPartyChatRoom() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocialPartyChatRoom);
	USocialPartyChatRoom::~USocialPartyChatRoom() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialPartyChatRoom_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialPartyChatRoom_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USocialPartyChatRoom, USocialPartyChatRoom::StaticClass, TEXT("USocialPartyChatRoom"), &Z_Registration_Info_UClass_USocialPartyChatRoom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USocialPartyChatRoom), 2802857168U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialPartyChatRoom_h_1315627454(TEXT("/Script/Party"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialPartyChatRoom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialPartyChatRoom_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
