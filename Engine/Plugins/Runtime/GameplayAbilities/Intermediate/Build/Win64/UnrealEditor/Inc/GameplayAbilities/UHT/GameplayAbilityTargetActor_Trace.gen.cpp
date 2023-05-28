// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/GameplayAbilityTargetActor_Trace.h"
#include "../../Source/Runtime/Engine/Classes/Engine/CollisionProfile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityTargetActor_Trace() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionProfileName();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_Trace();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	void AGameplayAbilityTargetActor_Trace::StaticRegisterNativesAGameplayAbilityTargetActor_Trace()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameplayAbilityTargetActor_Trace);
	UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_NoRegister()
	{
		return AGameplayAbilityTargetActor_Trace::StaticClass();
	}
	struct Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceProfile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTraceAffectsAimPitch_MetaData[];
#endif
		static void NewProp_bTraceAffectsAimPitch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceAffectsAimPitch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameplayAbilityTargetActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Intermediate base class for all line-trace type targeting actors. */" },
		{ "IncludePath", "Abilities/GameplayAbilityTargetActor_Trace.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor_Trace.h" },
		{ "ToolTip", "Intermediate base class for all line-trace type targeting actors." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::NewProp_MaxRange_MetaData[] = {
		{ "Category", "Trace" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor_Trace.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameplayAbilityTargetActor_Trace, MaxRange), METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::NewProp_MaxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::NewProp_MaxRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::NewProp_TraceProfile_MetaData[] = {
		{ "Category", "Trace" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor_Trace.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::NewProp_TraceProfile = { "TraceProfile", nullptr, (EPropertyFlags)0x0011000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameplayAbilityTargetActor_Trace, TraceProfile), Z_Construct_UScriptStruct_FCollisionProfileName, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::NewProp_TraceProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::NewProp_TraceProfile_MetaData)) }; // 2816100078
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::NewProp_bTraceAffectsAimPitch_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "// Does the trace affect the aiming pitch\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor_Trace.h" },
		{ "ToolTip", "Does the trace affect the aiming pitch" },
	};
#endif
	void Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::NewProp_bTraceAffectsAimPitch_SetBit(void* Obj)
	{
		((AGameplayAbilityTargetActor_Trace*)Obj)->bTraceAffectsAimPitch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::NewProp_bTraceAffectsAimPitch = { "bTraceAffectsAimPitch", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGameplayAbilityTargetActor_Trace), &Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::NewProp_bTraceAffectsAimPitch_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::NewProp_bTraceAffectsAimPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::NewProp_bTraceAffectsAimPitch_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::NewProp_MaxRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::NewProp_TraceProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::NewProp_bTraceAffectsAimPitch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayAbilityTargetActor_Trace>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::ClassParams = {
		&AGameplayAbilityTargetActor_Trace::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::PropPointers),
		0,
		0x009002A5u,
		METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_Trace()
	{
		if (!Z_Registration_Info_UClass_AGameplayAbilityTargetActor_Trace.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameplayAbilityTargetActor_Trace.OuterSingleton, Z_Construct_UClass_AGameplayAbilityTargetActor_Trace_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameplayAbilityTargetActor_Trace.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<AGameplayAbilityTargetActor_Trace>()
	{
		return AGameplayAbilityTargetActor_Trace::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayAbilityTargetActor_Trace);
	AGameplayAbilityTargetActor_Trace::~AGameplayAbilityTargetActor_Trace() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_Trace_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_Trace_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameplayAbilityTargetActor_Trace, AGameplayAbilityTargetActor_Trace::StaticClass, TEXT("AGameplayAbilityTargetActor_Trace"), &Z_Registration_Info_UClass_AGameplayAbilityTargetActor_Trace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameplayAbilityTargetActor_Trace), 113803771U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_Trace_h_3812722952(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_Trace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_Trace_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
