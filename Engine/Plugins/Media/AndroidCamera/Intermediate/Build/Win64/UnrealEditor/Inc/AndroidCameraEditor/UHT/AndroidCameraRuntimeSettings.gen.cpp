// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidCameraRuntimeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidCameraRuntimeSettings() {}
// Cross Module References
	ANDROIDCAMERAEDITOR_API UClass* Z_Construct_UClass_UAndroidCameraRuntimeSettings();
	ANDROIDCAMERAEDITOR_API UClass* Z_Construct_UClass_UAndroidCameraRuntimeSettings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AndroidCameraEditor();
// End Cross Module References
	void UAndroidCameraRuntimeSettings::StaticRegisterNativesUAndroidCameraRuntimeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAndroidCameraRuntimeSettings);
	UClass* Z_Construct_UClass_UAndroidCameraRuntimeSettings_NoRegister()
	{
		return UAndroidCameraRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePermission_MetaData[];
#endif
		static void NewProp_bEnablePermission_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePermission;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresAnyCamera_MetaData[];
#endif
		static void NewProp_bRequiresAnyCamera_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresAnyCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresBackFacingCamera_MetaData[];
#endif
		static void NewProp_bRequiresBackFacingCamera_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresBackFacingCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresFrontFacingCamera_MetaData[];
#endif
		static void NewProp_bRequiresFrontFacingCamera_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresFrontFacingCamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AndroidCameraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Implements the settings for the AndroidCamera plugin.\n*/" },
		{ "IncludePath", "AndroidCameraRuntimeSettings.h" },
		{ "ModuleRelativePath", "Public/AndroidCameraRuntimeSettings.h" },
		{ "ToolTip", "Implements the settings for the AndroidCamera plugin." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::NewProp_bEnablePermission_MetaData[] = {
		{ "Category", "ManifestSettings" },
		{ "Comment", "// Enable camera permission in AndroidManifest\n" },
		{ "ModuleRelativePath", "Public/AndroidCameraRuntimeSettings.h" },
		{ "ToolTip", "Enable camera permission in AndroidManifest" },
	};
#endif
	void Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::NewProp_bEnablePermission_SetBit(void* Obj)
	{
		((UAndroidCameraRuntimeSettings*)Obj)->bEnablePermission = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::NewProp_bEnablePermission = { "bEnablePermission", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidCameraRuntimeSettings), &Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::NewProp_bEnablePermission_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::NewProp_bEnablePermission_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::NewProp_bEnablePermission_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::NewProp_bRequiresAnyCamera_MetaData[] = {
		{ "Category", "ManifestSettings" },
		{ "Comment", "// Requires a camera to operate (if true and back-facing and front-facing are false, sets android.hardware.camera.any as required)\n" },
		{ "ModuleRelativePath", "Public/AndroidCameraRuntimeSettings.h" },
		{ "ToolTip", "Requires a camera to operate (if true and back-facing and front-facing are false, sets android.hardware.camera.any as required)" },
	};
#endif
	void Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::NewProp_bRequiresAnyCamera_SetBit(void* Obj)
	{
		((UAndroidCameraRuntimeSettings*)Obj)->bRequiresAnyCamera = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::NewProp_bRequiresAnyCamera = { "bRequiresAnyCamera", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidCameraRuntimeSettings), &Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::NewProp_bRequiresAnyCamera_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::NewProp_bRequiresAnyCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::NewProp_bRequiresAnyCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::NewProp_bRequiresBackFacingCamera_MetaData[] = {
		{ "Category", "ManifestSettings" },
		{ "Comment", "// Requires back-facing camera in AndroidManifest (android.hardware.camera)\n" },
		{ "ModuleRelativePath", "Public/AndroidCameraRuntimeSettings.h" },
		{ "ToolTip", "Requires back-facing camera in AndroidManifest (android.hardware.camera)" },
	};
#endif
	void Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::NewProp_bRequiresBackFacingCamera_SetBit(void* Obj)
	{
		((UAndroidCameraRuntimeSettings*)Obj)->bRequiresBackFacingCamera = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::NewProp_bRequiresBackFacingCamera = { "bRequiresBackFacingCamera", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidCameraRuntimeSettings), &Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::NewProp_bRequiresBackFacingCamera_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::NewProp_bRequiresBackFacingCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::NewProp_bRequiresBackFacingCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::NewProp_bRequiresFrontFacingCamera_MetaData[] = {
		{ "Category", "ManifestSettings" },
		{ "Comment", "// Requires front-facing camera in AndroidManifest (android.hardware.camera.front)\n" },
		{ "ModuleRelativePath", "Public/AndroidCameraRuntimeSettings.h" },
		{ "ToolTip", "Requires front-facing camera in AndroidManifest (android.hardware.camera.front)" },
	};
#endif
	void Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::NewProp_bRequiresFrontFacingCamera_SetBit(void* Obj)
	{
		((UAndroidCameraRuntimeSettings*)Obj)->bRequiresFrontFacingCamera = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::NewProp_bRequiresFrontFacingCamera = { "bRequiresFrontFacingCamera", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidCameraRuntimeSettings), &Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::NewProp_bRequiresFrontFacingCamera_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::NewProp_bRequiresFrontFacingCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::NewProp_bRequiresFrontFacingCamera_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::NewProp_bEnablePermission,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::NewProp_bRequiresAnyCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::NewProp_bRequiresBackFacingCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::NewProp_bRequiresFrontFacingCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidCameraRuntimeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::ClassParams = {
		&UAndroidCameraRuntimeSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAndroidCameraRuntimeSettings()
	{
		if (!Z_Registration_Info_UClass_UAndroidCameraRuntimeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidCameraRuntimeSettings.OuterSingleton, Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAndroidCameraRuntimeSettings.OuterSingleton;
	}
	template<> ANDROIDCAMERAEDITOR_API UClass* StaticClass<UAndroidCameraRuntimeSettings>()
	{
		return UAndroidCameraRuntimeSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidCameraRuntimeSettings);
	UAndroidCameraRuntimeSettings::~UAndroidCameraRuntimeSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AndroidCamera_Source_AndroidCameraEditor_Public_AndroidCameraRuntimeSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AndroidCamera_Source_AndroidCameraEditor_Public_AndroidCameraRuntimeSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidCameraRuntimeSettings, UAndroidCameraRuntimeSettings::StaticClass, TEXT("UAndroidCameraRuntimeSettings"), &Z_Registration_Info_UClass_UAndroidCameraRuntimeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidCameraRuntimeSettings), 1915187443U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AndroidCamera_Source_AndroidCameraEditor_Public_AndroidCameraRuntimeSettings_h_186159407(TEXT("/Script/AndroidCameraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AndroidCamera_Source_AndroidCameraEditor_Public_AndroidCameraRuntimeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AndroidCamera_Source_AndroidCameraEditor_Public_AndroidCameraRuntimeSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
