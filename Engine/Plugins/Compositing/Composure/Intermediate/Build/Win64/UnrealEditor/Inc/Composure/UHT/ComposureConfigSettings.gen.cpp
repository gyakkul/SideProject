// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ComposureConfigSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComposureConfigSettings() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_UComposureGameSettings();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposureGameSettings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Composure();
// End Cross Module References
	void UComposureGameSettings::StaticRegisterNativesUComposureGameSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComposureGameSettings);
	UClass* Z_Construct_UClass_UComposureGameSettings_NoRegister()
	{
		return UComposureGameSettings::StaticClass();
	}
	struct Z_Construct_UClass_UComposureGameSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticVideoPlateDebugImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticVideoPlateDebugImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSceneCapWarnOfMissingCam_MetaData[];
#endif
		static void NewProp_bSceneCapWarnOfMissingCam_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSceneCapWarnOfMissingCam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallbackCompositingTexture_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FallbackCompositingTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallbackCompositingTextureObj_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FallbackCompositingTextureObj;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComposureGameSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposureGameSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ComposureConfigSettings.h" },
		{ "ModuleRelativePath", "Private/ComposureConfigSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposureGameSettings_Statics::NewProp_StaticVideoPlateDebugImage_MetaData[] = {
		{ "Category", "Composure|Media" },
		{ "ModuleRelativePath", "Private/ComposureConfigSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComposureGameSettings_Statics::NewProp_StaticVideoPlateDebugImage = { "StaticVideoPlateDebugImage", nullptr, (EPropertyFlags)0x0010000000004014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposureGameSettings, StaticVideoPlateDebugImage), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UComposureGameSettings_Statics::NewProp_StaticVideoPlateDebugImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposureGameSettings_Statics::NewProp_StaticVideoPlateDebugImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposureGameSettings_Statics::NewProp_bSceneCapWarnOfMissingCam_MetaData[] = {
		{ "Category", "Composure|Editor" },
		{ "ModuleRelativePath", "Private/ComposureConfigSettings.h" },
	};
#endif
	void Z_Construct_UClass_UComposureGameSettings_Statics::NewProp_bSceneCapWarnOfMissingCam_SetBit(void* Obj)
	{
		((UComposureGameSettings*)Obj)->bSceneCapWarnOfMissingCam = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComposureGameSettings_Statics::NewProp_bSceneCapWarnOfMissingCam = { "bSceneCapWarnOfMissingCam", nullptr, (EPropertyFlags)0x0010000000004014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UComposureGameSettings), &Z_Construct_UClass_UComposureGameSettings_Statics::NewProp_bSceneCapWarnOfMissingCam_SetBit, METADATA_PARAMS(Z_Construct_UClass_UComposureGameSettings_Statics::NewProp_bSceneCapWarnOfMissingCam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposureGameSettings_Statics::NewProp_bSceneCapWarnOfMissingCam_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposureGameSettings_Statics::NewProp_FallbackCompositingTexture_MetaData[] = {
		{ "Category", "Composure" },
		{ "ModuleRelativePath", "Private/ComposureConfigSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComposureGameSettings_Statics::NewProp_FallbackCompositingTexture = { "FallbackCompositingTexture", nullptr, (EPropertyFlags)0x0010000000004014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposureGameSettings, FallbackCompositingTexture), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UComposureGameSettings_Statics::NewProp_FallbackCompositingTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposureGameSettings_Statics::NewProp_FallbackCompositingTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposureGameSettings_Statics::NewProp_FallbackCompositingTextureObj_MetaData[] = {
		{ "ModuleRelativePath", "Private/ComposureConfigSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComposureGameSettings_Statics::NewProp_FallbackCompositingTextureObj = { "FallbackCompositingTextureObj", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposureGameSettings, FallbackCompositingTextureObj), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UComposureGameSettings_Statics::NewProp_FallbackCompositingTextureObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposureGameSettings_Statics::NewProp_FallbackCompositingTextureObj_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComposureGameSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposureGameSettings_Statics::NewProp_StaticVideoPlateDebugImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposureGameSettings_Statics::NewProp_bSceneCapWarnOfMissingCam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposureGameSettings_Statics::NewProp_FallbackCompositingTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposureGameSettings_Statics::NewProp_FallbackCompositingTextureObj,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComposureGameSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComposureGameSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComposureGameSettings_Statics::ClassParams = {
		&UComposureGameSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComposureGameSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComposureGameSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UComposureGameSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComposureGameSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComposureGameSettings()
	{
		if (!Z_Registration_Info_UClass_UComposureGameSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComposureGameSettings.OuterSingleton, Z_Construct_UClass_UComposureGameSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComposureGameSettings.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UComposureGameSettings>()
	{
		return UComposureGameSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComposureGameSettings);
	UComposureGameSettings::~UComposureGameSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposureConfigSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposureConfigSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComposureGameSettings, UComposureGameSettings::StaticClass, TEXT("UComposureGameSettings"), &Z_Registration_Info_UClass_UComposureGameSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComposureGameSettings), 1587660296U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposureConfigSettings_h_1477601769(TEXT("/Script/Composure"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposureConfigSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposureConfigSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
