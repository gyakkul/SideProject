// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SourceEffects/SourceEffectEnvelopeFollower.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectEnvelopeFollower() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_UEnvelopeFollowerListener();
	SYNTHESIS_API UClass* Z_Construct_UClass_UEnvelopeFollowerListener_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_NoRegister();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode();
	SYNTHESIS_API UFunction* Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvelopeFollowerPeakMode;
	static UEnum* EEnvelopeFollowerPeakMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnvelopeFollowerPeakMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnvelopeFollowerPeakMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("EEnvelopeFollowerPeakMode"));
		}
		return Z_Registration_Info_UEnum_EEnvelopeFollowerPeakMode.OuterSingleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<EEnvelopeFollowerPeakMode>()
	{
		return EEnvelopeFollowerPeakMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode_Statics::Enumerators[] = {
		{ "EEnvelopeFollowerPeakMode::MeanSquared", (int64)EEnvelopeFollowerPeakMode::MeanSquared },
		{ "EEnvelopeFollowerPeakMode::RootMeanSquared", (int64)EEnvelopeFollowerPeakMode::RootMeanSquared },
		{ "EEnvelopeFollowerPeakMode::Peak", (int64)EEnvelopeFollowerPeakMode::Peak },
		{ "EEnvelopeFollowerPeakMode::Count", (int64)EEnvelopeFollowerPeakMode::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EEnvelopeFollowerPeakMode::Count" },
		{ "MeanSquared.Name", "EEnvelopeFollowerPeakMode::MeanSquared" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
		{ "Peak.Name", "EEnvelopeFollowerPeakMode::Peak" },
		{ "RootMeanSquared.Name", "EEnvelopeFollowerPeakMode::RootMeanSquared" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		"EEnvelopeFollowerPeakMode",
		"EEnvelopeFollowerPeakMode",
		Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode()
	{
		if (!Z_Registration_Info_UEnum_EEnvelopeFollowerPeakMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvelopeFollowerPeakMode.InnerSingleton, Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnvelopeFollowerPeakMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectEnvelopeFollowerSettings;
class UScriptStruct* FSourceEffectEnvelopeFollowerSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectEnvelopeFollowerSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectEnvelopeFollowerSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectEnvelopeFollowerSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectEnvelopeFollowerSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectEnvelopeFollowerSettings>()
{
	return FSourceEffectEnvelopeFollowerSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReleaseTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReleaseTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PeakMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PeakMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PeakMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAnalogMode_MetaData[];
#endif
		static void NewProp_bIsAnalogMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAnalogMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectEnvelopeFollowerSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_AttackTime_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The attack time of the envelope follower in milliseconds\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
		{ "ToolTip", "The attack time of the envelope follower in milliseconds" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_AttackTime = { "AttackTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectEnvelopeFollowerSettings, AttackTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_AttackTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_AttackTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_ReleaseTime_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The release time of the envelope follower in milliseconds\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
		{ "ToolTip", "The release time of the envelope follower in milliseconds" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_ReleaseTime = { "ReleaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectEnvelopeFollowerSettings, ReleaseTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_ReleaseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_ReleaseTime_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_PeakMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_PeakMode_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// The peak mode of the envelope follower\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
		{ "ToolTip", "The peak mode of the envelope follower" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_PeakMode = { "PeakMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectEnvelopeFollowerSettings, PeakMode), Z_Construct_UEnum_Synthesis_EEnvelopeFollowerPeakMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_PeakMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_PeakMode_MetaData)) }; // 2378595134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_bIsAnalogMode_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// Whether or not the envelope follower is in analog mode\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
		{ "ToolTip", "Whether or not the envelope follower is in analog mode" },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_bIsAnalogMode_SetBit(void* Obj)
	{
		((FSourceEffectEnvelopeFollowerSettings*)Obj)->bIsAnalogMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_bIsAnalogMode = { "bIsAnalogMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSourceEffectEnvelopeFollowerSettings), &Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_bIsAnalogMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_bIsAnalogMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_bIsAnalogMode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_AttackTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_ReleaseTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_PeakMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_PeakMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewProp_bIsAnalogMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectEnvelopeFollowerSettings",
		sizeof(FSourceEffectEnvelopeFollowerSettings),
		alignof(FSourceEffectEnvelopeFollowerSettings),
		Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SourceEffectEnvelopeFollowerSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectEnvelopeFollowerSettings.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SourceEffectEnvelopeFollowerSettings.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics
	{
		struct _Script_Synthesis_eventOnEnvelopeFollowerUpdate_Parms
		{
			float EnvelopeValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnvelopeValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::NewProp_EnvelopeValue = { "EnvelopeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Synthesis_eventOnEnvelopeFollowerUpdate_Parms, EnvelopeValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::NewProp_EnvelopeValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Synthesis, nullptr, "OnEnvelopeFollowerUpdate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::_Script_Synthesis_eventOnEnvelopeFollowerUpdate_Parms), Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnEnvelopeFollowerUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnEnvelopeFollowerUpdate, float EnvelopeValue)
{
	struct _Script_Synthesis_eventOnEnvelopeFollowerUpdate_Parms
	{
		float EnvelopeValue;
	};
	_Script_Synthesis_eventOnEnvelopeFollowerUpdate_Parms Parms;
	Parms.EnvelopeValue=EnvelopeValue;
	OnEnvelopeFollowerUpdate.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UEnvelopeFollowerListener::StaticRegisterNativesUEnvelopeFollowerListener()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvelopeFollowerListener);
	UClass* Z_Construct_UClass_UEnvelopeFollowerListener_NoRegister()
	{
		return UEnvelopeFollowerListener::StaticClass();
	}
	struct Z_Construct_UClass_UEnvelopeFollowerListener_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEnvelopeFollowerUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnvelopeFollowerUpdate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvelopeFollowerListener_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvelopeFollowerListener_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Synth" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD" },
		{ "IncludePath", "SourceEffects/SourceEffectEnvelopeFollower.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvelopeFollowerListener_Statics::NewProp_OnEnvelopeFollowerUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEnvelopeFollowerListener_Statics::NewProp_OnEnvelopeFollowerUpdate = { "OnEnvelopeFollowerUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvelopeFollowerListener, OnEnvelopeFollowerUpdate), Z_Construct_UDelegateFunction_Synthesis_OnEnvelopeFollowerUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEnvelopeFollowerListener_Statics::NewProp_OnEnvelopeFollowerUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvelopeFollowerListener_Statics::NewProp_OnEnvelopeFollowerUpdate_MetaData)) }; // 3050769261
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvelopeFollowerListener_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvelopeFollowerListener_Statics::NewProp_OnEnvelopeFollowerUpdate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvelopeFollowerListener_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvelopeFollowerListener>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvelopeFollowerListener_Statics::ClassParams = {
		&UEnvelopeFollowerListener::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvelopeFollowerListener_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnvelopeFollowerListener_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvelopeFollowerListener_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvelopeFollowerListener_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvelopeFollowerListener()
	{
		if (!Z_Registration_Info_UClass_UEnvelopeFollowerListener.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvelopeFollowerListener.OuterSingleton, Z_Construct_UClass_UEnvelopeFollowerListener_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvelopeFollowerListener.OuterSingleton;
	}
	template<> SYNTHESIS_API UClass* StaticClass<UEnvelopeFollowerListener>()
	{
		return UEnvelopeFollowerListener::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvelopeFollowerListener);
	DEFINE_FUNCTION(USourceEffectEnvelopeFollowerPreset::execUnregisterEnvelopeFollowerListener)
	{
		P_GET_OBJECT(UEnvelopeFollowerListener,Z_Param_EnvelopeFollowerListener);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterEnvelopeFollowerListener(Z_Param_EnvelopeFollowerListener);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectEnvelopeFollowerPreset::execRegisterEnvelopeFollowerListener)
	{
		P_GET_OBJECT(UEnvelopeFollowerListener,Z_Param_EnvelopeFollowerListener);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterEnvelopeFollowerListener(Z_Param_EnvelopeFollowerListener);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectEnvelopeFollowerPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSourceEffectEnvelopeFollowerSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USourceEffectEnvelopeFollowerPreset::StaticRegisterNativesUSourceEffectEnvelopeFollowerPreset()
	{
		UClass* Class = USourceEffectEnvelopeFollowerPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RegisterEnvelopeFollowerListener", &USourceEffectEnvelopeFollowerPreset::execRegisterEnvelopeFollowerListener },
			{ "SetSettings", &USourceEffectEnvelopeFollowerPreset::execSetSettings },
			{ "UnregisterEnvelopeFollowerListener", &USourceEffectEnvelopeFollowerPreset::execUnregisterEnvelopeFollowerListener },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics
	{
		struct SourceEffectEnvelopeFollowerPreset_eventRegisterEnvelopeFollowerListener_Parms
		{
			UEnvelopeFollowerListener* EnvelopeFollowerListener;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerListener_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnvelopeFollowerListener;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::NewProp_EnvelopeFollowerListener_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::NewProp_EnvelopeFollowerListener = { "EnvelopeFollowerListener", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectEnvelopeFollowerPreset_eventRegisterEnvelopeFollowerListener_Parms, EnvelopeFollowerListener), Z_Construct_UClass_UEnvelopeFollowerListener_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::NewProp_EnvelopeFollowerListener_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::NewProp_EnvelopeFollowerListener_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::NewProp_EnvelopeFollowerListener,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Registers an envelope follower listener with the effect. */" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
		{ "ToolTip", "Registers an envelope follower listener with the effect." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset, nullptr, "RegisterEnvelopeFollowerListener", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::SourceEffectEnvelopeFollowerPreset_eventRegisterEnvelopeFollowerListener_Parms), Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics
	{
		struct SourceEffectEnvelopeFollowerPreset_eventSetSettings_Parms
		{
			FSourceEffectEnvelopeFollowerSettings InSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectEnvelopeFollowerPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 76650820
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::SourceEffectEnvelopeFollowerPreset_eventSetSettings_Parms), Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics
	{
		struct SourceEffectEnvelopeFollowerPreset_eventUnregisterEnvelopeFollowerListener_Parms
		{
			UEnvelopeFollowerListener* EnvelopeFollowerListener;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerListener_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnvelopeFollowerListener;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::NewProp_EnvelopeFollowerListener_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::NewProp_EnvelopeFollowerListener = { "EnvelopeFollowerListener", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectEnvelopeFollowerPreset_eventUnregisterEnvelopeFollowerListener_Parms, EnvelopeFollowerListener), Z_Construct_UClass_UEnvelopeFollowerListener_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::NewProp_EnvelopeFollowerListener_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::NewProp_EnvelopeFollowerListener_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::NewProp_EnvelopeFollowerListener,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Unregisters an envelope follower listener with the effect. */" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
		{ "ToolTip", "Unregisters an envelope follower listener with the effect." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset, nullptr, "UnregisterEnvelopeFollowerListener", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::SourceEffectEnvelopeFollowerPreset_eventUnregisterEnvelopeFollowerListener_Parms), Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USourceEffectEnvelopeFollowerPreset);
	UClass* Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_NoRegister()
	{
		return USourceEffectEnvelopeFollowerPreset::StaticClass();
	}
	struct Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener, "RegisterEnvelopeFollowerListener" }, // 3806431431
		{ &Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_SetSettings, "SetSettings" }, // 1939192231
		{ &Z_Construct_UFunction_USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener, "UnregisterEnvelopeFollowerListener" }, // 3843915655
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "IncludePath", "SourceEffects/SourceEffectEnvelopeFollower.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEnvelopeFollower.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USourceEffectEnvelopeFollowerPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings, METADATA_PARAMS(Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::NewProp_Settings_MetaData)) }; // 76650820
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectEnvelopeFollowerPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::ClassParams = {
		&USourceEffectEnvelopeFollowerPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset()
	{
		if (!Z_Registration_Info_UClass_USourceEffectEnvelopeFollowerPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USourceEffectEnvelopeFollowerPreset.OuterSingleton, Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USourceEffectEnvelopeFollowerPreset.OuterSingleton;
	}
	template<> SYNTHESIS_API UClass* StaticClass<USourceEffectEnvelopeFollowerPreset>()
	{
		return USourceEffectEnvelopeFollowerPreset::StaticClass();
	}
	USourceEffectEnvelopeFollowerPreset::USourceEffectEnvelopeFollowerPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectEnvelopeFollowerPreset);
	USourceEffectEnvelopeFollowerPreset::~USourceEffectEnvelopeFollowerPreset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_Statics::EnumInfo[] = {
		{ EEnvelopeFollowerPeakMode_StaticEnum, TEXT("EEnvelopeFollowerPeakMode"), &Z_Registration_Info_UEnum_EEnvelopeFollowerPeakMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2378595134U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_Statics::ScriptStructInfo[] = {
		{ FSourceEffectEnvelopeFollowerSettings::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics::NewStructOps, TEXT("SourceEffectEnvelopeFollowerSettings"), &Z_Registration_Info_UScriptStruct_SourceEffectEnvelopeFollowerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectEnvelopeFollowerSettings), 76650820U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvelopeFollowerListener, UEnvelopeFollowerListener::StaticClass, TEXT("UEnvelopeFollowerListener"), &Z_Registration_Info_UClass_UEnvelopeFollowerListener, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvelopeFollowerListener), 1114535894U) },
		{ Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset, USourceEffectEnvelopeFollowerPreset::StaticClass, TEXT("USourceEffectEnvelopeFollowerPreset"), &Z_Registration_Info_UClass_USourceEffectEnvelopeFollowerPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USourceEffectEnvelopeFollowerPreset), 2255255447U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_1273883024(TEXT("/Script/Synthesis"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
