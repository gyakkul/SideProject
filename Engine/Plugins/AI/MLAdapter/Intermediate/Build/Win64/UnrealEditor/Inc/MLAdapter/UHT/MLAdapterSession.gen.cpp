// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MLAdapter/Source/MLAdapter/Public/Sessions/MLAdapterSession.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLAdapterSession() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterAgent_NoRegister();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterSession();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterSession_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MLAdapter();
// End Cross Module References
	void UMLAdapterSession::StaticRegisterNativesUMLAdapterSession()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLAdapterSession);
	UClass* Z_Construct_UClass_UMLAdapterSession_NoRegister()
	{
		return UMLAdapterSession::StaticClass();
	}
	struct Z_Construct_UClass_UMLAdapterSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedGameMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedGameMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedWorld;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AvatarToAgent_ValueProp;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_AvatarToAgent_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarToAgent_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AvatarToAgent;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Agents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Agents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Agents;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AwaitingAvatar_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AwaitingAvatar_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AwaitingAvatar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLAdapterSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MLAdapter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSession_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Container for agents that exist in the world. Ticks the agents. Finds avatars for the agents.\n */" },
		{ "IncludePath", "Sessions/MLAdapterSession.h" },
		{ "ModuleRelativePath", "Public/Sessions/MLAdapterSession.h" },
		{ "ToolTip", "Container for agents that exist in the world. Ticks the agents. Finds avatars for the agents." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_CachedGameMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sessions/MLAdapterSession.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_CachedGameMode = { "CachedGameMode", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterSession, CachedGameMode), Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_CachedGameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_CachedGameMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_CachedWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sessions/MLAdapterSession.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_CachedWorld = { "CachedWorld", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterSession, CachedWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_CachedWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_CachedWorld_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_AvatarToAgent_ValueProp = { "AvatarToAgent", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UMLAdapterAgent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_AvatarToAgent_Key_KeyProp = { "AvatarToAgent_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_AvatarToAgent_MetaData[] = {
		{ "Comment", "/** @see HashAvatar */" },
		{ "ModuleRelativePath", "Public/Sessions/MLAdapterSession.h" },
		{ "ToolTip", "@see HashAvatar" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_AvatarToAgent = { "AvatarToAgent", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterSession, AvatarToAgent), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_AvatarToAgent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_AvatarToAgent_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_Agents_Inner = { "Agents", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMLAdapterAgent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_Agents_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sessions/MLAdapterSession.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_Agents = { "Agents", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterSession, Agents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_Agents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_Agents_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_AwaitingAvatar_Inner = { "AwaitingAvatar", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMLAdapterAgent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_AwaitingAvatar_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sessions/MLAdapterSession.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_AwaitingAvatar = { "AwaitingAvatar", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterSession, AwaitingAvatar), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_AwaitingAvatar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_AwaitingAvatar_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMLAdapterSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_CachedGameMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_CachedWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_AvatarToAgent_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_AvatarToAgent_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_AvatarToAgent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_Agents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_Agents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_AwaitingAvatar_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSession_Statics::NewProp_AwaitingAvatar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLAdapterSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLAdapterSession>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLAdapterSession_Statics::ClassParams = {
		&UMLAdapterSession::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMLAdapterSession_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSession_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLAdapterSession()
	{
		if (!Z_Registration_Info_UClass_UMLAdapterSession.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLAdapterSession.OuterSingleton, Z_Construct_UClass_UMLAdapterSession_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLAdapterSession.OuterSingleton;
	}
	template<> MLADAPTER_API UClass* StaticClass<UMLAdapterSession>()
	{
		return UMLAdapterSession::StaticClass();
	}
	UMLAdapterSession::UMLAdapterSession(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLAdapterSession);
	UMLAdapterSession::~UMLAdapterSession() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterSession_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterSession_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLAdapterSession, UMLAdapterSession::StaticClass, TEXT("UMLAdapterSession"), &Z_Registration_Info_UClass_UMLAdapterSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLAdapterSession), 67877680U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterSession_h_880379852(TEXT("/Script/MLAdapter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterSession_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterSession_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
