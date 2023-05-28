// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chat/SocialChatRoom.h"
#include "Chat/SocialChatManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialChatRoom() {}
// Cross Module References
	PARTY_API UClass* Z_Construct_UClass_USocialChatChannel();
	PARTY_API UClass* Z_Construct_UClass_USocialChatRoom();
	PARTY_API UClass* Z_Construct_UClass_USocialChatRoom_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Party();
// End Cross Module References
	void USocialChatRoom::StaticRegisterNativesUSocialChatRoom()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USocialChatRoom);
	UClass* Z_Construct_UClass_USocialChatRoom_NoRegister()
	{
		return USocialChatRoom::StaticClass();
	}
	struct Z_Construct_UClass_USocialChatRoom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocialChatRoom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USocialChatChannel,
		(UObject* (*)())Z_Construct_UPackage__Script_Party,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialChatRoom_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A multi-user chat room channel. Used for all chat situations outside of private user-to-user direct messages. */" },
		{ "IncludePath", "Chat/SocialChatRoom.h" },
		{ "ModuleRelativePath", "Public/Chat/SocialChatRoom.h" },
		{ "ToolTip", "A multi-user chat room channel. Used for all chat situations outside of private user-to-user direct messages." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocialChatRoom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialChatRoom>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USocialChatRoom_Statics::ClassParams = {
		&USocialChatRoom::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USocialChatRoom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USocialChatRoom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocialChatRoom()
	{
		if (!Z_Registration_Info_UClass_USocialChatRoom.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USocialChatRoom.OuterSingleton, Z_Construct_UClass_USocialChatRoom_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USocialChatRoom.OuterSingleton;
	}
	template<> PARTY_API UClass* StaticClass<USocialChatRoom>()
	{
		return USocialChatRoom::StaticClass();
	}
	USocialChatRoom::USocialChatRoom() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocialChatRoom);
	USocialChatRoom::~USocialChatRoom() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatRoom_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatRoom_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USocialChatRoom, USocialChatRoom::StaticClass, TEXT("USocialChatRoom"), &Z_Registration_Info_UClass_USocialChatRoom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USocialChatRoom), 738091275U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatRoom_h_2547024361(TEXT("/Script/Party"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatRoom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatRoom_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
