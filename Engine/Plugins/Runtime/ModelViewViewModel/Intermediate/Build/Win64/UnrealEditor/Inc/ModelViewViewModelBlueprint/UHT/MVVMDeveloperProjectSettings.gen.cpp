// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVVMDeveloperProjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMDeveloperProjectSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	MODELVIEWVIEWMODELBLUEPRINT_API UClass* Z_Construct_UClass_UMVVMDeveloperProjectSettings();
	MODELVIEWVIEWMODELBLUEPRINT_API UClass* Z_Construct_UClass_UMVVMDeveloperProjectSettings_NoRegister();
	MODELVIEWVIEWMODELBLUEPRINT_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModelBlueprint();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMDeveloperProjectWidgetSettings;
class UScriptStruct* FMVVMDeveloperProjectWidgetSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMDeveloperProjectWidgetSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMDeveloperProjectWidgetSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModelBlueprint(), TEXT("MVVMDeveloperProjectWidgetSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMDeveloperProjectWidgetSettings.OuterSingleton;
}
template<> MODELVIEWVIEWMODELBLUEPRINT_API UScriptStruct* StaticStruct<FMVVMDeveloperProjectWidgetSettings>()
{
	return FMVVMDeveloperProjectWidgetSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_DisallowedFieldNames_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisallowedFieldNames_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_DisallowedFieldNames;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AdvancedFieldNames_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedFieldNames_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_AdvancedFieldNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/MVVMDeveloperProjectSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMDeveloperProjectWidgetSettings>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewProp_DisallowedFieldNames_ElementProp = { "DisallowedFieldNames", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewProp_DisallowedFieldNames_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** Properties or functions name that should not be use for binding (read or write). */" },
		{ "ModuleRelativePath", "Public/MVVMDeveloperProjectSettings.h" },
		{ "ToolTip", "Properties or functions name that should not be use for binding (read or write)." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewProp_DisallowedFieldNames = { "DisallowedFieldNames", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMDeveloperProjectWidgetSettings, DisallowedFieldNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewProp_DisallowedFieldNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewProp_DisallowedFieldNames_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewProp_AdvancedFieldNames_ElementProp = { "AdvancedFieldNames", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewProp_AdvancedFieldNames_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** Properties or functions name that are displayed in the advanced category. */" },
		{ "ModuleRelativePath", "Public/MVVMDeveloperProjectSettings.h" },
		{ "ToolTip", "Properties or functions name that are displayed in the advanced category." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewProp_AdvancedFieldNames = { "AdvancedFieldNames", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMDeveloperProjectWidgetSettings, AdvancedFieldNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewProp_AdvancedFieldNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewProp_AdvancedFieldNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewProp_DisallowedFieldNames_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewProp_DisallowedFieldNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewProp_AdvancedFieldNames_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewProp_AdvancedFieldNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelBlueprint,
		nullptr,
		&NewStructOps,
		"MVVMDeveloperProjectWidgetSettings",
		sizeof(FMVVMDeveloperProjectWidgetSettings),
		alignof(FMVVMDeveloperProjectWidgetSettings),
		Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMDeveloperProjectWidgetSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMDeveloperProjectWidgetSettings.InnerSingleton, Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMDeveloperProjectWidgetSettings.InnerSingleton;
	}
	void UMVVMDeveloperProjectSettings::StaticRegisterNativesUMVVMDeveloperProjectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMDeveloperProjectSettings);
	UClass* Z_Construct_UClass_UMVVMDeveloperProjectSettings_NoRegister()
	{
		return UMVVMDeveloperProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldSelectorPermissions_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldSelectorPermissions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldSelectorPermissions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FieldSelectorPermissions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelBlueprint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the MVVM Editor\n */" },
		{ "IncludePath", "MVVMDeveloperProjectSettings.h" },
		{ "ModuleRelativePath", "Public/MVVMDeveloperProjectSettings.h" },
		{ "ToolTip", "Implements the settings for the MVVM Editor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_FieldSelectorPermissions_ValueProp = { "FieldSelectorPermissions", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings, METADATA_PARAMS(nullptr, 0) }; // 359441873
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_FieldSelectorPermissions_Key_KeyProp = { "FieldSelectorPermissions_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_FieldSelectorPermissions_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** Permission list for filtering which properties are visible in UI. */" },
		{ "ModuleRelativePath", "Public/MVVMDeveloperProjectSettings.h" },
		{ "ToolTip", "Permission list for filtering which properties are visible in UI." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_FieldSelectorPermissions = { "FieldSelectorPermissions", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMVVMDeveloperProjectSettings, FieldSelectorPermissions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_FieldSelectorPermissions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_FieldSelectorPermissions_MetaData)) }; // 359441873
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_FieldSelectorPermissions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_FieldSelectorPermissions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_FieldSelectorPermissions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMDeveloperProjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::ClassParams = {
		&UMVVMDeveloperProjectSettings::StaticClass,
		"ModelViewViewModel",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMVVMDeveloperProjectSettings()
	{
		if (!Z_Registration_Info_UClass_UMVVMDeveloperProjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMDeveloperProjectSettings.OuterSingleton, Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMDeveloperProjectSettings.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODELBLUEPRINT_API UClass* StaticClass<UMVVMDeveloperProjectSettings>()
	{
		return UMVVMDeveloperProjectSettings::StaticClass();
	}
	UMVVMDeveloperProjectSettings::UMVVMDeveloperProjectSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMDeveloperProjectSettings);
	UMVVMDeveloperProjectSettings::~UMVVMDeveloperProjectSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_Statics::ScriptStructInfo[] = {
		{ FMVVMDeveloperProjectWidgetSettings::StaticStruct, Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewStructOps, TEXT("MVVMDeveloperProjectWidgetSettings"), &Z_Registration_Info_UScriptStruct_MVVMDeveloperProjectWidgetSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMDeveloperProjectWidgetSettings), 359441873U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMVVMDeveloperProjectSettings, UMVVMDeveloperProjectSettings::StaticClass, TEXT("UMVVMDeveloperProjectSettings"), &Z_Registration_Info_UClass_UMVVMDeveloperProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMDeveloperProjectSettings), 2718183877U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_1759177695(TEXT("/Script/ModelViewViewModelBlueprint"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
