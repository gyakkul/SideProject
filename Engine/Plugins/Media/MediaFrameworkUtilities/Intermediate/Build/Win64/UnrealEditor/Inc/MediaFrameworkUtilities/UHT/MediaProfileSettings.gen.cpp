// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Profile/MediaProfileSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaProfileSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UMediaProfile_NoRegister();
	MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UMediaProfileEditorSettings();
	MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UMediaProfileEditorSettings_NoRegister();
	MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UMediaProfileSettings();
	MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UMediaProfileSettings_NoRegister();
	MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UProxyMediaOutput_NoRegister();
	MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UProxyMediaSource_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MediaFrameworkUtilities();
// End Cross Module References
	void UMediaProfileSettings::StaticRegisterNativesUMediaProfileSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaProfileSettings);
	UClass* Z_Construct_UClass_UMediaProfileSettings_NoRegister()
	{
		return UMediaProfileSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMediaProfileSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyInCommandlet_MetaData[];
#endif
		static void NewProp_bApplyInCommandlet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyInCommandlet;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MediaSourceProxy_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSourceProxy_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MediaSourceProxy;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MediaOutputProxy_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaOutputProxy_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MediaOutputProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartupMediaProfile_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StartupMediaProfile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaProfileSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaFrameworkUtilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaProfileSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the media profile.\n */" },
		{ "IncludePath", "Profile/MediaProfileSettings.h" },
		{ "ModuleRelativePath", "Public/Profile/MediaProfileSettings.h" },
		{ "ToolTip", "Settings for the media profile." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaProfileSettings_Statics::NewProp_bApplyInCommandlet_MetaData[] = {
		{ "Category", "MediaProfile" },
		{ "Comment", "/**\n\x09 * Apply the startup media profile even when we are running a commandlet.\n\x09 * @note We always try to apply the user media profile before the startup media profile in the editor or standalone.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Profile/MediaProfileSettings.h" },
		{ "ToolTip", "Apply the startup media profile even when we are running a commandlet.\n@note We always try to apply the user media profile before the startup media profile in the editor or standalone." },
	};
#endif
	void Z_Construct_UClass_UMediaProfileSettings_Statics::NewProp_bApplyInCommandlet_SetBit(void* Obj)
	{
		((UMediaProfileSettings*)Obj)->bApplyInCommandlet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaProfileSettings_Statics::NewProp_bApplyInCommandlet = { "bApplyInCommandlet", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMediaProfileSettings), &Z_Construct_UClass_UMediaProfileSettings_Statics::NewProp_bApplyInCommandlet_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaProfileSettings_Statics::NewProp_bApplyInCommandlet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaProfileSettings_Statics::NewProp_bApplyInCommandlet_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMediaProfileSettings_Statics::NewProp_MediaSourceProxy_Inner = { "MediaSourceProxy", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UProxyMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaProfileSettings_Statics::NewProp_MediaSourceProxy_MetaData[] = {
		{ "Category", "MediaProfile" },
		{ "ModuleRelativePath", "Public/Profile/MediaProfileSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMediaProfileSettings_Statics::NewProp_MediaSourceProxy = { "MediaSourceProxy", nullptr, (EPropertyFlags)0x0044040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaProfileSettings, MediaSourceProxy), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMediaProfileSettings_Statics::NewProp_MediaSourceProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaProfileSettings_Statics::NewProp_MediaSourceProxy_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMediaProfileSettings_Statics::NewProp_MediaOutputProxy_Inner = { "MediaOutputProxy", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UProxyMediaOutput_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaProfileSettings_Statics::NewProp_MediaOutputProxy_MetaData[] = {
		{ "Category", "MediaProfile" },
		{ "ModuleRelativePath", "Public/Profile/MediaProfileSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMediaProfileSettings_Statics::NewProp_MediaOutputProxy = { "MediaOutputProxy", nullptr, (EPropertyFlags)0x0044040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaProfileSettings, MediaOutputProxy), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMediaProfileSettings_Statics::NewProp_MediaOutputProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaProfileSettings_Statics::NewProp_MediaOutputProxy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaProfileSettings_Statics::NewProp_StartupMediaProfile_MetaData[] = {
		{ "Category", "MediaProfile" },
		{ "Comment", "/**\n\x09 * The media profile to use at startup.\n\x09 * @note The media profile can be overridden in the editor by user.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Profile/MediaProfileSettings.h" },
		{ "ToolTip", "The media profile to use at startup.\n@note The media profile can be overridden in the editor by user." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMediaProfileSettings_Statics::NewProp_StartupMediaProfile = { "StartupMediaProfile", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaProfileSettings, StartupMediaProfile), Z_Construct_UClass_UMediaProfile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaProfileSettings_Statics::NewProp_StartupMediaProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaProfileSettings_Statics::NewProp_StartupMediaProfile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaProfileSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaProfileSettings_Statics::NewProp_bApplyInCommandlet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaProfileSettings_Statics::NewProp_MediaSourceProxy_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaProfileSettings_Statics::NewProp_MediaSourceProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaProfileSettings_Statics::NewProp_MediaOutputProxy_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaProfileSettings_Statics::NewProp_MediaOutputProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaProfileSettings_Statics::NewProp_StartupMediaProfile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaProfileSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaProfileSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaProfileSettings_Statics::ClassParams = {
		&UMediaProfileSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMediaProfileSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMediaProfileSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaProfileSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaProfileSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaProfileSettings()
	{
		if (!Z_Registration_Info_UClass_UMediaProfileSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaProfileSettings.OuterSingleton, Z_Construct_UClass_UMediaProfileSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaProfileSettings.OuterSingleton;
	}
	template<> MEDIAFRAMEWORKUTILITIES_API UClass* StaticClass<UMediaProfileSettings>()
	{
		return UMediaProfileSettings::StaticClass();
	}
	UMediaProfileSettings::UMediaProfileSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaProfileSettings);
	UMediaProfileSettings::~UMediaProfileSettings() {}
	void UMediaProfileEditorSettings::StaticRegisterNativesUMediaProfileEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaProfileEditorSettings);
	UClass* Z_Construct_UClass_UMediaProfileEditorSettings_NoRegister()
	{
		return UMediaProfileEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMediaProfileEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayInToolbar_MetaData[];
#endif
		static void NewProp_bDisplayInToolbar_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayInToolbar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayInMainEditor_MetaData[];
#endif
		static void NewProp_bDisplayInMainEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayInMainEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserMediaProfile_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_UserMediaProfile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaProfileEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaFrameworkUtilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaProfileEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the media profile in the editor or standalone.\n * @note Cooked games don't use this media profile setting.\n */" },
		{ "IncludePath", "Profile/MediaProfileSettings.h" },
		{ "ModuleRelativePath", "Public/Profile/MediaProfileSettings.h" },
		{ "ToolTip", "Settings for the media profile in the editor or standalone.\n@note Cooked games don't use this media profile setting." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaProfileEditorSettings_Statics::NewProp_bDisplayInToolbar_MetaData[] = {
		{ "Category", "MediaProfile" },
		{ "Comment", "/**\n\x09 * Display the media profile icon in the editor toolbar.\n\x09 */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/Profile/MediaProfileSettings.h" },
		{ "ToolTip", "Display the media profile icon in the editor toolbar." },
	};
#endif
	void Z_Construct_UClass_UMediaProfileEditorSettings_Statics::NewProp_bDisplayInToolbar_SetBit(void* Obj)
	{
		((UMediaProfileEditorSettings*)Obj)->bDisplayInToolbar = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaProfileEditorSettings_Statics::NewProp_bDisplayInToolbar = { "bDisplayInToolbar", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMediaProfileEditorSettings), &Z_Construct_UClass_UMediaProfileEditorSettings_Statics::NewProp_bDisplayInToolbar_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaProfileEditorSettings_Statics::NewProp_bDisplayInToolbar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaProfileEditorSettings_Statics::NewProp_bDisplayInToolbar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaProfileEditorSettings_Statics::NewProp_bDisplayInMainEditor_MetaData[] = {
		{ "Category", "MediaProfile" },
		{ "Comment", "/** When enabled, the media profile name will be displayed in the main editor UI. */" },
		{ "ModuleRelativePath", "Public/Profile/MediaProfileSettings.h" },
		{ "ToolTip", "When enabled, the media profile name will be displayed in the main editor UI." },
	};
#endif
	void Z_Construct_UClass_UMediaProfileEditorSettings_Statics::NewProp_bDisplayInMainEditor_SetBit(void* Obj)
	{
		((UMediaProfileEditorSettings*)Obj)->bDisplayInMainEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaProfileEditorSettings_Statics::NewProp_bDisplayInMainEditor = { "bDisplayInMainEditor", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMediaProfileEditorSettings), &Z_Construct_UClass_UMediaProfileEditorSettings_Statics::NewProp_bDisplayInMainEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaProfileEditorSettings_Statics::NewProp_bDisplayInMainEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaProfileEditorSettings_Statics::NewProp_bDisplayInMainEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaProfileEditorSettings_Statics::NewProp_UserMediaProfile_MetaData[] = {
		{ "Category", "MediaProfile" },
		{ "Comment", "/**\n\x09 * The media profile to use in standalone & editor.\n\x09 * @note The startup media profile in the project setting will be used when in cooked game.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Profile/MediaProfileSettings.h" },
		{ "ToolTip", "The media profile to use in standalone & editor.\n@note The startup media profile in the project setting will be used when in cooked game." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMediaProfileEditorSettings_Statics::NewProp_UserMediaProfile = { "UserMediaProfile", nullptr, (EPropertyFlags)0x0044000800004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaProfileEditorSettings, UserMediaProfile), Z_Construct_UClass_UMediaProfile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaProfileEditorSettings_Statics::NewProp_UserMediaProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaProfileEditorSettings_Statics::NewProp_UserMediaProfile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaProfileEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaProfileEditorSettings_Statics::NewProp_bDisplayInToolbar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaProfileEditorSettings_Statics::NewProp_bDisplayInMainEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaProfileEditorSettings_Statics::NewProp_UserMediaProfile,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaProfileEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaProfileEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaProfileEditorSettings_Statics::ClassParams = {
		&UMediaProfileEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UMediaProfileEditorSettings_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaProfileEditorSettings_Statics::PropPointers), 0),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaProfileEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaProfileEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaProfileEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UMediaProfileEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaProfileEditorSettings.OuterSingleton, Z_Construct_UClass_UMediaProfileEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaProfileEditorSettings.OuterSingleton;
	}
	template<> MEDIAFRAMEWORKUTILITIES_API UClass* StaticClass<UMediaProfileEditorSettings>()
	{
		return UMediaProfileEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaProfileEditorSettings);
	UMediaProfileEditorSettings::~UMediaProfileEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfileSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfileSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaProfileSettings, UMediaProfileSettings::StaticClass, TEXT("UMediaProfileSettings"), &Z_Registration_Info_UClass_UMediaProfileSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaProfileSettings), 1271380983U) },
		{ Z_Construct_UClass_UMediaProfileEditorSettings, UMediaProfileEditorSettings::StaticClass, TEXT("UMediaProfileEditorSettings"), &Z_Registration_Info_UClass_UMediaProfileEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaProfileEditorSettings), 610276147U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfileSettings_h_2207805492(TEXT("/Script/MediaFrameworkUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfileSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfileSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
