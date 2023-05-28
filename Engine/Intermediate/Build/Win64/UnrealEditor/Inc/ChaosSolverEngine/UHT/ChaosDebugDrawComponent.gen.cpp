// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chaos/ChaosDebugDrawComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosDebugDrawComponent() {}
// Cross Module References
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosDebugDrawComponent();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosDebugDrawComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ChaosSolverEngine();
// End Cross Module References
	void UChaosDebugDrawComponent::StaticRegisterNativesUChaosDebugDrawComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosDebugDrawComponent);
	UClass* Z_Construct_UClass_UChaosDebugDrawComponent_NoRegister()
	{
		return UChaosDebugDrawComponent::StaticClass();
	}
	struct Z_Construct_UClass_UChaosDebugDrawComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosDebugDrawComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosDebugDrawComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Chaos" },
		{ "IncludePath", "Chaos/ChaosDebugDrawComponent.h" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosDebugDrawComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosDebugDrawComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosDebugDrawComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosDebugDrawComponent_Statics::ClassParams = {
		&UChaosDebugDrawComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UChaosDebugDrawComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDebugDrawComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosDebugDrawComponent()
	{
		if (!Z_Registration_Info_UClass_UChaosDebugDrawComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosDebugDrawComponent.OuterSingleton, Z_Construct_UClass_UChaosDebugDrawComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChaosDebugDrawComponent.OuterSingleton;
	}
	template<> CHAOSSOLVERENGINE_API UClass* StaticClass<UChaosDebugDrawComponent>()
	{
		return UChaosDebugDrawComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosDebugDrawComponent);
	UChaosDebugDrawComponent::~UChaosDebugDrawComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosDebugDrawComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosDebugDrawComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChaosDebugDrawComponent, UChaosDebugDrawComponent::StaticClass, TEXT("UChaosDebugDrawComponent"), &Z_Registration_Info_UClass_UChaosDebugDrawComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosDebugDrawComponent), 2365980171U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosDebugDrawComponent_h_4244077050(TEXT("/Script/ChaosSolverEngine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosDebugDrawComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosDebugDrawComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
