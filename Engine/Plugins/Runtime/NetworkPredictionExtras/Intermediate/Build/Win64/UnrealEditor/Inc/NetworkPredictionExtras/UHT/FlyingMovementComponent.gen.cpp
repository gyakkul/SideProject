// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlyingMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlyingMovementComponent() {}
// Cross Module References
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UBaseMovementComponent();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UFlyingMovementComponent();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UFlyingMovementComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NetworkPredictionExtras();
// End Cross Module References
	void UFlyingMovementComponent::StaticRegisterNativesUFlyingMovementComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlyingMovementComponent);
	UClass* Z_Construct_UClass_UFlyingMovementComponent_NoRegister()
	{
		return UFlyingMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFlyingMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlyingMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPredictionExtras,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlyingMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "// -------------------------------------------------------------------------------------------------------------------------------\n// ActorComponent for running FlyingMovement \n// -------------------------------------------------------------------------------------------------------------------------------\n" },
		{ "IncludePath", "FlyingMovementComponent.h" },
		{ "ModuleRelativePath", "Public/FlyingMovementComponent.h" },
		{ "ToolTip", "ActorComponent for running FlyingMovement" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlyingMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlyingMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlyingMovementComponent_Statics::ClassParams = {
		&UFlyingMovementComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFlyingMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlyingMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlyingMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UFlyingMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlyingMovementComponent.OuterSingleton, Z_Construct_UClass_UFlyingMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFlyingMovementComponent.OuterSingleton;
	}
	template<> NETWORKPREDICTIONEXTRAS_API UClass* StaticClass<UFlyingMovementComponent>()
	{
		return UFlyingMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlyingMovementComponent);
	UFlyingMovementComponent::~UFlyingMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_FlyingMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_FlyingMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFlyingMovementComponent, UFlyingMovementComponent::StaticClass, TEXT("UFlyingMovementComponent"), &Z_Registration_Info_UClass_UFlyingMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlyingMovementComponent), 2463805719U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_FlyingMovementComponent_h_1303708069(TEXT("/Script/NetworkPredictionExtras"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_FlyingMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_FlyingMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
