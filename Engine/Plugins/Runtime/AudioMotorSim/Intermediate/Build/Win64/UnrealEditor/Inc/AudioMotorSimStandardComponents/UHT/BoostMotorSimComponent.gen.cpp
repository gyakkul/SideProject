// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoostMotorSimComponent.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoostMotorSimComponent() {}
// Cross Module References
	AUDIOMOTORSIM_API UClass* Z_Construct_UClass_UAudioMotorSimComponent();
	AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* Z_Construct_UClass_UBoostMotorSimComponent();
	AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* Z_Construct_UClass_UBoostMotorSimComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	UPackage* Z_Construct_UPackage__Script_AudioMotorSimStandardComponents();
// End Cross Module References
	void UBoostMotorSimComponent::StaticRegisterNativesUBoostMotorSimComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoostMotorSimComponent);
	UClass* Z_Construct_UClass_UBoostMotorSimComponent_NoRegister()
	{
		return UBoostMotorSimComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBoostMotorSimComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrottleScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrottleScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpExp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpExp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleThrottleWithBoostStrength_MetaData[];
#endif
		static void NewProp_ScaleThrottleWithBoostStrength_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ScaleThrottleWithBoostStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bModifyPitch_MetaData[];
#endif
		static void NewProp_bModifyPitch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bModifyPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchModifierInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchModifierInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoostToPitchCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoostToPitchCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoostMotorSimComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioMotorSimComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMotorSimStandardComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoostMotorSimComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioMotorSim" },
		{ "Comment", "// Uses Boost input to momentarily scale throttle input and pitch output\n" },
		{ "IncludePath", "BoostMotorSimComponent.h" },
		{ "ModuleRelativePath", "Public/BoostMotorSimComponent.h" },
		{ "ToolTip", "Uses Boost input to momentarily scale throttle input and pitch output" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_ThrottleScale_MetaData[] = {
		{ "Category", "Throttle" },
		{ "ClampMin", "0.1" },
		{ "Comment", "// Scale the engine torque by this value when boost is active\n" },
		{ "ModuleRelativePath", "Public/BoostMotorSimComponent.h" },
		{ "ToolTip", "Scale the engine torque by this value when boost is active" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_ThrottleScale = { "ThrottleScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBoostMotorSimComponent, ThrottleScale), METADATA_PARAMS(Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_ThrottleScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_ThrottleScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_InterpExp_MetaData[] = {
		{ "Category", "Throttle" },
		{ "ClampMin", "0.1" },
		{ "Comment", "// controls shape of the scaling\n" },
		{ "ModuleRelativePath", "Public/BoostMotorSimComponent.h" },
		{ "ToolTip", "controls shape of the scaling" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_InterpExp = { "InterpExp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBoostMotorSimComponent, InterpExp), METADATA_PARAMS(Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_InterpExp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_InterpExp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_InterpTime_MetaData[] = {
		{ "Category", "Throttle" },
		{ "ClampMin", "0.1" },
		{ "Comment", "// How fast the torque scales when starting to boost\n" },
		{ "ModuleRelativePath", "Public/BoostMotorSimComponent.h" },
		{ "ToolTip", "How fast the torque scales when starting to boost" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_InterpTime = { "InterpTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBoostMotorSimComponent, InterpTime), METADATA_PARAMS(Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_InterpTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_InterpTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_ScaleThrottleWithBoostStrength_MetaData[] = {
		{ "Category", "Throttle" },
		{ "ClampMin", "0.1" },
		{ "Comment", "// whether to use the boost strength to scale ThrottleScale, or just check if it is > 0 to apply the throttle scalar\n" },
		{ "ModuleRelativePath", "Public/BoostMotorSimComponent.h" },
		{ "ToolTip", "whether to use the boost strength to scale ThrottleScale, or just check if it is > 0 to apply the throttle scalar" },
	};
#endif
	void Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_ScaleThrottleWithBoostStrength_SetBit(void* Obj)
	{
		((UBoostMotorSimComponent*)Obj)->ScaleThrottleWithBoostStrength = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_ScaleThrottleWithBoostStrength = { "ScaleThrottleWithBoostStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBoostMotorSimComponent), &Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_ScaleThrottleWithBoostStrength_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_ScaleThrottleWithBoostStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_ScaleThrottleWithBoostStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_bModifyPitch_MetaData[] = {
		{ "Category", "Pitch" },
		{ "Comment", "// whether scale the overall pitch by the boost strength\n" },
		{ "ModuleRelativePath", "Public/BoostMotorSimComponent.h" },
		{ "ToolTip", "whether scale the overall pitch by the boost strength" },
	};
#endif
	void Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_bModifyPitch_SetBit(void* Obj)
	{
		((UBoostMotorSimComponent*)Obj)->bModifyPitch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_bModifyPitch = { "bModifyPitch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBoostMotorSimComponent), &Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_bModifyPitch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_bModifyPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_bModifyPitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_PitchModifierInterpSpeed_MetaData[] = {
		{ "Category", "Pitch" },
		{ "Comment", "// Speed at which pitch approaches its target value\n" },
		{ "EditCondition", "bModifyPitch = true" },
		{ "ModuleRelativePath", "Public/BoostMotorSimComponent.h" },
		{ "ToolTip", "Speed at which pitch approaches its target value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_PitchModifierInterpSpeed = { "PitchModifierInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBoostMotorSimComponent, PitchModifierInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_PitchModifierInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_PitchModifierInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_BoostToPitchCurve_MetaData[] = {
		{ "Category", "Pitch" },
		{ "Comment", "// Curve to derive final pitch value (in playback speed) from boost strength\n" },
		{ "EditCondition", "bModifyPitch = true" },
		{ "ModuleRelativePath", "Public/BoostMotorSimComponent.h" },
		{ "ToolTip", "Curve to derive final pitch value (in playback speed) from boost strength" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_BoostToPitchCurve = { "BoostToPitchCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBoostMotorSimComponent, BoostToPitchCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_BoostToPitchCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_BoostToPitchCurve_MetaData)) }; // 1477693291
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBoostMotorSimComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_ThrottleScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_InterpExp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_InterpTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_ScaleThrottleWithBoostStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_bModifyPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_PitchModifierInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoostMotorSimComponent_Statics::NewProp_BoostToPitchCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoostMotorSimComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoostMotorSimComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoostMotorSimComponent_Statics::ClassParams = {
		&UBoostMotorSimComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBoostMotorSimComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBoostMotorSimComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBoostMotorSimComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBoostMotorSimComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoostMotorSimComponent()
	{
		if (!Z_Registration_Info_UClass_UBoostMotorSimComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoostMotorSimComponent.OuterSingleton, Z_Construct_UClass_UBoostMotorSimComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBoostMotorSimComponent.OuterSingleton;
	}
	template<> AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* StaticClass<UBoostMotorSimComponent>()
	{
		return UBoostMotorSimComponent::StaticClass();
	}
	UBoostMotorSimComponent::UBoostMotorSimComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoostMotorSimComponent);
	UBoostMotorSimComponent::~UBoostMotorSimComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_BoostMotorSimComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_BoostMotorSimComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBoostMotorSimComponent, UBoostMotorSimComponent::StaticClass, TEXT("UBoostMotorSimComponent"), &Z_Registration_Info_UClass_UBoostMotorSimComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoostMotorSimComponent), 2091064435U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_BoostMotorSimComponent_h_3418572828(TEXT("/Script/AudioMotorSimStandardComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_BoostMotorSimComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_BoostMotorSimComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
