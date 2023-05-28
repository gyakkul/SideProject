// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Settings/AnimBlueprintSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBlueprintSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_UAnimBlueprintSettings();
	UNREALED_API UClass* Z_Construct_UClass_UAnimBlueprintSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UAnimBlueprintSettings::StaticRegisterNativesUAnimBlueprintSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimBlueprintSettings);
	UClass* Z_Construct_UClass_UAnimBlueprintSettings_NoRegister()
	{
		return UAnimBlueprintSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAnimBlueprintSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowEventGraphs_MetaData[];
#endif
		static void NewProp_bAllowEventGraphs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowEventGraphs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowMacros_MetaData[];
#endif
		static void NewProp_bAllowMacros_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMacros;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowDelegates_MetaData[];
#endif
		static void NewProp_bAllowDelegates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowDelegates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRestrictBaseFunctionOverrides_MetaData[];
#endif
		static void NewProp_bRestrictBaseFunctionOverrides_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestrictBaseFunctionOverrides;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BaseFunctionOverrideAllowList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseFunctionOverrideAllowList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BaseFunctionOverrideAllowList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimBlueprintSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements Editor settings for animation blueprints\n */" },
		{ "IncludePath", "Settings/AnimBlueprintSettings.h" },
		{ "ModuleRelativePath", "Classes/Settings/AnimBlueprintSettings.h" },
		{ "ToolTip", "Implements Editor settings for animation blueprints" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_bAllowEventGraphs_MetaData[] = {
		{ "Comment", "/** Whether to allow event graphs to be created/displayed in animation blueprints */" },
		{ "ModuleRelativePath", "Classes/Settings/AnimBlueprintSettings.h" },
		{ "ToolTip", "Whether to allow event graphs to be created/displayed in animation blueprints" },
	};
#endif
	void Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_bAllowEventGraphs_SetBit(void* Obj)
	{
		((UAnimBlueprintSettings*)Obj)->bAllowEventGraphs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_bAllowEventGraphs = { "bAllowEventGraphs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimBlueprintSettings), &Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_bAllowEventGraphs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_bAllowEventGraphs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_bAllowEventGraphs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_bAllowMacros_MetaData[] = {
		{ "Comment", "/** Whether to allow macros to be created/displayed in animation blueprints */" },
		{ "ModuleRelativePath", "Classes/Settings/AnimBlueprintSettings.h" },
		{ "ToolTip", "Whether to allow macros to be created/displayed in animation blueprints" },
	};
#endif
	void Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_bAllowMacros_SetBit(void* Obj)
	{
		((UAnimBlueprintSettings*)Obj)->bAllowMacros = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_bAllowMacros = { "bAllowMacros", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimBlueprintSettings), &Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_bAllowMacros_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_bAllowMacros_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_bAllowMacros_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_bAllowDelegates_MetaData[] = {
		{ "Comment", "/** Whether to allow delegates to be created/displayed in animation blueprints */" },
		{ "ModuleRelativePath", "Classes/Settings/AnimBlueprintSettings.h" },
		{ "ToolTip", "Whether to allow delegates to be created/displayed in animation blueprints" },
	};
#endif
	void Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_bAllowDelegates_SetBit(void* Obj)
	{
		((UAnimBlueprintSettings*)Obj)->bAllowDelegates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_bAllowDelegates = { "bAllowDelegates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimBlueprintSettings), &Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_bAllowDelegates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_bAllowDelegates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_bAllowDelegates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_bRestrictBaseFunctionOverrides_MetaData[] = {
		{ "Comment", "/** Whether to allow restrict which base function overrides can created/displayed in animation blueprints */" },
		{ "ModuleRelativePath", "Classes/Settings/AnimBlueprintSettings.h" },
		{ "ToolTip", "Whether to allow restrict which base function overrides can created/displayed in animation blueprints" },
	};
#endif
	void Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_bRestrictBaseFunctionOverrides_SetBit(void* Obj)
	{
		((UAnimBlueprintSettings*)Obj)->bRestrictBaseFunctionOverrides = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_bRestrictBaseFunctionOverrides = { "bRestrictBaseFunctionOverrides", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimBlueprintSettings), &Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_bRestrictBaseFunctionOverrides_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_bRestrictBaseFunctionOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_bRestrictBaseFunctionOverrides_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_BaseFunctionOverrideAllowList_Inner = { "BaseFunctionOverrideAllowList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_BaseFunctionOverrideAllowList_MetaData[] = {
		{ "Comment", "/** The set of allowed base functions if restricted */" },
		{ "ModuleRelativePath", "Classes/Settings/AnimBlueprintSettings.h" },
		{ "ToolTip", "The set of allowed base functions if restricted" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_BaseFunctionOverrideAllowList = { "BaseFunctionOverrideAllowList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimBlueprintSettings, BaseFunctionOverrideAllowList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_BaseFunctionOverrideAllowList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_BaseFunctionOverrideAllowList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimBlueprintSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_bAllowEventGraphs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_bAllowMacros,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_bAllowDelegates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_bRestrictBaseFunctionOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_BaseFunctionOverrideAllowList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintSettings_Statics::NewProp_BaseFunctionOverrideAllowList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimBlueprintSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBlueprintSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimBlueprintSettings_Statics::ClassParams = {
		&UAnimBlueprintSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimBlueprintSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimBlueprintSettings()
	{
		if (!Z_Registration_Info_UClass_UAnimBlueprintSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimBlueprintSettings.OuterSingleton, Z_Construct_UClass_UAnimBlueprintSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimBlueprintSettings.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UAnimBlueprintSettings>()
	{
		return UAnimBlueprintSettings::StaticClass();
	}
	UAnimBlueprintSettings::UAnimBlueprintSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBlueprintSettings);
	UAnimBlueprintSettings::~UAnimBlueprintSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_AnimBlueprintSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_AnimBlueprintSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimBlueprintSettings, UAnimBlueprintSettings::StaticClass, TEXT("UAnimBlueprintSettings"), &Z_Registration_Info_UClass_UAnimBlueprintSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimBlueprintSettings), 1070658920U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_AnimBlueprintSettings_h_2929928743(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_AnimBlueprintSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_AnimBlueprintSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
