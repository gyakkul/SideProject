// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNotify_GameplayCue.h"
#include "GameplayCueInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_GameplayCue() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAnimNotify_GameplayCue();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAnimNotify_GameplayCue_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAnimNotify_GameplayCueState();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAnimNotify_GameplayCueState_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueTag();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	void UAnimNotify_GameplayCue::StaticRegisterNativesUAnimNotify_GameplayCue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_GameplayCue);
	UClass* Z_Construct_UClass_UAnimNotify_GameplayCue_NoRegister()
	{
		return UAnimNotify_GameplayCue::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_GameplayCue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_GameplayCue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_GameplayCue_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UAnimNotify_GameplayCue\n *\n *\x09""An animation notify used for instantaneous gameplay cues (Burst/Latent).\n */" },
		{ "DisplayName", "GameplayCue (Burst)" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AnimNotify_GameplayCue.h" },
		{ "ModuleRelativePath", "Public/AnimNotify_GameplayCue.h" },
		{ "ToolTip", "UAnimNotify_GameplayCue\n\n    An animation notify used for instantaneous gameplay cues (Burst/Latent)." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_GameplayCue_Statics::NewProp_GameplayCue_MetaData[] = {
		{ "Categories", "GameplayCue" },
		{ "Category", "GameplayCue" },
		{ "Comment", "// GameplayCue tag to invoke.\n" },
		{ "ModuleRelativePath", "Public/AnimNotify_GameplayCue.h" },
		{ "ToolTip", "GameplayCue tag to invoke." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_GameplayCue_Statics::NewProp_GameplayCue = { "GameplayCue", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotify_GameplayCue, GameplayCue), Z_Construct_UScriptStruct_FGameplayCueTag, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_GameplayCue_Statics::NewProp_GameplayCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_GameplayCue_Statics::NewProp_GameplayCue_MetaData)) }; // 1360574655
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_GameplayCue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_GameplayCue_Statics::NewProp_GameplayCue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_GameplayCue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_GameplayCue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_GameplayCue_Statics::ClassParams = {
		&UAnimNotify_GameplayCue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNotify_GameplayCue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_GameplayCue_Statics::PropPointers),
		0,
		0x000930A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_GameplayCue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_GameplayCue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify_GameplayCue()
	{
		if (!Z_Registration_Info_UClass_UAnimNotify_GameplayCue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_GameplayCue.OuterSingleton, Z_Construct_UClass_UAnimNotify_GameplayCue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNotify_GameplayCue.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAnimNotify_GameplayCue>()
	{
		return UAnimNotify_GameplayCue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_GameplayCue);
	UAnimNotify_GameplayCue::~UAnimNotify_GameplayCue() {}
	void UAnimNotify_GameplayCueState::StaticRegisterNativesUAnimNotify_GameplayCueState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_GameplayCueState);
	UClass* Z_Construct_UClass_UAnimNotify_GameplayCueState_NoRegister()
	{
		return UAnimNotify_GameplayCueState::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_GameplayCueState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_GameplayCueState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_GameplayCueState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UAnimNotify_GameplayCueState\n *\n *\x09""An animation notify state used for duration based gameplay cues (Looping).\n */" },
		{ "DisplayName", "GameplayCue (Looping)" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AnimNotify_GameplayCue.h" },
		{ "ModuleRelativePath", "Public/AnimNotify_GameplayCue.h" },
		{ "ToolTip", "UAnimNotify_GameplayCueState\n\n    An animation notify state used for duration based gameplay cues (Looping)." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_GameplayCueState_Statics::NewProp_GameplayCue_MetaData[] = {
		{ "Categories", "GameplayCue" },
		{ "Category", "GameplayCue" },
		{ "Comment", "// GameplayCue tag to invoke\n" },
		{ "ModuleRelativePath", "Public/AnimNotify_GameplayCue.h" },
		{ "ToolTip", "GameplayCue tag to invoke" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_GameplayCueState_Statics::NewProp_GameplayCue = { "GameplayCue", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotify_GameplayCueState, GameplayCue), Z_Construct_UScriptStruct_FGameplayCueTag, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_GameplayCueState_Statics::NewProp_GameplayCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_GameplayCueState_Statics::NewProp_GameplayCue_MetaData)) }; // 1360574655
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_GameplayCueState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_GameplayCueState_Statics::NewProp_GameplayCue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_GameplayCueState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_GameplayCueState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_GameplayCueState_Statics::ClassParams = {
		&UAnimNotify_GameplayCueState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNotify_GameplayCueState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_GameplayCueState_Statics::PropPointers),
		0,
		0x000930A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_GameplayCueState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_GameplayCueState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify_GameplayCueState()
	{
		if (!Z_Registration_Info_UClass_UAnimNotify_GameplayCueState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_GameplayCueState.OuterSingleton, Z_Construct_UClass_UAnimNotify_GameplayCueState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNotify_GameplayCueState.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAnimNotify_GameplayCueState>()
	{
		return UAnimNotify_GameplayCueState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_GameplayCueState);
	UAnimNotify_GameplayCueState::~UAnimNotify_GameplayCueState() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AnimNotify_GameplayCue_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AnimNotify_GameplayCue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_GameplayCue, UAnimNotify_GameplayCue::StaticClass, TEXT("UAnimNotify_GameplayCue"), &Z_Registration_Info_UClass_UAnimNotify_GameplayCue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_GameplayCue), 201157143U) },
		{ Z_Construct_UClass_UAnimNotify_GameplayCueState, UAnimNotify_GameplayCueState::StaticClass, TEXT("UAnimNotify_GameplayCueState"), &Z_Registration_Info_UClass_UAnimNotify_GameplayCueState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_GameplayCueState), 3906846709U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AnimNotify_GameplayCue_h_381801928(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AnimNotify_GameplayCue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AnimNotify_GameplayCue_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
