// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayEffectCalculation.h"
#include "GameplayEffectAttributeCaptureDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayEffectCalculation() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectCalculation();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectCalculation_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	void UGameplayEffectCalculation::StaticRegisterNativesUGameplayEffectCalculation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayEffectCalculation);
	UClass* Z_Construct_UClass_UGameplayEffectCalculation_NoRegister()
	{
		return UGameplayEffectCalculation::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayEffectCalculation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelevantAttributesToCapture_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelevantAttributesToCapture_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RelevantAttributesToCapture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayEffectCalculation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffectCalculation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Abstract base for specialized gameplay effect calculations; Capable of specifing attribute captures */" },
		{ "IncludePath", "GameplayEffectCalculation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameplayEffectCalculation.h" },
		{ "ToolTip", "Abstract base for specialized gameplay effect calculations; Capable of specifing attribute captures" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffectCalculation_Statics::NewProp_RelevantAttributesToCapture_Inner = { "RelevantAttributesToCapture", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition, METADATA_PARAMS(nullptr, 0) }; // 361294328
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffectCalculation_Statics::NewProp_RelevantAttributesToCapture_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/** Attributes to capture that are relevant to the calculation */" },
		{ "ModuleRelativePath", "Public/GameplayEffectCalculation.h" },
		{ "ToolTip", "Attributes to capture that are relevant to the calculation" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayEffectCalculation_Statics::NewProp_RelevantAttributesToCapture = { "RelevantAttributesToCapture", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffectCalculation, RelevantAttributesToCapture), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffectCalculation_Statics::NewProp_RelevantAttributesToCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectCalculation_Statics::NewProp_RelevantAttributesToCapture_MetaData)) }; // 361294328
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayEffectCalculation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffectCalculation_Statics::NewProp_RelevantAttributesToCapture_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffectCalculation_Statics::NewProp_RelevantAttributesToCapture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayEffectCalculation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayEffectCalculation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayEffectCalculation_Statics::ClassParams = {
		&UGameplayEffectCalculation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameplayEffectCalculation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectCalculation_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayEffectCalculation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectCalculation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayEffectCalculation()
	{
		if (!Z_Registration_Info_UClass_UGameplayEffectCalculation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayEffectCalculation.OuterSingleton, Z_Construct_UClass_UGameplayEffectCalculation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayEffectCalculation.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayEffectCalculation>()
	{
		return UGameplayEffectCalculation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayEffectCalculation);
	UGameplayEffectCalculation::~UGameplayEffectCalculation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCalculation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCalculation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayEffectCalculation, UGameplayEffectCalculation::StaticClass, TEXT("UGameplayEffectCalculation"), &Z_Registration_Info_UClass_UGameplayEffectCalculation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayEffectCalculation), 573102887U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCalculation_h_2127976606(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCalculation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCalculation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
