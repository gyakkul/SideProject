// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/EngineMessage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineMessage() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineMessage();
	ENGINE_API UClass* Z_Construct_UClass_UEngineMessage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULocalMessage();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UEngineMessage::StaticRegisterNativesUEngineMessage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEngineMessage);
	UClass* Z_Construct_UClass_UEngineMessage_NoRegister()
	{
		return UEngineMessage::StaticClass();
	}
	struct Z_Construct_UClass_UEngineMessage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailedPlaceMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FailedPlaceMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxedOutMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MaxedOutMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnteredMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EnteredMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LeftMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalNameChange_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GlobalNameChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecEnteredMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SpecEnteredMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPlayerMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewPlayerMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewSpecMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewSpecMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEngineMessage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalMessage,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngineMessage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameFramework/EngineMessage.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngineMessage_Statics::NewProp_FailedPlaceMessage_MetaData[] = {
		{ "Comment", "/** Message displayed in message dialog when player pawn fails to spawn because no playerstart was available. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
		{ "ToolTip", "Message displayed in message dialog when player pawn fails to spawn because no playerstart was available." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngineMessage_Statics::NewProp_FailedPlaceMessage = { "FailedPlaceMessage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEngineMessage, FailedPlaceMessage), METADATA_PARAMS(Z_Construct_UClass_UEngineMessage_Statics::NewProp_FailedPlaceMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEngineMessage_Statics::NewProp_FailedPlaceMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngineMessage_Statics::NewProp_MaxedOutMessage_MetaData[] = {
		{ "Comment", "/** Message when player join attempt is refused because the server is at capacity. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
		{ "ToolTip", "Message when player join attempt is refused because the server is at capacity." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngineMessage_Statics::NewProp_MaxedOutMessage = { "MaxedOutMessage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEngineMessage, MaxedOutMessage), METADATA_PARAMS(Z_Construct_UClass_UEngineMessage_Statics::NewProp_MaxedOutMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEngineMessage_Statics::NewProp_MaxedOutMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngineMessage_Statics::NewProp_EnteredMessage_MetaData[] = {
		{ "Comment", "/** Message when a new player enters the game. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
		{ "ToolTip", "Message when a new player enters the game." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngineMessage_Statics::NewProp_EnteredMessage = { "EnteredMessage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEngineMessage, EnteredMessage), METADATA_PARAMS(Z_Construct_UClass_UEngineMessage_Statics::NewProp_EnteredMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEngineMessage_Statics::NewProp_EnteredMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngineMessage_Statics::NewProp_LeftMessage_MetaData[] = {
		{ "Comment", "/** Message when a player leaves the game. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
		{ "ToolTip", "Message when a player leaves the game." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngineMessage_Statics::NewProp_LeftMessage = { "LeftMessage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEngineMessage, LeftMessage), METADATA_PARAMS(Z_Construct_UClass_UEngineMessage_Statics::NewProp_LeftMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEngineMessage_Statics::NewProp_LeftMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngineMessage_Statics::NewProp_GlobalNameChange_MetaData[] = {
		{ "Comment", "/** Message when a player changes their name. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
		{ "ToolTip", "Message when a player changes their name." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngineMessage_Statics::NewProp_GlobalNameChange = { "GlobalNameChange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEngineMessage, GlobalNameChange), METADATA_PARAMS(Z_Construct_UClass_UEngineMessage_Statics::NewProp_GlobalNameChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEngineMessage_Statics::NewProp_GlobalNameChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngineMessage_Statics::NewProp_SpecEnteredMessage_MetaData[] = {
		{ "Comment", "/** Message when a new spectator enters the server (if spectator has a player name). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
		{ "ToolTip", "Message when a new spectator enters the server (if spectator has a player name)." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngineMessage_Statics::NewProp_SpecEnteredMessage = { "SpecEnteredMessage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEngineMessage, SpecEnteredMessage), METADATA_PARAMS(Z_Construct_UClass_UEngineMessage_Statics::NewProp_SpecEnteredMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEngineMessage_Statics::NewProp_SpecEnteredMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngineMessage_Statics::NewProp_NewPlayerMessage_MetaData[] = {
		{ "Comment", "/** Message when a new player enters the server (if player is unnamed). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
		{ "ToolTip", "Message when a new player enters the server (if player is unnamed)." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngineMessage_Statics::NewProp_NewPlayerMessage = { "NewPlayerMessage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEngineMessage, NewPlayerMessage), METADATA_PARAMS(Z_Construct_UClass_UEngineMessage_Statics::NewProp_NewPlayerMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEngineMessage_Statics::NewProp_NewPlayerMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngineMessage_Statics::NewProp_NewSpecMessage_MetaData[] = {
		{ "Comment", "/** Message when a new spectator enters the server (if spectator is unnamed). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
		{ "ToolTip", "Message when a new spectator enters the server (if spectator is unnamed)." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngineMessage_Statics::NewProp_NewSpecMessage = { "NewSpecMessage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEngineMessage, NewSpecMessage), METADATA_PARAMS(Z_Construct_UClass_UEngineMessage_Statics::NewProp_NewSpecMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEngineMessage_Statics::NewProp_NewSpecMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEngineMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngineMessage_Statics::NewProp_FailedPlaceMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngineMessage_Statics::NewProp_MaxedOutMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngineMessage_Statics::NewProp_EnteredMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngineMessage_Statics::NewProp_LeftMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngineMessage_Statics::NewProp_GlobalNameChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngineMessage_Statics::NewProp_SpecEnteredMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngineMessage_Statics::NewProp_NewPlayerMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngineMessage_Statics::NewProp_NewSpecMessage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEngineMessage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEngineMessage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEngineMessage_Statics::ClassParams = {
		&UEngineMessage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEngineMessage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEngineMessage_Statics::PropPointers),
		0,
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEngineMessage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEngineMessage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEngineMessage()
	{
		if (!Z_Registration_Info_UClass_UEngineMessage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEngineMessage.OuterSingleton, Z_Construct_UClass_UEngineMessage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEngineMessage.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UEngineMessage>()
	{
		return UEngineMessage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEngineMessage);
	UEngineMessage::~UEngineMessage() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEngineMessage, UEngineMessage::StaticClass, TEXT("UEngineMessage"), &Z_Registration_Info_UClass_UEngineMessage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEngineMessage), 190366652U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_3380882849(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
