// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Views/Widgets/ObjectMixerEditorUWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectMixerEditorUWidget() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	OBJECTMIXEREDITOR_API UClass* Z_Construct_UClass_UObjectMixerEditorUWidget();
	OBJECTMIXEREDITOR_API UClass* Z_Construct_UClass_UObjectMixerEditorUWidget_NoRegister();
	OBJECTMIXEREDITOR_API UClass* Z_Construct_UClass_UObjectMixerObjectFilter_NoRegister();
	OBJECTMIXEREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FObjectMixerWidgetUserConfig();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_ObjectMixerEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectMixerWidgetUserConfig;
class UScriptStruct* FObjectMixerWidgetUserConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectMixerWidgetUserConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectMixerWidgetUserConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectMixerWidgetUserConfig, (UObject*)Z_Construct_UPackage__Script_ObjectMixerEditor(), TEXT("ObjectMixerWidgetUserConfig"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectMixerWidgetUserConfig.OuterSingleton;
}
template<> OBJECTMIXEREDITOR_API UScriptStruct* StaticStruct<FObjectMixerWidgetUserConfig>()
{
	return FObjectMixerWidgetUserConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FObjectMixerWidgetUserConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFilterClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultFilterClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectMixerWidgetUserConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// User Configurable Variables\n" },
		{ "ModuleRelativePath", "Public/Views/Widgets/ObjectMixerEditorUWidget.h" },
		{ "ToolTip", "User Configurable Variables" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectMixerWidgetUserConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectMixerWidgetUserConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectMixerWidgetUserConfig_Statics::NewProp_DefaultFilterClass_MetaData[] = {
		{ "Category", "Object Mixer" },
		{ "Comment", "/**\n\x09 * Sets the default filter class to determine what objects and properties to display in this Object Mixer instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Views/Widgets/ObjectMixerEditorUWidget.h" },
		{ "ToolTip", "Sets the default filter class to determine what objects and properties to display in this Object Mixer instance." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FObjectMixerWidgetUserConfig_Statics::NewProp_DefaultFilterClass = { "DefaultFilterClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FObjectMixerWidgetUserConfig, DefaultFilterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObjectMixerObjectFilter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectMixerWidgetUserConfig_Statics::NewProp_DefaultFilterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectMixerWidgetUserConfig_Statics::NewProp_DefaultFilterClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectMixerWidgetUserConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectMixerWidgetUserConfig_Statics::NewProp_DefaultFilterClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectMixerWidgetUserConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectMixerEditor,
		nullptr,
		&NewStructOps,
		"ObjectMixerWidgetUserConfig",
		sizeof(FObjectMixerWidgetUserConfig),
		alignof(FObjectMixerWidgetUserConfig),
		Z_Construct_UScriptStruct_FObjectMixerWidgetUserConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectMixerWidgetUserConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectMixerWidgetUserConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectMixerWidgetUserConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObjectMixerWidgetUserConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_ObjectMixerWidgetUserConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectMixerWidgetUserConfig.InnerSingleton, Z_Construct_UScriptStruct_FObjectMixerWidgetUserConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ObjectMixerWidgetUserConfig.InnerSingleton;
	}
	void UObjectMixerEditorUWidget::StaticRegisterNativesUObjectMixerEditorUWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectMixerEditorUWidget);
	UClass* Z_Construct_UClass_UObjectMixerEditorUWidget_NoRegister()
	{
		return UObjectMixerEditorUWidget::StaticClass();
	}
	struct Z_Construct_UClass_UObjectMixerEditorUWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectMixerWidgetUserConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectMixerWidgetUserConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectMixerEditorUWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectMixerEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectMixerEditorUWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A UMG widget wrapper for the Object Mixer widget. Uses the same data as the Generic Object Mixer Instance.\n * Only useful in the editor. It is not compatible at runtime.\n */" },
		{ "DisplayName", "Object Mixer (Generic)" },
		{ "IncludePath", "Views/Widgets/ObjectMixerEditorUWidget.h" },
		{ "ModuleRelativePath", "Public/Views/Widgets/ObjectMixerEditorUWidget.h" },
		{ "ToolTip", "A UMG widget wrapper for the Object Mixer widget. Uses the same data as the Generic Object Mixer Instance.\nOnly useful in the editor. It is not compatible at runtime." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectMixerEditorUWidget_Statics::NewProp_ObjectMixerWidgetUserConfig_MetaData[] = {
		{ "Category", "Object Mixer" },
		{ "Comment", "// End of UWidget\n" },
		{ "ModuleRelativePath", "Public/Views/Widgets/ObjectMixerEditorUWidget.h" },
		{ "ToolTip", "End of UWidget" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UObjectMixerEditorUWidget_Statics::NewProp_ObjectMixerWidgetUserConfig = { "ObjectMixerWidgetUserConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UObjectMixerEditorUWidget, ObjectMixerWidgetUserConfig), Z_Construct_UScriptStruct_FObjectMixerWidgetUserConfig, METADATA_PARAMS(Z_Construct_UClass_UObjectMixerEditorUWidget_Statics::NewProp_ObjectMixerWidgetUserConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectMixerEditorUWidget_Statics::NewProp_ObjectMixerWidgetUserConfig_MetaData)) }; // 2585690460
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectMixerEditorUWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectMixerEditorUWidget_Statics::NewProp_ObjectMixerWidgetUserConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectMixerEditorUWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectMixerEditorUWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectMixerEditorUWidget_Statics::ClassParams = {
		&UObjectMixerEditorUWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UObjectMixerEditorUWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UObjectMixerEditorUWidget_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectMixerEditorUWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectMixerEditorUWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectMixerEditorUWidget()
	{
		if (!Z_Registration_Info_UClass_UObjectMixerEditorUWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectMixerEditorUWidget.OuterSingleton, Z_Construct_UClass_UObjectMixerEditorUWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjectMixerEditorUWidget.OuterSingleton;
	}
	template<> OBJECTMIXEREDITOR_API UClass* StaticClass<UObjectMixerEditorUWidget>()
	{
		return UObjectMixerEditorUWidget::StaticClass();
	}
	UObjectMixerEditorUWidget::UObjectMixerEditorUWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectMixerEditorUWidget);
	UObjectMixerEditorUWidget::~UObjectMixerEditorUWidget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_Views_Widgets_ObjectMixerEditorUWidget_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_Views_Widgets_ObjectMixerEditorUWidget_h_Statics::ScriptStructInfo[] = {
		{ FObjectMixerWidgetUserConfig::StaticStruct, Z_Construct_UScriptStruct_FObjectMixerWidgetUserConfig_Statics::NewStructOps, TEXT("ObjectMixerWidgetUserConfig"), &Z_Registration_Info_UScriptStruct_ObjectMixerWidgetUserConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectMixerWidgetUserConfig), 2585690460U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_Views_Widgets_ObjectMixerEditorUWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UObjectMixerEditorUWidget, UObjectMixerEditorUWidget::StaticClass, TEXT("UObjectMixerEditorUWidget"), &Z_Registration_Info_UClass_UObjectMixerEditorUWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectMixerEditorUWidget), 113951665U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_Views_Widgets_ObjectMixerEditorUWidget_h_1627339190(TEXT("/Script/ObjectMixerEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_Views_Widgets_ObjectMixerEditorUWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_Views_Widgets_ObjectMixerEditorUWidget_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_Views_Widgets_ObjectMixerEditorUWidget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_Views_Widgets_ObjectMixerEditorUWidget_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
