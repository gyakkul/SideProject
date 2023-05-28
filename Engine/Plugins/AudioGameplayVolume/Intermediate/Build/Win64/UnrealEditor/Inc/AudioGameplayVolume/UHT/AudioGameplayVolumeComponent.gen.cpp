// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioGameplayVolumeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioGameplayVolumeComponent() {}
// Cross Module References
	AUDIOGAMEPLAY_API UClass* Z_Construct_UClass_UAudioGameplayComponent();
	AUDIOGAMEPLAY_API UClass* Z_Construct_UClass_UAudioGameplayVolumeInteraction_NoRegister();
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UAudioGameplayVolumeComponent();
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UAudioGameplayVolumeComponent_NoRegister();
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UAudioGameplayVolumeComponentBase();
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UAudioGameplayVolumeComponentBase_NoRegister();
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UAudioGameplayVolumeProxy_NoRegister();
	AUDIOGAMEPLAYVOLUME_API UFunction* Z_Construct_UDelegateFunction_AudioGameplayVolume_OnAudioGameplayVolumeProxyStateChange__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AudioGameplayVolume();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AudioGameplayVolume_OnAudioGameplayVolumeProxyStateChange__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioGameplayVolume_OnAudioGameplayVolumeProxyStateChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioGameplayVolumeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioGameplayVolume_OnAudioGameplayVolumeProxyStateChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioGameplayVolume, nullptr, "OnAudioGameplayVolumeProxyStateChange__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioGameplayVolume_OnAudioGameplayVolumeProxyStateChange__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioGameplayVolume_OnAudioGameplayVolumeProxyStateChange__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AudioGameplayVolume_OnAudioGameplayVolumeProxyStateChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioGameplayVolume_OnAudioGameplayVolumeProxyStateChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAudioGameplayVolumeProxyStateChange_DelegateWrapper(const FMulticastScriptDelegate& OnAudioGameplayVolumeProxyStateChange)
{
	OnAudioGameplayVolumeProxyStateChange.ProcessMulticastDelegate<UObject>(NULL);
}
	void UAudioGameplayVolumeComponent::StaticRegisterNativesUAudioGameplayVolumeComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioGameplayVolumeComponent);
	UClass* Z_Construct_UClass_UAudioGameplayVolumeComponent_NoRegister()
	{
		return UAudioGameplayVolumeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAudioGameplayVolumeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnProxyEnter_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProxyEnter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnProxyExit_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProxyExit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Proxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Proxy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioGameplayVolumeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioGameplayComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioGameplayVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioGameplayVolumeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioGameplay" },
		{ "Comment", "/**\n *  UAudioGameplayVolumeComponent - Component used to drive interaction with AudioGameplayVolumeSubsystem.\n *   NOTE: Do not inherit from this class, use UAudioGameplayVolumeComponentBase or UAudioGameplayVolumeMutator to create extendable functionality\n */" },
		{ "DisplayName", "Volume Proxy" },
		{ "IncludePath", "AudioGameplayVolumeComponent.h" },
		{ "IsBlueprintBase", "FALSE" },
		{ "ModuleRelativePath", "Public/AudioGameplayVolumeComponent.h" },
		{ "ToolTip", "UAudioGameplayVolumeComponent - Component used to drive interaction with AudioGameplayVolumeSubsystem.\n NOTE: Do not inherit from this class, use UAudioGameplayVolumeComponentBase or UAudioGameplayVolumeMutator to create extendable functionality" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioGameplayVolumeComponent_Statics::NewProp_OnProxyEnter_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Blueprint event for proxy enter */" },
		{ "ModuleRelativePath", "Public/AudioGameplayVolumeComponent.h" },
		{ "ToolTip", "Blueprint event for proxy enter" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioGameplayVolumeComponent_Statics::NewProp_OnProxyEnter = { "OnProxyEnter", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioGameplayVolumeComponent, OnProxyEnter), Z_Construct_UDelegateFunction_AudioGameplayVolume_OnAudioGameplayVolumeProxyStateChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAudioGameplayVolumeComponent_Statics::NewProp_OnProxyEnter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioGameplayVolumeComponent_Statics::NewProp_OnProxyEnter_MetaData)) }; // 2392801861
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioGameplayVolumeComponent_Statics::NewProp_OnProxyExit_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Blueprint event for proxy exit */" },
		{ "ModuleRelativePath", "Public/AudioGameplayVolumeComponent.h" },
		{ "ToolTip", "Blueprint event for proxy exit" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioGameplayVolumeComponent_Statics::NewProp_OnProxyExit = { "OnProxyExit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioGameplayVolumeComponent, OnProxyExit), Z_Construct_UDelegateFunction_AudioGameplayVolume_OnAudioGameplayVolumeProxyStateChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAudioGameplayVolumeComponent_Statics::NewProp_OnProxyExit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioGameplayVolumeComponent_Statics::NewProp_OnProxyExit_MetaData)) }; // 2392801861
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioGameplayVolumeComponent_Statics::NewProp_Proxy_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AudioGameplay" },
		{ "Comment", "// A representation of this volume for the audio thread\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AudioGameplayVolumeComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "A representation of this volume for the audio thread" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAudioGameplayVolumeComponent_Statics::NewProp_Proxy = { "Proxy", nullptr, (EPropertyFlags)0x002608000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioGameplayVolumeComponent, Proxy), Z_Construct_UClass_UAudioGameplayVolumeProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAudioGameplayVolumeComponent_Statics::NewProp_Proxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioGameplayVolumeComponent_Statics::NewProp_Proxy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioGameplayVolumeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioGameplayVolumeComponent_Statics::NewProp_OnProxyEnter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioGameplayVolumeComponent_Statics::NewProp_OnProxyExit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioGameplayVolumeComponent_Statics::NewProp_Proxy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioGameplayVolumeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioGameplayVolumeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioGameplayVolumeComponent_Statics::ClassParams = {
		&UAudioGameplayVolumeComponent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAudioGameplayVolumeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioGameplayVolumeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioGameplayVolumeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioGameplayVolumeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioGameplayVolumeComponent()
	{
		if (!Z_Registration_Info_UClass_UAudioGameplayVolumeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioGameplayVolumeComponent.OuterSingleton, Z_Construct_UClass_UAudioGameplayVolumeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioGameplayVolumeComponent.OuterSingleton;
	}
	template<> AUDIOGAMEPLAYVOLUME_API UClass* StaticClass<UAudioGameplayVolumeComponent>()
	{
		return UAudioGameplayVolumeComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioGameplayVolumeComponent);
	void UAudioGameplayVolumeComponentBase::StaticRegisterNativesUAudioGameplayVolumeComponentBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioGameplayVolumeComponentBase);
	UClass* Z_Construct_UClass_UAudioGameplayVolumeComponentBase_NoRegister()
	{
		return UAudioGameplayVolumeComponentBase::StaticClass();
	}
	struct Z_Construct_UClass_UAudioGameplayVolumeComponentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioGameplayVolumeComponentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioGameplayComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioGameplayVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioGameplayVolumeComponentBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AudioGameplay" },
		{ "Comment", "/**\n *  UAudioGameplayVolumeComponentBase - Blueprintable component used to craft custom functionality with AudioGameplayVolumes.\n *   NOTE: Inherit from this class to get easy access to OnListenerEnter and OnListenerExit Blueprint Events\n */" },
		{ "HideCategories", "Tags Collision" },
		{ "IncludePath", "AudioGameplayVolumeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AudioGameplayVolumeComponent.h" },
		{ "ToolTip", "UAudioGameplayVolumeComponentBase - Blueprintable component used to craft custom functionality with AudioGameplayVolumes.\n NOTE: Inherit from this class to get easy access to OnListenerEnter and OnListenerExit Blueprint Events" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAudioGameplayVolumeComponentBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAudioGameplayVolumeInteraction_NoRegister, (int32)VTABLE_OFFSET(UAudioGameplayVolumeComponentBase, IAudioGameplayVolumeInteraction), false },  // 1367105819
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioGameplayVolumeComponentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioGameplayVolumeComponentBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioGameplayVolumeComponentBase_Statics::ClassParams = {
		&UAudioGameplayVolumeComponentBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioGameplayVolumeComponentBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioGameplayVolumeComponentBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioGameplayVolumeComponentBase()
	{
		if (!Z_Registration_Info_UClass_UAudioGameplayVolumeComponentBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioGameplayVolumeComponentBase.OuterSingleton, Z_Construct_UClass_UAudioGameplayVolumeComponentBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioGameplayVolumeComponentBase.OuterSingleton;
	}
	template<> AUDIOGAMEPLAYVOLUME_API UClass* StaticClass<UAudioGameplayVolumeComponentBase>()
	{
		return UAudioGameplayVolumeComponentBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioGameplayVolumeComponentBase);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioGameplayVolumeComponent, UAudioGameplayVolumeComponent::StaticClass, TEXT("UAudioGameplayVolumeComponent"), &Z_Registration_Info_UClass_UAudioGameplayVolumeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioGameplayVolumeComponent), 1755358562U) },
		{ Z_Construct_UClass_UAudioGameplayVolumeComponentBase, UAudioGameplayVolumeComponentBase::StaticClass, TEXT("UAudioGameplayVolumeComponentBase"), &Z_Registration_Info_UClass_UAudioGameplayVolumeComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioGameplayVolumeComponentBase), 4101892630U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h_2256886946(TEXT("/Script/AudioGameplayVolume"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
