// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ISoundfieldFormat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISoundfieldFormat() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEffectBase();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEffectBase_NoRegister();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEffectSettingsBase();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEffectSettingsBase_NoRegister();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEncodingSettingsBase();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEncodingSettingsBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AudioExtensions();
// End Cross Module References
	void USoundfieldEncodingSettingsBase::StaticRegisterNativesUSoundfieldEncodingSettingsBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundfieldEncodingSettingsBase);
	UClass* Z_Construct_UClass_USoundfieldEncodingSettingsBase_NoRegister()
	{
		return USoundfieldEncodingSettingsBase::StaticClass();
	}
	struct Z_Construct_UClass_USoundfieldEncodingSettingsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundfieldEncodingSettingsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldEncodingSettingsBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * This opaque class should be used for specifying settings for how audio should be encoded\n * to your soundfield format for a given submix or file.\n */" },
		{ "IncludePath", "ISoundfieldFormat.h" },
		{ "ModuleRelativePath", "Public/ISoundfieldFormat.h" },
		{ "ToolTip", "This opaque class should be used for specifying settings for how audio should be encoded\nto your soundfield format for a given submix or file." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundfieldEncodingSettingsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundfieldEncodingSettingsBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundfieldEncodingSettingsBase_Statics::ClassParams = {
		&USoundfieldEncodingSettingsBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundfieldEncodingSettingsBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEncodingSettingsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundfieldEncodingSettingsBase()
	{
		if (!Z_Registration_Info_UClass_USoundfieldEncodingSettingsBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundfieldEncodingSettingsBase.OuterSingleton, Z_Construct_UClass_USoundfieldEncodingSettingsBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundfieldEncodingSettingsBase.OuterSingleton;
	}
	template<> AUDIOEXTENSIONS_API UClass* StaticClass<USoundfieldEncodingSettingsBase>()
	{
		return USoundfieldEncodingSettingsBase::StaticClass();
	}
	USoundfieldEncodingSettingsBase::USoundfieldEncodingSettingsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundfieldEncodingSettingsBase);
	USoundfieldEncodingSettingsBase::~USoundfieldEncodingSettingsBase() {}
	void USoundfieldEffectSettingsBase::StaticRegisterNativesUSoundfieldEffectSettingsBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundfieldEffectSettingsBase);
	UClass* Z_Construct_UClass_USoundfieldEffectSettingsBase_NoRegister()
	{
		return USoundfieldEffectSettingsBase::StaticClass();
	}
	struct Z_Construct_UClass_USoundfieldEffectSettingsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundfieldEffectSettingsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldEffectSettingsBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ISoundfieldFormat.h" },
		{ "ModuleRelativePath", "Public/ISoundfieldFormat.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundfieldEffectSettingsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundfieldEffectSettingsBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundfieldEffectSettingsBase_Statics::ClassParams = {
		&USoundfieldEffectSettingsBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundfieldEffectSettingsBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEffectSettingsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundfieldEffectSettingsBase()
	{
		if (!Z_Registration_Info_UClass_USoundfieldEffectSettingsBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundfieldEffectSettingsBase.OuterSingleton, Z_Construct_UClass_USoundfieldEffectSettingsBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundfieldEffectSettingsBase.OuterSingleton;
	}
	template<> AUDIOEXTENSIONS_API UClass* StaticClass<USoundfieldEffectSettingsBase>()
	{
		return USoundfieldEffectSettingsBase::StaticClass();
	}
	USoundfieldEffectSettingsBase::USoundfieldEffectSettingsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundfieldEffectSettingsBase);
	USoundfieldEffectSettingsBase::~USoundfieldEffectSettingsBase() {}
	void USoundfieldEffectBase::StaticRegisterNativesUSoundfieldEffectBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundfieldEffectBase);
	UClass* Z_Construct_UClass_USoundfieldEffectBase_NoRegister()
	{
		return USoundfieldEffectBase::StaticClass();
	}
	struct Z_Construct_UClass_USoundfieldEffectBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundfieldEffectBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldEffectBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This opaque class should be used for specifying settings for how audio should be encoded\n * to your soundfield format for a given submix or file.\n */" },
		{ "IncludePath", "ISoundfieldFormat.h" },
		{ "ModuleRelativePath", "Public/ISoundfieldFormat.h" },
		{ "ToolTip", "This opaque class should be used for specifying settings for how audio should be encoded\nto your soundfield format for a given submix or file." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldEffectBase_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "EffectPreset" },
		{ "Comment", "/**\n\x09 * TODO: Filter classes settable on here by GetSettingsClass.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ISoundfieldFormat.h" },
		{ "ToolTip", "TODO: Filter classes settable on here by GetSettingsClass." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundfieldEffectBase_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundfieldEffectBase, Settings), Z_Construct_UClass_USoundfieldEffectSettingsBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundfieldEffectBase_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEffectBase_Statics::NewProp_Settings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundfieldEffectBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldEffectBase_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundfieldEffectBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundfieldEffectBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundfieldEffectBase_Statics::ClassParams = {
		&USoundfieldEffectBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundfieldEffectBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEffectBase_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USoundfieldEffectBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEffectBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundfieldEffectBase()
	{
		if (!Z_Registration_Info_UClass_USoundfieldEffectBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundfieldEffectBase.OuterSingleton, Z_Construct_UClass_USoundfieldEffectBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundfieldEffectBase.OuterSingleton;
	}
	template<> AUDIOEXTENSIONS_API UClass* StaticClass<USoundfieldEffectBase>()
	{
		return USoundfieldEffectBase::StaticClass();
	}
	USoundfieldEffectBase::USoundfieldEffectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundfieldEffectBase);
	USoundfieldEffectBase::~USoundfieldEffectBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldFormat_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldFormat_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundfieldEncodingSettingsBase, USoundfieldEncodingSettingsBase::StaticClass, TEXT("USoundfieldEncodingSettingsBase"), &Z_Registration_Info_UClass_USoundfieldEncodingSettingsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundfieldEncodingSettingsBase), 46985016U) },
		{ Z_Construct_UClass_USoundfieldEffectSettingsBase, USoundfieldEffectSettingsBase::StaticClass, TEXT("USoundfieldEffectSettingsBase"), &Z_Registration_Info_UClass_USoundfieldEffectSettingsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundfieldEffectSettingsBase), 1835942948U) },
		{ Z_Construct_UClass_USoundfieldEffectBase, USoundfieldEffectBase::StaticClass, TEXT("USoundfieldEffectBase"), &Z_Registration_Info_UClass_USoundfieldEffectBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundfieldEffectBase), 1707374993U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldFormat_h_1895662327(TEXT("/Script/AudioExtensions"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldFormat_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldFormat_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
