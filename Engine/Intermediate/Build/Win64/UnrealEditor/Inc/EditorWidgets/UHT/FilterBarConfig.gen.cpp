// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Filters/FilterBarConfig.h"
#include "Filters/CustomTextFilters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFilterBarConfig() {}
// Cross Module References
	EDITORCONFIG_API UClass* Z_Construct_UClass_UEditorConfigBase();
	EDITORWIDGETS_API UClass* Z_Construct_UClass_UFilterBarConfig();
	EDITORWIDGETS_API UClass* Z_Construct_UClass_UFilterBarConfig_NoRegister();
	EDITORWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FCustomTextFilterState();
	EDITORWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FFilterBarSettings();
	TOOLWIDGETS_API UEnum* Z_Construct_UEnum_ToolWidgets_EFilterBarLayout();
	TOOLWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FCustomTextFilterData();
	UPackage* Z_Construct_UPackage__Script_EditorWidgets();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomTextFilterState;
class UScriptStruct* FCustomTextFilterState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomTextFilterState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomTextFilterState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomTextFilterState, (UObject*)Z_Construct_UPackage__Script_EditorWidgets(), TEXT("CustomTextFilterState"));
	}
	return Z_Registration_Info_UScriptStruct_CustomTextFilterState.OuterSingleton;
}
template<> EDITORWIDGETS_API UScriptStruct* StaticStruct<FCustomTextFilterState>()
{
	return FCustomTextFilterState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomTextFilterState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsChecked_MetaData[];
#endif
		static void NewProp_bIsChecked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsChecked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilterData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomTextFilterState_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Filters/FilterBarConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomTextFilterState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomTextFilterState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomTextFilterState_Statics::NewProp_bIsChecked_MetaData[] = {
		{ "Comment", "/* Whether the custom filter is checked, i.e visible in the filter bar */" },
		{ "ModuleRelativePath", "Public/Filters/FilterBarConfig.h" },
		{ "ToolTip", "Whether the custom filter is checked, i.e visible in the filter bar" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomTextFilterState_Statics::NewProp_bIsChecked_SetBit(void* Obj)
	{
		((FCustomTextFilterState*)Obj)->bIsChecked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomTextFilterState_Statics::NewProp_bIsChecked = { "bIsChecked", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCustomTextFilterState), &Z_Construct_UScriptStruct_FCustomTextFilterState_Statics::NewProp_bIsChecked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomTextFilterState_Statics::NewProp_bIsChecked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomTextFilterState_Statics::NewProp_bIsChecked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomTextFilterState_Statics::NewProp_bIsActive_MetaData[] = {
		{ "Comment", "/* Whether the custom filter is active, i.e visible and enabled in the filter bar */" },
		{ "ModuleRelativePath", "Public/Filters/FilterBarConfig.h" },
		{ "ToolTip", "Whether the custom filter is active, i.e visible and enabled in the filter bar" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomTextFilterState_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((FCustomTextFilterState*)Obj)->bIsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomTextFilterState_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCustomTextFilterState), &Z_Construct_UScriptStruct_FCustomTextFilterState_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomTextFilterState_Statics::NewProp_bIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomTextFilterState_Statics::NewProp_bIsActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomTextFilterState_Statics::NewProp_FilterData_MetaData[] = {
		{ "Comment", "/* The data inside the custom text filter */" },
		{ "ModuleRelativePath", "Public/Filters/FilterBarConfig.h" },
		{ "ToolTip", "The data inside the custom text filter" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomTextFilterState_Statics::NewProp_FilterData = { "FilterData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomTextFilterState, FilterData), Z_Construct_UScriptStruct_FCustomTextFilterData, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomTextFilterState_Statics::NewProp_FilterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomTextFilterState_Statics::NewProp_FilterData_MetaData)) }; // 153789908
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomTextFilterState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomTextFilterState_Statics::NewProp_bIsChecked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomTextFilterState_Statics::NewProp_bIsActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomTextFilterState_Statics::NewProp_FilterData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomTextFilterState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorWidgets,
		nullptr,
		&NewStructOps,
		"CustomTextFilterState",
		sizeof(FCustomTextFilterState),
		alignof(FCustomTextFilterState),
		Z_Construct_UScriptStruct_FCustomTextFilterState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomTextFilterState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomTextFilterState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomTextFilterState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomTextFilterState()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomTextFilterState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomTextFilterState.InnerSingleton, Z_Construct_UScriptStruct_FCustomTextFilterState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomTextFilterState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FilterBarSettings;
class UScriptStruct* FFilterBarSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FilterBarSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FilterBarSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFilterBarSettings, (UObject*)Z_Construct_UPackage__Script_EditorWidgets(), TEXT("FilterBarSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FilterBarSettings.OuterSingleton;
}
template<> EDITORWIDGETS_API UScriptStruct* StaticStruct<FFilterBarSettings>()
{
	return FFilterBarSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFilterBarSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CustomFilters_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomFilters_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomFilters_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CustomFilters;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TypeFilters_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TypeFilters_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeFilters_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TypeFilters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomTextFilters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomTextFilters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomTextFilters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLayoutSaved_MetaData[];
#endif
		static void NewProp_bIsLayoutSaved_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLayoutSaved;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FilterBarLayout_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterBarLayout_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FilterBarLayout;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilterBarSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Filters/FilterBarConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFilterBarSettings>();
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_CustomFilters_ValueProp = { "CustomFilters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_CustomFilters_Key_KeyProp = { "CustomFilters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_CustomFilters_MetaData[] = {
		{ "Comment", "/** Map of currently visible custom filters, along with their enabled state */" },
		{ "ModuleRelativePath", "Public/Filters/FilterBarConfig.h" },
		{ "ToolTip", "Map of currently visible custom filters, along with their enabled state" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_CustomFilters = { "CustomFilters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFilterBarSettings, CustomFilters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_CustomFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_CustomFilters_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_TypeFilters_ValueProp = { "TypeFilters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_TypeFilters_Key_KeyProp = { "TypeFilters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_TypeFilters_MetaData[] = {
		{ "Comment", "/** Map of currently visible asset type filters, along with their enabled state */" },
		{ "ModuleRelativePath", "Public/Filters/FilterBarConfig.h" },
		{ "ToolTip", "Map of currently visible asset type filters, along with their enabled state" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_TypeFilters = { "TypeFilters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFilterBarSettings, TypeFilters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_TypeFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_TypeFilters_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_CustomTextFilters_Inner = { "CustomTextFilters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomTextFilterState, METADATA_PARAMS(nullptr, 0) }; // 2052804249
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_CustomTextFilters_MetaData[] = {
		{ "Comment", "/** Array of custom text filters the user has created */" },
		{ "ModuleRelativePath", "Public/Filters/FilterBarConfig.h" },
		{ "ToolTip", "Array of custom text filters the user has created" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_CustomTextFilters = { "CustomTextFilters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFilterBarSettings, CustomTextFilters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_CustomTextFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_CustomTextFilters_MetaData)) }; // 2052804249
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_bIsLayoutSaved_MetaData[] = {
		{ "ModuleRelativePath", "Public/Filters/FilterBarConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_bIsLayoutSaved_SetBit(void* Obj)
	{
		((FFilterBarSettings*)Obj)->bIsLayoutSaved = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_bIsLayoutSaved = { "bIsLayoutSaved", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFilterBarSettings), &Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_bIsLayoutSaved_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_bIsLayoutSaved_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_bIsLayoutSaved_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_FilterBarLayout_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_FilterBarLayout_MetaData[] = {
		{ "ModuleRelativePath", "Public/Filters/FilterBarConfig.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_FilterBarLayout = { "FilterBarLayout", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFilterBarSettings, FilterBarLayout), Z_Construct_UEnum_ToolWidgets_EFilterBarLayout, METADATA_PARAMS(Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_FilterBarLayout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_FilterBarLayout_MetaData)) }; // 4040252252
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFilterBarSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_CustomFilters_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_CustomFilters_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_CustomFilters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_TypeFilters_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_TypeFilters_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_TypeFilters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_CustomTextFilters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_CustomTextFilters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_bIsLayoutSaved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_FilterBarLayout_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewProp_FilterBarLayout,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFilterBarSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorWidgets,
		nullptr,
		&NewStructOps,
		"FilterBarSettings",
		sizeof(FFilterBarSettings),
		alignof(FFilterBarSettings),
		Z_Construct_UScriptStruct_FFilterBarSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterBarSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFilterBarSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterBarSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFilterBarSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_FilterBarSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FilterBarSettings.InnerSingleton, Z_Construct_UScriptStruct_FFilterBarSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FilterBarSettings.InnerSingleton;
	}
	void UFilterBarConfig::StaticRegisterNativesUFilterBarConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFilterBarConfig);
	UClass* Z_Construct_UClass_UFilterBarConfig_NoRegister()
	{
		return UFilterBarConfig::StaticClass();
	}
	struct Z_Construct_UClass_UFilterBarConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilterBars_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FilterBars_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterBars_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FilterBars;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFilterBarConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorConfigBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorWidgets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFilterBarConfig_Statics::Class_MetaDataParams[] = {
		{ "EditorConfig", "FilterBar" },
		{ "IncludePath", "Filters/FilterBarConfig.h" },
		{ "ModuleRelativePath", "Public/Filters/FilterBarConfig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFilterBarConfig_Statics::NewProp_FilterBars_ValueProp = { "FilterBars", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FFilterBarSettings, METADATA_PARAMS(nullptr, 0) }; // 432430514
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFilterBarConfig_Statics::NewProp_FilterBars_Key_KeyProp = { "FilterBars_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFilterBarConfig_Statics::NewProp_FilterBars_MetaData[] = {
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/Filters/FilterBarConfig.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFilterBarConfig_Statics::NewProp_FilterBars = { "FilterBars", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFilterBarConfig, FilterBars), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFilterBarConfig_Statics::NewProp_FilterBars_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFilterBarConfig_Statics::NewProp_FilterBars_MetaData)) }; // 432430514
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFilterBarConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFilterBarConfig_Statics::NewProp_FilterBars_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFilterBarConfig_Statics::NewProp_FilterBars_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFilterBarConfig_Statics::NewProp_FilterBars,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFilterBarConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFilterBarConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFilterBarConfig_Statics::ClassParams = {
		&UFilterBarConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFilterBarConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFilterBarConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFilterBarConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFilterBarConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFilterBarConfig()
	{
		if (!Z_Registration_Info_UClass_UFilterBarConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFilterBarConfig.OuterSingleton, Z_Construct_UClass_UFilterBarConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFilterBarConfig.OuterSingleton;
	}
	template<> EDITORWIDGETS_API UClass* StaticClass<UFilterBarConfig>()
	{
		return UFilterBarConfig::StaticClass();
	}
	UFilterBarConfig::UFilterBarConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFilterBarConfig);
	UFilterBarConfig::~UFilterBarConfig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorWidgets_Public_Filters_FilterBarConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorWidgets_Public_Filters_FilterBarConfig_h_Statics::ScriptStructInfo[] = {
		{ FCustomTextFilterState::StaticStruct, Z_Construct_UScriptStruct_FCustomTextFilterState_Statics::NewStructOps, TEXT("CustomTextFilterState"), &Z_Registration_Info_UScriptStruct_CustomTextFilterState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomTextFilterState), 2052804249U) },
		{ FFilterBarSettings::StaticStruct, Z_Construct_UScriptStruct_FFilterBarSettings_Statics::NewStructOps, TEXT("FilterBarSettings"), &Z_Registration_Info_UScriptStruct_FilterBarSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFilterBarSettings), 432430514U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorWidgets_Public_Filters_FilterBarConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFilterBarConfig, UFilterBarConfig::StaticClass, TEXT("UFilterBarConfig"), &Z_Registration_Info_UClass_UFilterBarConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFilterBarConfig), 1969010051U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorWidgets_Public_Filters_FilterBarConfig_h_1957665421(TEXT("/Script/EditorWidgets"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorWidgets_Public_Filters_FilterBarConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorWidgets_Public_Filters_FilterBarConfig_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorWidgets_Public_Filters_FilterBarConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorWidgets_Public_Filters_FilterBarConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
