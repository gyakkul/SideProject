// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorPixelStreamingSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorPixelStreamingSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	PIXELSTREAMINGINPUT_API UClass* Z_Construct_UClass_UPixelStreamingSettings();
	PIXELSTREAMINGINPUT_API UClass* Z_Construct_UClass_UPixelStreamingSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PixelStreamingInput();
// End Cross Module References
	void UPixelStreamingSettings::StaticRegisterNativesUPixelStreamingSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPixelStreamingSettings);
	UClass* Z_Construct_UClass_UPixelStreamingSettings_NoRegister()
	{
		return UPixelStreamingSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPixelStreamingSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCursorClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultCursorClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextEditBeamCursorClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextEditBeamCursorClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HiddenCursorClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HiddenCursorClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMouseAlwaysAttached_MetaData[];
#endif
		static void NewProp_bMouseAlwaysAttached_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMouseAlwaysAttached;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPixelStreamingSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PixelStreamingInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Config loaded/saved to an .ini file.\n// It is also exposed through the plugin settings page in editor.\n" },
		{ "DisplayName", "PixelStreaming" },
		{ "IncludePath", "EditorPixelStreamingSettings.h" },
		{ "ModuleRelativePath", "Public/EditorPixelStreamingSettings.h" },
		{ "ToolTip", "Config loaded/saved to an .ini file.\nIt is also exposed through the plugin settings page in editor." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingSettings_Statics::NewProp_DefaultCursorClassName_MetaData[] = {
		{ "Category", "PixelStreaming" },
		{ "Comment", "/**\n\x09 * Pixel streaming always requires various software cursors so they will be\n\x09 * visible in the video stream sent to the browser to allow the user to\n\x09 * click and interact with UI elements.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorPixelStreamingSettings.h" },
		{ "ToolTip", "Pixel streaming always requires various software cursors so they will be\nvisible in the video stream sent to the browser to allow the user to\nclick and interact with UI elements." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPixelStreamingSettings_Statics::NewProp_DefaultCursorClassName = { "DefaultCursorClassName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelStreamingSettings, DefaultCursorClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingSettings_Statics::NewProp_DefaultCursorClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingSettings_Statics::NewProp_DefaultCursorClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingSettings_Statics::NewProp_TextEditBeamCursorClassName_MetaData[] = {
		{ "Category", "PixelStreaming" },
		{ "ModuleRelativePath", "Public/EditorPixelStreamingSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPixelStreamingSettings_Statics::NewProp_TextEditBeamCursorClassName = { "TextEditBeamCursorClassName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelStreamingSettings, TextEditBeamCursorClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingSettings_Statics::NewProp_TextEditBeamCursorClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingSettings_Statics::NewProp_TextEditBeamCursorClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingSettings_Statics::NewProp_HiddenCursorClassName_MetaData[] = {
		{ "Category", "PixelStreaming" },
		{ "Comment", "/**\n\x09 * Pixel Streaming can have a server-side cursor (where the cursor itself\n\x09 * is shown as part of the video), or a client-side cursor (where the cursor\n\x09 * is shown by the browser). In the latter case we need to turn the UE4\n\x09 * cursor invisible.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorPixelStreamingSettings.h" },
		{ "ToolTip", "Pixel Streaming can have a server-side cursor (where the cursor itself\nis shown as part of the video), or a client-side cursor (where the cursor\nis shown by the browser). In the latter case we need to turn the UE4\ncursor invisible." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPixelStreamingSettings_Statics::NewProp_HiddenCursorClassName = { "HiddenCursorClassName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelStreamingSettings, HiddenCursorClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingSettings_Statics::NewProp_HiddenCursorClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingSettings_Statics::NewProp_HiddenCursorClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingSettings_Statics::NewProp_bMouseAlwaysAttached_MetaData[] = {
		{ "Category", "PixelStreaming" },
		{ "Comment", "/**\n\x09 * Pixel Streaming may be running on a machine which has no physical mouse\n\x09 * attached, and yet the browser is sending mouse positions. As such, we\n\x09 * fake the presence of a mouse.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorPixelStreamingSettings.h" },
		{ "ToolTip", "Pixel Streaming may be running on a machine which has no physical mouse\nattached, and yet the browser is sending mouse positions. As such, we\nfake the presence of a mouse." },
	};
#endif
	void Z_Construct_UClass_UPixelStreamingSettings_Statics::NewProp_bMouseAlwaysAttached_SetBit(void* Obj)
	{
		((UPixelStreamingSettings*)Obj)->bMouseAlwaysAttached = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPixelStreamingSettings_Statics::NewProp_bMouseAlwaysAttached = { "bMouseAlwaysAttached", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPixelStreamingSettings), &Z_Construct_UClass_UPixelStreamingSettings_Statics::NewProp_bMouseAlwaysAttached_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingSettings_Statics::NewProp_bMouseAlwaysAttached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingSettings_Statics::NewProp_bMouseAlwaysAttached_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPixelStreamingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelStreamingSettings_Statics::NewProp_DefaultCursorClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelStreamingSettings_Statics::NewProp_TextEditBeamCursorClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelStreamingSettings_Statics::NewProp_HiddenCursorClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelStreamingSettings_Statics::NewProp_bMouseAlwaysAttached,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPixelStreamingSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPixelStreamingSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPixelStreamingSettings_Statics::ClassParams = {
		&UPixelStreamingSettings::StaticClass,
		"PixelStreaming",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPixelStreamingSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPixelStreamingSettings()
	{
		if (!Z_Registration_Info_UClass_UPixelStreamingSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPixelStreamingSettings.OuterSingleton, Z_Construct_UClass_UPixelStreamingSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPixelStreamingSettings.OuterSingleton;
	}
	template<> PIXELSTREAMINGINPUT_API UClass* StaticClass<UPixelStreamingSettings>()
	{
		return UPixelStreamingSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPixelStreamingSettings);
	UPixelStreamingSettings::~UPixelStreamingSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingInput_Public_EditorPixelStreamingSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingInput_Public_EditorPixelStreamingSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPixelStreamingSettings, UPixelStreamingSettings::StaticClass, TEXT("UPixelStreamingSettings"), &Z_Registration_Info_UClass_UPixelStreamingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPixelStreamingSettings), 890285011U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingInput_Public_EditorPixelStreamingSettings_h_2830258097(TEXT("/Script/PixelStreamingInput"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingInput_Public_EditorPixelStreamingSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingInput_Public_EditorPixelStreamingSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
