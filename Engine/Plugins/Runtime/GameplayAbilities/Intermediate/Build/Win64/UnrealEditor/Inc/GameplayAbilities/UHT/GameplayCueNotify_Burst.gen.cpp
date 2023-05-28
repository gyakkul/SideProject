// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCueNotify_Burst.h"
#include "GameplayCueNotifyTypes.h"
#include "GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCueNotify_Burst() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueNotify_Burst();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueNotify_Burst_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueNotify_Static();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	struct GameplayCueNotify_Burst_eventOnBurst_Parms
	{
		AActor* Target;
		FGameplayCueParameters Parameters;
		FGameplayCueNotify_SpawnResult SpawnResults;
	};
	static FName NAME_UGameplayCueNotify_Burst_OnBurst = FName(TEXT("OnBurst"));
	void UGameplayCueNotify_Burst::OnBurst(AActor* Target, FGameplayCueParameters const& Parameters, FGameplayCueNotify_SpawnResult const& SpawnResults) const
	{
		GameplayCueNotify_Burst_eventOnBurst_Parms Parms;
		Parms.Target=Target;
		Parms.Parameters=Parameters;
		Parms.SpawnResults=SpawnResults;
		const_cast<UGameplayCueNotify_Burst*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGameplayCueNotify_Burst_OnBurst),&Parms);
	}
	void UGameplayCueNotify_Burst::StaticRegisterNativesUGameplayCueNotify_Burst()
	{
	}
	struct Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayCueNotify_Burst_eventOnBurst_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayCueNotify_Burst_eventOnBurst_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::NewProp_Parameters_MetaData)) }; // 3089669807
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::NewProp_SpawnResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::NewProp_SpawnResults = { "SpawnResults", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayCueNotify_Burst_eventOnBurst_Parms, SpawnResults), Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnResult, METADATA_PARAMS(Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::NewProp_SpawnResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::NewProp_SpawnResults_MetaData)) }; // 3892772338
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::NewProp_Parameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::NewProp_SpawnResults,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Burst.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayCueNotify_Burst, nullptr, "OnBurst", nullptr, nullptr, sizeof(GameplayCueNotify_Burst_eventOnBurst_Parms), Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayCueNotify_Burst);
	UClass* Z_Construct_UClass_UGameplayCueNotify_Burst_NoRegister()
	{
		return UGameplayCueNotify_Burst::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayCueNotify_Burst_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayCueNotify_Static,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayCueNotify_Burst_OnBurst, "OnBurst" }, // 2824894976
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "GameplayCueNotify" },
		{ "Comment", "/**\n * UGameplayCueNotify_Burst\n *\n *\x09This is a non-instanced gameplay cue notify for effects that are one-offs.\n *\x09Since it is not instanced, it cannot do latent actions such as delays and time lines.\n */" },
		{ "DisplayName", "GCN Burst" },
		{ "HideCategories", "Replication" },
		{ "IncludePath", "GameplayCueNotify_Burst.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Burst.h" },
		{ "ShortTooltip", "A one-off GameplayCueNotify that is never spawned into the world." },
		{ "ShowWorldContextPin", "" },
		{ "ToolTip", "UGameplayCueNotify_Burst\n\n    This is a non-instanced gameplay cue notify for effects that are one-offs.\n    Since it is not instanced, it cannot do latent actions such as delays and time lines." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::NewProp_DefaultSpawnCondition_MetaData[] = {
		{ "Category", "GCN Defaults" },
		{ "Comment", "// Default condition to check before spawning anything.  Applies for all spawns unless overridden.\n" },
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Burst.h" },
		{ "ToolTip", "Default condition to check before spawning anything.  Applies for all spawns unless overridden." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::NewProp_DefaultSpawnCondition = { "DefaultSpawnCondition", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayCueNotify_Burst, DefaultSpawnCondition), Z_Construct_UScriptStruct_FGameplayCueNotify_SpawnCondition, METADATA_PARAMS(Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::NewProp_DefaultSpawnCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::NewProp_DefaultSpawnCondition_MetaData)) }; // 713104762
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::NewProp_DefaultPlacementInfo_MetaData[] = {
		{ "Category", "GCN Defaults" },
		{ "Comment", "// Default placement rules.  Applies for all spawns unless overridden.\n" },
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Burst.h" },
		{ "ToolTip", "Default placement rules.  Applies for all spawns unless overridden." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::NewProp_DefaultPlacementInfo = { "DefaultPlacementInfo", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayCueNotify_Burst, DefaultPlacementInfo), Z_Construct_UScriptStruct_FGameplayCueNotify_PlacementInfo, METADATA_PARAMS(Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::NewProp_DefaultPlacementInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::NewProp_DefaultPlacementInfo_MetaData)) }; // 3114366822
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::NewProp_BurstEffects_MetaData[] = {
		{ "Category", "GCN Effects" },
		{ "Comment", "// List of effects to spawn on burst.\n" },
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Burst.h" },
		{ "ToolTip", "List of effects to spawn on burst." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::NewProp_BurstEffects = { "BurstEffects", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayCueNotify_Burst, BurstEffects), Z_Construct_UScriptStruct_FGameplayCueNotify_BurstEffects, METADATA_PARAMS(Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::NewProp_BurstEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::NewProp_BurstEffects_MetaData)) }; // 3262782266
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::NewProp_DefaultSpawnCondition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::NewProp_DefaultPlacementInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::NewProp_BurstEffects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayCueNotify_Burst>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::ClassParams = {
		&UGameplayCueNotify_Burst::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayCueNotify_Burst()
	{
		if (!Z_Registration_Info_UClass_UGameplayCueNotify_Burst.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayCueNotify_Burst.OuterSingleton, Z_Construct_UClass_UGameplayCueNotify_Burst_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayCueNotify_Burst.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayCueNotify_Burst>()
	{
		return UGameplayCueNotify_Burst::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayCueNotify_Burst);
	UGameplayCueNotify_Burst::~UGameplayCueNotify_Burst() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Burst_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Burst_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayCueNotify_Burst, UGameplayCueNotify_Burst::StaticClass, TEXT("UGameplayCueNotify_Burst"), &Z_Registration_Info_UClass_UGameplayCueNotify_Burst, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayCueNotify_Burst), 526528679U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Burst_h_1934113377(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Burst_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Burst_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
