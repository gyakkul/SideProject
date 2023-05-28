// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/GameFramework/PlayerStateCountLimiterConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStateCountLimiterConfig() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPlayerStateCountLimiterConfig();
	ENGINE_API UClass* Z_Construct_UClass_UPlayerStateCountLimiterConfig_NoRegister();
	IRISCORE_API UClass* Z_Construct_UClass_UNetObjectCountLimiterConfig();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UPlayerStateCountLimiterConfig::StaticRegisterNativesUPlayerStateCountLimiterConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerStateCountLimiterConfig);
	UClass* Z_Construct_UClass_UPlayerStateCountLimiterConfig_NoRegister()
	{
		return UPlayerStateCountLimiterConfig::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerStateCountLimiterConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerStateCountLimiterConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNetObjectCountLimiterConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStateCountLimiterConfig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * If one wishes to use the NetObjectCountLimiter prioritizer for PlayerStates\n * this class makes it possible to have specific settings for PlayerStates in\n * case other classes also wish to use said prioritizer.\n * Only available if running with Iris replication.\n * The PlayerState will look for a prioritizer aptly named PlayerState and\n * set that prioritizer for it. It could be any kind of prioritizer but\n * if the NetObjectCountLimiter is used this config will come in handy.\n */" },
		{ "IncludePath", "GameFramework/PlayerStateCountLimiterConfig.h" },
		{ "ModuleRelativePath", "Public/GameFramework/PlayerStateCountLimiterConfig.h" },
		{ "ToolTip", "If one wishes to use the NetObjectCountLimiter prioritizer for PlayerStates\nthis class makes it possible to have specific settings for PlayerStates in\ncase other classes also wish to use said prioritizer.\nOnly available if running with Iris replication.\nThe PlayerState will look for a prioritizer aptly named PlayerState and\nset that prioritizer for it. It could be any kind of prioritizer but\nif the NetObjectCountLimiter is used this config will come in handy." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerStateCountLimiterConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerStateCountLimiterConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerStateCountLimiterConfig_Statics::ClassParams = {
		&UPlayerStateCountLimiterConfig::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800ACu,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerStateCountLimiterConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStateCountLimiterConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerStateCountLimiterConfig()
	{
		if (!Z_Registration_Info_UClass_UPlayerStateCountLimiterConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerStateCountLimiterConfig.OuterSingleton, Z_Construct_UClass_UPlayerStateCountLimiterConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerStateCountLimiterConfig.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPlayerStateCountLimiterConfig>()
	{
		return UPlayerStateCountLimiterConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerStateCountLimiterConfig);
	UPlayerStateCountLimiterConfig::~UPlayerStateCountLimiterConfig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_GameFramework_PlayerStateCountLimiterConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_GameFramework_PlayerStateCountLimiterConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerStateCountLimiterConfig, UPlayerStateCountLimiterConfig::StaticClass, TEXT("UPlayerStateCountLimiterConfig"), &Z_Registration_Info_UClass_UPlayerStateCountLimiterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerStateCountLimiterConfig), 3513378103U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_GameFramework_PlayerStateCountLimiterConfig_h_820216702(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_GameFramework_PlayerStateCountLimiterConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_GameFramework_PlayerStateCountLimiterConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
