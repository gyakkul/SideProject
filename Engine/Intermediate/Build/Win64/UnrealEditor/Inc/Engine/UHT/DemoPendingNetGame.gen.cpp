// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DemoPendingNetGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemoPendingNetGame() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDemoPendingNetGame();
	ENGINE_API UClass* Z_Construct_UClass_UDemoPendingNetGame_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPendingNetGame();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDemoPendingNetGame::StaticRegisterNativesUDemoPendingNetGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDemoPendingNetGame);
	UClass* Z_Construct_UClass_UDemoPendingNetGame_NoRegister()
	{
		return UDemoPendingNetGame::StaticClass();
	}
	struct Z_Construct_UClass_UDemoPendingNetGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDemoPendingNetGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPendingNetGame,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemoPendingNetGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/DemoPendingNetGame.h" },
		{ "ModuleRelativePath", "Classes/Engine/DemoPendingNetGame.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDemoPendingNetGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDemoPendingNetGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDemoPendingNetGame_Statics::ClassParams = {
		&UDemoPendingNetGame::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDemoPendingNetGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDemoPendingNetGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDemoPendingNetGame()
	{
		if (!Z_Registration_Info_UClass_UDemoPendingNetGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDemoPendingNetGame.OuterSingleton, Z_Construct_UClass_UDemoPendingNetGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDemoPendingNetGame.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDemoPendingNetGame>()
	{
		return UDemoPendingNetGame::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDemoPendingNetGame);
	UDemoPendingNetGame::~UDemoPendingNetGame() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoPendingNetGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoPendingNetGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDemoPendingNetGame, UDemoPendingNetGame::StaticClass, TEXT("UDemoPendingNetGame"), &Z_Registration_Info_UClass_UDemoPendingNetGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDemoPendingNetGame), 3592821404U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoPendingNetGame_h_4244698958(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoPendingNetGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoPendingNetGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
