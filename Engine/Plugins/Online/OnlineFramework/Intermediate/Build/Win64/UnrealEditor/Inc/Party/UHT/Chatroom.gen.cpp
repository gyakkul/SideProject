// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chatroom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChatroom() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PARTY_API UClass* Z_Construct_UClass_UChatroom();
	PARTY_API UClass* Z_Construct_UClass_UChatroom_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Party();
// End Cross Module References
	void UChatroom::StaticRegisterNativesUChatroom()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChatroom);
	UClass* Z_Construct_UClass_UChatroom_NoRegister()
	{
		return UChatroom::StaticClass();
	}
	struct Z_Construct_UClass_UChatroom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentChatRoomId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentChatRoomId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxChatRoomRetries_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxChatRoomRetries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumChatRoomRetries_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumChatRoomRetries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChatroom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Party,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChatroom_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Helper class for maintaining a single chat room at the game level\n */" },
		{ "IncludePath", "Chatroom.h" },
		{ "ModuleRelativePath", "Public/Chatroom.h" },
		{ "ToolTip", "Helper class for maintaining a single chat room at the game level" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChatroom_Statics::NewProp_CurrentChatRoomId_MetaData[] = {
		{ "Comment", "/** Current chat room associated with this object (FString so UPROPERTY works) */" },
		{ "ModuleRelativePath", "Public/Chatroom.h" },
		{ "ToolTip", "Current chat room associated with this object (FString so UPROPERTY works)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UChatroom_Statics::NewProp_CurrentChatRoomId = { "CurrentChatRoomId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChatroom, CurrentChatRoomId), METADATA_PARAMS(Z_Construct_UClass_UChatroom_Statics::NewProp_CurrentChatRoomId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChatroom_Statics::NewProp_CurrentChatRoomId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChatroom_Statics::NewProp_MaxChatRoomRetries_MetaData[] = {
		{ "Comment", "/** Max number of retries before giving up on chat */" },
		{ "ModuleRelativePath", "Public/Chatroom.h" },
		{ "ToolTip", "Max number of retries before giving up on chat" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UChatroom_Statics::NewProp_MaxChatRoomRetries = { "MaxChatRoomRetries", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChatroom, MaxChatRoomRetries), METADATA_PARAMS(Z_Construct_UClass_UChatroom_Statics::NewProp_MaxChatRoomRetries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChatroom_Statics::NewProp_MaxChatRoomRetries_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChatroom_Statics::NewProp_NumChatRoomRetries_MetaData[] = {
		{ "Comment", "/** Current number of retries on a chat room */" },
		{ "ModuleRelativePath", "Public/Chatroom.h" },
		{ "ToolTip", "Current number of retries on a chat room" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UChatroom_Statics::NewProp_NumChatRoomRetries = { "NumChatRoomRetries", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChatroom, NumChatRoomRetries), METADATA_PARAMS(Z_Construct_UClass_UChatroom_Statics::NewProp_NumChatRoomRetries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChatroom_Statics::NewProp_NumChatRoomRetries_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChatroom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatroom_Statics::NewProp_CurrentChatRoomId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatroom_Statics::NewProp_MaxChatRoomRetries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatroom_Statics::NewProp_NumChatRoomRetries,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChatroom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChatroom>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChatroom_Statics::ClassParams = {
		&UChatroom::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChatroom_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChatroom_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChatroom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChatroom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChatroom()
	{
		if (!Z_Registration_Info_UClass_UChatroom.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChatroom.OuterSingleton, Z_Construct_UClass_UChatroom_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChatroom.OuterSingleton;
	}
	template<> PARTY_API UClass* StaticClass<UChatroom>()
	{
		return UChatroom::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChatroom);
	UChatroom::~UChatroom() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chatroom_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chatroom_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChatroom, UChatroom::StaticClass, TEXT("UChatroom"), &Z_Registration_Info_UClass_UChatroom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChatroom), 1000157695U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chatroom_h_1423187164(TEXT("/Script/Party"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chatroom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chatroom_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
