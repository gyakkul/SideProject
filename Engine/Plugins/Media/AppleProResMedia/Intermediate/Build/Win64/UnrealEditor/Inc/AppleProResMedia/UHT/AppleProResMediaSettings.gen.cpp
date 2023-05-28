// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AppleProResMediaSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppleProResMediaSettings() {}
// Cross Module References
	APPLEPRORESMEDIA_API UClass* Z_Construct_UClass_UAppleProResMediaSettings();
	APPLEPRORESMEDIA_API UClass* Z_Construct_UClass_UAppleProResMediaSettings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AppleProResMedia();
// End Cross Module References
	void UAppleProResMediaSettings::StaticRegisterNativesUAppleProResMediaSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAppleProResMediaSettings);
	UClass* Z_Construct_UClass_UAppleProResMediaSettings_NoRegister()
	{
		return UAppleProResMediaSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAppleProResMediaSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfCPUDecodingThreads_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfCPUDecodingThreads;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAppleProResMediaSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AppleProResMedia,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleProResMediaSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the AppleProResMedia plug-in.\n */" },
		{ "IncludePath", "AppleProResMediaSettings.h" },
		{ "ModuleRelativePath", "Private/AppleProResMediaSettings.h" },
		{ "ToolTip", "Settings for the AppleProResMedia plug-in." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleProResMediaSettings_Statics::NewProp_NumberOfCPUDecodingThreads_MetaData[] = {
		{ "Category", "Media" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Number of CPU decoding threads (Set this to 0 to have the decoder spawn according to the number of processors detected in the system.). */" },
		{ "DisplayName", "Number Of CPU Decoding Threads" },
		{ "ModuleRelativePath", "Private/AppleProResMediaSettings.h" },
		{ "ToolTip", "Number of CPU decoding threads (Set this to 0 to have the decoder spawn according to the number of processors detected in the system.)." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAppleProResMediaSettings_Statics::NewProp_NumberOfCPUDecodingThreads = { "NumberOfCPUDecodingThreads", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAppleProResMediaSettings, NumberOfCPUDecodingThreads), METADATA_PARAMS(Z_Construct_UClass_UAppleProResMediaSettings_Statics::NewProp_NumberOfCPUDecodingThreads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleProResMediaSettings_Statics::NewProp_NumberOfCPUDecodingThreads_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAppleProResMediaSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleProResMediaSettings_Statics::NewProp_NumberOfCPUDecodingThreads,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAppleProResMediaSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAppleProResMediaSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAppleProResMediaSettings_Statics::ClassParams = {
		&UAppleProResMediaSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAppleProResMediaSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAppleProResMediaSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAppleProResMediaSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleProResMediaSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAppleProResMediaSettings()
	{
		if (!Z_Registration_Info_UClass_UAppleProResMediaSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAppleProResMediaSettings.OuterSingleton, Z_Construct_UClass_UAppleProResMediaSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAppleProResMediaSettings.OuterSingleton;
	}
	template<> APPLEPRORESMEDIA_API UClass* StaticClass<UAppleProResMediaSettings>()
	{
		return UAppleProResMediaSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAppleProResMediaSettings);
	UAppleProResMediaSettings::~UAppleProResMediaSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_AppleProResMediaSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_AppleProResMediaSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAppleProResMediaSettings, UAppleProResMediaSettings::StaticClass, TEXT("UAppleProResMediaSettings"), &Z_Registration_Info_UClass_UAppleProResMediaSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAppleProResMediaSettings), 3013801436U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_AppleProResMediaSettings_h_1068725749(TEXT("/Script/AppleProResMedia"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_AppleProResMediaSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_AppleProResMediaSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
