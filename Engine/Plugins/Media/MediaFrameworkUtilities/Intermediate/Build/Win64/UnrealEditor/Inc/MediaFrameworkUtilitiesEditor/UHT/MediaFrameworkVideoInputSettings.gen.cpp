// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaFrameworkVideoInputSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaFrameworkVideoInputSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
	MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UMediaBundle_NoRegister();
	MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* Z_Construct_UClass_UMediaFrameworkVideoInputSettings();
	MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* Z_Construct_UClass_UMediaFrameworkVideoInputSettings_NoRegister();
	MEDIAFRAMEWORKUTILITIESEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMediaFrameworkVideoInputSourceSettings();
	UPackage* Z_Construct_UPackage__Script_MediaFrameworkUtilitiesEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MediaFrameworkVideoInputSourceSettings;
class UScriptStruct* FMediaFrameworkVideoInputSourceSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MediaFrameworkVideoInputSourceSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MediaFrameworkVideoInputSourceSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaFrameworkVideoInputSourceSettings, (UObject*)Z_Construct_UPackage__Script_MediaFrameworkUtilitiesEditor(), TEXT("MediaFrameworkVideoInputSourceSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MediaFrameworkVideoInputSourceSettings.OuterSingleton;
}
template<> MEDIAFRAMEWORKUTILITIESEDITOR_API UScriptStruct* StaticStruct<FMediaFrameworkVideoInputSourceSettings>()
{
	return FMediaFrameworkVideoInputSourceSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMediaFrameworkVideoInputSourceSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSource_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MediaSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaTexture_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MediaTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaFrameworkVideoInputSourceSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MediaFrameworkVideoInputSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMediaFrameworkVideoInputSourceSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaFrameworkVideoInputSourceSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaFrameworkVideoInputSourceSettings_Statics::NewProp_MediaSource_MetaData[] = {
		{ "Category", "Media" },
		{ "ModuleRelativePath", "Private/MediaFrameworkVideoInputSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMediaFrameworkVideoInputSourceSettings_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaFrameworkVideoInputSourceSettings, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaFrameworkVideoInputSourceSettings_Statics::NewProp_MediaSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaFrameworkVideoInputSourceSettings_Statics::NewProp_MediaSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaFrameworkVideoInputSourceSettings_Statics::NewProp_MediaTexture_MetaData[] = {
		{ "Category", "Media" },
		{ "ModuleRelativePath", "Private/MediaFrameworkVideoInputSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMediaFrameworkVideoInputSourceSettings_Statics::NewProp_MediaTexture = { "MediaTexture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaFrameworkVideoInputSourceSettings, MediaTexture), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaFrameworkVideoInputSourceSettings_Statics::NewProp_MediaTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaFrameworkVideoInputSourceSettings_Statics::NewProp_MediaTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaFrameworkVideoInputSourceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaFrameworkVideoInputSourceSettings_Statics::NewProp_MediaSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaFrameworkVideoInputSourceSettings_Statics::NewProp_MediaTexture,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaFrameworkVideoInputSourceSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaFrameworkUtilitiesEditor,
		nullptr,
		&NewStructOps,
		"MediaFrameworkVideoInputSourceSettings",
		sizeof(FMediaFrameworkVideoInputSourceSettings),
		alignof(FMediaFrameworkVideoInputSourceSettings),
		Z_Construct_UScriptStruct_FMediaFrameworkVideoInputSourceSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaFrameworkVideoInputSourceSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaFrameworkVideoInputSourceSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaFrameworkVideoInputSourceSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMediaFrameworkVideoInputSourceSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_MediaFrameworkVideoInputSourceSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MediaFrameworkVideoInputSourceSettings.InnerSingleton, Z_Construct_UScriptStruct_FMediaFrameworkVideoInputSourceSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MediaFrameworkVideoInputSourceSettings.InnerSingleton;
	}
	void UMediaFrameworkVideoInputSettings::StaticRegisterNativesUMediaFrameworkVideoInputSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaFrameworkVideoInputSettings);
	UClass* Z_Construct_UClass_UMediaFrameworkVideoInputSettings_NoRegister()
	{
		return UMediaFrameworkVideoInputSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MediaBundles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaBundles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MediaBundles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MediaSources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MediaSources;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReopenMediaBundles_MetaData[];
#endif
		static void NewProp_bReopenMediaBundles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReopenMediaBundles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReopenMediaSources_MetaData[];
#endif
		static void NewProp_bReopenMediaSources_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReopenMediaSources;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReopenDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReopenDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVerticalSplitterOrientation_MetaData[];
#endif
		static void NewProp_bIsVerticalSplitterOrientation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVerticalSplitterOrientation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaFrameworkUtilitiesEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the video input tab.\n */" },
		{ "IncludePath", "MediaFrameworkVideoInputSettings.h" },
		{ "ModuleRelativePath", "Private/MediaFrameworkVideoInputSettings.h" },
		{ "ToolTip", "Settings for the video input tab." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_MediaBundles_Inner = { "MediaBundles", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMediaBundle_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_MediaBundles_MetaData[] = {
		{ "Category", "Media Bundle" },
		{ "ModuleRelativePath", "Private/MediaFrameworkVideoInputSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_MediaBundles = { "MediaBundles", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaFrameworkVideoInputSettings, MediaBundles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_MediaBundles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_MediaBundles_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_MediaSources_Inner = { "MediaSources", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMediaFrameworkVideoInputSourceSettings, METADATA_PARAMS(nullptr, 0) }; // 2429970291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_MediaSources_MetaData[] = {
		{ "Category", "Media Source" },
		{ "ModuleRelativePath", "Private/MediaFrameworkVideoInputSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_MediaSources = { "MediaSources", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaFrameworkVideoInputSettings, MediaSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_MediaSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_MediaSources_MetaData)) }; // 2429970291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_bReopenMediaBundles_MetaData[] = {
		{ "ModuleRelativePath", "Private/MediaFrameworkVideoInputSettings.h" },
	};
#endif
	void Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_bReopenMediaBundles_SetBit(void* Obj)
	{
		((UMediaFrameworkVideoInputSettings*)Obj)->bReopenMediaBundles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_bReopenMediaBundles = { "bReopenMediaBundles", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMediaFrameworkVideoInputSettings), &Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_bReopenMediaBundles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_bReopenMediaBundles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_bReopenMediaBundles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_bReopenMediaSources_MetaData[] = {
		{ "ModuleRelativePath", "Private/MediaFrameworkVideoInputSettings.h" },
	};
#endif
	void Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_bReopenMediaSources_SetBit(void* Obj)
	{
		((UMediaFrameworkVideoInputSettings*)Obj)->bReopenMediaSources = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_bReopenMediaSources = { "bReopenMediaSources", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMediaFrameworkVideoInputSettings), &Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_bReopenMediaSources_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_bReopenMediaSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_bReopenMediaSources_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_ReopenDelay_MetaData[] = {
		{ "ModuleRelativePath", "Private/MediaFrameworkVideoInputSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_ReopenDelay = { "ReopenDelay", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaFrameworkVideoInputSettings, ReopenDelay), METADATA_PARAMS(Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_ReopenDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_ReopenDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_bIsVerticalSplitterOrientation_MetaData[] = {
		{ "ModuleRelativePath", "Private/MediaFrameworkVideoInputSettings.h" },
	};
#endif
	void Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_bIsVerticalSplitterOrientation_SetBit(void* Obj)
	{
		((UMediaFrameworkVideoInputSettings*)Obj)->bIsVerticalSplitterOrientation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_bIsVerticalSplitterOrientation = { "bIsVerticalSplitterOrientation", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMediaFrameworkVideoInputSettings), &Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_bIsVerticalSplitterOrientation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_bIsVerticalSplitterOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_bIsVerticalSplitterOrientation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_MediaBundles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_MediaBundles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_MediaSources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_MediaSources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_bReopenMediaBundles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_bReopenMediaSources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_ReopenDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::NewProp_bIsVerticalSplitterOrientation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaFrameworkVideoInputSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::ClassParams = {
		&UMediaFrameworkVideoInputSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::PropPointers),
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaFrameworkVideoInputSettings()
	{
		if (!Z_Registration_Info_UClass_UMediaFrameworkVideoInputSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaFrameworkVideoInputSettings.OuterSingleton, Z_Construct_UClass_UMediaFrameworkVideoInputSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaFrameworkVideoInputSettings.OuterSingleton;
	}
	template<> MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* StaticClass<UMediaFrameworkVideoInputSettings>()
	{
		return UMediaFrameworkVideoInputSettings::StaticClass();
	}
	UMediaFrameworkVideoInputSettings::UMediaFrameworkVideoInputSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaFrameworkVideoInputSettings);
	UMediaFrameworkVideoInputSettings::~UMediaFrameworkVideoInputSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_MediaFrameworkVideoInputSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_MediaFrameworkVideoInputSettings_h_Statics::ScriptStructInfo[] = {
		{ FMediaFrameworkVideoInputSourceSettings::StaticStruct, Z_Construct_UScriptStruct_FMediaFrameworkVideoInputSourceSettings_Statics::NewStructOps, TEXT("MediaFrameworkVideoInputSourceSettings"), &Z_Registration_Info_UScriptStruct_MediaFrameworkVideoInputSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMediaFrameworkVideoInputSourceSettings), 2429970291U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_MediaFrameworkVideoInputSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaFrameworkVideoInputSettings, UMediaFrameworkVideoInputSettings::StaticClass, TEXT("UMediaFrameworkVideoInputSettings"), &Z_Registration_Info_UClass_UMediaFrameworkVideoInputSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaFrameworkVideoInputSettings), 3414048850U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_MediaFrameworkVideoInputSettings_h_734339122(TEXT("/Script/MediaFrameworkUtilitiesEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_MediaFrameworkVideoInputSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_MediaFrameworkVideoInputSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_MediaFrameworkVideoInputSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_MediaFrameworkVideoInputSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
