// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chat/SocialChatChannel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PARTY_SocialChatChannel_generated_h
#error "SocialChatChannel.generated.h already included, missing '#pragma once' in SocialChatChannel.h"
#endif
#define PARTY_SocialChatChannel_generated_h

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_30_SPARSE_DATA
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_30_RPC_WRAPPERS
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_30_ACCESSORS
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocialChatChannel(); \
	friend struct Z_Construct_UClass_USocialChatChannel_Statics; \
public: \
	DECLARE_CLASS(USocialChatChannel, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Party"), NO_API) \
	DECLARE_SERIALIZER(USocialChatChannel) \
	DECLARE_WITHIN(USocialChatManager)


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUSocialChatChannel(); \
	friend struct Z_Construct_UClass_USocialChatChannel_Statics; \
public: \
	DECLARE_CLASS(USocialChatChannel, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Party"), NO_API) \
	DECLARE_SERIALIZER(USocialChatChannel) \
	DECLARE_WITHIN(USocialChatManager)


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USocialChatChannel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USocialChatChannel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocialChatChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialChatChannel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocialChatChannel(USocialChatChannel&&); \
	NO_API USocialChatChannel(const USocialChatChannel&); \
public: \
	NO_API virtual ~USocialChatChannel();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocialChatChannel(USocialChatChannel&&); \
	NO_API USocialChatChannel(const USocialChatChannel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocialChatChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialChatChannel); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(USocialChatChannel) \
	NO_API virtual ~USocialChatChannel();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_27_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_30_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_30_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_30_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_30_INCLASS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_30_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_30_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARTY_API UClass* StaticClass<class USocialChatChannel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h


#define FOREACH_ENUM_ESOCIALCHANNELTYPE(op) \
	op(ESocialChannelType::General) \
	op(ESocialChannelType::Founder) \
	op(ESocialChannelType::Party) \
	op(ESocialChannelType::Team) \
	op(ESocialChannelType::System) \
	op(ESocialChannelType::Private) 

enum class ESocialChannelType : uint8;
template<> struct TIsUEnumClass<ESocialChannelType> { enum { Value = true }; };
template<> PARTY_API UEnum* StaticEnum<ESocialChannelType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
