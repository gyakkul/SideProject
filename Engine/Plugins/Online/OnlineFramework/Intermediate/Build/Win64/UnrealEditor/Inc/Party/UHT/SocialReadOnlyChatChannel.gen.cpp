// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chat/SocialReadOnlyChatChannel.h"
#include "Chat/SocialChatManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialReadOnlyChatChannel() {}
// Cross Module References
	PARTY_API UClass* Z_Construct_UClass_USocialChatChannel();
	PARTY_API UClass* Z_Construct_UClass_USocialReadOnlyChatChannel();
	PARTY_API UClass* Z_Construct_UClass_USocialReadOnlyChatChannel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Party();
// End Cross Module References
	void USocialReadOnlyChatChannel::StaticRegisterNativesUSocialReadOnlyChatChannel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USocialReadOnlyChatChannel);
	UClass* Z_Construct_UClass_USocialReadOnlyChatChannel_NoRegister()
	{
		return USocialReadOnlyChatChannel::StaticClass();
	}
	struct Z_Construct_UClass_USocialReadOnlyChatChannel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocialReadOnlyChatChannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USocialChatChannel,
		(UObject* (*)())Z_Construct_UPackage__Script_Party,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialReadOnlyChatChannel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A strawman chat channel that relies exclusively on other channels messages for content, does not support sending messages\n */" },
		{ "IncludePath", "Chat/SocialReadOnlyChatChannel.h" },
		{ "ModuleRelativePath", "Public/Chat/SocialReadOnlyChatChannel.h" },
		{ "ToolTip", "A strawman chat channel that relies exclusively on other channels messages for content, does not support sending messages" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocialReadOnlyChatChannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialReadOnlyChatChannel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USocialReadOnlyChatChannel_Statics::ClassParams = {
		&USocialReadOnlyChatChannel::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USocialReadOnlyChatChannel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USocialReadOnlyChatChannel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocialReadOnlyChatChannel()
	{
		if (!Z_Registration_Info_UClass_USocialReadOnlyChatChannel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USocialReadOnlyChatChannel.OuterSingleton, Z_Construct_UClass_USocialReadOnlyChatChannel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USocialReadOnlyChatChannel.OuterSingleton;
	}
	template<> PARTY_API UClass* StaticClass<USocialReadOnlyChatChannel>()
	{
		return USocialReadOnlyChatChannel::StaticClass();
	}
	USocialReadOnlyChatChannel::USocialReadOnlyChatChannel() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocialReadOnlyChatChannel);
	USocialReadOnlyChatChannel::~USocialReadOnlyChatChannel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialReadOnlyChatChannel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialReadOnlyChatChannel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USocialReadOnlyChatChannel, USocialReadOnlyChatChannel::StaticClass, TEXT("USocialReadOnlyChatChannel"), &Z_Registration_Info_UClass_USocialReadOnlyChatChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USocialReadOnlyChatChannel), 80365868U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialReadOnlyChatChannel_h_246782797(TEXT("/Script/Party"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialReadOnlyChatChannel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialReadOnlyChatChannel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
