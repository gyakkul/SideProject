// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusEventComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusEventComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	OCULUSHMD_API UClass* Z_Construct_UClass_UDEPRECATED_UOculusEventComponent();
	OCULUSHMD_API UClass* Z_Construct_UClass_UDEPRECATED_UOculusEventComponent_NoRegister();
	OCULUSHMD_API UFunction* Z_Construct_UDelegateFunction_UDEPRECATED_UOculusEventComponent_OculusDisplayRefreshRateChangedEventDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OculusHMD();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UDEPRECATED_UOculusEventComponent_OculusDisplayRefreshRateChangedEventDelegate__DelegateSignature_Statics
	{
		struct UOculusEventComponent_eventOculusDisplayRefreshRateChangedEventDelegate_Parms
		{
			float fromRefreshRate;
			float toRefreshRate;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_fromRefreshRate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_toRefreshRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UDEPRECATED_UOculusEventComponent_OculusDisplayRefreshRateChangedEventDelegate__DelegateSignature_Statics::NewProp_fromRefreshRate = { "fromRefreshRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusEventComponent_eventOculusDisplayRefreshRateChangedEventDelegate_Parms, fromRefreshRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UDEPRECATED_UOculusEventComponent_OculusDisplayRefreshRateChangedEventDelegate__DelegateSignature_Statics::NewProp_toRefreshRate = { "toRefreshRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusEventComponent_eventOculusDisplayRefreshRateChangedEventDelegate_Parms, toRefreshRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UDEPRECATED_UOculusEventComponent_OculusDisplayRefreshRateChangedEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDEPRECATED_UOculusEventComponent_OculusDisplayRefreshRateChangedEventDelegate__DelegateSignature_Statics::NewProp_fromRefreshRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDEPRECATED_UOculusEventComponent_OculusDisplayRefreshRateChangedEventDelegate__DelegateSignature_Statics::NewProp_toRefreshRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UDEPRECATED_UOculusEventComponent_OculusDisplayRefreshRateChangedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OculusEventComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UDEPRECATED_UOculusEventComponent_OculusDisplayRefreshRateChangedEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusEventComponent, nullptr, "OculusDisplayRefreshRateChangedEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UDEPRECATED_UOculusEventComponent_OculusDisplayRefreshRateChangedEventDelegate__DelegateSignature_Statics::UOculusEventComponent_eventOculusDisplayRefreshRateChangedEventDelegate_Parms), Z_Construct_UDelegateFunction_UDEPRECATED_UOculusEventComponent_OculusDisplayRefreshRateChangedEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDEPRECATED_UOculusEventComponent_OculusDisplayRefreshRateChangedEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UDEPRECATED_UOculusEventComponent_OculusDisplayRefreshRateChangedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDEPRECATED_UOculusEventComponent_OculusDisplayRefreshRateChangedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UDEPRECATED_UOculusEventComponent_OculusDisplayRefreshRateChangedEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UDEPRECATED_UOculusEventComponent_OculusDisplayRefreshRateChangedEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UDEPRECATED_UOculusEventComponent::FOculusDisplayRefreshRateChangedEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& OculusDisplayRefreshRateChangedEventDelegate, float fromRefreshRate, float toRefreshRate)
{
	struct UOculusEventComponent_eventOculusDisplayRefreshRateChangedEventDelegate_Parms
	{
		float fromRefreshRate;
		float toRefreshRate;
	};
	UOculusEventComponent_eventOculusDisplayRefreshRateChangedEventDelegate_Parms Parms;
	Parms.fromRefreshRate=fromRefreshRate;
	Parms.toRefreshRate=toRefreshRate;
	OculusDisplayRefreshRateChangedEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UDEPRECATED_UOculusEventComponent::StaticRegisterNativesUDEPRECATED_UOculusEventComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_UOculusEventComponent);
	UClass* Z_Construct_UClass_UDEPRECATED_UOculusEventComponent_NoRegister()
	{
		return UDEPRECATED_UOculusEventComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_UOculusEventComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusDisplayRefreshRateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OculusDisplayRefreshRateChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_UOculusEventComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusHMD,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UDEPRECATED_UOculusEventComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UDEPRECATED_UOculusEventComponent_OculusDisplayRefreshRateChangedEventDelegate__DelegateSignature, "OculusDisplayRefreshRateChangedEventDelegate__DelegateSignature" }, // 3530941368
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusEventComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "OculusHMD" },
		{ "DeprecationMessage", "OculusVR plugin is deprecated; please use the built-in OpenXR plugin or OculusXR plugin from the Marketplace." },
		{ "IncludePath", "OculusEventComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusEventComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusEventComponent_Statics::NewProp_OculusDisplayRefreshRateChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusEventComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDEPRECATED_UOculusEventComponent_Statics::NewProp_OculusDisplayRefreshRateChanged = { "OculusDisplayRefreshRateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusEventComponent, OculusDisplayRefreshRateChanged), Z_Construct_UDelegateFunction_UDEPRECATED_UOculusEventComponent_OculusDisplayRefreshRateChangedEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusEventComponent_Statics::NewProp_OculusDisplayRefreshRateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusEventComponent_Statics::NewProp_OculusDisplayRefreshRateChanged_MetaData)) }; // 3530941368
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_UOculusEventComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusEventComponent_Statics::NewProp_OculusDisplayRefreshRateChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_UOculusEventComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_UOculusEventComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_UOculusEventComponent_Statics::ClassParams = {
		&UDEPRECATED_UOculusEventComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UDEPRECATED_UOculusEventComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusEventComponent_Statics::PropPointers),
		0,
		0x02B002A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusEventComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusEventComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_UOculusEventComponent()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_UOculusEventComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_UOculusEventComponent.OuterSingleton, Z_Construct_UClass_UDEPRECATED_UOculusEventComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_UOculusEventComponent.OuterSingleton;
	}
	template<> OCULUSHMD_API UClass* StaticClass<UDEPRECATED_UOculusEventComponent>()
	{
		return UDEPRECATED_UOculusEventComponent::StaticClass();
	}
	UDEPRECATED_UOculusEventComponent::UDEPRECATED_UOculusEventComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_UOculusEventComponent);
	UDEPRECATED_UOculusEventComponent::~UDEPRECATED_UOculusEventComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusEventComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusEventComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_UOculusEventComponent, UDEPRECATED_UOculusEventComponent::StaticClass, TEXT("UDEPRECATED_UOculusEventComponent"), &Z_Registration_Info_UClass_UDEPRECATED_UOculusEventComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_UOculusEventComponent), 1067093060U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusEventComponent_h_3824247201(TEXT("/Script/OculusHMD"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusEventComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusEventComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
