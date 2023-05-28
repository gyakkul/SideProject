// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelInstanceEditorSettings.h"
#include "../../../Editor/UnrealEd/Classes/Editor/TemplateMapInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelInstanceEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELevelInstancePivotType();
	LEVELINSTANCEEDITOR_API UClass* Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings();
	LEVELINSTANCEEDITOR_API UClass* Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_NoRegister();
	LEVELINSTANCEEDITOR_API UClass* Z_Construct_UClass_ULevelInstanceEditorSettings();
	LEVELINSTANCEEDITOR_API UClass* Z_Construct_UClass_ULevelInstanceEditorSettings_NoRegister();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FTemplateMapInfo();
	UPackage* Z_Construct_UPackage__Script_LevelInstanceEditor();
// End Cross Module References
	void ULevelInstanceEditorSettings::StaticRegisterNativesULevelInstanceEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelInstanceEditorSettings);
	UClass* Z_Construct_UClass_ULevelInstanceEditorSettings_NoRegister()
	{
		return ULevelInstanceEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULevelInstanceEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TemplateMapInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateMapInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TemplateMapInfos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelInstanceClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LevelInstanceClassName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelInstanceEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelInstanceEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelInstanceEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelInstanceEditorSettings.h" },
		{ "ModuleRelativePath", "Public/LevelInstanceEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelInstanceEditorSettings_Statics::NewProp_TemplateMapInfos_Inner = { "TemplateMapInfos", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTemplateMapInfo, METADATA_PARAMS(nullptr, 0) }; // 779385839
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelInstanceEditorSettings_Statics::NewProp_TemplateMapInfos_MetaData[] = {
		{ "Comment", "/** List of info for all known LevelInstance template maps */" },
		{ "ModuleRelativePath", "Public/LevelInstanceEditorSettings.h" },
		{ "ToolTip", "List of info for all known LevelInstance template maps" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelInstanceEditorSettings_Statics::NewProp_TemplateMapInfos = { "TemplateMapInfos", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelInstanceEditorSettings, TemplateMapInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelInstanceEditorSettings_Statics::NewProp_TemplateMapInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceEditorSettings_Statics::NewProp_TemplateMapInfos_MetaData)) }; // 779385839
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelInstanceEditorSettings_Statics::NewProp_LevelInstanceClassName_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelInstanceEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelInstanceEditorSettings_Statics::NewProp_LevelInstanceClassName = { "LevelInstanceClassName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelInstanceEditorSettings, LevelInstanceClassName), METADATA_PARAMS(Z_Construct_UClass_ULevelInstanceEditorSettings_Statics::NewProp_LevelInstanceClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceEditorSettings_Statics::NewProp_LevelInstanceClassName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelInstanceEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelInstanceEditorSettings_Statics::NewProp_TemplateMapInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelInstanceEditorSettings_Statics::NewProp_TemplateMapInfos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelInstanceEditorSettings_Statics::NewProp_LevelInstanceClassName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelInstanceEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelInstanceEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelInstanceEditorSettings_Statics::ClassParams = {
		&ULevelInstanceEditorSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelInstanceEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceEditorSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelInstanceEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelInstanceEditorSettings()
	{
		if (!Z_Registration_Info_UClass_ULevelInstanceEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelInstanceEditorSettings.OuterSingleton, Z_Construct_UClass_ULevelInstanceEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelInstanceEditorSettings.OuterSingleton;
	}
	template<> LEVELINSTANCEEDITOR_API UClass* StaticClass<ULevelInstanceEditorSettings>()
	{
		return ULevelInstanceEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelInstanceEditorSettings);
	ULevelInstanceEditorSettings::~ULevelInstanceEditorSettings() {}
	void ULevelInstanceEditorPerProjectUserSettings::StaticRegisterNativesULevelInstanceEditorPerProjectUserSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelInstanceEditorPerProjectUserSettings);
	UClass* Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_NoRegister()
	{
		return ULevelInstanceEditorPerProjectUserSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysShowDialog_MetaData[];
#endif
		static void NewProp_bAlwaysShowDialog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysShowDialog;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PivotType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PivotType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelInstanceEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Level Instance" },
		{ "IncludePath", "LevelInstanceEditorSettings.h" },
		{ "ModuleRelativePath", "Public/LevelInstanceEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_Statics::NewProp_bAlwaysShowDialog_MetaData[] = {
		{ "Category", "Create" },
		{ "Comment", "/** If false, create dialog will not be shown and last settings will be used. */" },
		{ "ModuleRelativePath", "Public/LevelInstanceEditorSettings.h" },
		{ "ToolTip", "If false, create dialog will not be shown and last settings will be used." },
	};
#endif
	void Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_Statics::NewProp_bAlwaysShowDialog_SetBit(void* Obj)
	{
		((ULevelInstanceEditorPerProjectUserSettings*)Obj)->bAlwaysShowDialog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_Statics::NewProp_bAlwaysShowDialog = { "bAlwaysShowDialog", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelInstanceEditorPerProjectUserSettings), &Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_Statics::NewProp_bAlwaysShowDialog_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_Statics::NewProp_bAlwaysShowDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_Statics::NewProp_bAlwaysShowDialog_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_Statics::NewProp_PivotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_Statics::NewProp_PivotType_MetaData[] = {
		{ "Category", "Pivot" },
		{ "ModuleRelativePath", "Public/LevelInstanceEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_Statics::NewProp_PivotType = { "PivotType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelInstanceEditorPerProjectUserSettings, PivotType), Z_Construct_UEnum_Engine_ELevelInstancePivotType, METADATA_PARAMS(Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_Statics::NewProp_PivotType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_Statics::NewProp_PivotType_MetaData)) }; // 3835466578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_Statics::NewProp_bAlwaysShowDialog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_Statics::NewProp_PivotType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_Statics::NewProp_PivotType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelInstanceEditorPerProjectUserSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_Statics::ClassParams = {
		&ULevelInstanceEditorPerProjectUserSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings()
	{
		if (!Z_Registration_Info_UClass_ULevelInstanceEditorPerProjectUserSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelInstanceEditorPerProjectUserSettings.OuterSingleton, Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelInstanceEditorPerProjectUserSettings.OuterSingleton;
	}
	template<> LEVELINSTANCEEDITOR_API UClass* StaticClass<ULevelInstanceEditorPerProjectUserSettings>()
	{
		return ULevelInstanceEditorPerProjectUserSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelInstanceEditorPerProjectUserSettings);
	ULevelInstanceEditorPerProjectUserSettings::~ULevelInstanceEditorPerProjectUserSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelInstanceEditor_Public_LevelInstanceEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelInstanceEditor_Public_LevelInstanceEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelInstanceEditorSettings, ULevelInstanceEditorSettings::StaticClass, TEXT("ULevelInstanceEditorSettings"), &Z_Registration_Info_UClass_ULevelInstanceEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelInstanceEditorSettings), 2857570645U) },
		{ Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings, ULevelInstanceEditorPerProjectUserSettings::StaticClass, TEXT("ULevelInstanceEditorPerProjectUserSettings"), &Z_Registration_Info_UClass_ULevelInstanceEditorPerProjectUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelInstanceEditorPerProjectUserSettings), 3737100767U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelInstanceEditor_Public_LevelInstanceEditorSettings_h_2018445135(TEXT("/Script/LevelInstanceEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelInstanceEditor_Public_LevelInstanceEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelInstanceEditor_Public_LevelInstanceEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
