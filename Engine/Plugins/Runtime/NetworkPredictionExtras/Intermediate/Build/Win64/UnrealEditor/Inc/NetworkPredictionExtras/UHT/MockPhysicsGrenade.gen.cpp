// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MockPhysicsGrenade.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMockPhysicsGrenade() {}
// Cross Module References
	NETWORKPREDICTION_API UClass* Z_Construct_UClass_UNetworkPredictionPhysicsComponent();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UMockPhysicsGrenadeComponent();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UMockPhysicsGrenadeComponent_NoRegister();
	NETWORKPREDICTIONEXTRAS_API UFunction* Z_Construct_UDelegateFunction_UMockPhysicsGrenadeComponent_MockGrenadeOnExplode__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_NetworkPredictionExtras();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMockPhysicsGrenadeComponent_MockGrenadeOnExplode__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMockPhysicsGrenadeComponent_MockGrenadeOnExplode__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MockPhysicsGrenade.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMockPhysicsGrenadeComponent_MockGrenadeOnExplode__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockPhysicsGrenadeComponent, nullptr, "MockGrenadeOnExplode__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMockPhysicsGrenadeComponent_MockGrenadeOnExplode__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMockPhysicsGrenadeComponent_MockGrenadeOnExplode__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMockPhysicsGrenadeComponent_MockGrenadeOnExplode__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMockPhysicsGrenadeComponent_MockGrenadeOnExplode__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMockPhysicsGrenadeComponent::FMockGrenadeOnExplode_DelegateWrapper(const FMulticastScriptDelegate& MockGrenadeOnExplode)
{
	MockGrenadeOnExplode.ProcessMulticastDelegate<UObject>(NULL);
}
	void UMockPhysicsGrenadeComponent::StaticRegisterNativesUMockPhysicsGrenadeComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMockPhysicsGrenadeComponent);
	UClass* Z_Construct_UClass_UMockPhysicsGrenadeComponent_NoRegister()
	{
		return UMockPhysicsGrenadeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnExplode_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExplode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FuseTimeSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FuseTimeSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNetworkPredictionPhysicsComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPredictionExtras,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UMockPhysicsGrenadeComponent_MockGrenadeOnExplode__DelegateSignature, "MockGrenadeOnExplode__DelegateSignature" }, // 1755381696
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "// -----------------------------------------------------------------------------------------------------------\n// -----------------------------------------------------------------------------------------------------------\n" },
		{ "IncludePath", "MockPhysicsGrenade.h" },
		{ "ModuleRelativePath", "Public/MockPhysicsGrenade.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics::NewProp_OnExplode_MetaData[] = {
		{ "Category", "Mock Grenade" },
		{ "ModuleRelativePath", "Public/MockPhysicsGrenade.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics::NewProp_OnExplode = { "OnExplode", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockPhysicsGrenadeComponent, OnExplode), Z_Construct_UDelegateFunction_UMockPhysicsGrenadeComponent_MockGrenadeOnExplode__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics::NewProp_OnExplode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics::NewProp_OnExplode_MetaData)) }; // 1755381696
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics::NewProp_FuseTimeSeconds_MetaData[] = {
		{ "Category", "Grenade" },
		{ "ModuleRelativePath", "Public/MockPhysicsGrenade.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics::NewProp_FuseTimeSeconds = { "FuseTimeSeconds", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockPhysicsGrenadeComponent, FuseTimeSeconds), METADATA_PARAMS(Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics::NewProp_FuseTimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics::NewProp_FuseTimeSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Grenade" },
		{ "ModuleRelativePath", "Public/MockPhysicsGrenade.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockPhysicsGrenadeComponent, Radius), METADATA_PARAMS(Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics::NewProp_Magnitude_MetaData[] = {
		{ "Category", "Grenade" },
		{ "ModuleRelativePath", "Public/MockPhysicsGrenade.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockPhysicsGrenadeComponent, Magnitude), METADATA_PARAMS(Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics::NewProp_Magnitude_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics::NewProp_OnExplode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics::NewProp_FuseTimeSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics::NewProp_Magnitude,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMockPhysicsGrenadeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics::ClassParams = {
		&UMockPhysicsGrenadeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMockPhysicsGrenadeComponent()
	{
		if (!Z_Registration_Info_UClass_UMockPhysicsGrenadeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMockPhysicsGrenadeComponent.OuterSingleton, Z_Construct_UClass_UMockPhysicsGrenadeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMockPhysicsGrenadeComponent.OuterSingleton;
	}
	template<> NETWORKPREDICTIONEXTRAS_API UClass* StaticClass<UMockPhysicsGrenadeComponent>()
	{
		return UMockPhysicsGrenadeComponent::StaticClass();
	}
	UMockPhysicsGrenadeComponent::UMockPhysicsGrenadeComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMockPhysicsGrenadeComponent);
	UMockPhysicsGrenadeComponent::~UMockPhysicsGrenadeComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsGrenade_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsGrenade_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMockPhysicsGrenadeComponent, UMockPhysicsGrenadeComponent::StaticClass, TEXT("UMockPhysicsGrenadeComponent"), &Z_Registration_Info_UClass_UMockPhysicsGrenadeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMockPhysicsGrenadeComponent), 535923551U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsGrenade_h_3871470554(TEXT("/Script/NetworkPredictionExtras"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsGrenade_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsGrenade_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
