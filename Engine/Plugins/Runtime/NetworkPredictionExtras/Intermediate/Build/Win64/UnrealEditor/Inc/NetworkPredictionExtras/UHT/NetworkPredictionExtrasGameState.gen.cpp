// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkPredictionExtrasGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkPredictionExtrasGameState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_ANetworkPredictionExtrasGameState();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_ANetworkPredictionExtrasGameState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NetworkPredictionExtras();
// End Cross Module References
	void ANetworkPredictionExtrasGameState::StaticRegisterNativesANetworkPredictionExtrasGameState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANetworkPredictionExtrasGameState);
	UClass* Z_Construct_UClass_ANetworkPredictionExtrasGameState_NoRegister()
	{
		return ANetworkPredictionExtrasGameState::StaticClass();
	}
	struct Z_Construct_UClass_ANetworkPredictionExtrasGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANetworkPredictionExtrasGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPredictionExtras,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetworkPredictionExtrasGameState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NetworkPredictionExtrasGameState.h" },
		{ "ModuleRelativePath", "Public/NetworkPredictionExtrasGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANetworkPredictionExtrasGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetworkPredictionExtrasGameState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANetworkPredictionExtrasGameState_Statics::ClassParams = {
		&ANetworkPredictionExtrasGameState::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANetworkPredictionExtrasGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkPredictionExtrasGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANetworkPredictionExtrasGameState()
	{
		if (!Z_Registration_Info_UClass_ANetworkPredictionExtrasGameState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANetworkPredictionExtrasGameState.OuterSingleton, Z_Construct_UClass_ANetworkPredictionExtrasGameState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANetworkPredictionExtrasGameState.OuterSingleton;
	}
	template<> NETWORKPREDICTIONEXTRAS_API UClass* StaticClass<ANetworkPredictionExtrasGameState>()
	{
		return ANetworkPredictionExtrasGameState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANetworkPredictionExtrasGameState);
	ANetworkPredictionExtrasGameState::~ANetworkPredictionExtrasGameState() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasGameState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasGameState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANetworkPredictionExtrasGameState, ANetworkPredictionExtrasGameState::StaticClass, TEXT("ANetworkPredictionExtrasGameState"), &Z_Registration_Info_UClass_ANetworkPredictionExtrasGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetworkPredictionExtrasGameState), 1154710601U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasGameState_h_1819362484(TEXT("/Script/NetworkPredictionExtras"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasGameState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
