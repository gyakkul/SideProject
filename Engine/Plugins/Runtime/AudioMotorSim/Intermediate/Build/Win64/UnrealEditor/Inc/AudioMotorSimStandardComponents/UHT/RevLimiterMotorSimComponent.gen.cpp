// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RevLimiterMotorSimComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRevLimiterMotorSimComponent() {}
// Cross Module References
	AUDIOMOTORSIM_API UClass* Z_Construct_UClass_UAudioMotorSimComponent();
	AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* Z_Construct_UClass_URevLimiterMotorSimComponent();
	AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* Z_Construct_UClass_URevLimiterMotorSimComponent_NoRegister();
	AUDIOMOTORSIMSTANDARDCOMPONENTS_API UFunction* Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnRevLimiterHit__DelegateSignature();
	AUDIOMOTORSIMSTANDARDCOMPONENTS_API UFunction* Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnRevLimiterStateChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AudioMotorSimStandardComponents();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnRevLimiterHit__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnRevLimiterHit__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RevLimiterMotorSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnRevLimiterHit__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioMotorSimStandardComponents, nullptr, "OnRevLimiterHit__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnRevLimiterHit__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnRevLimiterHit__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnRevLimiterHit__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnRevLimiterHit__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRevLimiterHit_DelegateWrapper(const FMulticastScriptDelegate& OnRevLimiterHit)
{
	OnRevLimiterHit.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnRevLimiterStateChanged__DelegateSignature_Statics
	{
		struct _Script_AudioMotorSimStandardComponents_eventOnRevLimiterStateChanged_Parms
		{
			bool bNewState;
		};
		static void NewProp_bNewState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnRevLimiterStateChanged__DelegateSignature_Statics::NewProp_bNewState_SetBit(void* Obj)
	{
		((_Script_AudioMotorSimStandardComponents_eventOnRevLimiterStateChanged_Parms*)Obj)->bNewState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnRevLimiterStateChanged__DelegateSignature_Statics::NewProp_bNewState = { "bNewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_AudioMotorSimStandardComponents_eventOnRevLimiterStateChanged_Parms), &Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnRevLimiterStateChanged__DelegateSignature_Statics::NewProp_bNewState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnRevLimiterStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnRevLimiterStateChanged__DelegateSignature_Statics::NewProp_bNewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnRevLimiterStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RevLimiterMotorSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnRevLimiterStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioMotorSimStandardComponents, nullptr, "OnRevLimiterStateChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnRevLimiterStateChanged__DelegateSignature_Statics::_Script_AudioMotorSimStandardComponents_eventOnRevLimiterStateChanged_Parms), Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnRevLimiterStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnRevLimiterStateChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnRevLimiterStateChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnRevLimiterStateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnRevLimiterStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnRevLimiterStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRevLimiterStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnRevLimiterStateChanged, bool bNewState)
{
	struct _Script_AudioMotorSimStandardComponents_eventOnRevLimiterStateChanged_Parms
	{
		bool bNewState;
	};
	_Script_AudioMotorSimStandardComponents_eventOnRevLimiterStateChanged_Parms Parms;
	Parms.bNewState=bNewState ? true : false;
	OnRevLimiterStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	void URevLimiterMotorSimComponent::StaticRegisterNativesURevLimiterMotorSimComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URevLimiterMotorSimComponent);
	UClass* Z_Construct_UClass_URevLimiterMotorSimComponent_NoRegister()
	{
		return URevLimiterMotorSimComponent::StaticClass();
	}
	struct Z_Construct_UClass_URevLimiterMotorSimComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimitTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LimitTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecelScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DecelScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AirMaxThrottleTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AirMaxThrottleTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SideSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SideSpeedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimiterMaxRpm_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LimiterMaxRpm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRevLimiterHit_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRevLimiterHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRevLimiterStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRevLimiterStateChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioMotorSimComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMotorSimStandardComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioMotorSim" },
		{ "Comment", "// Temporarily cuts throttle and reduces RPM when drifting or in the air\n" },
		{ "IncludePath", "RevLimiterMotorSimComponent.h" },
		{ "ModuleRelativePath", "Public/RevLimiterMotorSimComponent.h" },
		{ "ToolTip", "Temporarily cuts throttle and reduces RPM when drifting or in the air" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_LimitTime_MetaData[] = {
		{ "Category", "RevLimiter" },
		{ "ModuleRelativePath", "Public/RevLimiterMotorSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_LimitTime = { "LimitTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URevLimiterMotorSimComponent, LimitTime), METADATA_PARAMS(Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_LimitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_LimitTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_DecelScale_MetaData[] = {
		{ "Category", "RevLimiter" },
		{ "ModuleRelativePath", "Public/RevLimiterMotorSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_DecelScale = { "DecelScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URevLimiterMotorSimComponent, DecelScale), METADATA_PARAMS(Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_DecelScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_DecelScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_AirMaxThrottleTime_MetaData[] = {
		{ "Category", "RevLimiter" },
		{ "ModuleRelativePath", "Public/RevLimiterMotorSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_AirMaxThrottleTime = { "AirMaxThrottleTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URevLimiterMotorSimComponent, AirMaxThrottleTime), METADATA_PARAMS(Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_AirMaxThrottleTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_AirMaxThrottleTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_SideSpeedThreshold_MetaData[] = {
		{ "Category", "RevLimiter" },
		{ "ModuleRelativePath", "Public/RevLimiterMotorSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_SideSpeedThreshold = { "SideSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URevLimiterMotorSimComponent, SideSpeedThreshold), METADATA_PARAMS(Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_SideSpeedThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_SideSpeedThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_LimiterMaxRpm_MetaData[] = {
		{ "Category", "RevLimiter" },
		{ "ModuleRelativePath", "Public/RevLimiterMotorSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_LimiterMaxRpm = { "LimiterMaxRpm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URevLimiterMotorSimComponent, LimiterMaxRpm), METADATA_PARAMS(Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_LimiterMaxRpm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_LimiterMaxRpm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_OnRevLimiterHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/RevLimiterMotorSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_OnRevLimiterHit = { "OnRevLimiterHit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URevLimiterMotorSimComponent, OnRevLimiterHit), Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnRevLimiterHit__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_OnRevLimiterHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_OnRevLimiterHit_MetaData)) }; // 755411180
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_OnRevLimiterStateChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/RevLimiterMotorSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_OnRevLimiterStateChanged = { "OnRevLimiterStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URevLimiterMotorSimComponent, OnRevLimiterStateChanged), Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnRevLimiterStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_OnRevLimiterStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_OnRevLimiterStateChanged_MetaData)) }; // 523445467
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_LimitTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_DecelScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_AirMaxThrottleTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_SideSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_LimiterMaxRpm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_OnRevLimiterHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::NewProp_OnRevLimiterStateChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URevLimiterMotorSimComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::ClassParams = {
		&URevLimiterMotorSimComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URevLimiterMotorSimComponent()
	{
		if (!Z_Registration_Info_UClass_URevLimiterMotorSimComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URevLimiterMotorSimComponent.OuterSingleton, Z_Construct_UClass_URevLimiterMotorSimComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URevLimiterMotorSimComponent.OuterSingleton;
	}
	template<> AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* StaticClass<URevLimiterMotorSimComponent>()
	{
		return URevLimiterMotorSimComponent::StaticClass();
	}
	URevLimiterMotorSimComponent::URevLimiterMotorSimComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URevLimiterMotorSimComponent);
	URevLimiterMotorSimComponent::~URevLimiterMotorSimComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_RevLimiterMotorSimComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_RevLimiterMotorSimComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URevLimiterMotorSimComponent, URevLimiterMotorSimComponent::StaticClass, TEXT("URevLimiterMotorSimComponent"), &Z_Registration_Info_UClass_URevLimiterMotorSimComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URevLimiterMotorSimComponent), 3620071591U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_RevLimiterMotorSimComponent_h_12084041(TEXT("/Script/AudioMotorSimStandardComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_RevLimiterMotorSimComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_RevLimiterMotorSimComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
