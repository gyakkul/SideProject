// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MockNetworkSimulation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMockNetworkSimulation() {}
// Cross Module References
	NETWORKPREDICTION_API UClass* Z_Construct_UClass_UNetworkPredictionComponent();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UMockNetworkSimulationComponent();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UMockNetworkSimulationComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NetworkPredictionExtras();
// End Cross Module References
	void UMockNetworkSimulationComponent::StaticRegisterNativesUMockNetworkSimulationComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMockNetworkSimulationComponent);
	UClass* Z_Construct_UClass_UMockNetworkSimulationComponent_NoRegister()
	{
		return UMockNetworkSimulationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMockNetworkSimulationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMockNetworkSimulationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNetworkPredictionComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPredictionExtras,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockNetworkSimulationComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "// -------------------------------------------------------------------------------------------------------------------------------\n// ActorComponent for running a MockNetworkSimulation (implements Driver for the mock simulation)\n// -------------------------------------------------------------------------------------------------------------------------------\n" },
		{ "IncludePath", "MockNetworkSimulation.h" },
		{ "ModuleRelativePath", "Public/MockNetworkSimulation.h" },
		{ "ToolTip", "ActorComponent for running a MockNetworkSimulation (implements Driver for the mock simulation)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMockNetworkSimulationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMockNetworkSimulationComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMockNetworkSimulationComponent_Statics::ClassParams = {
		&UMockNetworkSimulationComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMockNetworkSimulationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMockNetworkSimulationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMockNetworkSimulationComponent()
	{
		if (!Z_Registration_Info_UClass_UMockNetworkSimulationComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMockNetworkSimulationComponent.OuterSingleton, Z_Construct_UClass_UMockNetworkSimulationComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMockNetworkSimulationComponent.OuterSingleton;
	}
	template<> NETWORKPREDICTIONEXTRAS_API UClass* StaticClass<UMockNetworkSimulationComponent>()
	{
		return UMockNetworkSimulationComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMockNetworkSimulationComponent);
	UMockNetworkSimulationComponent::~UMockNetworkSimulationComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockNetworkSimulation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockNetworkSimulation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMockNetworkSimulationComponent, UMockNetworkSimulationComponent::StaticClass, TEXT("UMockNetworkSimulationComponent"), &Z_Registration_Info_UClass_UMockNetworkSimulationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMockNetworkSimulationComponent), 2633351231U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockNetworkSimulation_h_479678959(TEXT("/Script/NetworkPredictionExtras"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockNetworkSimulation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockNetworkSimulation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
