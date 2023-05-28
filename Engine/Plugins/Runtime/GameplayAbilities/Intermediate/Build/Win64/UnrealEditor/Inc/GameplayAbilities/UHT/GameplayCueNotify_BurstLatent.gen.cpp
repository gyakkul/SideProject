// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCueNotify_BurstLatent.h"
#include "GameplayCueNotifyTypes.h"
#include "GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCueNotify_BurstLatent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayCueNotify_Actor();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayCueNotify_BurstLatent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayCueNotify_BurstLatent_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	struct GameplayCueNotify_BurstLatent_eventOnBurst_Parms
	{
		AActor* Target;
		FGameplayCueParameters Parameters;
		FGameplayCueNotify_SpawnResult SpawnResults;
	};
	static FName NAME_AGameplayCueNotify_BurstLatent_OnBurst = FName(TEXT("OnBurst"));
	void AGameplayCueNotify_BurstLatent::OnBurst(AActor* Target, FGameplayCueParameters const& Parameters, FGameplayCueNotify_SpawnResult const& SpawnResults)
	{
		GameplayCueNotify_BurstLatent_eventOnBurst_Parms Parms;
		Parms.Target=Target;
		Parms.Parameters=Parameters;
		Parms.SpawnResults=SpawnResults;
		ProcessEvent(FindFunctionChecked(NAME_AGameplayCueNotify_BurstLatent_OnBurst),&Parms);
	}
	void AGameplayCueNotify_BurstLatent::StaticRegisterNativesAGameplayCueNotify_BurstLatent()
	{
	}
	struct Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnResults_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnResults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayCueNotify_BurstLatent_eventOnBurst_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayCueNotify_BurstLatent_eventOnBurst_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::NewProp_Parameters_MetaData)) }; // 3089669807
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::NewProp_SpawnResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::NewProp_SpawnResults = { "SpawnResults", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayCueNotify_BurstLatent_eventOnBurst_Parms, SpawnResults), Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult, METADATA_PARAMS(Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::NewProp_SpawnResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::NewProp_SpawnResults_MetaData)) }; // 3892772338
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::NewProp_Parameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::NewProp_SpawnResults,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayCueNotify_BurstLatent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayCueNotify_BurstLatent, nullptr, "OnBurst", nullptr, nullptr, sizeof(GameplayCueNotify_BurstLatent_eventOnBurst_Parms), Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameplayCueNotify_BurstLatent);
	UClass* Z_Construct_UClass_AGameplayCueNotify_BurstLatent_NoRegister()
	{
		return AGameplayCueNotify_BurstLatent::StaticClass();
	}
	struct Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSpawnCondition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSpawnCondition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPlacementInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultPlacementInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BurstEffects_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BurstEffects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BurstSpawnResults_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BurstSpawnResults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameplayCueNotify_Actor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameplayCueNotify_BurstLatent_OnBurst, "OnBurst" }, // 3141474094
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "GameplayCueNotify" },
		{ "Comment", "/**\n * AGameplayCueNotify_BurstLatent\n *\n *\x09This is an instanced gameplay cue notify for effects that are one-offs.\n *\x09Since it is instanced, it can do latent things like time lines or delays.\n */" },
		{ "DisplayName", "GCN Burst Latent" },
		{ "HideCategories", "Replication" },
		{ "IncludePath", "GameplayCueNotify_BurstLatent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameplayCueNotify_BurstLatent.h" },
		{ "ShortTooltip", "A one-off GameplayCueNotify that can use latent actions such as timelines." },
		{ "ShowWorldContextPin", "" },
		{ "ToolTip", "AGameplayCueNotify_BurstLatent\n\n    This is an instanced gameplay cue notify for effects that are one-offs.\n    Since it is instanced, it can do latent things like time lines or delays." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::NewProp_DefaultSpawnCondition_MetaData[] = {
		{ "Category", "GCN Defaults" },
		{ "Comment", "// Default condition to check before spawning anything.  Applies for all spawns unless overridden.\n" },
		{ "ModuleRelativePath", "Public/GameplayCueNotify_BurstLatent.h" },
		{ "ToolTip", "Default condition to check before spawning anything.  Applies for all spawns unless overridden." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::NewProp_DefaultSpawnCondition = { "DefaultSpawnCondition", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameplayCueNotify_BurstLatent, DefaultSpawnCondition), Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition, METADATA_PARAMS(Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::NewProp_DefaultSpawnCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::NewProp_DefaultSpawnCondition_MetaData)) }; // 713104762
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::NewProp_DefaultPlacementInfo_MetaData[] = {
		{ "Category", "GCN Defaults" },
		{ "Comment", "// Default placement rules.  Applies for all spawns unless overridden.\n" },
		{ "ModuleRelativePath", "Public/GameplayCueNotify_BurstLatent.h" },
		{ "ToolTip", "Default placement rules.  Applies for all spawns unless overridden." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::NewProp_DefaultPlacementInfo = { "DefaultPlacementInfo", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameplayCueNotify_BurstLatent, DefaultPlacementInfo), Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo, METADATA_PARAMS(Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::NewProp_DefaultPlacementInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::NewProp_DefaultPlacementInfo_MetaData)) }; // 3114366822
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::NewProp_BurstEffects_MetaData[] = {
		{ "Category", "GCN Effects" },
		{ "Comment", "// List of effects to spawn on burst.\n" },
		{ "ModuleRelativePath", "Public/GameplayCueNotify_BurstLatent.h" },
		{ "ToolTip", "List of effects to spawn on burst." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::NewProp_BurstEffects = { "BurstEffects", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameplayCueNotify_BurstLatent, BurstEffects), Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects, METADATA_PARAMS(Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::NewProp_BurstEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::NewProp_BurstEffects_MetaData)) }; // 3262782266
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::NewProp_BurstSpawnResults_MetaData[] = {
		{ "Category", "GCN Effects" },
		{ "Comment", "// Results of spawned burst effects.\n" },
		{ "ModuleRelativePath", "Public/GameplayCueNotify_BurstLatent.h" },
		{ "ToolTip", "Results of spawned burst effects." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::NewProp_BurstSpawnResults = { "BurstSpawnResults", nullptr, (EPropertyFlags)0x0020088000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameplayCueNotify_BurstLatent, BurstSpawnResults), Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult, METADATA_PARAMS(Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::NewProp_BurstSpawnResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::NewProp_BurstSpawnResults_MetaData)) }; // 3892772338
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::NewProp_DefaultSpawnCondition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::NewProp_DefaultPlacementInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::NewProp_BurstEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::NewProp_BurstSpawnResults,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayCueNotify_BurstLatent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::ClassParams = {
		&AGameplayCueNotify_BurstLatent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameplayCueNotify_BurstLatent()
	{
		if (!Z_Registration_Info_UClass_AGameplayCueNotify_BurstLatent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameplayCueNotify_BurstLatent.OuterSingleton, Z_Construct_UClass_AGameplayCueNotify_BurstLatent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameplayCueNotify_BurstLatent.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<AGameplayCueNotify_BurstLatent>()
	{
		return AGameplayCueNotify_BurstLatent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayCueNotify_BurstLatent);
	AGameplayCueNotify_BurstLatent::~AGameplayCueNotify_BurstLatent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_BurstLatent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_BurstLatent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameplayCueNotify_BurstLatent, AGameplayCueNotify_BurstLatent::StaticClass, TEXT("AGameplayCueNotify_BurstLatent"), &Z_Registration_Info_UClass_AGameplayCueNotify_BurstLatent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameplayCueNotify_BurstLatent), 3514529759U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_BurstLatent_h_1955768781(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_BurstLatent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_BurstLatent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
