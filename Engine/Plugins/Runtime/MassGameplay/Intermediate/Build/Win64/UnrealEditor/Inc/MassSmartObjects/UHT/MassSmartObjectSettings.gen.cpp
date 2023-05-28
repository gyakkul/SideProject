// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassSmartObjects/Public/MassSmartObjectSettings.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassSmartObjectSettings() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassModuleSettings();
	MASSSMARTOBJECTS_API UClass* Z_Construct_UClass_UMassSmartObjectSettings();
	MASSSMARTOBJECTS_API UClass* Z_Construct_UClass_UMassSmartObjectSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassSmartObjects();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTag();
// End Cross Module References
	void UMassSmartObjectSettings::StaticRegisterNativesUMassSmartObjectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassSmartObjectSettings);
	UClass* Z_Construct_UClass_UMassSmartObjectSettings_NoRegister()
	{
		return UMassSmartObjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMassSmartObjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmartObjectTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SmartObjectTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchExtents_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchExtents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassSmartObjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassModuleSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_MassSmartObjects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSmartObjectSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the MassSmartObject module.\n */" },
		{ "DisplayName", "Mass SmartObject" },
		{ "IncludePath", "MassSmartObjectSettings.h" },
		{ "ModuleRelativePath", "Public/MassSmartObjectSettings.h" },
		{ "ToolTip", "Settings for the MassSmartObject module." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSmartObjectSettings_Statics::NewProp_SmartObjectTag_MetaData[] = {
		{ "Category", "ZoneGraph" },
		{ "Comment", "/** Tag used to indicate that smart objects are associated to a lane for queries using lanes. */" },
		{ "ModuleRelativePath", "Public/MassSmartObjectSettings.h" },
		{ "ToolTip", "Tag used to indicate that smart objects are associated to a lane for queries using lanes." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassSmartObjectSettings_Statics::NewProp_SmartObjectTag = { "SmartObjectTag", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassSmartObjectSettings, SmartObjectTag), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(Z_Construct_UClass_UMassSmartObjectSettings_Statics::NewProp_SmartObjectTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSmartObjectSettings_Statics::NewProp_SmartObjectTag_MetaData)) }; // 1504622355
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSmartObjectSettings_Statics::NewProp_SearchExtents_MetaData[] = {
		{ "Category", "ZoneGraph" },
		{ "Comment", "/** Extents used to find precomputed entry points to reach a smart object from a zone graph lane. */" },
		{ "ModuleRelativePath", "Public/MassSmartObjectSettings.h" },
		{ "ToolTip", "Extents used to find precomputed entry points to reach a smart object from a zone graph lane." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassSmartObjectSettings_Statics::NewProp_SearchExtents = { "SearchExtents", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassSmartObjectSettings, SearchExtents), METADATA_PARAMS(Z_Construct_UClass_UMassSmartObjectSettings_Statics::NewProp_SearchExtents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSmartObjectSettings_Statics::NewProp_SearchExtents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassSmartObjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassSmartObjectSettings_Statics::NewProp_SmartObjectTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassSmartObjectSettings_Statics::NewProp_SearchExtents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassSmartObjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassSmartObjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassSmartObjectSettings_Statics::ClassParams = {
		&UMassSmartObjectSettings::StaticClass,
		"Plugins",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassSmartObjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassSmartObjectSettings_Statics::PropPointers),
		0,
		0x001020A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassSmartObjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSmartObjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassSmartObjectSettings()
	{
		if (!Z_Registration_Info_UClass_UMassSmartObjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassSmartObjectSettings.OuterSingleton, Z_Construct_UClass_UMassSmartObjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassSmartObjectSettings.OuterSingleton;
	}
	template<> MASSSMARTOBJECTS_API UClass* StaticClass<UMassSmartObjectSettings>()
	{
		return UMassSmartObjectSettings::StaticClass();
	}
	UMassSmartObjectSettings::UMassSmartObjectSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassSmartObjectSettings);
	UMassSmartObjectSettings::~UMassSmartObjectSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassSmartObjectSettings, UMassSmartObjectSettings::StaticClass, TEXT("UMassSmartObjectSettings"), &Z_Registration_Info_UClass_UMassSmartObjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassSmartObjectSettings), 3856547903U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectSettings_h_508914577(TEXT("/Script/MassSmartObjects"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
