// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystemTestPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilitySystemTestPawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ADefaultPawn();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AAbilitySystemTestPawn();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AAbilitySystemTestPawn_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	void AAbilitySystemTestPawn::StaticRegisterNativesAAbilitySystemTestPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAbilitySystemTestPawn);
	UClass* Z_Construct_UClass_AAbilitySystemTestPawn_NoRegister()
	{
		return AAbilitySystemTestPawn::StaticClass();
	}
	struct Z_Construct_UClass_AAbilitySystemTestPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilitySystemComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAbilitySystemTestPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADefaultPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilitySystemTestPawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AbilitySystemTestPawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystemTestPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbilitySystemTestPawn_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilitySystem" },
		{ "Comment", "/** DefaultPawn collision component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystemTestPawn.h" },
		{ "ToolTip", "DefaultPawn collision component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAbilitySystemTestPawn_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAbilitySystemTestPawn, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAbilitySystemTestPawn_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAbilitySystemTestPawn_Statics::NewProp_AbilitySystemComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAbilitySystemTestPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbilitySystemTestPawn_Statics::NewProp_AbilitySystemComponent,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAbilitySystemTestPawn_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayCueInterface_NoRegister, (int32)VTABLE_OFFSET(AAbilitySystemTestPawn, IGameplayCueInterface), false },  // 462976300
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AAbilitySystemTestPawn, IAbilitySystemInterface), false },  // 220555618
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAbilitySystemTestPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAbilitySystemTestPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAbilitySystemTestPawn_Statics::ClassParams = {
		&AAbilitySystemTestPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAbilitySystemTestPawn_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAbilitySystemTestPawn_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAbilitySystemTestPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAbilitySystemTestPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAbilitySystemTestPawn()
	{
		if (!Z_Registration_Info_UClass_AAbilitySystemTestPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAbilitySystemTestPawn.OuterSingleton, Z_Construct_UClass_AAbilitySystemTestPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAbilitySystemTestPawn.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<AAbilitySystemTestPawn>()
	{
		return AAbilitySystemTestPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAbilitySystemTestPawn);
	AAbilitySystemTestPawn::~AAbilitySystemTestPawn() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAbilitySystemTestPawn, AAbilitySystemTestPawn::StaticClass, TEXT("AAbilitySystemTestPawn"), &Z_Registration_Info_UClass_AAbilitySystemTestPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAbilitySystemTestPawn), 1179485548U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestPawn_h_1045546227(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
