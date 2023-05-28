// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chat/SocialGroupChannel.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialGroupChannel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	PARTY_API UClass* Z_Construct_UClass_USocialGroupChannel();
	PARTY_API UClass* Z_Construct_UClass_USocialGroupChannel_NoRegister();
	PARTY_API UClass* Z_Construct_UClass_USocialUser_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Party();
// End Cross Module References
	void USocialGroupChannel::StaticRegisterNativesUSocialGroupChannel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USocialGroupChannel);
	UClass* Z_Construct_UClass_USocialGroupChannel_NoRegister()
	{
		return USocialGroupChannel::StaticClass();
	}
	struct Z_Construct_UClass_USocialGroupChannel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocialUser_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SocialUser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Members_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Members_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Members;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocialGroupChannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Party,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialGroupChannel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Chat/SocialGroupChannel.h" },
		{ "ModuleRelativePath", "Public/Chat/SocialGroupChannel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_SocialUser_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chat/SocialGroupChannel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_SocialUser = { "SocialUser", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocialGroupChannel, SocialUser), Z_Construct_UClass_USocialUser_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_SocialUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_SocialUser_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_GroupId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chat/SocialGroupChannel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocialGroupChannel, GroupId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_GroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_GroupId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_DisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chat/SocialGroupChannel.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocialGroupChannel, DisplayName), METADATA_PARAMS(Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_DisplayName_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_Members_Inner = { "Members", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USocialUser_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_Members_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chat/SocialGroupChannel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_Members = { "Members", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocialGroupChannel, Members), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_Members_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_Members_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USocialGroupChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_SocialUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_GroupId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_Members_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_Members,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocialGroupChannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialGroupChannel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USocialGroupChannel_Statics::ClassParams = {
		&USocialGroupChannel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USocialGroupChannel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USocialGroupChannel_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USocialGroupChannel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USocialGroupChannel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocialGroupChannel()
	{
		if (!Z_Registration_Info_UClass_USocialGroupChannel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USocialGroupChannel.OuterSingleton, Z_Construct_UClass_USocialGroupChannel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USocialGroupChannel.OuterSingleton;
	}
	template<> PARTY_API UClass* StaticClass<USocialGroupChannel>()
	{
		return USocialGroupChannel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocialGroupChannel);
	USocialGroupChannel::~USocialGroupChannel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialGroupChannel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialGroupChannel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USocialGroupChannel, USocialGroupChannel::StaticClass, TEXT("USocialGroupChannel"), &Z_Registration_Info_UClass_USocialGroupChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USocialGroupChannel), 1297305907U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialGroupChannel_h_3587038227(TEXT("/Script/Party"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialGroupChannel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialGroupChannel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
