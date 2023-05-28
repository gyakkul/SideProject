// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCacheStreamerSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheStreamerSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	GEOMETRYCACHESTREAMER_API UClass* Z_Construct_UClass_UGeometryCacheStreamerSettings();
	GEOMETRYCACHESTREAMER_API UClass* Z_Construct_UClass_UGeometryCacheStreamerSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryCacheStreamer();
// End Cross Module References
	void UGeometryCacheStreamerSettings::StaticRegisterNativesUGeometryCacheStreamerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryCacheStreamerSettings);
	UClass* Z_Construct_UClass_UGeometryCacheStreamerSettings_NoRegister()
	{
		return UGeometryCacheStreamerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryCacheStreamerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAheadBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LookAheadBuffer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMemoryAllowed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMemoryAllowed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryCacheStreamerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCacheStreamer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheStreamerSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Settings for the GeometryCache streamer */" },
		{ "DisplayName", "Geometry Cache" },
		{ "IncludePath", "GeometryCacheStreamerSettings.h" },
		{ "ModuleRelativePath", "Public/GeometryCacheStreamerSettings.h" },
		{ "ToolTip", "Settings for the GeometryCache streamer" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheStreamerSettings_Statics::NewProp_LookAheadBuffer_MetaData[] = {
		{ "Category", "Geometry Cache Streamer" },
		{ "ClampMax", "3600.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** The amount of animation (in seconds) to stream ahead of time (per stream) */" },
		{ "DisplayName", "Look-Ahead Buffer (in seconds)" },
		{ "ModuleRelativePath", "Public/GeometryCacheStreamerSettings.h" },
		{ "ToolTip", "The amount of animation (in seconds) to stream ahead of time (per stream)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCacheStreamerSettings_Statics::NewProp_LookAheadBuffer = { "LookAheadBuffer", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCacheStreamerSettings, LookAheadBuffer), METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheStreamerSettings_Statics::NewProp_LookAheadBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheStreamerSettings_Statics::NewProp_LookAheadBuffer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheStreamerSettings_Statics::NewProp_MaxMemoryAllowed_MetaData[] = {
		{ "Category", "Geometry Cache Streamer" },
		{ "ClampMax", "262144.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** The maximum total amount of streamed data allowed in memory (for all streams) */" },
		{ "DisplayName", "Maximum Memory Allowed (in MB)" },
		{ "ModuleRelativePath", "Public/GeometryCacheStreamerSettings.h" },
		{ "ToolTip", "The maximum total amount of streamed data allowed in memory (for all streams)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCacheStreamerSettings_Statics::NewProp_MaxMemoryAllowed = { "MaxMemoryAllowed", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCacheStreamerSettings, MaxMemoryAllowed), METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheStreamerSettings_Statics::NewProp_MaxMemoryAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheStreamerSettings_Statics::NewProp_MaxMemoryAllowed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometryCacheStreamerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheStreamerSettings_Statics::NewProp_LookAheadBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheStreamerSettings_Statics::NewProp_MaxMemoryAllowed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryCacheStreamerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCacheStreamerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCacheStreamerSettings_Statics::ClassParams = {
		&UGeometryCacheStreamerSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGeometryCacheStreamerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheStreamerSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheStreamerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheStreamerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryCacheStreamerSettings()
	{
		if (!Z_Registration_Info_UClass_UGeometryCacheStreamerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryCacheStreamerSettings.OuterSingleton, Z_Construct_UClass_UGeometryCacheStreamerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryCacheStreamerSettings.OuterSingleton;
	}
	template<> GEOMETRYCACHESTREAMER_API UClass* StaticClass<UGeometryCacheStreamerSettings>()
	{
		return UGeometryCacheStreamerSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCacheStreamerSettings);
	UGeometryCacheStreamerSettings::~UGeometryCacheStreamerSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheStreamer_Public_GeometryCacheStreamerSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheStreamer_Public_GeometryCacheStreamerSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryCacheStreamerSettings, UGeometryCacheStreamerSettings::StaticClass, TEXT("UGeometryCacheStreamerSettings"), &Z_Registration_Info_UClass_UGeometryCacheStreamerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryCacheStreamerSettings), 417229995U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheStreamer_Public_GeometryCacheStreamerSettings_h_1606282895(TEXT("/Script/GeometryCacheStreamer"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheStreamer_Public_GeometryCacheStreamerSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheStreamer_Public_GeometryCacheStreamerSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
