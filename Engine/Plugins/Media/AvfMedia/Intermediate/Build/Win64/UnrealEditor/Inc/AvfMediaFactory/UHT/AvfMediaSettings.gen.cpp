// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AvfMediaSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAvfMediaSettings() {}
// Cross Module References
	AVFMEDIAFACTORY_API UClass* Z_Construct_UClass_UAvfMediaSettings();
	AVFMEDIAFACTORY_API UClass* Z_Construct_UClass_UAvfMediaSettings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AvfMediaFactory();
// End Cross Module References
	void UAvfMediaSettings::StaticRegisterNativesUAvfMediaSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAvfMediaSettings);
	UClass* Z_Construct_UClass_UAvfMediaSettings_NoRegister()
	{
		return UAvfMediaSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAvfMediaSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NativeAudioOut_MetaData[];
#endif
		static void NewProp_NativeAudioOut_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NativeAudioOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAvfMediaSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AvfMediaFactory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvfMediaSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the AvfMedia plug-in.\n */" },
		{ "IncludePath", "AvfMediaSettings.h" },
		{ "ModuleRelativePath", "Public/AvfMediaSettings.h" },
		{ "ToolTip", "Settings for the AvfMedia plug-in." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvfMediaSettings_Statics::NewProp_NativeAudioOut_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Play audio tracks via the operating system's native sound mixer. */" },
		{ "ModuleRelativePath", "Public/AvfMediaSettings.h" },
		{ "ToolTip", "Play audio tracks via the operating system's native sound mixer." },
	};
#endif
	void Z_Construct_UClass_UAvfMediaSettings_Statics::NewProp_NativeAudioOut_SetBit(void* Obj)
	{
		((UAvfMediaSettings*)Obj)->NativeAudioOut = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAvfMediaSettings_Statics::NewProp_NativeAudioOut = { "NativeAudioOut", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAvfMediaSettings), &Z_Construct_UClass_UAvfMediaSettings_Statics::NewProp_NativeAudioOut_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAvfMediaSettings_Statics::NewProp_NativeAudioOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAvfMediaSettings_Statics::NewProp_NativeAudioOut_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAvfMediaSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvfMediaSettings_Statics::NewProp_NativeAudioOut,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAvfMediaSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAvfMediaSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAvfMediaSettings_Statics::ClassParams = {
		&UAvfMediaSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAvfMediaSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAvfMediaSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAvfMediaSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAvfMediaSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAvfMediaSettings()
	{
		if (!Z_Registration_Info_UClass_UAvfMediaSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAvfMediaSettings.OuterSingleton, Z_Construct_UClass_UAvfMediaSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAvfMediaSettings.OuterSingleton;
	}
	template<> AVFMEDIAFACTORY_API UClass* StaticClass<UAvfMediaSettings>()
	{
		return UAvfMediaSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAvfMediaSettings);
	UAvfMediaSettings::~UAvfMediaSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AvfMedia_Source_AvfMediaFactory_Public_AvfMediaSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AvfMedia_Source_AvfMediaFactory_Public_AvfMediaSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAvfMediaSettings, UAvfMediaSettings::StaticClass, TEXT("UAvfMediaSettings"), &Z_Registration_Info_UClass_UAvfMediaSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAvfMediaSettings), 1575359205U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AvfMedia_Source_AvfMediaFactory_Public_AvfMediaSettings_h_782742488(TEXT("/Script/AvfMediaFactory"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AvfMedia_Source_AvfMediaFactory_Public_AvfMediaSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AvfMedia_Source_AvfMediaFactory_Public_AvfMediaSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
