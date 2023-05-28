// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/OnlineSession.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineSession() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineSession();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineSession_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UOnlineSession::StaticRegisterNativesUOnlineSession()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineSession);
	UClass* Z_Construct_UClass_UOnlineSession_NoRegister()
	{
		return UOnlineSession::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSession_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameFramework/OnlineSession.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/OnlineSession.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineSession>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineSession_Statics::ClassParams = {
		&UOnlineSession::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlineSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineSession()
	{
		if (!Z_Registration_Info_UClass_UOnlineSession.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineSession.OuterSingleton, Z_Construct_UClass_UOnlineSession_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineSession.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UOnlineSession>()
	{
		return UOnlineSession::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineSession);
	UOnlineSession::~UOnlineSession() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_OnlineSession_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_OnlineSession_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineSession, UOnlineSession::StaticClass, TEXT("UOnlineSession"), &Z_Registration_Info_UClass_UOnlineSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineSession), 1846918154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_OnlineSession_h_1892866536(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_OnlineSession_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_OnlineSession_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
