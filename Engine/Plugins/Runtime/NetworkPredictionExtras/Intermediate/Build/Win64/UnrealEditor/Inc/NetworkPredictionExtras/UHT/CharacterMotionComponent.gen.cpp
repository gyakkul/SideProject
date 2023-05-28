// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharacterMotionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterMotionComponent() {}
// Cross Module References
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UBaseMovementComponent();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UCharacterMotionComponent();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UCharacterMotionComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NetworkPredictionExtras();
// End Cross Module References
	void UCharacterMotionComponent::StaticRegisterNativesUCharacterMotionComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterMotionComponent);
	UClass* Z_Construct_UClass_UCharacterMotionComponent_NoRegister()
	{
		return UCharacterMotionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterMotionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterMotionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPredictionExtras,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterMotionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "// -------------------------------------------------------------------------------------------------------------------------------\n// ActorComponent for running CharacterMotion \n// -------------------------------------------------------------------------------------------------------------------------------\n" },
		{ "IncludePath", "CharacterMotionComponent.h" },
		{ "ModuleRelativePath", "Public/CharacterMotionComponent.h" },
		{ "ToolTip", "ActorComponent for running CharacterMotion" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterMotionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterMotionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterMotionComponent_Statics::ClassParams = {
		&UCharacterMotionComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCharacterMotionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterMotionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterMotionComponent()
	{
		if (!Z_Registration_Info_UClass_UCharacterMotionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterMotionComponent.OuterSingleton, Z_Construct_UClass_UCharacterMotionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCharacterMotionComponent.OuterSingleton;
	}
	template<> NETWORKPREDICTIONEXTRAS_API UClass* StaticClass<UCharacterMotionComponent>()
	{
		return UCharacterMotionComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterMotionComponent);
	UCharacterMotionComponent::~UCharacterMotionComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_CharacterMotionComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_CharacterMotionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterMotionComponent, UCharacterMotionComponent::StaticClass, TEXT("UCharacterMotionComponent"), &Z_Registration_Info_UClass_UCharacterMotionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterMotionComponent), 2273400164U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_CharacterMotionComponent_h_2732507946(TEXT("/Script/NetworkPredictionExtras"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_CharacterMotionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_CharacterMotionComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
