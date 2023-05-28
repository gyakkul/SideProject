// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThrottleStateMotorSimComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrottleStateMotorSimComponent() {}
// Cross Module References
	AUDIOMOTORSIM_API UClass* Z_Construct_UClass_UAudioMotorSimComponent();
	AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* Z_Construct_UClass_UThrottleStateMotorSimComponent();
	AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* Z_Construct_UClass_UThrottleStateMotorSimComponent_NoRegister();
	AUDIOMOTORSIMSTANDARDCOMPONENTS_API UFunction* Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnEngineBlowoff__DelegateSignature();
	AUDIOMOTORSIMSTANDARDCOMPONENTS_API UFunction* Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnThrottleChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AudioMotorSimStandardComponents();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnEngineBlowoff__DelegateSignature_Statics
	{
		struct _Script_AudioMotorSimStandardComponents_eventOnEngineBlowoff_Parms
		{
			float BlowoffStrength;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlowoffStrength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnEngineBlowoff__DelegateSignature_Statics::NewProp_BlowoffStrength = { "BlowoffStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AudioMotorSimStandardComponents_eventOnEngineBlowoff_Parms, BlowoffStrength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnEngineBlowoff__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnEngineBlowoff__DelegateSignature_Statics::NewProp_BlowoffStrength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnEngineBlowoff__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThrottleStateMotorSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnEngineBlowoff__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioMotorSimStandardComponents, nullptr, "OnEngineBlowoff__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnEngineBlowoff__DelegateSignature_Statics::_Script_AudioMotorSimStandardComponents_eventOnEngineBlowoff_Parms), Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnEngineBlowoff__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnEngineBlowoff__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnEngineBlowoff__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnEngineBlowoff__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnEngineBlowoff__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnEngineBlowoff__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnEngineBlowoff_DelegateWrapper(const FMulticastScriptDelegate& OnEngineBlowoff, float BlowoffStrength)
{
	struct _Script_AudioMotorSimStandardComponents_eventOnEngineBlowoff_Parms
	{
		float BlowoffStrength;
	};
	_Script_AudioMotorSimStandardComponents_eventOnEngineBlowoff_Parms Parms;
	Parms.BlowoffStrength=BlowoffStrength;
	OnEngineBlowoff.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnThrottleChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnThrottleChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThrottleStateMotorSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnThrottleChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioMotorSimStandardComponents, nullptr, "OnThrottleChanged__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnThrottleChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnThrottleChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnThrottleChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnThrottleChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnThrottleChanged_DelegateWrapper(const FMulticastScriptDelegate& OnThrottleChanged)
{
	OnThrottleChanged.ProcessMulticastDelegate<UObject>(NULL);
}
	void UThrottleStateMotorSimComponent::StaticRegisterNativesUThrottleStateMotorSimComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UThrottleStateMotorSimComponent);
	UClass* Z_Construct_UClass_UThrottleStateMotorSimComponent_NoRegister()
	{
		return UThrottleStateMotorSimComponent::StaticClass();
	}
	struct Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnThrottleEngaged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnThrottleEngaged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnThrottleReleased_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnThrottleReleased;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEngineBlowoff_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEngineBlowoff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlowoffMinThrottleTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlowoffMinThrottleTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioMotorSimComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMotorSimStandardComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioMotorSim" },
		{ "Comment", "// Provides events for when the throttle changes state\n" },
		{ "IncludePath", "ThrottleStateMotorSimComponent.h" },
		{ "ModuleRelativePath", "Public/ThrottleStateMotorSimComponent.h" },
		{ "ToolTip", "Provides events for when the throttle changes state" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics::NewProp_OnThrottleEngaged_MetaData[] = {
		{ "Category", "ThrottleState" },
		{ "ModuleRelativePath", "Public/ThrottleStateMotorSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics::NewProp_OnThrottleEngaged = { "OnThrottleEngaged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UThrottleStateMotorSimComponent, OnThrottleEngaged), Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnThrottleChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics::NewProp_OnThrottleEngaged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics::NewProp_OnThrottleEngaged_MetaData)) }; // 3838153126
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics::NewProp_OnThrottleReleased_MetaData[] = {
		{ "Category", "ThrottleState" },
		{ "ModuleRelativePath", "Public/ThrottleStateMotorSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics::NewProp_OnThrottleReleased = { "OnThrottleReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UThrottleStateMotorSimComponent, OnThrottleReleased), Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnThrottleChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics::NewProp_OnThrottleReleased_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics::NewProp_OnThrottleReleased_MetaData)) }; // 3838153126
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics::NewProp_OnEngineBlowoff_MetaData[] = {
		{ "Category", "ThrottleState" },
		{ "Comment", "// Fires when the throttle is released, keeping track of how long the throttle was held for\n" },
		{ "ModuleRelativePath", "Public/ThrottleStateMotorSimComponent.h" },
		{ "ToolTip", "Fires when the throttle is released, keeping track of how long the throttle was held for" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics::NewProp_OnEngineBlowoff = { "OnEngineBlowoff", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UThrottleStateMotorSimComponent, OnEngineBlowoff), Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnEngineBlowoff__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics::NewProp_OnEngineBlowoff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics::NewProp_OnEngineBlowoff_MetaData)) }; // 4098481620
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics::NewProp_BlowoffMinThrottleTime_MetaData[] = {
		{ "Category", "ThrottleState" },
		{ "ModuleRelativePath", "Public/ThrottleStateMotorSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics::NewProp_BlowoffMinThrottleTime = { "BlowoffMinThrottleTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UThrottleStateMotorSimComponent, BlowoffMinThrottleTime), METADATA_PARAMS(Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics::NewProp_BlowoffMinThrottleTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics::NewProp_BlowoffMinThrottleTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics::NewProp_OnThrottleEngaged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics::NewProp_OnThrottleReleased,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics::NewProp_OnEngineBlowoff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics::NewProp_BlowoffMinThrottleTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThrottleStateMotorSimComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics::ClassParams = {
		&UThrottleStateMotorSimComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UThrottleStateMotorSimComponent()
	{
		if (!Z_Registration_Info_UClass_UThrottleStateMotorSimComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UThrottleStateMotorSimComponent.OuterSingleton, Z_Construct_UClass_UThrottleStateMotorSimComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UThrottleStateMotorSimComponent.OuterSingleton;
	}
	template<> AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* StaticClass<UThrottleStateMotorSimComponent>()
	{
		return UThrottleStateMotorSimComponent::StaticClass();
	}
	UThrottleStateMotorSimComponent::UThrottleStateMotorSimComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UThrottleStateMotorSimComponent);
	UThrottleStateMotorSimComponent::~UThrottleStateMotorSimComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_ThrottleStateMotorSimComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_ThrottleStateMotorSimComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UThrottleStateMotorSimComponent, UThrottleStateMotorSimComponent::StaticClass, TEXT("UThrottleStateMotorSimComponent"), &Z_Registration_Info_UClass_UThrottleStateMotorSimComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UThrottleStateMotorSimComponent), 1579414793U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_ThrottleStateMotorSimComponent_h_1904867709(TEXT("/Script/AudioMotorSimStandardComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_ThrottleStateMotorSimComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_ThrottleStateMotorSimComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
