// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VelocitySyncMotorSimComponent.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVelocitySyncMotorSimComponent() {}
// Cross Module References
	AUDIOMOTORSIM_API UClass* Z_Construct_UClass_UAudioMotorSimComponent();
	AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* Z_Construct_UClass_UVelocitySyncMotorSimComponent();
	AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* Z_Construct_UClass_UVelocitySyncMotorSimComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	UPackage* Z_Construct_UPackage__Script_AudioMotorSimStandardComponents();
// End Cross Module References
	void UVelocitySyncMotorSimComponent::StaticRegisterNativesUVelocitySyncMotorSimComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVelocitySyncMotorSimComponent);
	UClass* Z_Construct_UClass_UVelocitySyncMotorSimComponent_NoRegister()
	{
		return UVelocitySyncMotorSimComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoThrottleTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoThrottleTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedToRpmCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpeedToRpmCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstGearThrottleThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FirstGearThrottleThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioMotorSimComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMotorSimStandardComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioMotorSim" },
		{ "Comment", "// Sets Rpm directly from speed using a curve, if under a speed threshold or if the throttle is released for a period of time\n" },
		{ "IncludePath", "VelocitySyncMotorSimComponent.h" },
		{ "ModuleRelativePath", "Public/VelocitySyncMotorSimComponent.h" },
		{ "ToolTip", "Sets Rpm directly from speed using a curve, if under a speed threshold or if the throttle is released for a period of time" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::NewProp_NoThrottleTime_MetaData[] = {
		{ "Category", "VelocitySync" },
		{ "ModuleRelativePath", "Public/VelocitySyncMotorSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::NewProp_NoThrottleTime = { "NoThrottleTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVelocitySyncMotorSimComponent, NoThrottleTime), METADATA_PARAMS(Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::NewProp_NoThrottleTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::NewProp_NoThrottleTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::NewProp_SpeedThreshold_MetaData[] = {
		{ "Category", "VelocitySync" },
		{ "Comment", "// Speed below which gears will be ignored, and RPM will sync directly to velocity\n" },
		{ "ModuleRelativePath", "Public/VelocitySyncMotorSimComponent.h" },
		{ "ToolTip", "Speed below which gears will be ignored, and RPM will sync directly to velocity" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::NewProp_SpeedThreshold = { "SpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVelocitySyncMotorSimComponent, SpeedThreshold), METADATA_PARAMS(Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::NewProp_SpeedThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::NewProp_SpeedThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::NewProp_SpeedToRpmCurve_MetaData[] = {
		{ "Category", "VelocitySync" },
		{ "ModuleRelativePath", "Public/VelocitySyncMotorSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::NewProp_SpeedToRpmCurve = { "SpeedToRpmCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVelocitySyncMotorSimComponent, SpeedToRpmCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::NewProp_SpeedToRpmCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::NewProp_SpeedToRpmCurve_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "VelocitySync" },
		{ "ModuleRelativePath", "Public/VelocitySyncMotorSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVelocitySyncMotorSimComponent, InterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::NewProp_InterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::NewProp_InterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::NewProp_InterpTime_MetaData[] = {
		{ "Category", "VelocitySync" },
		{ "ModuleRelativePath", "Public/VelocitySyncMotorSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::NewProp_InterpTime = { "InterpTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVelocitySyncMotorSimComponent, InterpTime), METADATA_PARAMS(Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::NewProp_InterpTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::NewProp_InterpTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::NewProp_FirstGearThrottleThreshold_MetaData[] = {
		{ "Category", "VelocitySync" },
		{ "ModuleRelativePath", "Public/VelocitySyncMotorSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::NewProp_FirstGearThrottleThreshold = { "FirstGearThrottleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVelocitySyncMotorSimComponent, FirstGearThrottleThreshold), METADATA_PARAMS(Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::NewProp_FirstGearThrottleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::NewProp_FirstGearThrottleThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::NewProp_NoThrottleTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::NewProp_SpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::NewProp_SpeedToRpmCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::NewProp_InterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::NewProp_InterpTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::NewProp_FirstGearThrottleThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVelocitySyncMotorSimComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::ClassParams = {
		&UVelocitySyncMotorSimComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVelocitySyncMotorSimComponent()
	{
		if (!Z_Registration_Info_UClass_UVelocitySyncMotorSimComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVelocitySyncMotorSimComponent.OuterSingleton, Z_Construct_UClass_UVelocitySyncMotorSimComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVelocitySyncMotorSimComponent.OuterSingleton;
	}
	template<> AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* StaticClass<UVelocitySyncMotorSimComponent>()
	{
		return UVelocitySyncMotorSimComponent::StaticClass();
	}
	UVelocitySyncMotorSimComponent::UVelocitySyncMotorSimComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVelocitySyncMotorSimComponent);
	UVelocitySyncMotorSimComponent::~UVelocitySyncMotorSimComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_VelocitySyncMotorSimComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_VelocitySyncMotorSimComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVelocitySyncMotorSimComponent, UVelocitySyncMotorSimComponent::StaticClass, TEXT("UVelocitySyncMotorSimComponent"), &Z_Registration_Info_UClass_UVelocitySyncMotorSimComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVelocitySyncMotorSimComponent), 198493340U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_VelocitySyncMotorSimComponent_h_1966079618(TEXT("/Script/AudioMotorSimStandardComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_VelocitySyncMotorSimComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_VelocitySyncMotorSimComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
