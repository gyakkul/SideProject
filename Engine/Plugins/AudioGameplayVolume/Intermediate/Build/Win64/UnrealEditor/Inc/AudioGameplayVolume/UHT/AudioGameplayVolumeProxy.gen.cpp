// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioGameplayVolumeProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioGameplayVolumeProxy() {}
// Cross Module References
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UAGVConditionProxy();
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UAGVConditionProxy_NoRegister();
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UAGVPrimitiveComponentProxy();
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UAGVPrimitiveComponentProxy_NoRegister();
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UAudioGameplayVolumeProxy();
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UAudioGameplayVolumeProxy_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AudioGameplayVolume();
// End Cross Module References
	void UAudioGameplayVolumeProxy::StaticRegisterNativesUAudioGameplayVolumeProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioGameplayVolumeProxy);
	UClass* Z_Construct_UClass_UAudioGameplayVolumeProxy_NoRegister()
	{
		return UAudioGameplayVolumeProxy::StaticClass();
	}
	struct Z_Construct_UClass_UAudioGameplayVolumeProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioGameplayVolumeProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioGameplayVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioGameplayVolumeProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  UAudioGameplayVolumeProxy - Abstract proxy used on audio thread to represent audio gameplay volumes.\n */" },
		{ "IncludePath", "AudioGameplayVolumeProxy.h" },
		{ "ModuleRelativePath", "Public/AudioGameplayVolumeProxy.h" },
		{ "ToolTip", "UAudioGameplayVolumeProxy - Abstract proxy used on audio thread to represent audio gameplay volumes." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioGameplayVolumeProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioGameplayVolumeProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioGameplayVolumeProxy_Statics::ClassParams = {
		&UAudioGameplayVolumeProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x041010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioGameplayVolumeProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioGameplayVolumeProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioGameplayVolumeProxy()
	{
		if (!Z_Registration_Info_UClass_UAudioGameplayVolumeProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioGameplayVolumeProxy.OuterSingleton, Z_Construct_UClass_UAudioGameplayVolumeProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioGameplayVolumeProxy.OuterSingleton;
	}
	template<> AUDIOGAMEPLAYVOLUME_API UClass* StaticClass<UAudioGameplayVolumeProxy>()
	{
		return UAudioGameplayVolumeProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioGameplayVolumeProxy);
	void UAGVPrimitiveComponentProxy::StaticRegisterNativesUAGVPrimitiveComponentProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAGVPrimitiveComponentProxy);
	UClass* Z_Construct_UClass_UAGVPrimitiveComponentProxy_NoRegister()
	{
		return UAGVPrimitiveComponentProxy::StaticClass();
	}
	struct Z_Construct_UClass_UAGVPrimitiveComponentProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAGVPrimitiveComponentProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioGameplayVolumeProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioGameplayVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGVPrimitiveComponentProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  UAGVPrimitiveComponentProxy - Proxy based on a volume's primitive component\n */" },
		{ "DisplayName", "AGV Primitive Proxy" },
		{ "IncludePath", "AudioGameplayVolumeProxy.h" },
		{ "ModuleRelativePath", "Public/AudioGameplayVolumeProxy.h" },
		{ "ToolTip", "UAGVPrimitiveComponentProxy - Proxy based on a volume's primitive component" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAGVPrimitiveComponentProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAGVPrimitiveComponentProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAGVPrimitiveComponentProxy_Statics::ClassParams = {
		&UAGVPrimitiveComponentProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAGVPrimitiveComponentProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAGVPrimitiveComponentProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAGVPrimitiveComponentProxy()
	{
		if (!Z_Registration_Info_UClass_UAGVPrimitiveComponentProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAGVPrimitiveComponentProxy.OuterSingleton, Z_Construct_UClass_UAGVPrimitiveComponentProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAGVPrimitiveComponentProxy.OuterSingleton;
	}
	template<> AUDIOGAMEPLAYVOLUME_API UClass* StaticClass<UAGVPrimitiveComponentProxy>()
	{
		return UAGVPrimitiveComponentProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAGVPrimitiveComponentProxy);
	void UAGVConditionProxy::StaticRegisterNativesUAGVConditionProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAGVConditionProxy);
	UClass* Z_Construct_UClass_UAGVConditionProxy_NoRegister()
	{
		return UAGVConditionProxy::StaticClass();
	}
	struct Z_Construct_UClass_UAGVConditionProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAGVConditionProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioGameplayVolumeProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioGameplayVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGVConditionProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  UAGVConditionProxy - Proxy for use with the UAudioGameplayCondition interface\n */" },
		{ "DisplayName", "AGV Condition Proxy" },
		{ "IncludePath", "AudioGameplayVolumeProxy.h" },
		{ "ModuleRelativePath", "Public/AudioGameplayVolumeProxy.h" },
		{ "ToolTip", "UAGVConditionProxy - Proxy for use with the UAudioGameplayCondition interface" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAGVConditionProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAGVConditionProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAGVConditionProxy_Statics::ClassParams = {
		&UAGVConditionProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAGVConditionProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAGVConditionProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAGVConditionProxy()
	{
		if (!Z_Registration_Info_UClass_UAGVConditionProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAGVConditionProxy.OuterSingleton, Z_Construct_UClass_UAGVConditionProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAGVConditionProxy.OuterSingleton;
	}
	template<> AUDIOGAMEPLAYVOLUME_API UClass* StaticClass<UAGVConditionProxy>()
	{
		return UAGVConditionProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAGVConditionProxy);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioGameplayVolumeProxy, UAudioGameplayVolumeProxy::StaticClass, TEXT("UAudioGameplayVolumeProxy"), &Z_Registration_Info_UClass_UAudioGameplayVolumeProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioGameplayVolumeProxy), 1972647808U) },
		{ Z_Construct_UClass_UAGVPrimitiveComponentProxy, UAGVPrimitiveComponentProxy::StaticClass, TEXT("UAGVPrimitiveComponentProxy"), &Z_Registration_Info_UClass_UAGVPrimitiveComponentProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAGVPrimitiveComponentProxy), 3816631852U) },
		{ Z_Construct_UClass_UAGVConditionProxy, UAGVConditionProxy::StaticClass, TEXT("UAGVConditionProxy"), &Z_Registration_Info_UClass_UAGVConditionProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAGVConditionProxy), 2062747630U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeProxy_h_3563595093(TEXT("/Script/AudioGameplayVolume"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
