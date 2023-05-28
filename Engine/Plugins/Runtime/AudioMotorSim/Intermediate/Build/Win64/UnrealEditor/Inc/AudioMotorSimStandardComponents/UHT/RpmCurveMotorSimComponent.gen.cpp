// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RpmCurveMotorSimComponent.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRpmCurveMotorSimComponent() {}
// Cross Module References
	AUDIOMOTORSIM_API UClass* Z_Construct_UClass_UAudioMotorSimComponent();
	AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* Z_Construct_UClass_URpmCurveMotorSimComponent();
	AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* Z_Construct_UClass_URpmCurveMotorSimComponent_NoRegister();
	AUDIOMOTORSIMSTANDARDCOMPONENTS_API UFunction* Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnGearChangedEvent__DelegateSignature();
	AUDIOMOTORSIMSTANDARDCOMPONENTS_API UScriptStruct* Z_Construct_UScriptStruct_FMotorSimGearCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	UPackage* Z_Construct_UPackage__Script_AudioMotorSimStandardComponents();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MotorSimGearCurve;
class UScriptStruct* FMotorSimGearCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MotorSimGearCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MotorSimGearCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotorSimGearCurve, (UObject*)Z_Construct_UPackage__Script_AudioMotorSimStandardComponents(), TEXT("MotorSimGearCurve"));
	}
	return Z_Registration_Info_UScriptStruct_MotorSimGearCurve.OuterSingleton;
}
template<> AUDIOMOTORSIMSTANDARDCOMPONENTS_API UScriptStruct* StaticStruct<FMotorSimGearCurve>()
{
	return FMotorSimGearCurve::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMotorSimGearCurve_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RpmCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RpmCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedTopThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedTopThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotorSimGearCurve_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RpmCurveMotorSimComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMotorSimGearCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotorSimGearCurve>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotorSimGearCurve_Statics::NewProp_RpmCurve_MetaData[] = {
		{ "Category", "Gears" },
		{ "Comment", "// normalized curve, 0-1, of the output RPM from the last gear's top speed to this one's\n" },
		{ "ModuleRelativePath", "Public/RpmCurveMotorSimComponent.h" },
		{ "ToolTip", "normalized curve, 0-1, of the output RPM from the last gear's top speed to this one's" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotorSimGearCurve_Statics::NewProp_RpmCurve = { "RpmCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotorSimGearCurve, RpmCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotorSimGearCurve_Statics::NewProp_RpmCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotorSimGearCurve_Statics::NewProp_RpmCurve_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotorSimGearCurve_Statics::NewProp_SpeedTopThreshold_MetaData[] = {
		{ "Category", "Gears" },
		{ "Comment", "// Speed at which the next gear starts\n" },
		{ "ModuleRelativePath", "Public/RpmCurveMotorSimComponent.h" },
		{ "ToolTip", "Speed at which the next gear starts" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotorSimGearCurve_Statics::NewProp_SpeedTopThreshold = { "SpeedTopThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotorSimGearCurve, SpeedTopThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotorSimGearCurve_Statics::NewProp_SpeedTopThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotorSimGearCurve_Statics::NewProp_SpeedTopThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMotorSimGearCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotorSimGearCurve_Statics::NewProp_RpmCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotorSimGearCurve_Statics::NewProp_SpeedTopThreshold,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMotorSimGearCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMotorSimStandardComponents,
		nullptr,
		&NewStructOps,
		"MotorSimGearCurve",
		sizeof(FMotorSimGearCurve),
		alignof(FMotorSimGearCurve),
		Z_Construct_UScriptStruct_FMotorSimGearCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotorSimGearCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMotorSimGearCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotorSimGearCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMotorSimGearCurve()
	{
		if (!Z_Registration_Info_UScriptStruct_MotorSimGearCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MotorSimGearCurve.InnerSingleton, Z_Construct_UScriptStruct_FMotorSimGearCurve_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MotorSimGearCurve.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnGearChangedEvent__DelegateSignature_Statics
	{
		struct _Script_AudioMotorSimStandardComponents_eventOnGearChangedEvent_Parms
		{
			int32 NewGear;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewGear;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnGearChangedEvent__DelegateSignature_Statics::NewProp_NewGear = { "NewGear", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AudioMotorSimStandardComponents_eventOnGearChangedEvent_Parms, NewGear), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnGearChangedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnGearChangedEvent__DelegateSignature_Statics::NewProp_NewGear,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnGearChangedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RpmCurveMotorSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnGearChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioMotorSimStandardComponents, nullptr, "OnGearChangedEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnGearChangedEvent__DelegateSignature_Statics::_Script_AudioMotorSimStandardComponents_eventOnGearChangedEvent_Parms), Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnGearChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnGearChangedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnGearChangedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnGearChangedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnGearChangedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnGearChangedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGearChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnGearChangedEvent, int32 NewGear)
{
	struct _Script_AudioMotorSimStandardComponents_eventOnGearChangedEvent_Parms
	{
		int32 NewGear;
	};
	_Script_AudioMotorSimStandardComponents_eventOnGearChangedEvent_Parms Parms;
	Parms.NewGear=NewGear;
	OnGearChangedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	void URpmCurveMotorSimComponent::StaticRegisterNativesURpmCurveMotorSimComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URpmCurveMotorSimComponent);
	UClass* Z_Construct_UClass_URpmCurveMotorSimComponent_NoRegister()
	{
		return URpmCurveMotorSimComponent::StaticClass();
	}
	struct Z_Construct_UClass_URpmCurveMotorSimComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Gears_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gears_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Gears;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUpShift_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpShift;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDownShift_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDownShift;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioMotorSimComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMotorSimStandardComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioMotorSim" },
		{ "Comment", "// Derives Gear and RPM directly from speed using hand drawn curves and gear thresholds\n" },
		{ "IncludePath", "RpmCurveMotorSimComponent.h" },
		{ "ModuleRelativePath", "Public/RpmCurveMotorSimComponent.h" },
		{ "ToolTip", "Derives Gear and RPM directly from speed using hand drawn curves and gear thresholds" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::NewProp_Gears_Inner = { "Gears", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMotorSimGearCurve, METADATA_PARAMS(nullptr, 0) }; // 940430139
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::NewProp_Gears_MetaData[] = {
		{ "Category", "Gears" },
		{ "ModuleRelativePath", "Public/RpmCurveMotorSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::NewProp_Gears = { "Gears", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URpmCurveMotorSimComponent, Gears), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::NewProp_Gears_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::NewProp_Gears_MetaData)) }; // 940430139
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "Gears" },
		{ "ModuleRelativePath", "Public/RpmCurveMotorSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URpmCurveMotorSimComponent, InterpSpeed), METADATA_PARAMS(Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::NewProp_InterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::NewProp_InterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::NewProp_OnUpShift_MetaData[] = {
		{ "ModuleRelativePath", "Public/RpmCurveMotorSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::NewProp_OnUpShift = { "OnUpShift", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URpmCurveMotorSimComponent, OnUpShift), Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnGearChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::NewProp_OnUpShift_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::NewProp_OnUpShift_MetaData)) }; // 288037182
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::NewProp_OnDownShift_MetaData[] = {
		{ "ModuleRelativePath", "Public/RpmCurveMotorSimComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::NewProp_OnDownShift = { "OnDownShift", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URpmCurveMotorSimComponent, OnDownShift), Z_Construct_UDelegateFunction_AudioMotorSimStandardComponents_OnGearChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::NewProp_OnDownShift_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::NewProp_OnDownShift_MetaData)) }; // 288037182
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::NewProp_Gears_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::NewProp_Gears,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::NewProp_InterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::NewProp_OnUpShift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::NewProp_OnDownShift,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URpmCurveMotorSimComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::ClassParams = {
		&URpmCurveMotorSimComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URpmCurveMotorSimComponent()
	{
		if (!Z_Registration_Info_UClass_URpmCurveMotorSimComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URpmCurveMotorSimComponent.OuterSingleton, Z_Construct_UClass_URpmCurveMotorSimComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URpmCurveMotorSimComponent.OuterSingleton;
	}
	template<> AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* StaticClass<URpmCurveMotorSimComponent>()
	{
		return URpmCurveMotorSimComponent::StaticClass();
	}
	URpmCurveMotorSimComponent::URpmCurveMotorSimComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URpmCurveMotorSimComponent);
	URpmCurveMotorSimComponent::~URpmCurveMotorSimComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_RpmCurveMotorSimComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_RpmCurveMotorSimComponent_h_Statics::ScriptStructInfo[] = {
		{ FMotorSimGearCurve::StaticStruct, Z_Construct_UScriptStruct_FMotorSimGearCurve_Statics::NewStructOps, TEXT("MotorSimGearCurve"), &Z_Registration_Info_UScriptStruct_MotorSimGearCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMotorSimGearCurve), 940430139U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_RpmCurveMotorSimComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URpmCurveMotorSimComponent, URpmCurveMotorSimComponent::StaticClass, TEXT("URpmCurveMotorSimComponent"), &Z_Registration_Info_UClass_URpmCurveMotorSimComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URpmCurveMotorSimComponent), 1587109333U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_RpmCurveMotorSimComponent_h_2669216592(TEXT("/Script/AudioMotorSimStandardComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_RpmCurveMotorSimComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_RpmCurveMotorSimComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_RpmCurveMotorSimComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_RpmCurveMotorSimComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
