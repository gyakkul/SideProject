// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../DMXPixelMappingEditor/Private/DMXPixelMappingLayoutSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXPixelMappingLayoutSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DMXPIXELMAPPINGEDITOR_API UClass* Z_Construct_UClass_UDMXPixelMappingLayoutSettings();
	DMXPIXELMAPPINGEDITOR_API UClass* Z_Construct_UClass_UDMXPixelMappingLayoutSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingEditor();
// End Cross Module References
	void UDMXPixelMappingLayoutSettings::StaticRegisterNativesUDMXPixelMappingLayoutSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXPixelMappingLayoutSettings);
	UClass* Z_Construct_UClass_UDMXPixelMappingLayoutSettings_NoRegister()
	{
		return UDMXPixelMappingLayoutSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScaleChildrenWithParent_MetaData[];
#endif
		static void NewProp_bScaleChildrenWithParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleChildrenWithParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysSelectGroup_MetaData[];
#endif
		static void NewProp_bAlwaysSelectGroup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysSelectGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyLayoutScriptWhenLoaded_MetaData[];
#endif
		static void NewProp_bApplyLayoutScriptWhenLoaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyLayoutScriptWhenLoaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowComponentNames_MetaData[];
#endif
		static void NewProp_bShowComponentNames_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowComponentNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowPatchInfo_MetaData[];
#endif
		static void NewProp_bShowPatchInfo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPatchInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowCellIDs_MetaData[];
#endif
		static void NewProp_bShowCellIDs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowCellIDs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Layout options for the Pixel Mapping editor */" },
		{ "DisplayName", "DMXEditor" },
		{ "IncludePath", "DMXPixelMappingLayoutSettings.h" },
		{ "ModuleRelativePath", "Private/DMXPixelMappingLayoutSettings.h" },
		{ "ToolTip", "Layout options for the Pixel Mapping editor" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bScaleChildrenWithParent_MetaData[] = {
		{ "Category", "Layout Settings" },
		{ "Comment", "/** If true, scales children when the parent component is resized */" },
		{ "ModuleRelativePath", "Private/DMXPixelMappingLayoutSettings.h" },
		{ "ToolTip", "If true, scales children when the parent component is resized" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bScaleChildrenWithParent_SetBit(void* Obj)
	{
		((UDMXPixelMappingLayoutSettings*)Obj)->bScaleChildrenWithParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bScaleChildrenWithParent = { "bScaleChildrenWithParent", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXPixelMappingLayoutSettings), &Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bScaleChildrenWithParent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bScaleChildrenWithParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bScaleChildrenWithParent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bAlwaysSelectGroup_MetaData[] = {
		{ "Category", "Layout Settings" },
		{ "Comment", "/** If true, selects parent when a child is clicked */" },
		{ "ModuleRelativePath", "Private/DMXPixelMappingLayoutSettings.h" },
		{ "ToolTip", "If true, selects parent when a child is clicked" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bAlwaysSelectGroup_SetBit(void* Obj)
	{
		((UDMXPixelMappingLayoutSettings*)Obj)->bAlwaysSelectGroup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bAlwaysSelectGroup = { "bAlwaysSelectGroup", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXPixelMappingLayoutSettings), &Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bAlwaysSelectGroup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bAlwaysSelectGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bAlwaysSelectGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bApplyLayoutScriptWhenLoaded_MetaData[] = {
		{ "Category", "Layout Settings" },
		{ "Comment", "/** If true, applies layout scripts instantly when they are loaded */" },
		{ "ModuleRelativePath", "Private/DMXPixelMappingLayoutSettings.h" },
		{ "ToolTip", "If true, applies layout scripts instantly when they are loaded" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bApplyLayoutScriptWhenLoaded_SetBit(void* Obj)
	{
		((UDMXPixelMappingLayoutSettings*)Obj)->bApplyLayoutScriptWhenLoaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bApplyLayoutScriptWhenLoaded = { "bApplyLayoutScriptWhenLoaded", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXPixelMappingLayoutSettings), &Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bApplyLayoutScriptWhenLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bApplyLayoutScriptWhenLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bApplyLayoutScriptWhenLoaded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bShowComponentNames_MetaData[] = {
		{ "Category", "Layout Settings" },
		{ "Comment", "/** If true, shows the name of the Fixture Patch where applicable. May affect editor performance. */" },
		{ "ModuleRelativePath", "Private/DMXPixelMappingLayoutSettings.h" },
		{ "ToolTip", "If true, shows the name of the Fixture Patch where applicable. May affect editor performance." },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bShowComponentNames_SetBit(void* Obj)
	{
		((UDMXPixelMappingLayoutSettings*)Obj)->bShowComponentNames = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bShowComponentNames = { "bShowComponentNames", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXPixelMappingLayoutSettings), &Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bShowComponentNames_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bShowComponentNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bShowComponentNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bShowPatchInfo_MetaData[] = {
		{ "Category", "Layout Settings" },
		{ "Comment", "/** If true, shows Fixture info bout the Fixture Patch where applicable. May affect editor performance. */" },
		{ "ModuleRelativePath", "Private/DMXPixelMappingLayoutSettings.h" },
		{ "ToolTip", "If true, shows Fixture info bout the Fixture Patch where applicable. May affect editor performance." },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bShowPatchInfo_SetBit(void* Obj)
	{
		((UDMXPixelMappingLayoutSettings*)Obj)->bShowPatchInfo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bShowPatchInfo = { "bShowPatchInfo", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXPixelMappingLayoutSettings), &Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bShowPatchInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bShowPatchInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bShowPatchInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bShowCellIDs_MetaData[] = {
		{ "Category", "Layout Settings" },
		{ "Comment", "/** If true, shows Cell IDs where applicable. May affect editor performance. */" },
		{ "ModuleRelativePath", "Private/DMXPixelMappingLayoutSettings.h" },
		{ "ToolTip", "If true, shows Cell IDs where applicable. May affect editor performance." },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bShowCellIDs_SetBit(void* Obj)
	{
		((UDMXPixelMappingLayoutSettings*)Obj)->bShowCellIDs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bShowCellIDs = { "bShowCellIDs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXPixelMappingLayoutSettings), &Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bShowCellIDs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bShowCellIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bShowCellIDs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bScaleChildrenWithParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bAlwaysSelectGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bApplyLayoutScriptWhenLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bShowComponentNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bShowPatchInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::NewProp_bShowCellIDs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXPixelMappingLayoutSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::ClassParams = {
		&UDMXPixelMappingLayoutSettings::StaticClass,
		"DMXPixelMappingEditor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXPixelMappingLayoutSettings()
	{
		if (!Z_Registration_Info_UClass_UDMXPixelMappingLayoutSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXPixelMappingLayoutSettings.OuterSingleton, Z_Construct_UClass_UDMXPixelMappingLayoutSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXPixelMappingLayoutSettings.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGEDITOR_API UClass* StaticClass<UDMXPixelMappingLayoutSettings>()
	{
		return UDMXPixelMappingLayoutSettings::StaticClass();
	}
	UDMXPixelMappingLayoutSettings::UDMXPixelMappingLayoutSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXPixelMappingLayoutSettings);
	UDMXPixelMappingLayoutSettings::~UDMXPixelMappingLayoutSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_DMXPixelMappingLayoutSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_DMXPixelMappingLayoutSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXPixelMappingLayoutSettings, UDMXPixelMappingLayoutSettings::StaticClass, TEXT("UDMXPixelMappingLayoutSettings"), &Z_Registration_Info_UClass_UDMXPixelMappingLayoutSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXPixelMappingLayoutSettings), 1614148950U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_DMXPixelMappingLayoutSettings_h_2921967399(TEXT("/Script/DMXPixelMappingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_DMXPixelMappingLayoutSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_DMXPixelMappingLayoutSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
