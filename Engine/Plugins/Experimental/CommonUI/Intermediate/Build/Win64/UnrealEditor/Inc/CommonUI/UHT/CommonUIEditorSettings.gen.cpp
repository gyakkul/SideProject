// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUIEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonUIEditorSettings() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonBorderStyle_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonStyle_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextStyle_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUIEditorSettings();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUIEditorSettings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	void UCommonUIEditorSettings::StaticRegisterNativesUCommonUIEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonUIEditorSettings);
	UClass* Z_Construct_UClass_UCommonUIEditorSettings_NoRegister()
	{
		return UCommonUIEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCommonUIEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_TemplateTextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_TemplateButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateBorderStyle_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_TemplateBorderStyle;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateTextStyleClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TemplateTextStyleClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateButtonStyleClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TemplateButtonStyleClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateBorderStyleClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TemplateBorderStyleClass;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonUIEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUIEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CommonUIEditorSettings.h" },
		{ "ModuleRelativePath", "Public/CommonUIEditorSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateTextStyle_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Newly created CommonText Widgets will use this style. */" },
		{ "ModuleRelativePath", "Public/CommonUIEditorSettings.h" },
		{ "ToolTip", "Newly created CommonText Widgets will use this style." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateTextStyle = { "TemplateTextStyle", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonUIEditorSettings, TemplateTextStyle), Z_Construct_UClass_UCommonTextStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateTextStyle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateButtonStyle_MetaData[] = {
		{ "Category", "Buttons" },
		{ "Comment", "/** Newly created CommonButton Widgets will use this style. */" },
		{ "ModuleRelativePath", "Public/CommonUIEditorSettings.h" },
		{ "ToolTip", "Newly created CommonButton Widgets will use this style." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateButtonStyle = { "TemplateButtonStyle", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonUIEditorSettings, TemplateButtonStyle), Z_Construct_UClass_UCommonButtonStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateButtonStyle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateBorderStyle_MetaData[] = {
		{ "Category", "Border" },
		{ "Comment", "/** Newly created CommonBorder Widgets will use this style. */" },
		{ "ModuleRelativePath", "Public/CommonUIEditorSettings.h" },
		{ "ToolTip", "Newly created CommonBorder Widgets will use this style." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateBorderStyle = { "TemplateBorderStyle", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonUIEditorSettings, TemplateBorderStyle), Z_Construct_UClass_UCommonBorderStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateBorderStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateBorderStyle_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateTextStyleClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonUIEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateTextStyleClass = { "TemplateTextStyleClass", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonUIEditorSettings, TemplateTextStyleClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonTextStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateTextStyleClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateTextStyleClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateButtonStyleClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonUIEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateButtonStyleClass = { "TemplateButtonStyleClass", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonUIEditorSettings, TemplateButtonStyleClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonButtonStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateButtonStyleClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateButtonStyleClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateBorderStyleClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonUIEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateBorderStyleClass = { "TemplateBorderStyleClass", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonUIEditorSettings, TemplateBorderStyleClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonBorderStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateBorderStyleClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateBorderStyleClass_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonUIEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateTextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateBorderStyle,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateTextStyleClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateButtonStyleClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUIEditorSettings_Statics::NewProp_TemplateBorderStyleClass,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonUIEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonUIEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonUIEditorSettings_Statics::ClassParams = {
		&UCommonUIEditorSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonUIEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUIEditorSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonUIEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUIEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonUIEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UCommonUIEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonUIEditorSettings.OuterSingleton, Z_Construct_UClass_UCommonUIEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonUIEditorSettings.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonUIEditorSettings>()
	{
		return UCommonUIEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonUIEditorSettings);
	UCommonUIEditorSettings::~UCommonUIEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonUIEditorSettings, UCommonUIEditorSettings::StaticClass, TEXT("UCommonUIEditorSettings"), &Z_Registration_Info_UClass_UCommonUIEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonUIEditorSettings), 749498405U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIEditorSettings_h_3751839053(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
