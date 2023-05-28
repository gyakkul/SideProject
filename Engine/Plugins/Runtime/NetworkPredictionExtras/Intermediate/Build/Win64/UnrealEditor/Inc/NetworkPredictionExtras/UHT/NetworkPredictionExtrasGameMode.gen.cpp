// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkPredictionExtrasGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkPredictionExtrasGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_ANetworkPredictionExtrasGameMode();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_ANetworkPredictionExtrasGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NetworkPredictionExtras();
// End Cross Module References
	void ANetworkPredictionExtrasGameMode::StaticRegisterNativesANetworkPredictionExtrasGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANetworkPredictionExtrasGameMode);
	UClass* Z_Construct_UClass_ANetworkPredictionExtrasGameMode_NoRegister()
	{
		return ANetworkPredictionExtrasGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANetworkPredictionExtrasGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANetworkPredictionExtrasGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPredictionExtras,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetworkPredictionExtrasGameMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NetworkPredictionExtrasGameMode.h" },
		{ "ModuleRelativePath", "Public/NetworkPredictionExtrasGameMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANetworkPredictionExtrasGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetworkPredictionExtrasGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANetworkPredictionExtrasGameMode_Statics::ClassParams = {
		&ANetworkPredictionExtrasGameMode::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANetworkPredictionExtrasGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkPredictionExtrasGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANetworkPredictionExtrasGameMode()
	{
		if (!Z_Registration_Info_UClass_ANetworkPredictionExtrasGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANetworkPredictionExtrasGameMode.OuterSingleton, Z_Construct_UClass_ANetworkPredictionExtrasGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANetworkPredictionExtrasGameMode.OuterSingleton;
	}
	template<> NETWORKPREDICTIONEXTRAS_API UClass* StaticClass<ANetworkPredictionExtrasGameMode>()
	{
		return ANetworkPredictionExtrasGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANetworkPredictionExtrasGameMode);
	ANetworkPredictionExtrasGameMode::~ANetworkPredictionExtrasGameMode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANetworkPredictionExtrasGameMode, ANetworkPredictionExtrasGameMode::StaticClass, TEXT("ANetworkPredictionExtrasGameMode"), &Z_Registration_Info_UClass_ANetworkPredictionExtrasGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetworkPredictionExtrasGameMode), 2531567370U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasGameMode_h_2114267488(TEXT("/Script/NetworkPredictionExtras"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
