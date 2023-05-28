// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/ApplicationLifecycleComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApplicationLifecycleComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UApplicationLifecycleComponent();
	ENGINE_API UClass* Z_Construct_UClass_UApplicationLifecycleComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETemperatureSeverityType();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETemperatureSeverityType;
	static UEnum* ETemperatureSeverityType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETemperatureSeverityType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETemperatureSeverityType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETemperatureSeverityType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETemperatureSeverityType"));
		}
		return Z_Registration_Info_UEnum_ETemperatureSeverityType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETemperatureSeverityType>()
	{
		return ETemperatureSeverityType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETemperatureSeverityType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETemperatureSeverityType_Statics::Enumerators[] = {
		{ "ETemperatureSeverityType::Unknown", (int64)ETemperatureSeverityType::Unknown },
		{ "ETemperatureSeverityType::Good", (int64)ETemperatureSeverityType::Good },
		{ "ETemperatureSeverityType::Bad", (int64)ETemperatureSeverityType::Bad },
		{ "ETemperatureSeverityType::Serious", (int64)ETemperatureSeverityType::Serious },
		{ "ETemperatureSeverityType::Critical", (int64)ETemperatureSeverityType::Critical },
		{ "ETemperatureSeverityType::NumSeverities", (int64)ETemperatureSeverityType::NumSeverities },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETemperatureSeverityType_Statics::Enum_MetaDataParams[] = {
		{ "Bad.Name", "ETemperatureSeverityType::Bad" },
		{ "BlueprintType", "true" },
		{ "Comment", "// A parallel enum to the temperature change severity enum in CoreDelegates\n// Note if you change this, then you must change the one in CoreDelegates\n" },
		{ "Critical.Name", "ETemperatureSeverityType::Critical" },
		{ "Good.Name", "ETemperatureSeverityType::Good" },
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "NumSeverities.Name", "ETemperatureSeverityType::NumSeverities" },
		{ "Serious.Name", "ETemperatureSeverityType::Serious" },
		{ "ToolTip", "A parallel enum to the temperature change severity enum in CoreDelegates\nNote if you change this, then you must change the one in CoreDelegates" },
		{ "Unknown.Name", "ETemperatureSeverityType::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETemperatureSeverityType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETemperatureSeverityType",
		"ETemperatureSeverityType",
		Z_Construct_UEnum_Engine_ETemperatureSeverityType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETemperatureSeverityType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETemperatureSeverityType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETemperatureSeverityType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETemperatureSeverityType()
	{
		if (!Z_Registration_Info_UEnum_ETemperatureSeverityType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETemperatureSeverityType.InnerSingleton, Z_Construct_UEnum_Engine_ETemperatureSeverityType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETemperatureSeverityType.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApplicationLifecycleComponent, nullptr, "ApplicationLifetimeDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UApplicationLifecycleComponent::FApplicationLifetimeDelegate_DelegateWrapper(const FMulticastScriptDelegate& ApplicationLifetimeDelegate)
{
	ApplicationLifetimeDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics
	{
		struct ApplicationLifecycleComponent_eventOnTemperatureChangeDelegate_Parms
		{
			ETemperatureSeverityType Severity;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Severity_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Severity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::NewProp_Severity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::NewProp_Severity = { "Severity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApplicationLifecycleComponent_eventOnTemperatureChangeDelegate_Parms, Severity), Z_Construct_UEnum_Engine_ETemperatureSeverityType, METADATA_PARAMS(nullptr, 0) }; // 3012398250
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::NewProp_Severity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::NewProp_Severity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApplicationLifecycleComponent, nullptr, "OnTemperatureChangeDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::ApplicationLifecycleComponent_eventOnTemperatureChangeDelegate_Parms), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UApplicationLifecycleComponent::FOnTemperatureChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnTemperatureChangeDelegate, ETemperatureSeverityType Severity)
{
	struct ApplicationLifecycleComponent_eventOnTemperatureChangeDelegate_Parms
	{
		ETemperatureSeverityType Severity;
	};
	ApplicationLifecycleComponent_eventOnTemperatureChangeDelegate_Parms Parms;
	Parms.Severity=Severity;
	OnTemperatureChangeDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics
	{
		struct ApplicationLifecycleComponent_eventOnLowPowerModeDelegate_Parms
		{
			bool bInLowPowerMode;
		};
		static void NewProp_bInLowPowerMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInLowPowerMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::NewProp_bInLowPowerMode_SetBit(void* Obj)
	{
		((ApplicationLifecycleComponent_eventOnLowPowerModeDelegate_Parms*)Obj)->bInLowPowerMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::NewProp_bInLowPowerMode = { "bInLowPowerMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ApplicationLifecycleComponent_eventOnLowPowerModeDelegate_Parms), &Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::NewProp_bInLowPowerMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::NewProp_bInLowPowerMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApplicationLifecycleComponent, nullptr, "OnLowPowerModeDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::ApplicationLifecycleComponent_eventOnLowPowerModeDelegate_Parms), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UApplicationLifecycleComponent::FOnLowPowerModeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLowPowerModeDelegate, bool bInLowPowerMode)
{
	struct ApplicationLifecycleComponent_eventOnLowPowerModeDelegate_Parms
	{
		bool bInLowPowerMode;
	};
	ApplicationLifecycleComponent_eventOnLowPowerModeDelegate_Parms Parms;
	Parms.bInLowPowerMode=bInLowPowerMode ? true : false;
	OnLowPowerModeDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics
	{
		struct ApplicationLifecycleComponent_eventApplicationStartupArgumentsDelegate_Parms
		{
			TArray<FString> StartupArguments;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_StartupArguments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartupArguments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StartupArguments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments_Inner = { "StartupArguments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments = { "StartupArguments", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApplicationLifecycleComponent_eventApplicationStartupArgumentsDelegate_Parms, StartupArguments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApplicationLifecycleComponent, nullptr, "ApplicationStartupArgumentsDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::ApplicationLifecycleComponent_eventApplicationStartupArgumentsDelegate_Parms), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UApplicationLifecycleComponent::FApplicationStartupArgumentsDelegate_DelegateWrapper(const FMulticastScriptDelegate& ApplicationStartupArgumentsDelegate, TArray<FString> const& StartupArguments)
{
	struct ApplicationLifecycleComponent_eventApplicationStartupArgumentsDelegate_Parms
	{
		TArray<FString> StartupArguments;
	};
	ApplicationLifecycleComponent_eventApplicationStartupArgumentsDelegate_Parms Parms;
	Parms.StartupArguments=StartupArguments;
	ApplicationStartupArgumentsDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UApplicationLifecycleComponent::StaticRegisterNativesUApplicationLifecycleComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApplicationLifecycleComponent);
	UClass* Z_Construct_UClass_UApplicationLifecycleComponent_NoRegister()
	{
		return UApplicationLifecycleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UApplicationLifecycleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationWillDeactivateDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationWillDeactivateDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationHasReactivatedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationHasReactivatedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationWillEnterBackgroundDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationWillEnterBackgroundDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationHasEnteredForegroundDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationHasEnteredForegroundDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationWillTerminateDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationWillTerminateDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationShouldUnloadResourcesDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationShouldUnloadResourcesDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationReceivedStartupArgumentsDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationReceivedStartupArgumentsDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTemperatureChangeDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTemperatureChangeDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLowPowerModeDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLowPowerModeDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UApplicationLifecycleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UApplicationLifecycleComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature, "ApplicationLifetimeDelegate__DelegateSignature" }, // 2712591929
		{ &Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature, "ApplicationStartupArgumentsDelegate__DelegateSignature" }, // 2202041253
		{ &Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature, "OnLowPowerModeDelegate__DelegateSignature" }, // 805253779
		{ &Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature, "OnTemperatureChangeDelegate__DelegateSignature" }, // 1397939648
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplicationLifecycleComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Utility" },
		{ "Comment", "/** Component to handle receiving notifications from the OS about application state (activated, suspended, termination, etc). */" },
		{ "HideCategories", "Activation Components|Activation Collision" },
		{ "IncludePath", "Components/ApplicationLifecycleComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "ToolTip", "Component to handle receiving notifications from the OS about application state (activated, suspended, termination, etc)." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillDeactivateDelegate_MetaData[] = {
		{ "Comment", "// This is called when the application is about to be deactivated (e.g., due to a phone call or SMS or the sleep button). \n// The game should be paused if possible, etc... \n" },
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "ToolTip", "This is called when the application is about to be deactivated (e.g., due to a phone call or SMS or the sleep button).\nThe game should be paused if possible, etc..." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillDeactivateDelegate = { "ApplicationWillDeactivateDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApplicationLifecycleComponent, ApplicationWillDeactivateDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillDeactivateDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillDeactivateDelegate_MetaData)) }; // 2712591929
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationHasReactivatedDelegate_MetaData[] = {
		{ "Comment", "// Called when the application has been reactivated (reverse any processing done in the Deactivate delegate)\n" },
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "ToolTip", "Called when the application has been reactivated (reverse any processing done in the Deactivate delegate)" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationHasReactivatedDelegate = { "ApplicationHasReactivatedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApplicationLifecycleComponent, ApplicationHasReactivatedDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationHasReactivatedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationHasReactivatedDelegate_MetaData)) }; // 2712591929
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillEnterBackgroundDelegate_MetaData[] = {
		{ "Comment", "// This is called when the application is being backgrounded (e.g., due to switching  \n// to another app or closing it via the home button)  \n// The game should release shared resources, save state, etc..., since it can be  \n// terminated from the background state without any further warning.  \n" },
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "ToolTip", "This is called when the application is being backgrounded (e.g., due to switching\nto another app or closing it via the home button)\nThe game should release shared resources, save state, etc..., since it can be\nterminated from the background state without any further warning." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillEnterBackgroundDelegate = { "ApplicationWillEnterBackgroundDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApplicationLifecycleComponent, ApplicationWillEnterBackgroundDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillEnterBackgroundDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillEnterBackgroundDelegate_MetaData)) }; // 2712591929
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationHasEnteredForegroundDelegate_MetaData[] = {
		{ "Comment", "// Called when the application is returning to the foreground (reverse any processing done in the EnterBackground delegate)\n" },
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "ToolTip", "Called when the application is returning to the foreground (reverse any processing done in the EnterBackground delegate)" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationHasEnteredForegroundDelegate = { "ApplicationHasEnteredForegroundDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApplicationLifecycleComponent, ApplicationHasEnteredForegroundDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationHasEnteredForegroundDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationHasEnteredForegroundDelegate_MetaData)) }; // 2712591929
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillTerminateDelegate_MetaData[] = {
		{ "Comment", "// This *may* be called when the application is getting terminated by the OS.  \n// There is no guarantee that this will ever be called on a mobile device,  \n// save state when ApplicationWillEnterBackgroundDelegate is called instead.  \n" },
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "ToolTip", "This *may* be called when the application is getting terminated by the OS.\nThere is no guarantee that this will ever be called on a mobile device,\nsave state when ApplicationWillEnterBackgroundDelegate is called instead." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillTerminateDelegate = { "ApplicationWillTerminateDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApplicationLifecycleComponent, ApplicationWillTerminateDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillTerminateDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillTerminateDelegate_MetaData)) }; // 2712591929
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationShouldUnloadResourcesDelegate_MetaData[] = {
		{ "Comment", "// Called when the OS is running low on resources and asks the application to free up any cached resources, drop graphics quality etc.\n" },
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "ToolTip", "Called when the OS is running low on resources and asks the application to free up any cached resources, drop graphics quality etc." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationShouldUnloadResourcesDelegate = { "ApplicationShouldUnloadResourcesDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApplicationLifecycleComponent, ApplicationShouldUnloadResourcesDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationShouldUnloadResourcesDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationShouldUnloadResourcesDelegate_MetaData)) }; // 2712591929
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationReceivedStartupArgumentsDelegate_MetaData[] = {
		{ "Comment", "// Called with arguments passed to the application on statup, perhaps meta data passed on by another application which launched this one.\n" },
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "ToolTip", "Called with arguments passed to the application on statup, perhaps meta data passed on by another application which launched this one." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationReceivedStartupArgumentsDelegate = { "ApplicationReceivedStartupArgumentsDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApplicationLifecycleComponent, ApplicationReceivedStartupArgumentsDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationReceivedStartupArgumentsDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationReceivedStartupArgumentsDelegate_MetaData)) }; // 2202041253
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_OnTemperatureChangeDelegate_MetaData[] = {
		{ "Comment", "// Called when temperature level has changed, and receives the severity \n" },
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "ToolTip", "Called when temperature level has changed, and receives the severity" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_OnTemperatureChangeDelegate = { "OnTemperatureChangeDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApplicationLifecycleComponent, OnTemperatureChangeDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_OnTemperatureChangeDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_OnTemperatureChangeDelegate_MetaData)) }; // 1397939648
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_OnLowPowerModeDelegate_MetaData[] = {
		{ "Comment", "// Called when we are in low power mode\n" },
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "ToolTip", "Called when we are in low power mode" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_OnLowPowerModeDelegate = { "OnLowPowerModeDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApplicationLifecycleComponent, OnLowPowerModeDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_OnLowPowerModeDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_OnLowPowerModeDelegate_MetaData)) }; // 805253779
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApplicationLifecycleComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillDeactivateDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationHasReactivatedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillEnterBackgroundDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationHasEnteredForegroundDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillTerminateDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationShouldUnloadResourcesDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationReceivedStartupArgumentsDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_OnTemperatureChangeDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_OnLowPowerModeDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApplicationLifecycleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApplicationLifecycleComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UApplicationLifecycleComponent_Statics::ClassParams = {
		&UApplicationLifecycleComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UApplicationLifecycleComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApplicationLifecycleComponent()
	{
		if (!Z_Registration_Info_UClass_UApplicationLifecycleComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApplicationLifecycleComponent.OuterSingleton, Z_Construct_UClass_UApplicationLifecycleComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApplicationLifecycleComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UApplicationLifecycleComponent>()
	{
		return UApplicationLifecycleComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApplicationLifecycleComponent);
	UApplicationLifecycleComponent::~UApplicationLifecycleComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_Statics::EnumInfo[] = {
		{ ETemperatureSeverityType_StaticEnum, TEXT("ETemperatureSeverityType"), &Z_Registration_Info_UEnum_ETemperatureSeverityType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3012398250U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApplicationLifecycleComponent, UApplicationLifecycleComponent::StaticClass, TEXT("UApplicationLifecycleComponent"), &Z_Registration_Info_UClass_UApplicationLifecycleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApplicationLifecycleComponent), 3838328031U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_3106283535(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
