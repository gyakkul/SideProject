// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Shared/MediaPlayerEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaPlayerEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UMediaPlayerEditorSettings();
	MEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UMediaPlayerEditorSettings_NoRegister();
	MEDIAPLAYEREDITOR_API UEnum* Z_Construct_UEnum_MediaPlayerEditor_EMediaPlayerEditorScale();
	UPackage* Z_Construct_UPackage__Script_MediaPlayerEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaPlayerEditorScale;
	static UEnum* EMediaPlayerEditorScale_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMediaPlayerEditorScale.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMediaPlayerEditorScale.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaPlayerEditor_EMediaPlayerEditorScale, (UObject*)Z_Construct_UPackage__Script_MediaPlayerEditor(), TEXT("EMediaPlayerEditorScale"));
		}
		return Z_Registration_Info_UEnum_EMediaPlayerEditorScale.OuterSingleton;
	}
	template<> MEDIAPLAYEREDITOR_API UEnum* StaticEnum<EMediaPlayerEditorScale>()
	{
		return EMediaPlayerEditorScale_StaticEnum();
	}
	struct Z_Construct_UEnum_MediaPlayerEditor_EMediaPlayerEditorScale_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MediaPlayerEditor_EMediaPlayerEditorScale_Statics::Enumerators[] = {
		{ "EMediaPlayerEditorScale::Fill", (int64)EMediaPlayerEditorScale::Fill },
		{ "EMediaPlayerEditorScale::Fit", (int64)EMediaPlayerEditorScale::Fit },
		{ "EMediaPlayerEditorScale::Original", (int64)EMediaPlayerEditorScale::Original },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MediaPlayerEditor_EMediaPlayerEditorScale_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Options for scaling the viewport's video texture. */" },
		{ "Fill.Comment", "/** Stretch non-uniformly to fill the viewport. */" },
		{ "Fill.Name", "EMediaPlayerEditorScale::Fill" },
		{ "Fill.ToolTip", "Stretch non-uniformly to fill the viewport." },
		{ "Fit.Comment", "/** Scale uniformly, preserving aspect ratio. */" },
		{ "Fit.Name", "EMediaPlayerEditorScale::Fit" },
		{ "Fit.ToolTip", "Scale uniformly, preserving aspect ratio." },
		{ "ModuleRelativePath", "Private/Shared/MediaPlayerEditorSettings.h" },
		{ "Original.Comment", "/** Do not stretch or scale. */" },
		{ "Original.Name", "EMediaPlayerEditorScale::Original" },
		{ "Original.ToolTip", "Do not stretch or scale." },
		{ "ToolTip", "Options for scaling the viewport's video texture." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaPlayerEditor_EMediaPlayerEditorScale_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MediaPlayerEditor,
		nullptr,
		"EMediaPlayerEditorScale",
		"EMediaPlayerEditorScale",
		Z_Construct_UEnum_MediaPlayerEditor_EMediaPlayerEditorScale_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MediaPlayerEditor_EMediaPlayerEditorScale_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MediaPlayerEditor_EMediaPlayerEditorScale_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MediaPlayerEditor_EMediaPlayerEditorScale_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MediaPlayerEditor_EMediaPlayerEditorScale()
	{
		if (!Z_Registration_Info_UEnum_EMediaPlayerEditorScale.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaPlayerEditorScale.InnerSingleton, Z_Construct_UEnum_MediaPlayerEditor_EMediaPlayerEditorScale_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMediaPlayerEditorScale.InnerSingleton;
	}
	void UMediaPlayerEditorSettings::StaticRegisterNativesUMediaPlayerEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaPlayerEditorSettings);
	UClass* Z_Construct_UClass_UMediaPlayerEditorSettings_NoRegister()
	{
		return UMediaPlayerEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMediaPlayerEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredPlayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DesiredPlayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowTextOverlays_MetaData[];
#endif
		static void NewProp_ShowTextOverlays_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowTextOverlays;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ViewportScale_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportScale_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ViewportScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaPlayerEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaPlayerEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlayerEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Shared/MediaPlayerEditorSettings.h" },
		{ "ModuleRelativePath", "Private/Shared/MediaPlayerEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlayerEditorSettings_Statics::NewProp_DesiredPlayerName_MetaData[] = {
		{ "Category", "Viewer" },
		{ "Comment", "/** The name of the desired native media player to use for playback. */" },
		{ "ModuleRelativePath", "Private/Shared/MediaPlayerEditorSettings.h" },
		{ "ToolTip", "The name of the desired native media player to use for playback." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMediaPlayerEditorSettings_Statics::NewProp_DesiredPlayerName = { "DesiredPlayerName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaPlayerEditorSettings, DesiredPlayerName), METADATA_PARAMS(Z_Construct_UClass_UMediaPlayerEditorSettings_Statics::NewProp_DesiredPlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlayerEditorSettings_Statics::NewProp_DesiredPlayerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlayerEditorSettings_Statics::NewProp_ShowTextOverlays_MetaData[] = {
		{ "Category", "Viewer" },
		{ "Comment", "/** Whether to display overlay texts. */" },
		{ "ModuleRelativePath", "Private/Shared/MediaPlayerEditorSettings.h" },
		{ "ToolTip", "Whether to display overlay texts." },
	};
#endif
	void Z_Construct_UClass_UMediaPlayerEditorSettings_Statics::NewProp_ShowTextOverlays_SetBit(void* Obj)
	{
		((UMediaPlayerEditorSettings*)Obj)->ShowTextOverlays = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaPlayerEditorSettings_Statics::NewProp_ShowTextOverlays = { "ShowTextOverlays", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMediaPlayerEditorSettings), &Z_Construct_UClass_UMediaPlayerEditorSettings_Statics::NewProp_ShowTextOverlays_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaPlayerEditorSettings_Statics::NewProp_ShowTextOverlays_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlayerEditorSettings_Statics::NewProp_ShowTextOverlays_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMediaPlayerEditorSettings_Statics::NewProp_ViewportScale_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlayerEditorSettings_Statics::NewProp_ViewportScale_MetaData[] = {
		{ "Category", "Viewer" },
		{ "Comment", "/** How the video viewport should be scaled. */" },
		{ "ModuleRelativePath", "Private/Shared/MediaPlayerEditorSettings.h" },
		{ "ToolTip", "How the video viewport should be scaled." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMediaPlayerEditorSettings_Statics::NewProp_ViewportScale = { "ViewportScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaPlayerEditorSettings, ViewportScale), Z_Construct_UEnum_MediaPlayerEditor_EMediaPlayerEditorScale, METADATA_PARAMS(Z_Construct_UClass_UMediaPlayerEditorSettings_Statics::NewProp_ViewportScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlayerEditorSettings_Statics::NewProp_ViewportScale_MetaData)) }; // 4214308130
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaPlayerEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayerEditorSettings_Statics::NewProp_DesiredPlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayerEditorSettings_Statics::NewProp_ShowTextOverlays,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayerEditorSettings_Statics::NewProp_ViewportScale_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayerEditorSettings_Statics::NewProp_ViewportScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaPlayerEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaPlayerEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaPlayerEditorSettings_Statics::ClassParams = {
		&UMediaPlayerEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMediaPlayerEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlayerEditorSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaPlayerEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlayerEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaPlayerEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UMediaPlayerEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaPlayerEditorSettings.OuterSingleton, Z_Construct_UClass_UMediaPlayerEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaPlayerEditorSettings.OuterSingleton;
	}
	template<> MEDIAPLAYEREDITOR_API UClass* StaticClass<UMediaPlayerEditorSettings>()
	{
		return UMediaPlayerEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaPlayerEditorSettings);
	UMediaPlayerEditorSettings::~UMediaPlayerEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_Statics::EnumInfo[] = {
		{ EMediaPlayerEditorScale_StaticEnum, TEXT("EMediaPlayerEditorScale"), &Z_Registration_Info_UEnum_EMediaPlayerEditorScale, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4214308130U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaPlayerEditorSettings, UMediaPlayerEditorSettings::StaticClass, TEXT("UMediaPlayerEditorSettings"), &Z_Registration_Info_UClass_UMediaPlayerEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaPlayerEditorSettings), 3178578512U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_1802526819(TEXT("/Script/MediaPlayerEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
