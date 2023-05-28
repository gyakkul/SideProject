// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundscapeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundscapeSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapeSettings();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapeSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Soundscape();
// End Cross Module References
	void USoundscapeSettings::StaticRegisterNativesUSoundscapeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundscapeSettings);
	UClass* Z_Construct_UClass_USoundscapeSettings_NoRegister()
	{
		return USoundscapeSettings::StaticClass();
	}
	struct Z_Construct_UClass_USoundscapeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoundscapePaletteCollection_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundscapePaletteCollection_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_SoundscapePaletteCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDraw_MetaData[];
#endif
		static void NewProp_bDebugDraw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDraw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LOD1ColorPointHashWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LOD1ColorPointHashWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LOD1ColorPointHashDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LOD1ColorPointHashDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LOD2ColorPointHashWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LOD2ColorPointHashWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LOD2ColorPointHashDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LOD2ColorPointHashDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LOD3ColorPointHashWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LOD3ColorPointHashWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveColorPointHashWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActiveColorPointHashWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveColorPointHashUpdateTimeSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActiveColorPointHashUpdateTimeSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundscapeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Soundscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Soundscape" },
		{ "IncludePath", "SoundscapeSettings.h" },
		{ "ModuleRelativePath", "Public/SoundscapeSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_SoundscapePaletteCollection_ElementProp = { "SoundscapePaletteCollection", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_SoundscapePaletteCollection_MetaData[] = {
		{ "AllowedClasses", "/Script/Soundscape.SoundscapePalette" },
		{ "Category", "Soundscape" },
		{ "Comment", "// Soundscape Palette Collection\n" },
		{ "ModuleRelativePath", "Public/SoundscapeSettings.h" },
		{ "ToolTip", "Soundscape Palette Collection" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FSoftObjectPath>::Value, "The structure 'FSoftObjectPath' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_SoundscapePaletteCollection = { "SoundscapePaletteCollection", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundscapeSettings, SoundscapePaletteCollection), METADATA_PARAMS(Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_SoundscapePaletteCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_SoundscapePaletteCollection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_bDebugDraw_MetaData[] = {
		{ "Category", "Soundscape" },
		{ "ModuleRelativePath", "Public/SoundscapeSettings.h" },
	};
#endif
	void Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_bDebugDraw_SetBit(void* Obj)
	{
		((USoundscapeSettings*)Obj)->bDebugDraw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_bDebugDraw = { "bDebugDraw", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USoundscapeSettings), &Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_bDebugDraw_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_bDebugDraw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_bDebugDraw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_LOD1ColorPointHashWidth_MetaData[] = {
		{ "Category", "ColorPointSystem" },
		{ "ClampMin", "1.0" },
		{ "Comment", "// Hash Cell Width for LOD1\n" },
		{ "ModuleRelativePath", "Public/SoundscapeSettings.h" },
		{ "ToolTip", "Hash Cell Width for LOD1" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_LOD1ColorPointHashWidth = { "LOD1ColorPointHashWidth", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundscapeSettings, LOD1ColorPointHashWidth), METADATA_PARAMS(Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_LOD1ColorPointHashWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_LOD1ColorPointHashWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_LOD1ColorPointHashDistance_MetaData[] = {
		{ "Category", "ColorPointSystem" },
		{ "ClampMin", "1.0" },
		{ "Comment", "// Hash Cell LOD1 Max Distance\n" },
		{ "ModuleRelativePath", "Public/SoundscapeSettings.h" },
		{ "ToolTip", "Hash Cell LOD1 Max Distance" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_LOD1ColorPointHashDistance = { "LOD1ColorPointHashDistance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundscapeSettings, LOD1ColorPointHashDistance), METADATA_PARAMS(Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_LOD1ColorPointHashDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_LOD1ColorPointHashDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_LOD2ColorPointHashWidth_MetaData[] = {
		{ "Category", "ColorPointSystem" },
		{ "ClampMin", "1.0" },
		{ "Comment", "// Hash Cell Width for LOD2\n" },
		{ "ModuleRelativePath", "Public/SoundscapeSettings.h" },
		{ "ToolTip", "Hash Cell Width for LOD2" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_LOD2ColorPointHashWidth = { "LOD2ColorPointHashWidth", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundscapeSettings, LOD2ColorPointHashWidth), METADATA_PARAMS(Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_LOD2ColorPointHashWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_LOD2ColorPointHashWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_LOD2ColorPointHashDistance_MetaData[] = {
		{ "Category", "ColorPointSystem" },
		{ "ClampMin", "1.0" },
		{ "Comment", "// Hash Cell LOD2 Max Distance\n" },
		{ "ModuleRelativePath", "Public/SoundscapeSettings.h" },
		{ "ToolTip", "Hash Cell LOD2 Max Distance" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_LOD2ColorPointHashDistance = { "LOD2ColorPointHashDistance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundscapeSettings, LOD2ColorPointHashDistance), METADATA_PARAMS(Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_LOD2ColorPointHashDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_LOD2ColorPointHashDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_LOD3ColorPointHashWidth_MetaData[] = {
		{ "Category", "ColorPointSystem" },
		{ "ClampMin", "1.0" },
		{ "Comment", "// Hash Cell Width for LOD3\n" },
		{ "ModuleRelativePath", "Public/SoundscapeSettings.h" },
		{ "ToolTip", "Hash Cell Width for LOD3" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_LOD3ColorPointHashWidth = { "LOD3ColorPointHashWidth", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundscapeSettings, LOD3ColorPointHashWidth), METADATA_PARAMS(Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_LOD3ColorPointHashWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_LOD3ColorPointHashWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_ActiveColorPointHashWidth_MetaData[] = {
		{ "Category", "ColorPointSystem" },
		{ "ClampMin", "1.0" },
		{ "Comment", "// Hash Cell Width for the Active Hash\n" },
		{ "ModuleRelativePath", "Public/SoundscapeSettings.h" },
		{ "ToolTip", "Hash Cell Width for the Active Hash" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_ActiveColorPointHashWidth = { "ActiveColorPointHashWidth", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundscapeSettings, ActiveColorPointHashWidth), METADATA_PARAMS(Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_ActiveColorPointHashWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_ActiveColorPointHashWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_ActiveColorPointHashUpdateTimeSeconds_MetaData[] = {
		{ "Category", "ColorPointSystem" },
		{ "ClampMin", "0.1" },
		{ "Comment", "// Hash Cell Update Timing for the Active Hash\n" },
		{ "ModuleRelativePath", "Public/SoundscapeSettings.h" },
		{ "ToolTip", "Hash Cell Update Timing for the Active Hash" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_ActiveColorPointHashUpdateTimeSeconds = { "ActiveColorPointHashUpdateTimeSeconds", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundscapeSettings, ActiveColorPointHashUpdateTimeSeconds), METADATA_PARAMS(Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_ActiveColorPointHashUpdateTimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_ActiveColorPointHashUpdateTimeSeconds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundscapeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_SoundscapePaletteCollection_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_SoundscapePaletteCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_bDebugDraw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_LOD1ColorPointHashWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_LOD1ColorPointHashDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_LOD2ColorPointHashWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_LOD2ColorPointHashDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_LOD3ColorPointHashWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_ActiveColorPointHashWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeSettings_Statics::NewProp_ActiveColorPointHashUpdateTimeSeconds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundscapeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundscapeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundscapeSettings_Statics::ClassParams = {
		&USoundscapeSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundscapeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USoundscapeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundscapeSettings()
	{
		if (!Z_Registration_Info_UClass_USoundscapeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundscapeSettings.OuterSingleton, Z_Construct_UClass_USoundscapeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundscapeSettings.OuterSingleton;
	}
	template<> SOUNDSCAPE_API UClass* StaticClass<USoundscapeSettings>()
	{
		return USoundscapeSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundscapeSettings);
	USoundscapeSettings::~USoundscapeSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundscapeSettings, USoundscapeSettings::StaticClass, TEXT("USoundscapeSettings"), &Z_Registration_Info_UClass_USoundscapeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundscapeSettings), 3812787792U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSettings_h_4095643114(TEXT("/Script/Soundscape"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
