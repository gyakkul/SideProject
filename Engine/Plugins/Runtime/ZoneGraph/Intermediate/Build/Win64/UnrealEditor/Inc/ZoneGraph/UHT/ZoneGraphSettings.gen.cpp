// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneGraphSettings.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZoneGraphSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_ZoneGraph();
	ZONEGRAPH_API UClass* Z_Construct_UClass_UZoneGraphSettings();
	ZONEGRAPH_API UClass* Z_Construct_UClass_UZoneGraphSettings_NoRegister();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphBuildSettings();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagInfo();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagMask();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneLaneProfile();
// End Cross Module References
	void UZoneGraphSettings::StaticRegisterNativesUZoneGraphSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZoneGraphSettings);
	UClass* Z_Construct_UClass_UZoneGraphSettings_NoRegister()
	{
		return UZoneGraphSettings::StaticClass();
	}
	struct Z_Construct_UClass_UZoneGraphSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaneProfiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaneProfiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LaneProfiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualizedTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VisualizedTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeMaxDrawDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShapeMaxDrawDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BuildSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBuildZoneGraphWhileEditing_MetaData[];
#endif
		static void NewProp_bBuildZoneGraphWhileEditing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildZoneGraphWhileEditing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZoneGraphSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the ZoneGraph plugin.\n */" },
		{ "DisplayName", "Zone Graph" },
		{ "IncludePath", "ZoneGraphSettings.h" },
		{ "ModuleRelativePath", "Public/ZoneGraphSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements the settings for the ZoneGraph plugin." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_LaneProfiles_Inner = { "LaneProfiles", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FZoneLaneProfile, METADATA_PARAMS(nullptr, 0) }; // 559930010
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_LaneProfiles_MetaData[] = {
		{ "Category", "ZoneGraph" },
		{ "IncludeInHash", "" },
		{ "ModuleRelativePath", "Public/ZoneGraphSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_LaneProfiles = { "LaneProfiles", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphSettings, LaneProfiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_LaneProfiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_LaneProfiles_MetaData)) }; // 559930010
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "ZoneGraph" },
		{ "ModuleRelativePath", "Public/ZoneGraphSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Tags, UZoneGraphSettings), nullptr, nullptr, STRUCT_OFFSET(UZoneGraphSettings, Tags), Z_Construct_UScriptStruct_FZoneGraphTagInfo, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_Tags_MetaData)) }; // 2851562854
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_VisualizedTags_MetaData[] = {
		{ "Category", "ZoneGraph" },
		{ "Comment", "/** Tags which affect visualization (i.e. color of lanes). */" },
		{ "ModuleRelativePath", "Public/ZoneGraphSettings.h" },
		{ "ToolTip", "Tags which affect visualization (i.e. color of lanes)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_VisualizedTags = { "VisualizedTags", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphSettings, VisualizedTags), Z_Construct_UScriptStruct_FZoneGraphTagMask, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_VisualizedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_VisualizedTags_MetaData)) }; // 1781901322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_ShapeMaxDrawDistance_MetaData[] = {
		{ "Category", "ZoneGraph" },
		{ "Comment", "/** Max draw distance for shapes visualization. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphSettings.h" },
		{ "ToolTip", "Max draw distance for shapes visualization." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_ShapeMaxDrawDistance = { "ShapeMaxDrawDistance", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphSettings, ShapeMaxDrawDistance), METADATA_PARAMS(Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_ShapeMaxDrawDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_ShapeMaxDrawDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_BuildSettings_MetaData[] = {
		{ "Category", "ZoneGraph" },
		{ "IncludeInHash", "" },
		{ "ModuleRelativePath", "Public/ZoneGraphSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_BuildSettings = { "BuildSettings", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphSettings, BuildSettings), Z_Construct_UScriptStruct_FZoneGraphBuildSettings, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_BuildSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_BuildSettings_MetaData)) }; // 27466071
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_bBuildZoneGraphWhileEditing_MetaData[] = {
		{ "Category", "ZoneGraph" },
		{ "Comment", "/** When set to true ZoneGraph will build as it is being edited. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphSettings.h" },
		{ "ToolTip", "When set to true ZoneGraph will build as it is being edited." },
	};
#endif
	void Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_bBuildZoneGraphWhileEditing_SetBit(void* Obj)
	{
		((UZoneGraphSettings*)Obj)->bBuildZoneGraphWhileEditing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_bBuildZoneGraphWhileEditing = { "bBuildZoneGraphWhileEditing", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UZoneGraphSettings), &Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_bBuildZoneGraphWhileEditing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_bBuildZoneGraphWhileEditing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_bBuildZoneGraphWhileEditing_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZoneGraphSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_LaneProfiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_LaneProfiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_VisualizedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_ShapeMaxDrawDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_BuildSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphSettings_Statics::NewProp_bBuildZoneGraphWhileEditing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZoneGraphSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZoneGraphSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZoneGraphSettings_Statics::ClassParams = {
		&UZoneGraphSettings::StaticClass,
		"Plugins",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UZoneGraphSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UZoneGraphSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZoneGraphSettings()
	{
		if (!Z_Registration_Info_UClass_UZoneGraphSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZoneGraphSettings.OuterSingleton, Z_Construct_UClass_UZoneGraphSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZoneGraphSettings.OuterSingleton;
	}
	template<> ZONEGRAPH_API UClass* StaticClass<UZoneGraphSettings>()
	{
		return UZoneGraphSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZoneGraphSettings);
	UZoneGraphSettings::~UZoneGraphSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UZoneGraphSettings, UZoneGraphSettings::StaticClass, TEXT("UZoneGraphSettings"), &Z_Registration_Info_UClass_UZoneGraphSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZoneGraphSettings), 1985401650U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphSettings_h_2374673747(TEXT("/Script/ZoneGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
