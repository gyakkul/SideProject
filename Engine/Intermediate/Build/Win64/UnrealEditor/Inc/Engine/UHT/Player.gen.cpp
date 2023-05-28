// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Player.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPlayer();
	ENGINE_API UClass* Z_Construct_UClass_UPlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UPlayer::StaticRegisterNativesUPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayer);
	UClass* Z_Construct_UClass_UPlayer_NoRegister()
	{
		return UPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentNetSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentNetSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfiguredInternetSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConfiguredInternetSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfiguredLanSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConfiguredLanSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/Player.h" },
		{ "ModuleRelativePath", "Classes/Engine/Player.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayer_Statics::NewProp_PlayerController_MetaData[] = {
		{ "Comment", "/** The actor this player controls. */" },
		{ "ModuleRelativePath", "Classes/Engine/Player.h" },
		{ "ToolTip", "The actor this player controls." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPlayer_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayer, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayer_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayer_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayer_Statics::NewProp_CurrentNetSpeed_MetaData[] = {
		{ "Comment", "/** the current speed of the connection */" },
		{ "ModuleRelativePath", "Classes/Engine/Player.h" },
		{ "ToolTip", "the current speed of the connection" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayer_Statics::NewProp_CurrentNetSpeed = { "CurrentNetSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayer, CurrentNetSpeed), METADATA_PARAMS(Z_Construct_UClass_UPlayer_Statics::NewProp_CurrentNetSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayer_Statics::NewProp_CurrentNetSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayer_Statics::NewProp_ConfiguredInternetSpeed_MetaData[] = {
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Classes/Engine/Player.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayer_Statics::NewProp_ConfiguredInternetSpeed = { "ConfiguredInternetSpeed", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayer, ConfiguredInternetSpeed), METADATA_PARAMS(Z_Construct_UClass_UPlayer_Statics::NewProp_ConfiguredInternetSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayer_Statics::NewProp_ConfiguredInternetSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayer_Statics::NewProp_ConfiguredLanSpeed_MetaData[] = {
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Classes/Engine/Player.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayer_Statics::NewProp_ConfiguredLanSpeed = { "ConfiguredLanSpeed", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayer, ConfiguredLanSpeed), METADATA_PARAMS(Z_Construct_UClass_UPlayer_Statics::NewProp_ConfiguredLanSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayer_Statics::NewProp_ConfiguredLanSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayer_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayer_Statics::NewProp_CurrentNetSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayer_Statics::NewProp_ConfiguredInternetSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayer_Statics::NewProp_ConfiguredLanSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayer_Statics::ClassParams = {
		&UPlayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayer_Statics::PropPointers),
		0,
		0x000800ACu,
		METADATA_PARAMS(Z_Construct_UClass_UPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayer()
	{
		if (!Z_Registration_Info_UClass_UPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayer.OuterSingleton, Z_Construct_UClass_UPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayer.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPlayer>()
	{
		return UPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayer);
	UPlayer::~UPlayer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayer, UPlayer::StaticClass, TEXT("UPlayer"), &Z_Registration_Info_UClass_UPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayer), 2114152064U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_928749007(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
