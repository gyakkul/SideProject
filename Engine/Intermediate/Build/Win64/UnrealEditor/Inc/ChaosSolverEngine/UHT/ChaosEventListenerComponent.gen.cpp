// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chaos/ChaosEventListenerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosEventListenerComponent() {}
// Cross Module References
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosEventListenerComponent();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosEventListenerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ChaosSolverEngine();
// End Cross Module References
	void UChaosEventListenerComponent::StaticRegisterNativesUChaosEventListenerComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosEventListenerComponent);
	UClass* Z_Construct_UClass_UChaosEventListenerComponent_NoRegister()
	{
		return UChaosEventListenerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UChaosEventListenerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosEventListenerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosEventListenerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Chaos" },
		{ "Comment", "/** \n * Base class for listeners that query and respond to a frame's physics data (collision events, break events, etc).\n */" },
		{ "IncludePath", "Chaos/ChaosEventListenerComponent.h" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosEventListenerComponent.h" },
		{ "ToolTip", "Base class for listeners that query and respond to a frame's physics data (collision events, break events, etc)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosEventListenerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosEventListenerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosEventListenerComponent_Statics::ClassParams = {
		&UChaosEventListenerComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UChaosEventListenerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosEventListenerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosEventListenerComponent()
	{
		if (!Z_Registration_Info_UClass_UChaosEventListenerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosEventListenerComponent.OuterSingleton, Z_Construct_UClass_UChaosEventListenerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChaosEventListenerComponent.OuterSingleton;
	}
	template<> CHAOSSOLVERENGINE_API UClass* StaticClass<UChaosEventListenerComponent>()
	{
		return UChaosEventListenerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosEventListenerComponent);
	UChaosEventListenerComponent::~UChaosEventListenerComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosEventListenerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosEventListenerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChaosEventListenerComponent, UChaosEventListenerComponent::StaticClass, TEXT("UChaosEventListenerComponent"), &Z_Registration_Info_UClass_UChaosEventListenerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosEventListenerComponent), 1217637147U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosEventListenerComponent_h_2634236417(TEXT("/Script/ChaosSolverEngine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosEventListenerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosEventListenerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
