// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAudioExtensionPlugin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAudioExtensionPlugin() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UOcclusionPluginSourceSettingsBase();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_NoRegister();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UReverbPluginSourceSettingsBase();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UReverbPluginSourceSettingsBase_NoRegister();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USourceDataOverridePluginSourceSettingsBase();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USourceDataOverridePluginSourceSettingsBase_NoRegister();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USpatializationPluginSourceSettingsBase();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USpatializationPluginSourceSettingsBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AudioExtensions();
// End Cross Module References
	void USpatializationPluginSourceSettingsBase::StaticRegisterNativesUSpatializationPluginSourceSettingsBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpatializationPluginSourceSettingsBase);
	UClass* Z_Construct_UClass_USpatializationPluginSourceSettingsBase_NoRegister()
	{
		return USpatializationPluginSourceSettingsBase::StaticClass();
	}
	struct Z_Construct_UClass_USpatializationPluginSourceSettingsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpatializationPluginSourceSettingsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatializationPluginSourceSettingsBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** This is a class which should be overridden to provide users with settings to use for individual sounds */" },
		{ "IncludePath", "IAudioExtensionPlugin.h" },
		{ "ModuleRelativePath", "Public/IAudioExtensionPlugin.h" },
		{ "ToolTip", "This is a class which should be overridden to provide users with settings to use for individual sounds" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpatializationPluginSourceSettingsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpatializationPluginSourceSettingsBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpatializationPluginSourceSettingsBase_Statics::ClassParams = {
		&USpatializationPluginSourceSettingsBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USpatializationPluginSourceSettingsBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpatializationPluginSourceSettingsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpatializationPluginSourceSettingsBase()
	{
		if (!Z_Registration_Info_UClass_USpatializationPluginSourceSettingsBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpatializationPluginSourceSettingsBase.OuterSingleton, Z_Construct_UClass_USpatializationPluginSourceSettingsBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpatializationPluginSourceSettingsBase.OuterSingleton;
	}
	template<> AUDIOEXTENSIONS_API UClass* StaticClass<USpatializationPluginSourceSettingsBase>()
	{
		return USpatializationPluginSourceSettingsBase::StaticClass();
	}
	USpatializationPluginSourceSettingsBase::USpatializationPluginSourceSettingsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpatializationPluginSourceSettingsBase);
	USpatializationPluginSourceSettingsBase::~USpatializationPluginSourceSettingsBase() {}
	void USourceDataOverridePluginSourceSettingsBase::StaticRegisterNativesUSourceDataOverridePluginSourceSettingsBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USourceDataOverridePluginSourceSettingsBase);
	UClass* Z_Construct_UClass_USourceDataOverridePluginSourceSettingsBase_NoRegister()
	{
		return USourceDataOverridePluginSourceSettingsBase::StaticClass();
	}
	struct Z_Construct_UClass_USourceDataOverridePluginSourceSettingsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USourceDataOverridePluginSourceSettingsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceDataOverridePluginSourceSettingsBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** This is a class which should be overridden to provide users with settings to use for individual sounds */" },
		{ "IncludePath", "IAudioExtensionPlugin.h" },
		{ "ModuleRelativePath", "Public/IAudioExtensionPlugin.h" },
		{ "ToolTip", "This is a class which should be overridden to provide users with settings to use for individual sounds" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceDataOverridePluginSourceSettingsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceDataOverridePluginSourceSettingsBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USourceDataOverridePluginSourceSettingsBase_Statics::ClassParams = {
		&USourceDataOverridePluginSourceSettingsBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USourceDataOverridePluginSourceSettingsBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USourceDataOverridePluginSourceSettingsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceDataOverridePluginSourceSettingsBase()
	{
		if (!Z_Registration_Info_UClass_USourceDataOverridePluginSourceSettingsBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USourceDataOverridePluginSourceSettingsBase.OuterSingleton, Z_Construct_UClass_USourceDataOverridePluginSourceSettingsBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USourceDataOverridePluginSourceSettingsBase.OuterSingleton;
	}
	template<> AUDIOEXTENSIONS_API UClass* StaticClass<USourceDataOverridePluginSourceSettingsBase>()
	{
		return USourceDataOverridePluginSourceSettingsBase::StaticClass();
	}
	USourceDataOverridePluginSourceSettingsBase::USourceDataOverridePluginSourceSettingsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceDataOverridePluginSourceSettingsBase);
	USourceDataOverridePluginSourceSettingsBase::~USourceDataOverridePluginSourceSettingsBase() {}
	void UOcclusionPluginSourceSettingsBase::StaticRegisterNativesUOcclusionPluginSourceSettingsBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOcclusionPluginSourceSettingsBase);
	UClass* Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_NoRegister()
	{
		return UOcclusionPluginSourceSettingsBase::StaticClass();
	}
	struct Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** This is a class which should be overridden to provide users with settings to use for individual sounds */" },
		{ "IncludePath", "IAudioExtensionPlugin.h" },
		{ "ModuleRelativePath", "Public/IAudioExtensionPlugin.h" },
		{ "ToolTip", "This is a class which should be overridden to provide users with settings to use for individual sounds" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOcclusionPluginSourceSettingsBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_Statics::ClassParams = {
		&UOcclusionPluginSourceSettingsBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOcclusionPluginSourceSettingsBase()
	{
		if (!Z_Registration_Info_UClass_UOcclusionPluginSourceSettingsBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOcclusionPluginSourceSettingsBase.OuterSingleton, Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOcclusionPluginSourceSettingsBase.OuterSingleton;
	}
	template<> AUDIOEXTENSIONS_API UClass* StaticClass<UOcclusionPluginSourceSettingsBase>()
	{
		return UOcclusionPluginSourceSettingsBase::StaticClass();
	}
	UOcclusionPluginSourceSettingsBase::UOcclusionPluginSourceSettingsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOcclusionPluginSourceSettingsBase);
	UOcclusionPluginSourceSettingsBase::~UOcclusionPluginSourceSettingsBase() {}
	void UReverbPluginSourceSettingsBase::StaticRegisterNativesUReverbPluginSourceSettingsBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReverbPluginSourceSettingsBase);
	UClass* Z_Construct_UClass_UReverbPluginSourceSettingsBase_NoRegister()
	{
		return UReverbPluginSourceSettingsBase::StaticClass();
	}
	struct Z_Construct_UClass_UReverbPluginSourceSettingsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReverbPluginSourceSettingsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReverbPluginSourceSettingsBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** This is a class which should be overridden to provide users with settings to use for individual sounds */" },
		{ "IncludePath", "IAudioExtensionPlugin.h" },
		{ "ModuleRelativePath", "Public/IAudioExtensionPlugin.h" },
		{ "ToolTip", "This is a class which should be overridden to provide users with settings to use for individual sounds" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReverbPluginSourceSettingsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReverbPluginSourceSettingsBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReverbPluginSourceSettingsBase_Statics::ClassParams = {
		&UReverbPluginSourceSettingsBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UReverbPluginSourceSettingsBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReverbPluginSourceSettingsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReverbPluginSourceSettingsBase()
	{
		if (!Z_Registration_Info_UClass_UReverbPluginSourceSettingsBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReverbPluginSourceSettingsBase.OuterSingleton, Z_Construct_UClass_UReverbPluginSourceSettingsBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReverbPluginSourceSettingsBase.OuterSingleton;
	}
	template<> AUDIOEXTENSIONS_API UClass* StaticClass<UReverbPluginSourceSettingsBase>()
	{
		return UReverbPluginSourceSettingsBase::StaticClass();
	}
	UReverbPluginSourceSettingsBase::UReverbPluginSourceSettingsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReverbPluginSourceSettingsBase);
	UReverbPluginSourceSettingsBase::~UReverbPluginSourceSettingsBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioExtensionPlugin_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioExtensionPlugin_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpatializationPluginSourceSettingsBase, USpatializationPluginSourceSettingsBase::StaticClass, TEXT("USpatializationPluginSourceSettingsBase"), &Z_Registration_Info_UClass_USpatializationPluginSourceSettingsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpatializationPluginSourceSettingsBase), 3193451911U) },
		{ Z_Construct_UClass_USourceDataOverridePluginSourceSettingsBase, USourceDataOverridePluginSourceSettingsBase::StaticClass, TEXT("USourceDataOverridePluginSourceSettingsBase"), &Z_Registration_Info_UClass_USourceDataOverridePluginSourceSettingsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USourceDataOverridePluginSourceSettingsBase), 1232699130U) },
		{ Z_Construct_UClass_UOcclusionPluginSourceSettingsBase, UOcclusionPluginSourceSettingsBase::StaticClass, TEXT("UOcclusionPluginSourceSettingsBase"), &Z_Registration_Info_UClass_UOcclusionPluginSourceSettingsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOcclusionPluginSourceSettingsBase), 1431191410U) },
		{ Z_Construct_UClass_UReverbPluginSourceSettingsBase, UReverbPluginSourceSettingsBase::StaticClass, TEXT("UReverbPluginSourceSettingsBase"), &Z_Registration_Info_UClass_UReverbPluginSourceSettingsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReverbPluginSourceSettingsBase), 1962296726U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioExtensionPlugin_h_2282991962(TEXT("/Script/AudioExtensions"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioExtensionPlugin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioExtensionPlugin_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
